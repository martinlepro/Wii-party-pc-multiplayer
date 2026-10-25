#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mr011_bases[17];
void f_800043c4(wp::Cpu& c);
void f_80004714(wp::Cpu& c);
void f_80013de0(wp::Cpu& c);
void f_80013e00(wp::Cpu& c);
void f_80013e10(wp::Cpu& c);
void f_80018e30(wp::Cpu& c);
void f_80018f60(wp::Cpu& c);
void f_80019090(wp::Cpu& c);
void f_800192f0(wp::Cpu& c);
void f_800195d0(wp::Cpu& c);
void f_80019a90(wp::Cpu& c);
void f_8001a070(wp::Cpu& c);
void f_8001a0f0(wp::Cpu& c);
void f_8001a360(wp::Cpu& c);
void f_8001a430(wp::Cpu& c);
void f_8001a480(wp::Cpu& c);
void f_8001b020(wp::Cpu& c);
void f_8001b280(wp::Cpu& c);
void f_8002e090(wp::Cpu& c);
void f_8002e580(wp::Cpu& c);
void f_8002e6a0(wp::Cpu& c);
void f_8002e9f0(wp::Cpu& c);
void f_8002ed90(wp::Cpu& c);
void f_8002f100(wp::Cpu& c);
void f_8002f570(wp::Cpu& c);
void f_8002f580(wp::Cpu& c);
void f_8002f590(wp::Cpu& c);
void f_8002f5b0(wp::Cpu& c);
void f_8002f630(wp::Cpu& c);
void f_80035c50(wp::Cpu& c);
void f_80035ef0(wp::Cpu& c);
void f_800370a0(wp::Cpu& c);
void f_80043250(wp::Cpu& c);
void f_80048e10(wp::Cpu& c);
void f_80049120(wp::Cpu& c);
void f_80050490(wp::Cpu& c);
void f_800508f0(wp::Cpu& c);
void f_800511f0(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_800521a0(wp::Cpu& c);
void f_80052250(wp::Cpu& c);
void f_80052260(wp::Cpu& c);
void f_80053060(wp::Cpu& c);
void f_80053580(wp::Cpu& c);
void f_80053620(wp::Cpu& c);
void f_80053d20(wp::Cpu& c);
void f_80053df0(wp::Cpu& c);
void f_80053e20(wp::Cpu& c);
void f_80053e40(wp::Cpu& c);
void f_80053e50(wp::Cpu& c);
void f_80053e60(wp::Cpu& c);
void f_80053e80(wp::Cpu& c);
void f_80053eb0(wp::Cpu& c);
void f_80053ed0(wp::Cpu& c);
void f_80053ef0(wp::Cpu& c);
void f_80053f80(wp::Cpu& c);
void f_800545f0(wp::Cpu& c);
void f_80054e60(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055ba0(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d70(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80055d90(wp::Cpu& c);
void f_80055e60(wp::Cpu& c);
void f_80055f10(wp::Cpu& c);
void f_80055f40(wp::Cpu& c);
void f_80056110(wp::Cpu& c);
void f_800562b0(wp::Cpu& c);
void f_80058490(wp::Cpu& c);
void f_80059b50(wp::Cpu& c);
void f_8005a6f0(wp::Cpu& c);
void f_8005a730(wp::Cpu& c);
void f_8006f140(wp::Cpu& c);
void f_80071fe0(wp::Cpu& c);
void f_800cb060(wp::Cpu& c);
void f_800cc1f0(wp::Cpu& c);
void f_800cc260(wp::Cpu& c);
void f_800ccc10(wp::Cpu& c);
void f_800ccc30(wp::Cpu& c);
void f_800ccc80(wp::Cpu& c);
void f_800ccd20(wp::Cpu& c);
void f_800ccd80(wp::Cpu& c);
void f_800ccde0(wp::Cpu& c);
void f_800cd2d0(wp::Cpu& c);
void f_800cd370(wp::Cpu& c);
void f_800cd3d0(wp::Cpu& c);
void f_800cd430(wp::Cpu& c);
void f_800cd4d0(wp::Cpu& c);
void f_800cde00(wp::Cpu& c);
void f_800cde20(wp::Cpu& c);
void f_800cde80(wp::Cpu& c);
void f_800cdec0(wp::Cpu& c);
void f_800cdf00(wp::Cpu& c);
void f_800cdf40(wp::Cpu& c);
void f_800cf240(wp::Cpu& c);
void f_800d04c0(wp::Cpu& c);
void f_800d0da0(wp::Cpu& c);
void f_800d14d0(wp::Cpu& c);
void f_800d14f0(wp::Cpu& c);
void f_800d1510(wp::Cpu& c);
void f_800d15d0(wp::Cpu& c);
void f_800d16a0(wp::Cpu& c);
void f_800d19d0(wp::Cpu& c);
void f_800d1a80(wp::Cpu& c);
void f_800d1b10(wp::Cpu& c);
void f_800d1f30(wp::Cpu& c);
void f_800d24e0(wp::Cpu& c);
void f_800d61a0(wp::Cpu& c);
void f_800d6310(wp::Cpu& c);
void f_800f1c30(wp::Cpu& c);
void f_800f1cd0(wp::Cpu& c);
void f_800f2190(wp::Cpu& c);
void f_80126a90(wp::Cpu& c);
void f_80138430(wp::Cpu& c);
void f_80140b60(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_8014b100(wp::Cpu& c);
void f_8014b7e0(wp::Cpu& c);
void f_8014b820(wp::Cpu& c);
void f_8014b870(wp::Cpu& c);
void f_8014b8a0(wp::Cpu& c);
void f_8014bd70(wp::Cpu& c);
void f_8014c170(wp::Cpu& c);
void f_8014c1e0(wp::Cpu& c);
void f_8014c230(wp::Cpu& c);
void f_8014c250(wp::Cpu& c);
void f_80151d00(wp::Cpu& c);
void f_80151f60(wp::Cpu& c);
void f_801521b0(wp::Cpu& c);
void f_801521c0(wp::Cpu& c);
void f_801522c0(wp::Cpu& c);
void f_801522e0(wp::Cpu& c);
void f_801522f0(wp::Cpu& c);
void f_80152330(wp::Cpu& c);
void f_80152340(wp::Cpu& c);
void f_80152360(wp::Cpu& c);
void f_80169010(wp::Cpu& c);
void f_801690c0(wp::Cpu& c);
void f_80169d90(wp::Cpu& c);
void f_801c7860(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c7a9c(wp::Cpu& c);
void f_801c7c38(wp::Cpu& c);
void f_801c8398(wp::Cpu& c);
void f_801c83b0(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c83e4(wp::Cpu& c);
void f_801c83fc(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_801cee24(wp::Cpu& c);
void f_801ceeec(wp::Cpu& c);
void f_801cf168(wp::Cpu& c);
void f_801cf23c(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_mr011_01000000(wp::Cpu& c);
void f_mr011_010043a0(wp::Cpu& c);
void f_mr011_01004560(wp::Cpu& c);
void f_mr011_0101ae00(wp::Cpu& c);
void f_mr011_0101af50(wp::Cpu& c);
void f_mr011_0101af70(wp::Cpu& c);
void f_mr011_0101af80(wp::Cpu& c);
void f_mr011_0101afa0(wp::Cpu& c);
void f_mr011_01023750(wp::Cpu& c);
void f_mr011_01023f60(wp::Cpu& c);
void f_mr011_010240e0(wp::Cpu& c);
void f_mr011_010240f0(wp::Cpu& c);
void f_mr011_01024100(wp::Cpu& c);
void f_mr011_01024110(wp::Cpu& c);
void f_mr011_0102f2c0(wp::Cpu& c);
void f_mr011_0102f5c0(wp::Cpu& c);
void f_mr011_0102f790(wp::Cpu& c);
void f_mr011_0102f7a0(wp::Cpu& c);
void f_mr011_0102f7b0(wp::Cpu& c);
void f_mr011_0102f810(wp::Cpu& c);
void f_mr011_0102f870(wp::Cpu& c);
void f_mr011_0102f8c0(wp::Cpu& c);
void f_mr011_0102f900(wp::Cpu& c);
void f_mr011_0102fcd0(wp::Cpu& c);
void f_mr011_0102ff50(wp::Cpu& c);
void f_mr011_01030160(wp::Cpu& c);
void f_mr011_01030480(wp::Cpu& c);
void f_mr011_01030a90(wp::Cpu& c);
void f_mr011_01030ac0(wp::Cpu& c);
void f_mr011_01030b10(wp::Cpu& c);
void f_mr011_01030b60(wp::Cpu& c);
void f_mr011_0107b830(wp::Cpu& c);
void f_mr011_01087c00(wp::Cpu& c);
void f_mr011_01087d50(wp::Cpu& c);
void f_mr011_01087d60(wp::Cpu& c);
void f_mr011_01087d70(wp::Cpu& c);
void f_mr011_01087d90(wp::Cpu& c);
void f_mr011_01087da0(wp::Cpu& c);
void f_mr011_010898d0(wp::Cpu& c);
void f_mr011_01089cf0(wp::Cpu& c);
void f_mr011_01089e60(wp::Cpu& c);
void f_mr011_01089f70(wp::Cpu& c);
void f_mr011_0108a120(wp::Cpu& c);
void f_mr011_0108a180(wp::Cpu& c);
void f_mr011_0108a470(wp::Cpu& c);
void f_mr011_0108a490(wp::Cpu& c);
void f_mr011_0108a4b0(wp::Cpu& c);
void f_mr011_0108a4d0(wp::Cpu& c);
void f_mr011_0108a4e0(wp::Cpu& c);
void f_mr011_0108a590(wp::Cpu& c);
void f_mr011_0108a600(wp::Cpu& c);
void f_mr011_0108a680(wp::Cpu& c);
void f_mr011_0108a6f0(wp::Cpu& c);
void f_mr011_0108a7c0(wp::Cpu& c);
void f_mr011_0108a890(wp::Cpu& c);
void f_mr011_0108aac0(wp::Cpu& c);
void f_mr011_0108ac90(wp::Cpu& c);
void f_mr011_0108bb80(wp::Cpu& c);
void f_mr011_0108c910(wp::Cpu& c);
void f_mr011_0108cb00(wp::Cpu& c);
void f_mr011_0108cb10(wp::Cpu& c);
void f_mr011_0108ce10(wp::Cpu& c);
void f_mr011_0108ce20(wp::Cpu& c);
void f_mr011_0108ce30(wp::Cpu& c);
void f_mr011_0108ce90(wp::Cpu& c);
void f_mr011_0108cf80(wp::Cpu& c);
void f_mr011_0108d010(wp::Cpu& c);
void f_mr011_0108d0b0(wp::Cpu& c);
void f_mr011_0108d120(wp::Cpu& c);
void f_mr011_0108d380(wp::Cpu& c);
void f_mr011_0108d510(wp::Cpu& c);
void f_mr011_0108d6c0(wp::Cpu& c);
void f_mr011_0108d820(wp::Cpu& c);
void f_mr011_0108d9b0(wp::Cpu& c);
void f_mr011_0108dad0(wp::Cpu& c);
void f_mr011_0108dc10(wp::Cpu& c);
void f_mr011_0108de20(wp::Cpu& c);
void f_mr011_0108e060(wp::Cpu& c);
void f_mr011_0108e100(wp::Cpu& c);
void f_mr011_0108e110(wp::Cpu& c);
void f_mr011_0108e120(wp::Cpu& c);
void f_mr011_0108e130(wp::Cpu& c);
void f_mr011_0108e190(wp::Cpu& c);
void f_mr011_0108e360(wp::Cpu& c);
void f_mr011_0108e430(wp::Cpu& c);
void f_mr011_0108eb00(wp::Cpu& c);
void f_mr011_0108f1d0(wp::Cpu& c);
void f_mr011_0108f450(wp::Cpu& c);
void f_mr011_0108f4d0(wp::Cpu& c);
void f_mr011_0108f4f0(wp::Cpu& c);
void f_mr011_0108f5d0(wp::Cpu& c);
void f_mr011_0108f770(wp::Cpu& c);
void f_mr011_0108fb40(wp::Cpu& c);
void f_mr011_0108fbf0(wp::Cpu& c);
void f_mr011_0108ff00(wp::Cpu& c);
void f_mr011_01090650(wp::Cpu& c);
void f_mr011_010907d0(wp::Cpu& c);
void f_mr011_01090950(wp::Cpu& c);
void f_mr011_01090a80(wp::Cpu& c);
void f_mr011_01090c10(wp::Cpu& c);
void f_mr011_01090e60(wp::Cpu& c);
void f_mr011_010912d0(wp::Cpu& c);
void f_mr011_010915b0(wp::Cpu& c);
void f_mr011_010915c0(wp::Cpu& c);
void f_mr011_010bdfb0(wp::Cpu& c);
void f_mr011_010ce250(wp::Cpu& c);
void f_mr011_010cf520(wp::Cpu& c);
void f_mr011_010d19e0(wp::Cpu& c);
void f_mr011_010d21d0(wp::Cpu& c);
void f_mr011_010d2200(wp::Cpu& c);
void f_mr011_010d2230(wp::Cpu& c);
void f_mr011_010d2270(wp::Cpu& c);
void f_mr011_010d2340(wp::Cpu& c);
void f_mr011_010d2500(wp::Cpu& c);
void f_mr011_010d2bd0(wp::Cpu& c);
void f_mr011_010d2c70(wp::Cpu& c);
void f_mr011_010d2cc0(wp::Cpu& c);
void f_mr011_010d2e70(wp::Cpu& c);
void f_mr011_010d3ab0(wp::Cpu& c);
void f_mr011_010d3ac0(wp::Cpu& c);
void f_mr011_010d3ae0(wp::Cpu& c);
void f_mr011_010d3b00(wp::Cpu& c);
void f_mr011_010d3bd0(wp::Cpu& c);
void f_mr011_010d3c20(wp::Cpu& c);
void f_mr011_010d3c60(wp::Cpu& c);
void f_mr011_010d3c80(wp::Cpu& c);
void f_mr011_010d3c90(wp::Cpu& c);
void f_mr011_010d3ce0(wp::Cpu& c);
void f_mr011_010d3d10(wp::Cpu& c);
void f_mr011_010d3d20(wp::Cpu& c);
void f_mr011_010d3df0(wp::Cpu& c);
void f_mr011_010d3e00(wp::Cpu& c);
void f_mr011_010d3e90(wp::Cpu& c);
void f_mr011_010d3eb0(wp::Cpu& c);
void f_mr011_010d3ec0(wp::Cpu& c);
void f_mr011_010d3ee0(wp::Cpu& c);
void f_mr011_010d3f10(wp::Cpu& c);
void f_mr011_010d3f20(wp::Cpu& c);
void f_mr011_010d3f70(wp::Cpu& c);
void f_mr011_010d4030(wp::Cpu& c);
void f_mr011_010d4100(wp::Cpu& c);
void f_mr011_010d4110(wp::Cpu& c);
void f_mr011_010d41a0(wp::Cpu& c);
void f_mr011_010d41b0(wp::Cpu& c);
void f_mr011_010d41d0(wp::Cpu& c);
void f_mr011_010d41f0(wp::Cpu& c);
void f_mr011_010d42b0(wp::Cpu& c);
void f_mr011_010d42f0(wp::Cpu& c);
void f_mr011_010d4310(wp::Cpu& c);
void f_mr011_010d4320(wp::Cpu& c);
void f_mr011_010d4370(wp::Cpu& c);
void f_mr011_010d4380(wp::Cpu& c);
void f_mr011_010d4410(wp::Cpu& c);
void f_mr011_010d4420(wp::Cpu& c);
void f_mr011_010d4440(wp::Cpu& c);
void f_mr011_010d4460(wp::Cpu& c);
void f_mr011_010d45f0(wp::Cpu& c);
void f_mr011_010d4660(wp::Cpu& c);
void f_mr011_010d4670(wp::Cpu& c);
void f_mr011_010d4680(wp::Cpu& c);
void f_mr011_010d4710(wp::Cpu& c);
void f_mr011_010d4720(wp::Cpu& c);
void f_mr011_010d4740(wp::Cpu& c);
void f_mr011_010d4760(wp::Cpu& c);
void f_mr011_010d47b0(wp::Cpu& c);
void f_mr011_010d47f0(wp::Cpu& c);
void f_mr011_010d4810(wp::Cpu& c);
void f_mr011_010d4820(wp::Cpu& c);
void f_mr011_010d4870(wp::Cpu& c);
void f_mr011_010d48a0(wp::Cpu& c);
void f_mr011_010d48b0(wp::Cpu& c);
void f_mr011_010d4900(wp::Cpu& c);
void f_mr011_010d4950(wp::Cpu& c);
void f_mr011_010d49a0(wp::Cpu& c);
void f_mr011_010d49f0(wp::Cpu& c);
void f_mr011_010d4a30(wp::Cpu& c);
void f_mr011_010d4a80(wp::Cpu& c);
void f_mr011_010d4a90(wp::Cpu& c);
void f_mr011_010d4aa0(wp::Cpu& c);
void f_mr011_010d4af0(wp::Cpu& c);
void f_mr011_010d4b30(wp::Cpu& c);
void f_mr011_010d4b80(wp::Cpu& c);
void f_mr011_010d4bc0(wp::Cpu& c);
void f_mr011_010d4c10(wp::Cpu& c);
void f_mr011_010d4c50(wp::Cpu& c);
void f_mr011_010d4ca0(wp::Cpu& c);
void f_mr011_010d4cf0(wp::Cpu& c);
void f_mr011_010d4d40(wp::Cpu& c);
void f_mr011_010d4d90(wp::Cpu& c);
void f_mr011_010d4de0(wp::Cpu& c);
void f_mr011_010d4e30(wp::Cpu& c);
void f_mr011_010d4e40(wp::Cpu& c);
void f_mr011_010d4ea0(wp::Cpu& c);
void f_mr011_010d4ed0(wp::Cpu& c);
void f_mr011_010d4f20(wp::Cpu& c);
void f_mr011_010d4f30(wp::Cpu& c);
void f_mr011_010d4f90(wp::Cpu& c);
void f_mr011_010d4fc0(wp::Cpu& c);
void f_mr011_010d5010(wp::Cpu& c);
void f_mr011_010d5020(wp::Cpu& c);
void f_mr011_010d50a0(wp::Cpu& c);
void f_mr011_010d50d0(wp::Cpu& c);
void f_mr011_010d5100(wp::Cpu& c);
void f_mr011_010d5110(wp::Cpu& c);
void f_mr011_010d5160(wp::Cpu& c);
void f_mr011_010d51e0(wp::Cpu& c);
void f_mr011_010d5230(wp::Cpu& c);
void f_mr011_010d5280(wp::Cpu& c);
void f_mr011_010d52d0(wp::Cpu& c);
void f_mr011_010d52e0(wp::Cpu& c);
void f_mr011_010d5370(wp::Cpu& c);
void f_mr011_010d5380(wp::Cpu& c);
void f_mr011_010d53a0(wp::Cpu& c);
void f_mr011_010d53c0(wp::Cpu& c);
void f_mr011_010d5490(wp::Cpu& c);
void f_mr011_010d54f0(wp::Cpu& c);
void f_mr011_010d5520(wp::Cpu& c);
void f_mr011_010d5530(wp::Cpu& c);
void f_mr011_010d5540(wp::Cpu& c);
void f_mr011_010d55b0(wp::Cpu& c);
void f_mr011_010d55d0(wp::Cpu& c);
void f_mr011_010d55f0(wp::Cpu& c);
void f_mr011_010d5600(wp::Cpu& c);
void f_mr011_010d5610(wp::Cpu& c);
void f_mr011_010d5640(wp::Cpu& c);
void f_mr011_010d5650(wp::Cpu& c);
void f_mr011_010d5660(wp::Cpu& c);
void f_mr011_010d56c0(wp::Cpu& c);
void f_mr011_010d56d0(wp::Cpu& c);
void f_mr011_010d5760(wp::Cpu& c);
void f_mr011_010d5770(wp::Cpu& c);
void f_mr011_010d5790(wp::Cpu& c);
void f_mr011_010d57b0(wp::Cpu& c);
void f_mr011_010d5800(wp::Cpu& c);
void f_mr011_010d5830(wp::Cpu& c);
void f_mr011_010d5840(wp::Cpu& c);
void f_mr011_010d5870(wp::Cpu& c);
void f_mr011_010d5880(wp::Cpu& c);
void f_mr011_010d58d0(wp::Cpu& c);
void f_mr011_010d5910(wp::Cpu& c);
void f_mr011_010d5960(wp::Cpu& c);
void f_mr011_010d59b0(wp::Cpu& c);
void f_mr011_010d59f0(wp::Cpu& c);
void f_mr011_010d5a10(wp::Cpu& c);
void f_mr011_010d5a20(wp::Cpu& c);
void f_mr011_010d5a70(wp::Cpu& c);
void f_mr011_010d5ac0(wp::Cpu& c);
void f_mr011_010d5af0(wp::Cpu& c);
void f_mr011_010d5ba0(wp::Cpu& c);
void f_mr011_010d5bd0(wp::Cpu& c);
void f_mr011_010d5c20(wp::Cpu& c);
void f_mr011_010d5c50(wp::Cpu& c);
void f_mr011_010d5d10(wp::Cpu& c);
void f_mr011_010d5d50(wp::Cpu& c);
void f_mr011_010d5d70(wp::Cpu& c);
void f_mr011_010d5d90(wp::Cpu& c);
void f_mr011_010d5dc0(wp::Cpu& c);
void f_mr011_010d5dd0(wp::Cpu& c);
void f_mr011_010d5e90(wp::Cpu& c);
void f_mr011_010d5ed0(wp::Cpu& c);
void f_mr011_010d5ef0(wp::Cpu& c);
void f_mr011_010d5f40(wp::Cpu& c);
void f_mr011_010d5f80(wp::Cpu& c);
void f_mr011_010d5fd0(wp::Cpu& c);
void f_mr011_010d5fe0(wp::Cpu& c);
void f_mr011_010d6030(wp::Cpu& c);
void f_mr011_010d6060(wp::Cpu& c);
void f_mr011_010d6070(wp::Cpu& c);
void f_mr011_010d60c0(wp::Cpu& c);
void f_mr011_010d60f0(wp::Cpu& c);
void f_mr011_010d6130(wp::Cpu& c);
void f_mr011_010d6180(wp::Cpu& c);
void f_mr011_010d61b0(wp::Cpu& c);
void f_mr011_010d61c0(wp::Cpu& c);
void f_mr011_010d6210(wp::Cpu& c);
void f_mr011_010d6220(wp::Cpu& c);
void f_mr011_010d6270(wp::Cpu& c);
void f_mr011_010d62a0(wp::Cpu& c);
void f_mr011_010d62b0(wp::Cpu& c);
void f_mr011_010d6300(wp::Cpu& c);
void f_mr011_010d6330(wp::Cpu& c);
void f_mr011_010d6340(wp::Cpu& c);
void f_mr011_010d6390(wp::Cpu& c);
void f_mr011_010d63c0(wp::Cpu& c);
void f_mr011_010d6410(wp::Cpu& c);
void f_mr011_010d6450(wp::Cpu& c);
void f_mr011_010d6470(wp::Cpu& c);
void f_mr011_010d64c0(wp::Cpu& c);
void f_mr011_010d6510(wp::Cpu& c);
void f_mr011_010d6550(wp::Cpu& c);
void f_mr011_010d65a0(wp::Cpu& c);
void f_mr011_010d65d0(wp::Cpu& c);
void f_mr011_010d671c(wp::Cpu& c);
void f_mr011_010d6730(wp::Cpu& c);
void f_mr011_010d6744(wp::Cpu& c);
void f_mr011_010d6758(wp::Cpu& c);
void f_mr011_010d676c(wp::Cpu& c);
void f_mr011_010d6780(wp::Cpu& c);
void f_mr011_010d6794(wp::Cpu& c);
void f_mr011_010d67a8(wp::Cpu& c);
void f_mr011_010d67bc(wp::Cpu& c);
void f_mr011_010d67cc(wp::Cpu& c);
void f_mr011_010d67dc(wp::Cpu& c);
void f_mr011_010d6900(wp::Cpu& c);
void f_mr011_010d6930(wp::Cpu& c);
void f_mr011_010d6940(wp::Cpu& c);
void f_mr011_010d6990(wp::Cpu& c);
void f_mr011_010d69e0(wp::Cpu& c);
void f_mr011_010d69f0(wp::Cpu& c);
void f_mr011_010d6a40(wp::Cpu& c);
void f_mr011_010d6a70(wp::Cpu& c);
void f_mr011_010d6a80(wp::Cpu& c);
void f_mr011_010d6ad0(wp::Cpu& c);
void f_mr011_010d6b20(wp::Cpu& c);
void f_mr011_010d6b70(wp::Cpu& c);
void f_mr011_010d6ba0(wp::Cpu& c);
void f_mr011_010d6dd0(wp::Cpu& c);
void f_mr011_010d6e10(wp::Cpu& c);
void f_mr011_010d6e40(wp::Cpu& c);
void f_mr011_010d6e50(wp::Cpu& c);
void f_mr011_010d6e60(wp::Cpu& c);
void f_mr011_010d6e70(wp::Cpu& c);
void f_mr011_010d6e80(wp::Cpu& c);
void f_mr011_010d6eb0(wp::Cpu& c);
void f_mr011_010d6ec0(wp::Cpu& c);
void f_mr011_010d6ef0(wp::Cpu& c);
void f_mr011_010d6f00(wp::Cpu& c);
void f_mr011_010d6f20(wp::Cpu& c);
void f_mr011_010d6f70(wp::Cpu& c);
void f_mr011_010d6f80(wp::Cpu& c);
void f_mr011_010d6fd0(wp::Cpu& c);
void f_mr011_010d7000(wp::Cpu& c);
void f_mr011_010d7010(wp::Cpu& c);
void f_mr011_010d7060(wp::Cpu& c);
void f_mr011_010d70a0(wp::Cpu& c);
void f_mr011_010d70c0(wp::Cpu& c);
void f_mr011_010d70d0(wp::Cpu& c);
void f_mr011_010d7120(wp::Cpu& c);
void f_mr011_010d7150(wp::Cpu& c);
void f_mr011_010d7180(wp::Cpu& c);
void f_mr011_010d71d0(wp::Cpu& c);
void f_mr011_010d71e0(wp::Cpu& c);
void f_mr011_010d71f0(wp::Cpu& c);
void f_mr011_010d7270(wp::Cpu& c);
void f_mr011_010d72f0(wp::Cpu& c);
void f_mr011_010d7370(wp::Cpu& c);
void f_mr011_010d73f0(wp::Cpu& c);
void f_mr011_010d7470(wp::Cpu& c);
void f_mr011_010d74f0(wp::Cpu& c);
void f_mr011_010d7570(wp::Cpu& c);
void f_mr011_010d75f0(wp::Cpu& c);
void f_mr011_010d7670(wp::Cpu& c);
void f_mr011_010d76f0(wp::Cpu& c);
void f_mr011_010d7770(wp::Cpu& c);
void f_mr011_010d77f0(wp::Cpu& c);
void f_mr011_010d7870(wp::Cpu& c);
void f_mr011_010d78f0(wp::Cpu& c);
void f_mr011_010d7970(wp::Cpu& c);
void f_mr011_010d79f0(wp::Cpu& c);
void f_mr011_010d7b30(wp::Cpu& c);
void f_mr011_010d7be0(wp::Cpu& c);
void f_mr011_010d7c20(wp::Cpu& c);
void f_mr011_010d7d40(wp::Cpu& c);
void f_mr011_010d7de0(wp::Cpu& c);
void f_mr011_010d7e20(wp::Cpu& c);
void f_mr011_010d7eb0(wp::Cpu& c);
void f_mr011_010d7f10(wp::Cpu& c);
void f_mr011_010d7f80(wp::Cpu& c);
void f_mr011_010d8000(wp::Cpu& c);
void f_mr011_010d8040(wp::Cpu& c);
void f_mr011_010d8080(wp::Cpu& c);
void f_mr011_010d80e0(wp::Cpu& c);
void f_mr011_010d8140(wp::Cpu& c);
void f_mr011_010d81a0(wp::Cpu& c);
void f_mr011_010d8200(wp::Cpu& c);
void f_mr011_010d8290(wp::Cpu& c);
void f_mr011_010d8300(wp::Cpu& c);
void f_mr011_010d8390(wp::Cpu& c);
void f_mr011_010d8420(wp::Cpu& c);
void f_mr011_010d84f0(wp::Cpu& c);
void f_mr011_010d8520(wp::Cpu& c);
void f_mr011_010d85a0(wp::Cpu& c);
void f_mr011_010d86b0(wp::Cpu& c);
void f_mr011_010d86f0(wp::Cpu& c);
void f_mr011_010d8790(wp::Cpu& c);
void f_mr011_010d8e30(wp::Cpu& c);
void f_mr011_010d8ec0(wp::Cpu& c);
void f_mr011_010d9220(wp::Cpu& c);
void f_mr011_010d9260(wp::Cpu& c);
void f_mr011_010d92e0(wp::Cpu& c);
void f_mr011_010d9310(wp::Cpu& c);
void f_mr011_010d9390(wp::Cpu& c);
void f_mr011_010d94c0(wp::Cpu& c);
void f_mr011_010d95f0(wp::Cpu& c);
void f_mr011_010d96a0(wp::Cpu& c);
void f_mr011_010d97b0(wp::Cpu& c);
void f_mr011_010d98d0(wp::Cpu& c);
void f_mr011_010d9940(wp::Cpu& c);
void f_mr011_010d9c30(wp::Cpu& c);
void f_mr011_010d9ce0(wp::Cpu& c);
void f_mr011_010d9d30(wp::Cpu& c);
void f_mr011_010d9dd0(wp::Cpu& c);
void f_mr011_010d9f10(wp::Cpu& c);
void f_mr011_010d9f60(wp::Cpu& c);
void f_mr011_010da030(wp::Cpu& c);
void f_mr011_010da070(wp::Cpu& c);
void f_mr011_010da150(wp::Cpu& c);
void f_mr011_010da1d0(wp::Cpu& c);
void f_mr011_010da240(wp::Cpu& c);
void f_mr011_010da2b0(wp::Cpu& c);
void f_mr011_010da330(wp::Cpu& c);
void f_mr011_010da390(wp::Cpu& c);
void f_mr011_010da3e0(wp::Cpu& c);
void f_mr011_010da450(wp::Cpu& c);
void f_mr011_010da4a0(wp::Cpu& c);
void f_mr011_010da580(wp::Cpu& c);
void f_mr011_010da5d0(wp::Cpu& c);
void f_mr011_010da620(wp::Cpu& c);
void f_mr011_010da650(wp::Cpu& c);
void f_mr011_010da750(wp::Cpu& c);
void f_mr011_010da7d0(wp::Cpu& c);
void f_mr011_010da8a0(wp::Cpu& c);
void f_mr011_010da990(wp::Cpu& c);
void f_mr011_010da9d0(wp::Cpu& c);
void f_mr011_010daab0(wp::Cpu& c);
void f_mr011_010dab20(wp::Cpu& c);
void f_mr011_010dab70(wp::Cpu& c);
void f_mr011_010dabe0(wp::Cpu& c);
void f_mr011_010dac50(wp::Cpu& c);
void f_mr011_010dac80(wp::Cpu& c);
void f_mr011_010dad00(wp::Cpu& c);
void f_mr011_010db000(wp::Cpu& c);
void f_mr011_010db080(wp::Cpu& c);
void f_mr011_010db190(wp::Cpu& c);
void f_mr011_010db1f0(wp::Cpu& c);
void f_mr011_010db250(wp::Cpu& c);
void f_mr011_010db2b0(wp::Cpu& c);
void f_mr011_010db350(wp::Cpu& c);
void f_mr011_010db450(wp::Cpu& c);
void f_mr011_010db480(wp::Cpu& c);
void f_mr011_010db500(wp::Cpu& c);
void f_mr011_010db5f0(wp::Cpu& c);
void f_mr011_010db630(wp::Cpu& c);
void f_mr011_010db710(wp::Cpu& c);
void f_mr011_010db780(wp::Cpu& c);
void f_mr011_010db7f0(wp::Cpu& c);
void f_mr011_010db870(wp::Cpu& c);
void f_mr011_010db8e0(wp::Cpu& c);
void f_mr011_010dba30(wp::Cpu& c);
void f_mr011_010dba70(wp::Cpu& c);
void f_mr011_010dbb30(wp::Cpu& c);
void f_mr011_010dbe10(wp::Cpu& c);
void f_mr011_010dbf90(wp::Cpu& c);
void f_mr011_010dc0e0(wp::Cpu& c);
void f_mr011_010dc1a0(wp::Cpu& c);
void f_mr011_010dc2a0(wp::Cpu& c);
void f_mr011_010dc350(wp::Cpu& c);
void f_mr011_010dc430(wp::Cpu& c);
void f_mr011_010dc530(wp::Cpu& c);
void f_mr011_010dc600(wp::Cpu& c);
void f_mr011_010dc6d0(wp::Cpu& c);
void f_mr011_010dc7b0(wp::Cpu& c);
void f_mr011_010dc860(wp::Cpu& c);
void f_mr011_010dc910(wp::Cpu& c);
void f_mr011_010dc9d0(wp::Cpu& c);
void f_mr011_010dcaa0(wp::Cpu& c);
void f_mr011_010dcb90(wp::Cpu& c);
void f_mr011_010dcc80(wp::Cpu& c);
void f_mr011_010dcd50(wp::Cpu& c);
void f_mr011_010dce10(wp::Cpu& c);
void f_mr011_010dcee0(wp::Cpu& c);
void f_mr011_010dcfb0(wp::Cpu& c);
void f_mr011_010dd070(wp::Cpu& c);
void f_mr011_010dd140(wp::Cpu& c);
void f_mr011_010dd200(wp::Cpu& c);
void f_mr011_010dd2c0(wp::Cpu& c);
void f_mr011_010dd3a0(wp::Cpu& c);
void f_mr011_010dd470(wp::Cpu& c);
void f_mr011_010dd530(wp::Cpu& c);
void f_mr011_010dd5f0(wp::Cpu& c);
void f_mr011_010dd710(wp::Cpu& c);
void f_mr011_010dd7f0(wp::Cpu& c);
void f_mr011_010dd8d0(wp::Cpu& c);
void f_mr011_010dd9b0(wp::Cpu& c);
void f_mr011_010ddb10(wp::Cpu& c);
void f_mr011_010ddc60(wp::Cpu& c);
void f_mr011_010ddd10(wp::Cpu& c);
void f_mr011_010dde00(wp::Cpu& c);
void f_mr011_010ddf90(wp::Cpu& c);
void f_mr011_010de060(wp::Cpu& c);
void f_mr011_010de180(wp::Cpu& c);
void f_mr011_010de230(wp::Cpu& c);
void f_mr011_010de320(wp::Cpu& c);
void f_mr011_010de460(wp::Cpu& c);
void f_mr011_010de4f0(wp::Cpu& c);
void f_mr011_010de550(wp::Cpu& c);
void f_mr011_010de5b0(wp::Cpu& c);
void f_mr011_010de610(wp::Cpu& c);
void f_mr011_010de670(wp::Cpu& c);
void f_mr011_010de6d0(wp::Cpu& c);
void f_mr011_010de780(wp::Cpu& c);
void f_mr011_010de870(wp::Cpu& c);
void f_mr011_010de8b0(wp::Cpu& c);
void f_mr011_010de960(wp::Cpu& c);
void f_mr011_010de9e0(wp::Cpu& c);
void f_mr011_010dea60(wp::Cpu& c);
void f_mr011_010deb50(wp::Cpu& c);
void f_mr011_010debe0(wp::Cpu& c);
void f_mr011_010decf0(wp::Cpu& c);
void f_mr011_010deda0(wp::Cpu& c);
void f_mr011_010dee40(wp::Cpu& c);
void f_mr011_010deed0(wp::Cpu& c);
void f_mr011_010defe0(wp::Cpu& c);
void f_mr011_010df120(wp::Cpu& c);
void f_mr011_010df1b0(wp::Cpu& c);
void f_mr011_010df240(wp::Cpu& c);
void f_mr011_010df2d0(wp::Cpu& c);
void f_mr011_010df4c0(wp::Cpu& c);
void f_mr011_010df5d0(wp::Cpu& c);
void f_mr011_010df6e0(wp::Cpu& c);
void f_mr011_010df720(wp::Cpu& c);
void f_mr011_010df760(wp::Cpu& c);
void f_mr011_010df820(wp::Cpu& c);
void f_mr011_010df8a0(wp::Cpu& c);
void f_mr011_010df970(wp::Cpu& c);
void f_mr011_010dfa40(wp::Cpu& c);
void f_mr011_010dfbc0(wp::Cpu& c);
void f_mr011_010dfd40(wp::Cpu& c);
void f_mr011_010dff70(wp::Cpu& c);
void f_mr011_010e0130(wp::Cpu& c);
void f_mr011_010e02a0(wp::Cpu& c);
void f_mr011_010e0320(wp::Cpu& c);
void f_mr011_010e0370(wp::Cpu& c);
void f_mr011_010e03b0(wp::Cpu& c);
void f_mr011_010e0430(wp::Cpu& c);
void f_mr011_010e0580(wp::Cpu& c);
void f_mr011_010e0630(wp::Cpu& c);
void f_mr011_010e0700(wp::Cpu& c);
void f_mr011_010e0740(wp::Cpu& c);
void f_mr011_010e07b0(wp::Cpu& c);
void f_mr011_010e0820(wp::Cpu& c);
void f_mr011_010e0ae0(wp::Cpu& c);
void f_mr011_010e0ca0(wp::Cpu& c);
void f_mr011_010e0e60(wp::Cpu& c);
void f_mr011_010e10f0(wp::Cpu& c);
void f_mr011_010e1240(wp::Cpu& c);
void f_mr011_010e1280(wp::Cpu& c);
void f_mr011_010e1360(wp::Cpu& c);
void f_mr011_010e13d0(wp::Cpu& c);
void f_mr011_010e1440(wp::Cpu& c);
void f_mr011_010e14b0(wp::Cpu& c);
void f_mr011_010e1520(wp::Cpu& c);

void f_mr011_010d3ab0(wp::Cpu& c) {
    WP_ENTER(0x10d3ab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d3ac0(wp::Cpu& c) {
    WP_ENTER(0x10d3ac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d3ae0(wp::Cpu& c) {
    WP_ENTER(0x10d3ae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x3470u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3970u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3470u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3970u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d3b00(wp::Cpu& c) {
    WP_ENTER(0x10d3b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3b1cu: goto R_010d3b1c;
        case 0x10d3b2cu: goto R_010d3b2c;
        case 0x10d3b38u: goto R_010d3b38;
        case 0x10d3b60u: goto R_010d3b60;
        case 0x10d3b6cu: goto R_010d3b6c;
        case 0x10d3b78u: goto R_010d3b78;
        case 0x10d3b8cu: goto R_010d3b8c;
        case 0x10d3b98u: goto R_010d3b98;
        case 0x10d3ba4u: goto R_010d3ba4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d3b1cu;
    f_mr011_010d2500(c);
R_010d3b1c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d3b2cu;
    f_mr011_010d2cc0(c);
R_010d3b2c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3b38u;
    f_mr011_0108ce90(c);
R_010d3b38:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d3b54;
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (wp::cr_get(c, 2)) goto L_010d3b80;
    goto L_010d3bac;
L_010d3b54:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3b60u;
    f_mr011_010d2200(c);
R_010d3b60:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d3b6cu;
    f_800cc260(c);
R_010d3b6c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d3b78u;
    f_mr011_010d2340(c);
R_010d3b78:
    c.r[3] = 0x1u;
    goto L_010d3bb0;
L_010d3b80:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3b8cu;
    f_mr011_010d21d0(c);
R_010d3b8c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d3b98u;
    f_800cc1f0(c);
R_010d3b98:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d3ba4u;
    f_mr011_010d2340(c);
R_010d3ba4:
    c.r[3] = 0x1u;
    goto L_010d3bb0;
L_010d3bac:
    c.r[3] = 0xffffffffu;
L_010d3bb0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d3bd0(wp::Cpu& c) {
    WP_ENTER(0x10d3bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3becu: goto R_010d3bec;
        case 0x10d3bf8u: goto R_010d3bf8;
        case 0x10d3c08u: goto R_010d3c08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d3becu;
    f_mr011_010d3c90(c);
R_010d3bec:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d3bf8u;
    f_mr011_010d3c20(c);
R_010d3bf8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d3c08u;
    f_mr011_0108a4e0(c);
R_010d3c08:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d3c20(wp::Cpu& c) {
    WP_ENTER(0x10d3c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3c38u: goto R_010d3c38;
        case 0x10d3c48u: goto R_010d3c48;
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
    c.lr = 0x10d3c38u;
    f_mr011_010d3c80(c);
R_010d3c38:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x48u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d3c48u;
    f_mr011_010d3c60(c);
R_010d3c48:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d3c60(wp::Cpu& c) {
    WP_ENTER(0x10d3c60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d3c74;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d3c74:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d3c80(wp::Cpu& c) {
    WP_ENTER(0x10d3c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d2c70(c);
    return;
}

void f_mr011_010d3c90(wp::Cpu& c) {
    WP_ENTER(0x10d3c90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3cb4u: goto R_010d3cb4;
        case 0x10d3cc0u: goto R_010d3cc0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34c8u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d3cb4u;
    f_mr011_0108de20(c);
R_010d3cb4:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d3cc0u;
    f_mr011_010d3ce0(c);
R_010d3cc0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d3ce0(wp::Cpu& c) {
    WP_ENTER(0x10d3ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3cf8u: goto R_010d3cf8;
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
    c.lr = 0x10d3cf8u;
    f_mr011_010d3d10(c);
R_010d3cf8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d3d10(wp::Cpu& c) {
    WP_ENTER(0x10d3d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d3d20(wp::Cpu& c) {
    WP_ENTER(0x10d3d20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3d3cu: goto R_010d3d3c;
        case 0x10d3d4cu: goto R_010d3d4c;
        case 0x10d3d58u: goto R_010d3d58;
        case 0x10d3d80u: goto R_010d3d80;
        case 0x10d3d8cu: goto R_010d3d8c;
        case 0x10d3d9cu: goto R_010d3d9c;
        case 0x10d3db0u: goto R_010d3db0;
        case 0x10d3dbcu: goto R_010d3dbc;
        case 0x10d3dccu: goto R_010d3dcc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d3d3cu;
    f_mr011_010d3c90(c);
R_010d3d3c:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x14u;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d3d4cu;
    f_mr011_010d3ee0(c);
R_010d3d4c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3d58u;
    f_mr011_0108ce90(c);
R_010d3d58:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d3d74;
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (wp::cr_get(c, 2)) goto L_010d3da4;
    goto L_010d3dd4;
L_010d3d74:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3d80u;
    f_mr011_010d2200(c);
R_010d3d80:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d3d8cu;
    f_800ccd20(c);
R_010d3d8c:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d3d9cu;
    f_mr011_010d3df0(c);
R_010d3d9c:
    c.r[3] = 0x1u;
    goto L_010d3dd8;
L_010d3da4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d3db0u;
    f_mr011_010d21d0(c);
R_010d3db0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d3dbcu;
    f_800ccc80(c);
R_010d3dbc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d3dccu;
    f_mr011_010d3df0(c);
R_010d3dcc:
    c.r[3] = 0x1u;
    goto L_010d3dd8;
L_010d3dd4:
    c.r[3] = 0xffffffffu;
L_010d3dd8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d3df0(wp::Cpu& c) {
    WP_ENTER(0x10d3df0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d3e00(c);
    return;
}

void f_mr011_010d3e00(wp::Cpu& c) {
    WP_ENTER(0x10d3e00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3e24u: goto R_010d3e24;
        case 0x10d3e34u: goto R_010d3e34;
        case 0x10d3e40u: goto R_010d3e40;
        case 0x10d3e4cu: goto R_010d3e4c;
        case 0x10d3e54u: goto R_010d3e54;
        case 0x10d3e64u: goto R_010d3e64;
        case 0x10d3e70u: goto R_010d3e70;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d3e24u;
    f_mr011_010d3e90(c);
R_010d3e24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d3e38;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d3e34u;
    f_mr011_0108a4d0(c);
R_010d3e34:
    goto L_010d3e70;
L_010d3e38:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d3e40u;
    f_mr011_010d3ec0(c);
R_010d3e40:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d3e4cu;
    f_mr011_010907d0(c);
R_010d3e4c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d3e54u;
    f_mr011_010d3eb0(c);
R_010d3e54:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d3e64u;
    f_mr011_0108dad0(c);
R_010d3e64:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d3e70u;
    f_mr011_0108e120(c);
L_010d3e70:
R_010d3e70:
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

void f_mr011_010d3e90(wp::Cpu& c) {
    WP_ENTER(0x10d3e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d3eb0(wp::Cpu& c) {
    WP_ENTER(0x10d3eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d3ec0(wp::Cpu& c) {
    WP_ENTER(0x10d3ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34d0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3750u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34d0u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3750u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d3ee0(wp::Cpu& c) {
    WP_ENTER(0x10d3ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3ef8u: goto R_010d3ef8;
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
    c.lr = 0x10d3ef8u;
    f_mr011_010d3f10(c);
R_010d3ef8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d3f10(wp::Cpu& c) {
    WP_ENTER(0x10d3f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d3f20(wp::Cpu& c) {
    WP_ENTER(0x10d3f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3f3cu: goto R_010d3f3c;
        case 0x10d3f48u: goto R_010d3f48;
        case 0x10d3f54u: goto R_010d3f54;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d3f3cu;
    f_mr011_010d3c90(c);
R_010d3f3c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d3f48u;
    f_800ccde0(c);
R_010d3f48:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d3f54u;
    f_mr011_0108a590(c);
R_010d3f54:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d3f70(wp::Cpu& c) {
    WP_ENTER(0x10d3f70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d3f94u: goto R_010d3f94;
        case 0x10d3fa4u: goto R_010d3fa4;
        case 0x10d3facu: goto R_010d3fac;
        case 0x10d3fbcu: goto R_010d3fbc;
        case 0x10d3fd0u: goto R_010d3fd0;
        case 0x10d3fdcu: goto R_010d3fdc;
        case 0x10d3fecu: goto R_010d3fec;
        case 0x10d3ff8u: goto R_010d3ff8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10d3f94u;
    f_mr011_010d3c90(c);
R_010d3f94:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d3fa4u;
    f_mr011_010d3ee0(c);
R_010d3fa4:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d3facu;
    f_800ccde0(c);
R_010d3fac:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d3fbcu;
    f_mr011_0108a890(c);
R_010d3fbc:
    c.r[30] = 0x0u;
    goto L_010d3ffc;
L_010d3fc4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d3fd0u;
    f_mr011_0108a590(c);
R_010d3fd0:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d3fdcu;
    f_800ccd20(c);
R_010d3fdc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d3fecu;
    f_mr011_010d3df0(c);
R_010d3fec:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d3ff8u;
    f_mr011_0108e430(c);
R_010d3ff8:
    c.r[30] = c.r[30] + 0x1u;
L_010d3ffc:
    wp::compare_signed(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d3fc4;
    }
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010d4030(wp::Cpu& c) {
    WP_ENTER(0x10d4030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d404cu: goto R_010d404c;
        case 0x10d405cu: goto R_010d405c;
        case 0x10d4068u: goto R_010d4068;
        case 0x10d4090u: goto R_010d4090;
        case 0x10d409cu: goto R_010d409c;
        case 0x10d40acu: goto R_010d40ac;
        case 0x10d40c0u: goto R_010d40c0;
        case 0x10d40ccu: goto R_010d40cc;
        case 0x10d40dcu: goto R_010d40dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d404cu;
    f_mr011_010d3c90(c);
R_010d404c:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x14u;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d405cu;
    f_mr011_010d3ee0(c);
R_010d405c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4068u;
    f_mr011_0108ce90(c);
R_010d4068:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d4084;
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (wp::cr_get(c, 2)) goto L_010d40b4;
    goto L_010d40e4;
L_010d4084:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4090u;
    f_mr011_010d2200(c);
R_010d4090:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d409cu;
    f_800cd370(c);
R_010d409c:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d40acu;
    f_mr011_010d4100(c);
R_010d40ac:
    c.r[3] = 0x1u;
    goto L_010d40e8;
L_010d40b4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d40c0u;
    f_mr011_010d21d0(c);
R_010d40c0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d40ccu;
    f_800cd2d0(c);
R_010d40cc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d40dcu;
    f_mr011_010d4100(c);
R_010d40dc:
    c.r[3] = 0x1u;
    goto L_010d40e8;
L_010d40e4:
    c.r[3] = 0xffffffffu;
L_010d40e8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4100(wp::Cpu& c) {
    WP_ENTER(0x10d4100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d4110(c);
    return;
}

void f_mr011_010d4110(wp::Cpu& c) {
    WP_ENTER(0x10d4110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4134u: goto R_010d4134;
        case 0x10d4144u: goto R_010d4144;
        case 0x10d4150u: goto R_010d4150;
        case 0x10d415cu: goto R_010d415c;
        case 0x10d4164u: goto R_010d4164;
        case 0x10d4174u: goto R_010d4174;
        case 0x10d4180u: goto R_010d4180;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4134u;
    f_mr011_010d41b0(c);
R_010d4134:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d4148;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d4144u;
    f_mr011_0108a4d0(c);
R_010d4144:
    goto L_010d4180;
L_010d4148:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d4150u;
    f_mr011_010d41d0(c);
R_010d4150:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d415cu;
    f_mr011_010907d0(c);
R_010d415c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4164u;
    f_mr011_010d41a0(c);
R_010d4164:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d4174u;
    f_mr011_0108dad0(c);
R_010d4174:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d4180u;
    f_mr011_0108e120(c);
L_010d4180:
R_010d4180:
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

void f_mr011_010d41a0(wp::Cpu& c) {
    WP_ENTER(0x10d41a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d41b0(wp::Cpu& c) {
    WP_ENTER(0x10d41b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d41d0(wp::Cpu& c) {
    WP_ENTER(0x10d41d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34c0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3a80u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34c0u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3a80u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d41f0(wp::Cpu& c) {
    WP_ENTER(0x10d41f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4214u: goto R_010d4214;
        case 0x10d4224u: goto R_010d4224;
        case 0x10d422cu: goto R_010d422c;
        case 0x10d423cu: goto R_010d423c;
        case 0x10d4250u: goto R_010d4250;
        case 0x10d425cu: goto R_010d425c;
        case 0x10d4268u: goto R_010d4268;
        case 0x10d4278u: goto R_010d4278;
        case 0x10d4284u: goto R_010d4284;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10d4214u;
    f_mr011_010d3c90(c);
R_010d4214:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4224u;
    f_mr011_010d3ee0(c);
R_010d4224:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d422cu;
    f_800cd430(c);
R_010d422c:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d423cu;
    f_mr011_0108a890(c);
R_010d423c:
    c.r[30] = 0x0u;
    goto L_010d4288;
L_010d4244:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d4250u;
    f_mr011_0108a590(c);
R_010d4250:
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d425cu;
    f_800cd370(c);
R_010d425c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4268u;
    f_mr011_010d42b0(c);
R_010d4268:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d4278u;
    f_mr011_0108a4e0(c);
R_010d4278:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d4284u;
    f_mr011_0108e430(c);
R_010d4284:
    c.r[30] = c.r[30] + 0x1u;
L_010d4288:
    wp::compare_signed(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d4244;
    }
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010d42b0(wp::Cpu& c) {
    WP_ENTER(0x10d42b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d42c8u: goto R_010d42c8;
        case 0x10d42d8u: goto R_010d42d8;
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
    c.lr = 0x10d42c8u;
    f_mr011_010d4310(c);
R_010d42c8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d42d8u;
    f_mr011_010d42f0(c);
R_010d42d8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d42f0(wp::Cpu& c) {
    WP_ENTER(0x10d42f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d4304;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d4304:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d4310(wp::Cpu& c) {
    WP_ENTER(0x10d4310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d41a0(c);
    return;
}

void f_mr011_010d4320(wp::Cpu& c) {
    WP_ENTER(0x10d4320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d433cu: goto R_010d433c;
        case 0x10d4348u: goto R_010d4348;
        case 0x10d4358u: goto R_010d4358;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d433cu;
    f_mr011_010d3c90(c);
R_010d433c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4348u;
    f_800ccc10(c);
R_010d4348:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4358u;
    f_mr011_010d4370(c);
R_010d4358:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4370(wp::Cpu& c) {
    WP_ENTER(0x10d4370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d4380(c);
    return;
}

void f_mr011_010d4380(wp::Cpu& c) {
    WP_ENTER(0x10d4380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d43a4u: goto R_010d43a4;
        case 0x10d43b4u: goto R_010d43b4;
        case 0x10d43c0u: goto R_010d43c0;
        case 0x10d43ccu: goto R_010d43cc;
        case 0x10d43d4u: goto R_010d43d4;
        case 0x10d43e4u: goto R_010d43e4;
        case 0x10d43f0u: goto R_010d43f0;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d43a4u;
    f_mr011_010d4420(c);
R_010d43a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d43b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d43b4u;
    f_mr011_0108a4d0(c);
R_010d43b4:
    goto L_010d43f0;
L_010d43b8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d43c0u;
    f_mr011_010d4440(c);
R_010d43c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d43ccu;
    f_mr011_010907d0(c);
R_010d43cc:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d43d4u;
    f_mr011_010d4410(c);
R_010d43d4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d43e4u;
    f_mr011_0108dad0(c);
R_010d43e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d43f0u;
    f_mr011_0108e120(c);
L_010d43f0:
R_010d43f0:
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

void f_mr011_010d4410(wp::Cpu& c) {
    WP_ENTER(0x10d4410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d4420(wp::Cpu& c) {
    WP_ENTER(0x10d4420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d4440(wp::Cpu& c) {
    WP_ENTER(0x10d4440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34a8u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3510u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34a8u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3510u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d4460(wp::Cpu& c) {
    WP_ENTER(0x10d4460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4488u: goto R_010d4488;
        case 0x10d4498u: goto R_010d4498;
        case 0x10d44a4u: goto R_010d44a4;
        case 0x10d44b0u: goto R_010d44b0;
        case 0x10d44bcu: goto R_010d44bc;
        case 0x10d44ccu: goto R_010d44cc;
        case 0x10d44d4u: goto R_010d44d4;
        case 0x10d44e0u: goto R_010d44e0;
        case 0x10d44f0u: goto R_010d44f0;
        case 0x10d44fcu: goto R_010d44fc;
        case 0x10d450cu: goto R_010d450c;
        case 0x10d4514u: goto R_010d4514;
        case 0x10d4520u: goto R_010d4520;
        case 0x10d4530u: goto R_010d4530;
        case 0x10d453cu: goto R_010d453c;
        case 0x10d454cu: goto R_010d454c;
        case 0x10d4554u: goto R_010d4554;
        case 0x10d4560u: goto R_010d4560;
        case 0x10d4570u: goto R_010d4570;
        case 0x10d457cu: goto R_010d457c;
        case 0x10d458cu: goto R_010d458c;
        case 0x10d4594u: goto R_010d4594;
        case 0x10d45a0u: goto R_010d45a0;
        case 0x10d45acu: goto R_010d45ac;
        case 0x10d45b8u: goto R_010d45b8;
        case 0x10d45c0u: goto R_010d45c0;
        case 0x10d45c8u: goto R_010d45c8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2ed00u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2ed00u) & 0xFFFFu);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d4488u;
    f_mr011_010d3c90(c);
R_010d4488:
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.lr = 0x10d4498u;
    f_mr011_010d3ee0(c);
R_010d4498:
    c.r[3] = c.r[1] + 0x1cu;
    c.r[4] = c.r[1] + 0x18u;
    c.lr = 0x10d44a4u;
    f_mr011_010d45f0(c);
R_010d44a4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10d44b0u;
    f_mr011_0108a890(c);
R_010d44b0:
    goto L_010d45c0;
L_010d44b4:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d44bcu;
    f_mr011_0108a7c0(c);
R_010d44bc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1d4u;
    c.r[5] = 0x6u;
    c.lr = 0x10d44ccu;
    f_mr011_0108a4e0(c);
R_010d44cc:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d44d4u;
    f_800cdec0(c);
R_010d44d4:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10d44e0u;
    f_800cd3d0(c);
R_010d44e0:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d44f0u;
    f_mr011_010d4100(c);
R_010d44f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d44fcu;
    f_mr011_0108e430(c);
R_010d44fc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1dcu;
    c.r[5] = 0x6u;
    c.lr = 0x10d450cu;
    f_mr011_0108a4e0(c);
R_010d450c:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d4514u;
    f_800cdf00(c);
R_010d4514:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10d4520u;
    f_800cd4d0(c);
R_010d4520:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4530u;
    f_mr011_010d4670(c);
R_010d4530:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d453cu;
    f_mr011_0108e430(c);
R_010d453c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1e8u;
    c.r[5] = 0x7u;
    c.lr = 0x10d454cu;
    f_mr011_0108a4e0(c);
R_010d454c:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d4554u;
    f_800cdf40(c);
R_010d4554:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x10d4560u;
    f_800ccd80(c);
R_010d4560:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d4570u;
    f_mr011_010d3df0(c);
R_010d4570:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d457cu;
    f_mr011_0108e430(c);
R_010d457c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1f0u;
    c.r[5] = 0x8u;
    c.lr = 0x10d458cu;
    f_mr011_0108a4e0(c);
R_010d458c:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d4594u;
    f_mr011_010d4660(c);
R_010d4594:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d45a0u;
    f_mr011_0108a600(c);
R_010d45a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.lr = 0x10d45acu;
    f_mr011_0108e430(c);
R_010d45ac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d45b8u;
    f_mr011_0108ac90(c);
R_010d45b8:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d45c0u;
    f_800cde80(c);
L_010d45c0:
R_010d45c0:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d45c8u;
    f_800cde20(c);
R_010d45c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010d44b4;
    }
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010d45f0(wp::Cpu& c) {
    WP_ENTER(0x10d45f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4620u: goto R_010d4620;
        case 0x10d4634u: goto R_010d4634;
        case 0x10d4644u: goto R_010d4644;
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
    c.r[4] = ((((g_mr011_bases[5] + 0x2f298u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f298u) & 0xFFFFu);
    c.lr = 0x10d4620u;
    f_800ccc30(c);
R_010d4620:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f2a0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f2a0u) & 0xFFFFu);
    c.lr = 0x10d4634u;
    f_800ccc30(c);
R_010d4634:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x10d4644u;
    f_800cde00(c);
R_010d4644:
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

void f_mr011_010d4660(wp::Cpu& c) {
    WP_ENTER(0x10d4660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mr011_010d4670(wp::Cpu& c) {
    WP_ENTER(0x10d4670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d4680(c);
    return;
}

void f_mr011_010d4680(wp::Cpu& c) {
    WP_ENTER(0x10d4680u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d46a4u: goto R_010d46a4;
        case 0x10d46b4u: goto R_010d46b4;
        case 0x10d46c0u: goto R_010d46c0;
        case 0x10d46ccu: goto R_010d46cc;
        case 0x10d46d4u: goto R_010d46d4;
        case 0x10d46e4u: goto R_010d46e4;
        case 0x10d46f0u: goto R_010d46f0;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d46a4u;
    f_mr011_010d4720(c);
R_010d46a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d46b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d46b4u;
    f_mr011_0108a4d0(c);
R_010d46b4:
    goto L_010d46f0;
L_010d46b8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d46c0u;
    f_mr011_010d4740(c);
R_010d46c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d46ccu;
    f_mr011_010907d0(c);
R_010d46cc:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d46d4u;
    f_mr011_010d4710(c);
R_010d46d4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d46e4u;
    f_mr011_0108dad0(c);
R_010d46e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d46f0u;
    f_mr011_0108e120(c);
L_010d46f0:
R_010d46f0:
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

void f_mr011_010d4710(wp::Cpu& c) {
    WP_ENTER(0x10d4710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d4720(wp::Cpu& c) {
    WP_ENTER(0x10d4720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d4740(wp::Cpu& c) {
    WP_ENTER(0x10d4740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34e0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3af0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34e0u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3af0u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d4760(wp::Cpu& c) {
    WP_ENTER(0x10d4760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d477cu: goto R_010d477c;
        case 0x10d4788u: goto R_010d4788;
        case 0x10d4798u: goto R_010d4798;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d477cu;
    f_mr011_010d4820(c);
R_010d477c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4788u;
    f_mr011_010d47b0(c);
R_010d4788:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d4798u;
    f_mr011_0108a4e0(c);
R_010d4798:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d47b0(wp::Cpu& c) {
    WP_ENTER(0x10d47b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d47c8u: goto R_010d47c8;
        case 0x10d47d8u: goto R_010d47d8;
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
    c.lr = 0x10d47c8u;
    f_mr011_010d4810(c);
R_010d47c8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d47d8u;
    f_mr011_010d47f0(c);
R_010d47d8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d47f0(wp::Cpu& c) {
    WP_ENTER(0x10d47f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d4804;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d4804:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d4810(wp::Cpu& c) {
    WP_ENTER(0x10d4810u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d3eb0(c);
    return;
}

void f_mr011_010d4820(wp::Cpu& c) {
    WP_ENTER(0x10d4820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4844u: goto R_010d4844;
        case 0x10d4850u: goto R_010d4850;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34d0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d4844u;
    f_mr011_0108de20(c);
R_010d4844:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4850u;
    f_mr011_010d4870(c);
R_010d4850:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4870(wp::Cpu& c) {
    WP_ENTER(0x10d4870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4888u: goto R_010d4888;
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
    c.lr = 0x10d4888u;
    f_mr011_010d48a0(c);
R_010d4888:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d48a0(wp::Cpu& c) {
    WP_ENTER(0x10d48a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d48b0(wp::Cpu& c) {
    WP_ENTER(0x10d48b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d48ccu: goto R_010d48cc;
        case 0x10d48d8u: goto R_010d48d8;
        case 0x10d48e4u: goto R_010d48e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d48ccu;
    f_mr011_010d4820(c);
R_010d48cc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d48d8u;
    f_mr011_010d4900(c);
R_010d48d8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d48e4u;
    f_mr011_0108a590(c);
R_010d48e4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4900(wp::Cpu& c) {
    WP_ENTER(0x10d4900u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4918u: goto R_010d4918;
        case 0x10d4928u: goto R_010d4928;
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
    c.lr = 0x10d4918u;
    f_mr011_010d3e90(c);
R_010d4918:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d4930;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4928u;
    f_mr011_010d3eb0(c);
R_010d4928:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_010d4934;
L_010d4930:
    c.r[3] = 0x0u;
L_010d4934:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4950(wp::Cpu& c) {
    WP_ENTER(0x10d4950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d496cu: goto R_010d496c;
        case 0x10d4978u: goto R_010d4978;
        case 0x10d4988u: goto R_010d4988;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d496cu;
    f_mr011_010d4820(c);
R_010d496c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4978u;
    f_800d16a0(c);
R_010d4978:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4988u;
    f_mr011_010d2bd0(c);
R_010d4988:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d49a0(wp::Cpu& c) {
    WP_ENTER(0x10d49a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d49bcu: goto R_010d49bc;
        case 0x10d49c8u: goto R_010d49c8;
        case 0x10d49d8u: goto R_010d49d8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d49bcu;
    f_mr011_010d4820(c);
R_010d49bc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d49c8u;
    f_mr011_010d49f0(c);
R_010d49c8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d49d8u;
    f_mr011_010d3df0(c);
R_010d49d8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d49f0(wp::Cpu& c) {
    WP_ENTER(0x10d49f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4a08u: goto R_010d4a08;
        case 0x10d4a18u: goto R_010d4a18;
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
    c.lr = 0x10d4a08u;
    f_mr011_010d4a80(c);
R_010d4a08:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x5cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d4a18u;
    f_mr011_010d4a30(c);
R_010d4a18:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4a30(wp::Cpu& c) {
    WP_ENTER(0x10d4a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4a54u: goto R_010d4a54;
        case 0x10d4a68u: goto R_010d4a68;
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
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d4a5c;
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[0] + c.r[4];
    c.lr = 0x10d4a54u;
    f_mr011_010d4870(c);
R_010d4a54:
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    goto L_010d4a6c;
L_010d4a5c:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.lr = 0x10d4a68u;
    f_mr011_010d4870(c);
R_010d4a68:
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_010d4a6c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4a80(wp::Cpu& c) {
    WP_ENTER(0x10d4a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d4a90(c);
    return;
}

void f_mr011_010d4a90(wp::Cpu& c) {
    WP_ENTER(0x10d4a90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d4aa0(wp::Cpu& c) {
    WP_ENTER(0x10d4aa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4abcu: goto R_010d4abc;
        case 0x10d4ac8u: goto R_010d4ac8;
        case 0x10d4ad8u: goto R_010d4ad8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4abcu;
    f_mr011_010d4820(c);
R_010d4abc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4ac8u;
    f_mr011_010d4af0(c);
R_010d4ac8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4ad8u;
    f_mr011_010d3df0(c);
R_010d4ad8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4af0(wp::Cpu& c) {
    WP_ENTER(0x10d4af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4b08u: goto R_010d4b08;
        case 0x10d4b18u: goto R_010d4b18;
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
    c.lr = 0x10d4b08u;
    f_mr011_010d4a80(c);
R_010d4b08:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x60u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d4b18u;
    f_mr011_010d4a30(c);
R_010d4b18:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4b30(wp::Cpu& c) {
    WP_ENTER(0x10d4b30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4b4cu: goto R_010d4b4c;
        case 0x10d4b58u: goto R_010d4b58;
        case 0x10d4b68u: goto R_010d4b68;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4b4cu;
    f_mr011_010d4820(c);
R_010d4b4c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4b58u;
    f_mr011_010d4b80(c);
R_010d4b58:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4b68u;
    f_mr011_010d3df0(c);
R_010d4b68:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4b80(wp::Cpu& c) {
    WP_ENTER(0x10d4b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4b98u: goto R_010d4b98;
        case 0x10d4ba8u: goto R_010d4ba8;
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
    c.lr = 0x10d4b98u;
    f_mr011_010d4a80(c);
R_010d4b98:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x64u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d4ba8u;
    f_mr011_010d4a30(c);
R_010d4ba8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4bc0(wp::Cpu& c) {
    WP_ENTER(0x10d4bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4bdcu: goto R_010d4bdc;
        case 0x10d4be8u: goto R_010d4be8;
        case 0x10d4bf8u: goto R_010d4bf8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4bdcu;
    f_mr011_010d4820(c);
R_010d4bdc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4be8u;
    f_mr011_010d4c10(c);
R_010d4be8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d4bf8u;
    f_mr011_010d3df0(c);
R_010d4bf8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4c10(wp::Cpu& c) {
    WP_ENTER(0x10d4c10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4c28u: goto R_010d4c28;
        case 0x10d4c38u: goto R_010d4c38;
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
    c.lr = 0x10d4c28u;
    f_mr011_010d4a80(c);
R_010d4c28:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x68u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d4c38u;
    f_mr011_010d4a30(c);
R_010d4c38:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4c50(wp::Cpu& c) {
    WP_ENTER(0x10d4c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4c6cu: goto R_010d4c6c;
        case 0x10d4c78u: goto R_010d4c78;
        case 0x10d4c84u: goto R_010d4c84;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4c6cu;
    f_mr011_010d4820(c);
R_010d4c6c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4c78u;
    f_mr011_010d4ca0(c);
R_010d4c78:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4c84u;
    f_mr011_0108a590(c);
R_010d4c84:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4ca0(wp::Cpu& c) {
    WP_ENTER(0x10d4ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4cb8u: goto R_010d4cb8;
        case 0x10d4cc8u: goto R_010d4cc8;
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
    c.lr = 0x10d4cb8u;
    f_mr011_010d3e90(c);
R_010d4cb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d4cd0;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4cc8u;
    f_mr011_010d3eb0(c);
R_010d4cc8:
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    goto L_010d4cd4;
L_010d4cd0:
    c.r[3] = 0x0u;
L_010d4cd4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4cf0(wp::Cpu& c) {
    WP_ENTER(0x10d4cf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4d0cu: goto R_010d4d0c;
        case 0x10d4d1cu: goto R_010d4d1c;
        case 0x10d4d28u: goto R_010d4d28;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4d0cu;
    f_mr011_010d4820(c);
R_010d4d0c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4d1cu;
    f_mr011_010d2200(c);
R_010d4d1c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4d28u;
    f_800d1f30(c);
R_010d4d28:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4d40(wp::Cpu& c) {
    WP_ENTER(0x10d4d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4d5cu: goto R_010d4d5c;
        case 0x10d4d68u: goto R_010d4d68;
        case 0x10d4d74u: goto R_010d4d74;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4d5cu;
    f_mr011_010d4820(c);
R_010d4d5c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4d68u;
    f_mr011_010d4d90(c);
R_010d4d68:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4d74u;
    f_mr011_0108a590(c);
R_010d4d74:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4d90(wp::Cpu& c) {
    WP_ENTER(0x10d4d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4da8u: goto R_010d4da8;
        case 0x10d4db8u: goto R_010d4db8;
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
    c.lr = 0x10d4da8u;
    f_mr011_010d3e90(c);
R_010d4da8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d4dc0;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d4db8u;
    f_mr011_010d3eb0(c);
R_010d4db8:
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd32(ea);
    goto L_010d4dc4;
L_010d4dc0:
    c.r[3] = 0x0u;
L_010d4dc4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4de0(wp::Cpu& c) {
    WP_ENTER(0x10d4de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4dfcu: goto R_010d4dfc;
        case 0x10d4e0cu: goto R_010d4e0c;
        case 0x10d4e18u: goto R_010d4e18;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4dfcu;
    f_mr011_010d4820(c);
R_010d4dfc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4e0cu;
    f_mr011_010df6e0(c);
R_010d4e0c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4e18u;
    f_mr011_010d4e30(c);
R_010d4e18:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4e30(wp::Cpu& c) {
    WP_ENTER(0x10d4e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    f_800d19d0(c);
    return;
}

void f_mr011_010d4e40(wp::Cpu& c) {
    WP_ENTER(0x10d4e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4e60u: goto R_010d4e60;
        case 0x10d4e6cu: goto R_010d4e6c;
        case 0x10d4e78u: goto R_010d4e78;
        case 0x10d4e80u: goto R_010d4e80;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d4e60u;
    f_mr011_010d4820(c);
R_010d4e60:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4e6cu;
    f_mr011_010d4ea0(c);
R_010d4e6c:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d4e78u;
    f_mr011_010df4c0(c);
R_010d4e78:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d4e80u;
    f_mr011_01023750(c);
R_010d4e80:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4ea0(wp::Cpu& c) {
    WP_ENTER(0x10d4ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4eb0u: goto R_010d4eb0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d4eb0u;
    f_mr011_010d4810(c);
R_010d4eb0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x20u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4ed0(wp::Cpu& c) {
    WP_ENTER(0x10d4ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4eecu: goto R_010d4eec;
        case 0x10d4efcu: goto R_010d4efc;
        case 0x10d4f08u: goto R_010d4f08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4eecu;
    f_mr011_010d4820(c);
R_010d4eec:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4efcu;
    f_mr011_010df6e0(c);
R_010d4efc:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4f08u;
    f_mr011_010d4f20(c);
R_010d4f08:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4f20(wp::Cpu& c) {
    WP_ENTER(0x10d4f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    f_800d1b10(c);
    return;
}

void f_mr011_010d4f30(wp::Cpu& c) {
    WP_ENTER(0x10d4f30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4f50u: goto R_010d4f50;
        case 0x10d4f5cu: goto R_010d4f5c;
        case 0x10d4f68u: goto R_010d4f68;
        case 0x10d4f70u: goto R_010d4f70;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d4f50u;
    f_mr011_010d4820(c);
R_010d4f50:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4f5cu;
    f_mr011_010d4f90(c);
R_010d4f5c:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d4f68u;
    f_mr011_010df4c0(c);
R_010d4f68:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d4f70u;
    f_mr011_01023750(c);
R_010d4f70:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d4f90(wp::Cpu& c) {
    WP_ENTER(0x10d4f90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4fa0u: goto R_010d4fa0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d4fa0u;
    f_mr011_010d4810(c);
R_010d4fa0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x2cu;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d4fc0(wp::Cpu& c) {
    WP_ENTER(0x10d4fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d4fdcu: goto R_010d4fdc;
        case 0x10d4fecu: goto R_010d4fec;
        case 0x10d4ff8u: goto R_010d4ff8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d4fdcu;
    f_mr011_010d4820(c);
R_010d4fdc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d4fecu;
    f_mr011_010df6e0(c);
R_010d4fec:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d4ff8u;
    f_mr011_010d5010(c);
R_010d4ff8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5010(wp::Cpu& c) {
    WP_ENTER(0x10d5010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    f_800d1a80(c);
    return;
}

void f_mr011_010d5020(wp::Cpu& c) {
    WP_ENTER(0x10d5020u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5040u: goto R_010d5040;
        case 0x10d5050u: goto R_010d5050;
        case 0x10d505cu: goto R_010d505c;
        case 0x10d5068u: goto R_010d5068;
        case 0x10d5074u: goto R_010d5074;
        case 0x10d507cu: goto R_010d507c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d5040u;
    f_mr011_010d4820(c);
R_010d5040:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d5050u;
    f_mr011_010d50d0(c);
R_010d5050:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10d505cu;
    f_mr011_010d4820(c);
R_010d505c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5068u;
    f_mr011_010d50a0(c);
R_010d5068:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5074u;
    f_mr011_010df4c0(c);
R_010d5074:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d507cu;
    f_mr011_01023750(c);
R_010d507c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d50a0(wp::Cpu& c) {
    WP_ENTER(0x10d50a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d50b0u: goto R_010d50b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d50b0u;
    f_mr011_010d4810(c);
R_010d50b0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x38u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d50d0(wp::Cpu& c) {
    WP_ENTER(0x10d50d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d50e8u: goto R_010d50e8;
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
    c.lr = 0x10d50e8u;
    f_mr011_010d5100(c);
R_010d50e8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5100(wp::Cpu& c) {
    WP_ENTER(0x10d5100u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d5110(wp::Cpu& c) {
    WP_ENTER(0x10d5110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d512cu: goto R_010d512c;
        case 0x10d513cu: goto R_010d513c;
        case 0x10d5148u: goto R_010d5148;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d512cu;
    f_mr011_010d4820(c);
R_010d512c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d513cu;
    f_mr011_010d2230(c);
R_010d513c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5148u;
    f_mr011_010d5160(c);
R_010d5148:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5160(wp::Cpu& c) {
    WP_ENTER(0x10d5160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5180u: goto R_010d5180;
        case 0x10d5198u: goto R_010d5198;
        case 0x10d51b0u: goto R_010d51b0;
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
    c.lr = 0x10d5180u;
    f_mr011_010d3e90(c);
R_010d5180:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d51bc;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d51a8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5198u;
    f_mr011_010d4a90(c);
R_010d5198:
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x100u;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_010d51bc;
L_010d51a8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d51b0u;
    f_mr011_010d4a90(c);
R_010d51b0:
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xfffffeffu;
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_010d51bc:
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

void f_mr011_010d51e0(wp::Cpu& c) {
    WP_ENTER(0x10d51e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d51fcu: goto R_010d51fc;
        case 0x10d5208u: goto R_010d5208;
        case 0x10d5214u: goto R_010d5214;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d51fcu;
    f_mr011_010d4820(c);
R_010d51fc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5208u;
    f_mr011_010d5230(c);
R_010d5208:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5214u;
    f_mr011_0108a600(c);
R_010d5214:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5230(wp::Cpu& c) {
    WP_ENTER(0x10d5230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5248u: goto R_010d5248;
        case 0x10d5258u: goto R_010d5258;
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
    c.lr = 0x10d5248u;
    f_mr011_010d3e90(c);
R_010d5248:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d5264;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5258u;
    f_mr011_010d4810(c);
R_010d5258:
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 24) & 0x1u;
    goto L_010d5268;
L_010d5264:
    c.r[3] = 0x0u;
L_010d5268:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5280(wp::Cpu& c) {
    WP_ENTER(0x10d5280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d529cu: goto R_010d529c;
        case 0x10d52a8u: goto R_010d52a8;
        case 0x10d52b8u: goto R_010d52b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d529cu;
    f_mr011_010d4820(c);
R_010d529c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d52a8u;
    f_800d24e0(c);
R_010d52a8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d52b8u;
    f_mr011_010d52d0(c);
R_010d52b8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d52d0(wp::Cpu& c) {
    WP_ENTER(0x10d52d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d52e0(c);
    return;
}

void f_mr011_010d52e0(wp::Cpu& c) {
    WP_ENTER(0x10d52e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5304u: goto R_010d5304;
        case 0x10d5314u: goto R_010d5314;
        case 0x10d5320u: goto R_010d5320;
        case 0x10d532cu: goto R_010d532c;
        case 0x10d5334u: goto R_010d5334;
        case 0x10d5344u: goto R_010d5344;
        case 0x10d5350u: goto R_010d5350;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5304u;
    f_mr011_010d5380(c);
R_010d5304:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d5318;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5314u;
    f_mr011_0108a4d0(c);
R_010d5314:
    goto L_010d5350;
L_010d5318:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5320u;
    f_mr011_010d53a0(c);
R_010d5320:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d532cu;
    f_mr011_010907d0(c);
R_010d532c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5334u;
    f_mr011_010d5370(c);
R_010d5334:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d5344u;
    f_mr011_0108dad0(c);
R_010d5344:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d5350u;
    f_mr011_0108e120(c);
L_010d5350:
R_010d5350:
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

void f_mr011_010d5370(wp::Cpu& c) {
    WP_ENTER(0x10d5370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d5380(wp::Cpu& c) {
    WP_ENTER(0x10d5380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d53a0(wp::Cpu& c) {
    WP_ENTER(0x10d53a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34f0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x38a0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34f0u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x38a0u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d53c0(wp::Cpu& c) {
    WP_ENTER(0x10d53c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d53dcu: goto R_010d53dc;
        case 0x10d53ecu: goto R_010d53ec;
        case 0x10d53f8u: goto R_010d53f8;
        case 0x10d5420u: goto R_010d5420;
        case 0x10d542cu: goto R_010d542c;
        case 0x10d543cu: goto R_010d543c;
        case 0x10d5450u: goto R_010d5450;
        case 0x10d545cu: goto R_010d545c;
        case 0x10d546cu: goto R_010d546c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d53dcu;
    f_mr011_010d57b0(c);
R_010d53dc:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x14u;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d53ecu;
    f_mr011_010d5840(c);
R_010d53ec:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d53f8u;
    f_mr011_0108ce90(c);
R_010d53f8:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d5414;
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (wp::cr_get(c, 2)) goto L_010d5444;
    goto L_010d5474;
L_010d5414:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d5420u;
    f_mr011_010d2200(c);
R_010d5420:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d542cu;
    f_mr011_010d5490(c);
R_010d542c:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d543cu;
    f_mr011_010d56c0(c);
R_010d543c:
    c.r[3] = 0x1u;
    goto L_010d5478;
L_010d5444:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d5450u;
    f_mr011_010d21d0(c);
R_010d5450:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x14u;
    c.lr = 0x10d545cu;
    f_mr011_010d5660(c);
R_010d545c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d546cu;
    f_mr011_010d56c0(c);
R_010d546c:
    c.r[3] = 0x1u;
    goto L_010d5478;
L_010d5474:
    c.r[3] = 0xffffffffu;
L_010d5478:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5490(wp::Cpu& c) {
    WP_ENTER(0x10d5490u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d54a8u: goto R_010d54a8;
        case 0x10d54b8u: goto R_010d54b8;
        case 0x10d54c0u: goto R_010d54c0;
        case 0x10d54ccu: goto R_010d54cc;
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
    c.lr = 0x10d54a8u;
    f_mr011_010d5650(c);
R_010d54a8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[4] + 0x4u;
    c.lr = 0x10d54b8u;
    f_mr011_010d5610(c);
R_010d54b8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d54c0u;
    f_mr011_010d5530(c);
R_010d54c0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d54ccu;
    f_mr011_010d54f0(c);
R_010d54cc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d54f0(wp::Cpu& c) {
    WP_ENTER(0x10d54f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5508u: goto R_010d5508;
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
    c.lr = 0x10d5508u;
    f_mr011_010d5520(c);
R_010d5508:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5520(wp::Cpu& c) {
    WP_ENTER(0x10d5520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d5530(wp::Cpu& c) {
    WP_ENTER(0x10d5530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d5540(c);
    return;
}

void f_mr011_010d5540(wp::Cpu& c) {
    WP_ENTER(0x10d5540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5560u: goto R_010d5560;
        case 0x10d5570u: goto R_010d5570;
        case 0x10d5588u: goto R_010d5588;
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
    c.lr = 0x10d5560u;
    f_mr011_010d55b0(c);
R_010d5560:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d558c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5570u;
    f_mr011_010d55f0(c);
R_010d5570:
    c.r[0] = c.r[31] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 4) & 0xfffffff0u;
    c.r[4] = c.r[3] + c.r[0];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d5588u;
    f_mr011_010d55d0(c);
R_010d5588:
    goto L_010d5590;
L_010d558c:
    c.r[3] = 0x0u;
L_010d5590:
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

void f_mr011_010d55b0(wp::Cpu& c) {
    WP_ENTER(0x10d55b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d55d0(wp::Cpu& c) {
    WP_ENTER(0x10d55d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d55e4;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d55e4:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d55f0(wp::Cpu& c) {
    WP_ENTER(0x10d55f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d5600(c);
    return;
}

void f_mr011_010d5600(wp::Cpu& c) {
    WP_ENTER(0x10d5600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d5610(wp::Cpu& c) {
    WP_ENTER(0x10d5610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5628u: goto R_010d5628;
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
    c.lr = 0x10d5628u;
    f_mr011_010d5640(c);
R_010d5628:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5640(wp::Cpu& c) {
    WP_ENTER(0x10d5640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d5650(wp::Cpu& c) {
    WP_ENTER(0x10d5650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d5370(c);
    return;
}

void f_mr011_010d5660(wp::Cpu& c) {
    WP_ENTER(0x10d5660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5678u: goto R_010d5678;
        case 0x10d5688u: goto R_010d5688;
        case 0x10d5690u: goto R_010d5690;
        case 0x10d569cu: goto R_010d569c;
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
    c.lr = 0x10d5678u;
    f_mr011_010d5650(c);
R_010d5678:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[4] + 0x4u;
    c.lr = 0x10d5688u;
    f_mr011_010d5610(c);
R_010d5688:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d5690u;
    f_800cb060(c);
R_010d5690:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d569cu;
    f_mr011_010d54f0(c);
R_010d569c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d56c0(wp::Cpu& c) {
    WP_ENTER(0x10d56c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d56d0(c);
    return;
}

void f_mr011_010d56d0(wp::Cpu& c) {
    WP_ENTER(0x10d56d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d56f4u: goto R_010d56f4;
        case 0x10d5704u: goto R_010d5704;
        case 0x10d5710u: goto R_010d5710;
        case 0x10d571cu: goto R_010d571c;
        case 0x10d5724u: goto R_010d5724;
        case 0x10d5734u: goto R_010d5734;
        case 0x10d5740u: goto R_010d5740;
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
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d56f4u;
    f_mr011_010d5770(c);
R_010d56f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d5708;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5704u;
    f_mr011_0108a4d0(c);
R_010d5704:
    goto L_010d5740;
L_010d5708:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d5710u;
    f_mr011_010d5790(c);
R_010d5710:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d571cu;
    f_mr011_010907d0(c);
R_010d571c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5724u;
    f_mr011_010d5760(c);
R_010d5724:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d5734u;
    f_mr011_0108dad0(c);
R_010d5734:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d5740u;
    f_mr011_0108e120(c);
L_010d5740:
R_010d5740:
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

void f_mr011_010d5760(wp::Cpu& c) {
    WP_ENTER(0x10d5760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d5770(wp::Cpu& c) {
    WP_ENTER(0x10d5770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d5790(wp::Cpu& c) {
    WP_ENTER(0x10d5790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x3500u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x38e0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3500u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x38e0u) & 0xFFFFu);
    f_mr011_010d2270(c);
    return;
}

void f_mr011_010d57b0(wp::Cpu& c) {
    WP_ENTER(0x10d57b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d57d4u: goto R_010d57d4;
        case 0x10d57e0u: goto R_010d57e0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34f0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34f0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d57d4u;
    f_mr011_0108de20(c);
R_010d57d4:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d57e0u;
    f_mr011_010d5800(c);
R_010d57e0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5800(wp::Cpu& c) {
    WP_ENTER(0x10d5800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5818u: goto R_010d5818;
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
    c.lr = 0x10d5818u;
    f_mr011_010d5830(c);
R_010d5818:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5830(wp::Cpu& c) {
    WP_ENTER(0x10d5830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d5840(wp::Cpu& c) {
    WP_ENTER(0x10d5840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5858u: goto R_010d5858;
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
    c.lr = 0x10d5858u;
    f_mr011_010d5870(c);
R_010d5858:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5870(wp::Cpu& c) {
    WP_ENTER(0x10d5870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d5880(wp::Cpu& c) {
    WP_ENTER(0x10d5880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d589cu: goto R_010d589c;
        case 0x10d58a8u: goto R_010d58a8;
        case 0x10d58b4u: goto R_010d58b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d589cu;
    f_mr011_010d57b0(c);
R_010d589c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d58a8u;
    f_mr011_010d58d0(c);
R_010d58a8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d58b4u;
    f_mr011_0108a590(c);
R_010d58b4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d58d0(wp::Cpu& c) {
    WP_ENTER(0x10d58d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d58e0u: goto R_010d58e0;
        case 0x10d58f0u: goto R_010d58f0;
        case 0x10d58f4u: goto R_010d58f4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d58e0u;
    f_mr011_010d5650(c);
R_010d58e0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[4] + 0x4u;
    c.lr = 0x10d58f0u;
    f_mr011_010d5610(c);
R_010d58f0:
    c.lr = 0x10d58f4u;
    f_mr011_010d5910(c);
R_010d58f4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5910(wp::Cpu& c) {
    WP_ENTER(0x10d5910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5928u: goto R_010d5928;
        case 0x10d5938u: goto R_010d5938;
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
    c.lr = 0x10d5928u;
    f_mr011_010d55b0(c);
R_010d5928:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d5940;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5938u;
    f_mr011_010d5600(c);
R_010d5938:
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    goto L_010d5944;
L_010d5940:
    c.r[3] = 0x0u;
L_010d5944:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5960(wp::Cpu& c) {
    WP_ENTER(0x10d5960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d597cu: goto R_010d597c;
        case 0x10d5988u: goto R_010d5988;
        case 0x10d5998u: goto R_010d5998;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d597cu;
    f_mr011_010d5a20(c);
R_010d597c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5988u;
    f_mr011_010d59b0(c);
R_010d5988:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d5998u;
    f_mr011_0108a4e0(c);
R_010d5998:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d59b0(wp::Cpu& c) {
    WP_ENTER(0x10d59b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d59c8u: goto R_010d59c8;
        case 0x10d59d8u: goto R_010d59d8;
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
    c.lr = 0x10d59c8u;
    f_mr011_010d5a10(c);
R_010d59c8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d59d8u;
    f_mr011_010d59f0(c);
R_010d59d8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d59f0(wp::Cpu& c) {
    WP_ENTER(0x10d59f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d5a04;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d5a04:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d5a10(wp::Cpu& c) {
    WP_ENTER(0x10d5a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d5760(c);
    return;
}

void f_mr011_010d5a20(wp::Cpu& c) {
    WP_ENTER(0x10d5a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5a44u: goto R_010d5a44;
        case 0x10d5a50u: goto R_010d5a50;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3500u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3500u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d5a44u;
    f_mr011_0108de20(c);
R_010d5a44:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5a50u;
    f_mr011_010d54f0(c);
R_010d5a50:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5a70(wp::Cpu& c) {
    WP_ENTER(0x10d5a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5a8cu: goto R_010d5a8c;
        case 0x10d5a98u: goto R_010d5a98;
        case 0x10d5aa4u: goto R_010d5aa4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d5a8cu;
    f_mr011_010d5a20(c);
R_010d5a8c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5a98u;
    f_mr011_010d5ac0(c);
R_010d5a98:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5aa4u;
    f_mr011_0108a590(c);
R_010d5aa4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5ac0(wp::Cpu& c) {
    WP_ENTER(0x10d5ac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5ad0u: goto R_010d5ad0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d5ad0u;
    f_mr011_010d5a10(c);
R_010d5ad0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5af0(wp::Cpu& c) {
    WP_ENTER(0x10d5af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5b18u: goto R_010d5b18;
        case 0x10d5b24u: goto R_010d5b24;
        case 0x10d5b50u: goto R_010d5b50;
        case 0x10d5b64u: goto R_010d5b64;
        case 0x10d5b78u: goto R_010d5b78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2ed00u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2ed00u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d5b18u;
    f_mr011_010d5a20(c);
R_010d5b18:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5b24u;
    f_mr011_010d5ba0(c);
R_010d5b24:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d5b40;
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010d5b54;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d5b68;
    goto L_010d5b7c;
L_010d5b40:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x394u;
    c.r[5] = 0x3u;
    c.lr = 0x10d5b50u;
    f_mr011_0108a4e0(c);
R_010d5b50:
    goto L_010d5b84;
L_010d5b54:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x398u;
    c.r[5] = 0x3u;
    c.lr = 0x10d5b64u;
    f_mr011_0108a4e0(c);
R_010d5b64:
    goto L_010d5b84;
L_010d5b68:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x39cu;
    c.r[5] = 0x6u;
    c.lr = 0x10d5b78u;
    f_mr011_0108a4e0(c);
R_010d5b78:
    goto L_010d5b84;
L_010d5b7c:
    c.r[3] = 0xffffffffu;
    goto L_010d5b88;
L_010d5b84:
    c.r[3] = 0x1u;
L_010d5b88:
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

void f_mr011_010d5ba0(wp::Cpu& c) {
    WP_ENTER(0x10d5ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5bb0u: goto R_010d5bb0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d5bb0u;
    f_mr011_010d5a10(c);
R_010d5bb0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5bd0(wp::Cpu& c) {
    WP_ENTER(0x10d5bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5becu: goto R_010d5bec;
        case 0x10d5bf8u: goto R_010d5bf8;
        case 0x10d5c04u: goto R_010d5c04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d5becu;
    f_mr011_010d5a20(c);
R_010d5bec:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5bf8u;
    f_mr011_010d5c20(c);
R_010d5bf8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5c04u;
    f_mr011_0108a590(c);
R_010d5c04:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5c20(wp::Cpu& c) {
    WP_ENTER(0x10d5c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5c30u: goto R_010d5c30;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d5c30u;
    f_mr011_010d5a10(c);
R_010d5c30:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5c50(wp::Cpu& c) {
    WP_ENTER(0x10d5c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5c78u: goto R_010d5c78;
        case 0x10d5c88u: goto R_010d5c88;
        case 0x10d5c90u: goto R_010d5c90;
        case 0x10d5ca0u: goto R_010d5ca0;
        case 0x10d5ca8u: goto R_010d5ca8;
        case 0x10d5cc0u: goto R_010d5cc0;
        case 0x10d5cccu: goto R_010d5ccc;
        case 0x10d5cd8u: goto R_010d5cd8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.lr = 0x10d5c78u;
    f_mr011_010d5a20(c);
R_010d5c78:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d5c88u;
    f_mr011_010d5d90(c);
R_010d5c88:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d5c90u;
    f_mr011_010d5c20(c);
R_010d5c90:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d5ca0u;
    f_mr011_0108a890(c);
R_010d5ca0:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d5ca8u;
    f_mr011_010d5d10(c);
R_010d5ca8:
    c.r[31] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    goto L_010d5ce0;
L_010d5cb4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10d5cc0u;
    f_mr011_0108a590(c);
R_010d5cc0:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10d5cccu;
    f_mr011_0108a590(c);
R_010d5ccc:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d5cd8u;
    f_mr011_0108e430(c);
R_010d5cd8:
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_010d5ce0:
    wp::compare_signed(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d5cb4;
    }
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010d5d10(wp::Cpu& c) {
    WP_ENTER(0x10d5d10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5d28u: goto R_010d5d28;
        case 0x10d5d38u: goto R_010d5d38;
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
    c.lr = 0x10d5d28u;
    f_mr011_010d5d70(c);
R_010d5d28:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d5d38u;
    f_mr011_010d5d50(c);
R_010d5d38:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5d50(wp::Cpu& c) {
    WP_ENTER(0x10d5d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d5d64;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d5d64:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d5d70(wp::Cpu& c) {
    WP_ENTER(0x10d5d70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    goto L_010d5d80;
L_010d5d80:
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d5d90(wp::Cpu& c) {
    WP_ENTER(0x10d5d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5da8u: goto R_010d5da8;
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
    c.lr = 0x10d5da8u;
    f_mr011_010d5dc0(c);
R_010d5da8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5dc0(wp::Cpu& c) {
    WP_ENTER(0x10d5dc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d5dd0(wp::Cpu& c) {
    WP_ENTER(0x10d5dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5df8u: goto R_010d5df8;
        case 0x10d5e08u: goto R_010d5e08;
        case 0x10d5e10u: goto R_010d5e10;
        case 0x10d5e20u: goto R_010d5e20;
        case 0x10d5e28u: goto R_010d5e28;
        case 0x10d5e40u: goto R_010d5e40;
        case 0x10d5e4cu: goto R_010d5e4c;
        case 0x10d5e58u: goto R_010d5e58;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.lr = 0x10d5df8u;
    f_mr011_010d5a20(c);
R_010d5df8:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d5e08u;
    f_mr011_010d5d90(c);
R_010d5e08:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d5e10u;
    f_mr011_010d5c20(c);
R_010d5e10:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d5e20u;
    f_mr011_0108a890(c);
R_010d5e20:
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x10d5e28u;
    f_mr011_010d5e90(c);
R_010d5e28:
    c.r[31] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    goto L_010d5e60;
L_010d5e34:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10d5e40u;
    f_mr011_0108a590(c);
R_010d5e40:
    ea = c.r[31] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10d5e4cu;
    f_mr011_0108a680(c);
R_010d5e4c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d5e58u;
    f_mr011_0108e430(c);
R_010d5e58:
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_010d5e60:
    wp::compare_signed(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d5e34;
    }
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010d5e90(wp::Cpu& c) {
    WP_ENTER(0x10d5e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5ea8u: goto R_010d5ea8;
        case 0x10d5eb8u: goto R_010d5eb8;
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
    c.lr = 0x10d5ea8u;
    f_mr011_010d5d70(c);
R_010d5ea8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d5eb8u;
    f_mr011_010d5ed0(c);
R_010d5eb8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5ed0(wp::Cpu& c) {
    WP_ENTER(0x10d5ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d5ee4;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d5ee4:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d5ef0(wp::Cpu& c) {
    WP_ENTER(0x10d5ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5f0cu: goto R_010d5f0c;
        case 0x10d5f18u: goto R_010d5f18;
        case 0x10d5f28u: goto R_010d5f28;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d5f0cu;
    f_mr011_010d5a20(c);
R_010d5f0c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5f18u;
    f_mr011_010d5f40(c);
R_010d5f18:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d5f28u;
    f_mr011_0108a4e0(c);
R_010d5f28:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5f40(wp::Cpu& c) {
    WP_ENTER(0x10d5f40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5f58u: goto R_010d5f58;
        case 0x10d5f68u: goto R_010d5f68;
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
    c.lr = 0x10d5f58u;
    f_mr011_010d5a10(c);
R_010d5f58:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d5f68u;
    f_mr011_010d59f0(c);
R_010d5f68:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d5f80(wp::Cpu& c) {
    WP_ENTER(0x10d5f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d5f9cu: goto R_010d5f9c;
        case 0x10d5fa8u: goto R_010d5fa8;
        case 0x10d5fb4u: goto R_010d5fb4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d5f9cu;
    f_mr011_010d5fe0(c);
R_010d5f9c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d5fa8u;
    f_mr011_010d5fd0(c);
R_010d5fa8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d5fb4u;
    f_mr011_0108a6f0(c);
R_010d5fb4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d5fd0(wp::Cpu& c) {
    WP_ENTER(0x10d5fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d5fe0(wp::Cpu& c) {
    WP_ENTER(0x10d5fe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6004u: goto R_010d6004;
        case 0x10d6010u: goto R_010d6010;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3470u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3470u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6004u;
    f_mr011_0108de20(c);
R_010d6004:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6010u;
    f_mr011_010d6030(c);
R_010d6010:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6030(wp::Cpu& c) {
    WP_ENTER(0x10d6030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6048u: goto R_010d6048;
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
    c.lr = 0x10d6048u;
    f_mr011_010d6060(c);
R_010d6048:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6060(wp::Cpu& c) {
    WP_ENTER(0x10d6060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d6070(wp::Cpu& c) {
    WP_ENTER(0x10d6070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d608cu: goto R_010d608c;
        case 0x10d6098u: goto R_010d6098;
        case 0x10d60a4u: goto R_010d60a4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d608cu;
    f_mr011_010d5fe0(c);
R_010d608c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6098u;
    f_mr011_010d60c0(c);
R_010d6098:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d60a4u;
    f_mr011_0108a600(c);
R_010d60a4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d60c0(wp::Cpu& c) {
    WP_ENTER(0x10d60c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d60dcu: goto R_010d60dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d60dcu;
    f_800d61a0(c);
R_010d60dc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d60f0(wp::Cpu& c) {
    WP_ENTER(0x10d60f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6104u: goto R_010d6104;
        case 0x10d6110u: goto R_010d6110;
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
    c.lr = 0x10d6104u;
    f_mr011_010d5fe0(c);
R_010d6104:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6110u;
    f_800d6310(c);
R_010d6110:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6130(wp::Cpu& c) {
    WP_ENTER(0x10d6130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d614cu: goto R_010d614c;
        case 0x10d6158u: goto R_010d6158;
        case 0x10d6164u: goto R_010d6164;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d614cu;
    f_mr011_010d5fe0(c);
R_010d614c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6158u;
    f_mr011_010d6180(c);
R_010d6158:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d6164u;
    f_mr011_0108a590(c);
R_010d6164:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6180(wp::Cpu& c) {
    WP_ENTER(0x10d6180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6190u: goto R_010d6190;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6190u;
    f_mr011_010d61b0(c);
R_010d6190:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x34u;
    c.r[3] = wp::rd16(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d61b0(wp::Cpu& c) {
    WP_ENTER(0x10d61b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d3ab0(c);
    return;
}

void f_mr011_010d61c0(wp::Cpu& c) {
    WP_ENTER(0x10d61c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d61dcu: goto R_010d61dc;
        case 0x10d61e8u: goto R_010d61e8;
        case 0x10d61f4u: goto R_010d61f4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d61dcu;
    f_mr011_010d6220(c);
R_010d61dc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d61e8u;
    f_mr011_010d6210(c);
R_010d61e8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d61f4u;
    f_mr011_0108a6f0(c);
R_010d61f4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6210(wp::Cpu& c) {
    WP_ENTER(0x10d6210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d6220(wp::Cpu& c) {
    WP_ENTER(0x10d6220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6244u: goto R_010d6244;
        case 0x10d6250u: goto R_010d6250;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34e8u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6244u;
    f_mr011_0108de20(c);
R_010d6244:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6250u;
    f_mr011_010d6270(c);
R_010d6250:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6270(wp::Cpu& c) {
    WP_ENTER(0x10d6270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6288u: goto R_010d6288;
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
    c.lr = 0x10d6288u;
    f_mr011_010d62a0(c);
R_010d6288:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d62a0(wp::Cpu& c) {
    WP_ENTER(0x10d62a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d62b0(wp::Cpu& c) {
    WP_ENTER(0x10d62b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d62ccu: goto R_010d62cc;
        case 0x10d62d8u: goto R_010d62d8;
        case 0x10d62e4u: goto R_010d62e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d62ccu;
    f_mr011_010d6220(c);
R_010d62cc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d62d8u;
    f_mr011_010d6300(c);
R_010d62d8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d62e4u;
    f_mr011_0108a590(c);
R_010d62e4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6300(wp::Cpu& c) {
    WP_ENTER(0x10d6300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6310u: goto R_010d6310;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6310u;
    f_mr011_010d6330(c);
R_010d6310:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6330(wp::Cpu& c) {
    WP_ENTER(0x10d6330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d2e70(c);
    return;
}

void f_mr011_010d6340(wp::Cpu& c) {
    WP_ENTER(0x10d6340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d635cu: goto R_010d635c;
        case 0x10d6368u: goto R_010d6368;
        case 0x10d6374u: goto R_010d6374;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d635cu;
    f_mr011_010d6220(c);
R_010d635c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6368u;
    f_mr011_010d6390(c);
R_010d6368:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d6374u;
    f_mr011_0108a590(c);
R_010d6374:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6390(wp::Cpu& c) {
    WP_ENTER(0x10d6390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d63a0u: goto R_010d63a0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d63a0u;
    f_mr011_010d6330(c);
R_010d63a0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d63c0(wp::Cpu& c) {
    WP_ENTER(0x10d63c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d63dcu: goto R_010d63dc;
        case 0x10d63e8u: goto R_010d63e8;
        case 0x10d63f8u: goto R_010d63f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d63dcu;
    f_mr011_010d6220(c);
R_010d63dc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d63e8u;
    f_mr011_010d6410(c);
R_010d63e8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d63f8u;
    f_mr011_0108a4e0(c);
R_010d63f8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6410(wp::Cpu& c) {
    WP_ENTER(0x10d6410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6428u: goto R_010d6428;
        case 0x10d6438u: goto R_010d6438;
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
    c.lr = 0x10d6428u;
    f_mr011_010d6330(c);
R_010d6428:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d6438u;
    f_mr011_010d6450(c);
R_010d6438:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6450(wp::Cpu& c) {
    WP_ENTER(0x10d6450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d6464;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d6464:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d6470(wp::Cpu& c) {
    WP_ENTER(0x10d6470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d648cu: goto R_010d648c;
        case 0x10d6498u: goto R_010d6498;
        case 0x10d64a8u: goto R_010d64a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d648cu;
    f_mr011_010d6220(c);
R_010d648c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6498u;
    f_800d14d0(c);
R_010d6498:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d64a8u;
    f_mr011_010d4370(c);
R_010d64a8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d64c0(wp::Cpu& c) {
    WP_ENTER(0x10d64c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d64dcu: goto R_010d64dc;
        case 0x10d64e8u: goto R_010d64e8;
        case 0x10d64f8u: goto R_010d64f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d64dcu;
    f_mr011_010d6220(c);
R_010d64dc:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d64e8u;
    f_mr011_010d6510(c);
R_010d64e8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d64f8u;
    f_mr011_0108a4e0(c);
R_010d64f8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6510(wp::Cpu& c) {
    WP_ENTER(0x10d6510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6528u: goto R_010d6528;
        case 0x10d6538u: goto R_010d6538;
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
    c.lr = 0x10d6528u;
    f_mr011_010d6330(c);
R_010d6528:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d6538u;
    f_mr011_010d6450(c);
R_010d6538:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6550(wp::Cpu& c) {
    WP_ENTER(0x10d6550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d656cu: goto R_010d656c;
        case 0x10d6578u: goto R_010d6578;
        case 0x10d6584u: goto R_010d6584;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d656cu;
    f_mr011_010d6220(c);
R_010d656c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6578u;
    f_mr011_010d65a0(c);
R_010d6578:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d6584u;
    f_mr011_0108a600(c);
R_010d6584:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d65a0(wp::Cpu& c) {
    WP_ENTER(0x10d65a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d65b0u: goto R_010d65b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d65b0u;
    f_mr011_010d6330(c);
R_010d65b0:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] & 0x1u;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d65d0(wp::Cpu& c) {
    WP_ENTER(0x10d65d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d65f8u: goto R_010d65f8;
        case 0x10d6608u: goto R_010d6608;
        case 0x10d6610u: goto R_010d6610;
        case 0x10d6620u: goto R_010d6620;
        case 0x10d6628u: goto R_010d6628;
        case 0x10d6654u: goto R_010d6654;
        case 0x10d6684u: goto R_010d6684;
        case 0x10d6698u: goto R_010d6698;
        case 0x10d66acu: goto R_010d66ac;
        case 0x10d66c0u: goto R_010d66c0;
        case 0x10d66d0u: goto R_010d66d0;
        case 0x10d66f8u: goto R_010d66f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2ed00u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2ed00u) & 0xFFFFu);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d65f8u;
    f_mr011_010d6220(c);
R_010d65f8:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x1cu;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d6608u;
    f_mr011_010d6900(c);
R_010d6608:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d6610u;
    f_mr011_0108a7c0(c);
R_010d6610:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x3ecu;
    c.r[5] = 0x6u;
    c.lr = 0x10d6620u;
    f_mr011_0108a4e0(c);
R_010d6620:
    c.r[3] = c.r[1] + 0x1cu;
    c.lr = 0x10d6628u;
    f_mr011_010d65a0(c);
R_010d6628:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d66d4;
    c.r[3] = c.r[1] + 0x1cu;
    c.r[4] = c.r[1] + 0x28u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[1] + 0xau;
    c.r[7] = c.r[1] + 0x18u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[9] = c.r[1] + 0x20u;
    c.r[10] = c.r[1] + 0x8u;
    c.lr = 0x10d6654u;
    f_800d15d0(c);
R_010d6654:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (wp::cr_get(c, 2)) goto L_010d6674;
    wp::compare_signed(c, 0, c.r[0], 0x9u);
    if (wp::cr_get(c, 2)) goto L_010d6688;
    wp::compare_signed(c, 0, c.r[0], 0xau);
    if (wp::cr_get(c, 2)) goto L_010d669c;
    goto L_010d66b0;
L_010d6674:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x3f4u;
    c.r[5] = 0x8u;
    c.lr = 0x10d6684u;
    f_mr011_0108a4e0(c);
R_010d6684:
    goto L_010d66c0;
L_010d6688:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x400u;
    c.r[5] = 0x8u;
    c.lr = 0x10d6698u;
    f_mr011_0108a4e0(c);
R_010d6698:
    goto L_010d66c0;
L_010d669c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x40cu;
    c.r[5] = 0xbu;
    c.lr = 0x10d66acu;
    f_mr011_0108a4e0(c);
R_010d66ac:
    goto L_010d66c0;
L_010d66b0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x418u;
    c.r[5] = 0x7u;
    c.lr = 0x10d66c0u;
    f_mr011_0108a4e0(c);
L_010d66c0:
R_010d66c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d66d0u;
    f_mr011_0108e190(c);
R_010d66d0:
    f_mr011_010d67dc(c);
    return;
L_010d66d4:
    c.r[3] = c.r[1] + 0x1cu;
    c.r[4] = c.r[1] + 0x28u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[1] + 0xau;
    c.r[7] = c.r[1] + 0x14u;
    c.r[8] = c.r[1] + 0x24u;
    c.r[9] = c.r[1] + 0x20u;
    c.r[10] = c.r[1] + 0x8u;
    c.lr = 0x10d66f8u;
    f_800d1510(c);
R_010d66f8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xeu);
    if (wp::cr_get(c, 1)) {
    f_mr011_010d67bc(c);
    return;
    }
    c.r[3] = ((((g_mr011_bases[5] + 0x2f1c0u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mr011_bases[5] + 0x2f1c0u) & 0xFFFFu);
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr - g_mr011_bases[1]) {
    case 0xd671cu: f_mr011_010d671c(c); return;
    case 0xd6730u: f_mr011_010d6730(c); return;
    case 0xd6744u: f_mr011_010d6744(c); return;
    case 0xd6758u: f_mr011_010d6758(c); return;
    case 0xd676cu: f_mr011_010d676c(c); return;
    case 0xd6780u: f_mr011_010d6780(c); return;
    case 0xd6794u: f_mr011_010d6794(c); return;
    case 0xd67a8u: f_mr011_010d67a8(c); return;
    case 0xd67bcu: f_mr011_010d67bc(c); return;
    default: wp::unresolved_jump(c, c.ctr);
    }
}

void f_mr011_010d671c(wp::Cpu& c) {
    WP_ENTER(0x10d671cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d672cu: goto R_010d672c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x420u;
    c.r[5] = 0x8u;
    c.lr = 0x10d672cu;
    f_mr011_0108a4e0(c);
R_010d672c:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d6730(wp::Cpu& c) {
    WP_ENTER(0x10d6730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6740u: goto R_010d6740;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x42cu;
    c.r[5] = 0x9u;
    c.lr = 0x10d6740u;
    f_mr011_0108a4e0(c);
R_010d6740:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d6744(wp::Cpu& c) {
    WP_ENTER(0x10d6744u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6754u: goto R_010d6754;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x438u;
    c.r[5] = 0x8u;
    c.lr = 0x10d6754u;
    f_mr011_0108a4e0(c);
R_010d6754:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d6758(wp::Cpu& c) {
    WP_ENTER(0x10d6758u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6768u: goto R_010d6768;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x444u;
    c.r[5] = 0x9u;
    c.lr = 0x10d6768u;
    f_mr011_0108a4e0(c);
R_010d6768:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d676c(wp::Cpu& c) {
    WP_ENTER(0x10d676cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d677cu: goto R_010d677c;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x450u;
    c.r[5] = 0xcu;
    c.lr = 0x10d677cu;
    f_mr011_0108a4e0(c);
R_010d677c:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d6780(wp::Cpu& c) {
    WP_ENTER(0x10d6780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6790u: goto R_010d6790;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x460u;
    c.r[5] = 0xcu;
    c.lr = 0x10d6790u;
    f_mr011_0108a4e0(c);
R_010d6790:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d6794(wp::Cpu& c) {
    WP_ENTER(0x10d6794u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d67a4u: goto R_010d67a4;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x470u;
    c.r[5] = 0xbu;
    c.lr = 0x10d67a4u;
    f_mr011_0108a4e0(c);
R_010d67a4:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d67a8(wp::Cpu& c) {
    WP_ENTER(0x10d67a8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d67b8u: goto R_010d67b8;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x47cu;
    c.r[5] = 0xau;
    c.lr = 0x10d67b8u;
    f_mr011_0108a4e0(c);
R_010d67b8:
    f_mr011_010d67cc(c);
    return;
}

void f_mr011_010d67bc(wp::Cpu& c) {
    WP_ENTER(0x10d67bcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d67ccu: goto R_010d67cc;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x418u;
    c.r[5] = 0x7u;
    c.lr = 0x10d67ccu;
    f_mr011_0108a4e0(c);
R_010d67cc:
    f_mr011_010d67cc(c);
}

void f_mr011_010d67cc(wp::Cpu& c) {
    WP_ENTER(0x10d67ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d67dcu: goto R_010d67dc;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d67dcu;
    f_mr011_0108e190(c);
R_010d67dc:
    f_mr011_010d67dc(c);
}

void f_mr011_010d67dc(wp::Cpu& c) {
    WP_ENTER(0x10d67dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d67ecu: goto R_010d67ec;
        case 0x10d67f8u: goto R_010d67f8;
        case 0x10d6808u: goto R_010d6808;
        case 0x10d6818u: goto R_010d6818;
        case 0x10d6824u: goto R_010d6824;
        case 0x10d6834u: goto R_010d6834;
        case 0x10d6844u: goto R_010d6844;
        case 0x10d6850u: goto R_010d6850;
        case 0x10d6860u: goto R_010d6860;
        case 0x10d6870u: goto R_010d6870;
        case 0x10d687cu: goto R_010d687c;
        case 0x10d688cu: goto R_010d688c;
        case 0x10d689cu: goto R_010d689c;
        case 0x10d68a8u: goto R_010d68a8;
        case 0x10d68b8u: goto R_010d68b8;
        case 0x10d68c8u: goto R_010d68c8;
        case 0x10d68d4u: goto R_010d68d4;
        case 0x10d68e4u: goto R_010d68e4;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x488u;
    c.r[5] = 0x9u;
    c.lr = 0x10d67ecu;
    f_mr011_0108a4e0(c);
R_010d67ec:
    ea = c.r[1] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d67f8u;
    f_mr011_0108a6f0(c);
R_010d67f8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d6808u;
    f_mr011_0108e190(c);
R_010d6808:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x494u;
    c.r[5] = 0x5u;
    c.lr = 0x10d6818u;
    f_mr011_0108a4e0(c);
R_010d6818:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd16(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d6824u;
    f_mr011_0108a590(c);
R_010d6824:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d6834u;
    f_mr011_0108e190(c);
R_010d6834:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x49cu;
    c.r[5] = 0x6u;
    c.lr = 0x10d6844u;
    f_mr011_0108a4e0(c);
R_010d6844:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd16(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d6850u;
    f_mr011_0108a590(c);
R_010d6850:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d6860u;
    f_mr011_0108e190(c);
R_010d6860:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x4a8u;
    c.r[5] = 0x7u;
    c.lr = 0x10d6870u;
    f_mr011_0108a4e0(c);
R_010d6870:
    ea = c.r[1] + 0x24u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d687cu;
    f_mr011_0108a680(c);
R_010d687c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d688cu;
    f_mr011_0108e190(c);
R_010d688c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x4b0u;
    c.r[5] = 0x7u;
    c.lr = 0x10d689cu;
    f_mr011_0108a4e0(c);
R_010d689c:
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d68a8u;
    f_mr011_0108a680(c);
R_010d68a8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d68b8u;
    f_mr011_0108e190(c);
R_010d68b8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x4b8u;
    c.r[5] = 0x6u;
    c.lr = 0x10d68c8u;
    f_mr011_0108a4e0(c);
R_010d68c8:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d68d4u;
    f_mr011_0108a600(c);
R_010d68d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d68e4u;
    f_mr011_0108e190(c);
R_010d68e4:
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x38u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mr011_010d6900(wp::Cpu& c) {
    WP_ENTER(0x10d6900u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6918u: goto R_010d6918;
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
    c.lr = 0x10d6918u;
    f_mr011_010d6930(c);
R_010d6918:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6930(wp::Cpu& c) {
    WP_ENTER(0x10d6930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d6940(wp::Cpu& c) {
    WP_ENTER(0x10d6940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d695cu: goto R_010d695c;
        case 0x10d6968u: goto R_010d6968;
        case 0x10d6978u: goto R_010d6978;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d695cu;
    f_mr011_010d6220(c);
R_010d695c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6968u;
    f_800d14f0(c);
R_010d6968:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d6978u;
    f_mr011_010d52d0(c);
R_010d6978:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6990(wp::Cpu& c) {
    WP_ENTER(0x10d6990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d69acu: goto R_010d69ac;
        case 0x10d69b8u: goto R_010d69b8;
        case 0x10d69c4u: goto R_010d69c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d69acu;
    f_mr011_010d69f0(c);
R_010d69ac:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d69b8u;
    f_mr011_010d69e0(c);
R_010d69b8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d69c4u;
    f_mr011_0108a6f0(c);
R_010d69c4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d69e0(wp::Cpu& c) {
    WP_ENTER(0x10d69e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d69f0(wp::Cpu& c) {
    WP_ENTER(0x10d69f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6a14u: goto R_010d6a14;
        case 0x10d6a20u: goto R_010d6a20;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34c0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6a14u;
    f_mr011_0108de20(c);
R_010d6a14:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6a20u;
    f_mr011_010d6a40(c);
R_010d6a20:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6a40(wp::Cpu& c) {
    WP_ENTER(0x10d6a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6a58u: goto R_010d6a58;
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
    c.lr = 0x10d6a58u;
    f_mr011_010d6a70(c);
R_010d6a58:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6a70(wp::Cpu& c) {
    WP_ENTER(0x10d6a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d6a80(wp::Cpu& c) {
    WP_ENTER(0x10d6a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6a9cu: goto R_010d6a9c;
        case 0x10d6aa8u: goto R_010d6aa8;
        case 0x10d6ab8u: goto R_010d6ab8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d6a9cu;
    f_mr011_010d69f0(c);
R_010d6a9c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6aa8u;
    f_800d0da0(c);
R_010d6aa8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10d6ab8u;
    f_mr011_010d52d0(c);
R_010d6ab8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6ad0(wp::Cpu& c) {
    WP_ENTER(0x10d6ad0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6aecu: goto R_010d6aec;
        case 0x10d6af8u: goto R_010d6af8;
        case 0x10d6b08u: goto R_010d6b08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d6aecu;
    f_mr011_010d69f0(c);
R_010d6aec:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6af8u;
    f_mr011_010d42b0(c);
R_010d6af8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d6b08u;
    f_mr011_0108a4e0(c);
R_010d6b08:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6b20(wp::Cpu& c) {
    WP_ENTER(0x10d6b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6b3cu: goto R_010d6b3c;
        case 0x10d6b48u: goto R_010d6b48;
        case 0x10d6b54u: goto R_010d6b54;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d6b3cu;
    f_mr011_010d69f0(c);
R_010d6b3c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6b48u;
    f_mr011_010d6b70(c);
R_010d6b48:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d6b54u;
    f_mr011_0108a590(c);
R_010d6b54:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6b70(wp::Cpu& c) {
    WP_ENTER(0x10d6b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6b80u: goto R_010d6b80;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6b80u;
    f_mr011_010d4310(c);
R_010d6b80:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6ba0(wp::Cpu& c) {
    WP_ENTER(0x10d6ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6bbcu: goto R_010d6bbc;
        case 0x10d6bd0u: goto R_010d6bd0;
        case 0x10d6be0u: goto R_010d6be0;
        case 0x10d6becu: goto R_010d6bec;
        case 0x10d6bfcu: goto R_010d6bfc;
        case 0x10d6c0cu: goto R_010d6c0c;
        case 0x10d6c14u: goto R_010d6c14;
        case 0x10d6c24u: goto R_010d6c24;
        case 0x10d6c2cu: goto R_010d6c2c;
        case 0x10d6c44u: goto R_010d6c44;
        case 0x10d6c54u: goto R_010d6c54;
        case 0x10d6c7cu: goto R_010d6c7c;
        case 0x10d6ca8u: goto R_010d6ca8;
        case 0x10d6cb4u: goto R_010d6cb4;
        case 0x10d6d00u: goto R_010d6d00;
        case 0x10d6d0cu: goto R_010d6d0c;
        case 0x10d6d30u: goto R_010d6d30;
        case 0x10d6d38u: goto R_010d6d38;
        case 0x10d6d44u: goto R_010d6d44;
        case 0x10d6d50u: goto R_010d6d50;
        case 0x10d6d5cu: goto R_010d6d5c;
        case 0x10d6d68u: goto R_010d6d68;
        case 0x10d6d74u: goto R_010d6d74;
        case 0x10d6d9cu: goto R_010d6d9c;
        case 0x10d6da4u: goto R_010d6da4;
        case 0x10d6db8u: goto R_010d6db8;
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
    c.lr = 0x10d6bbcu;
    f_801c83b8(c);
R_010d6bbc:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10d6bd0u;
    f_mr011_010d69f0(c);
R_010d6bd0:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x34u;
    c.r[4] = c.r[1] + 0x18u;
    c.lr = 0x10d6be0u;
    f_mr011_010d6e80(c);
R_010d6be0:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x10d6becu;
    f_mr011_010d6220(c);
R_010d6bec:
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x30u;
    c.r[4] = c.r[1] + 0x14u;
    c.lr = 0x10d6bfcu;
    f_mr011_010d6900(c);
R_010d6bfc:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x38u;
    c.r[4] = 0x3u;
    c.lr = 0x10d6c0cu;
    f_mr011_0108cf80(c);
R_010d6c0c:
    c.r[3] = c.r[1] + 0x34u;
    c.lr = 0x10d6c14u;
    f_mr011_010d6dd0(c);
R_010d6c14:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x2cu;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10d6c24u;
    f_mr011_010d6ec0(c);
R_010d6c24:
    c.r[3] = c.r[1] + 0x2cu;
    c.lr = 0x10d6c2cu;
    f_mr011_010d6f00(c);
R_010d6c2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d6c4c;
    c.r[4] = ((((g_mr011_bases[5] + 0x2f240u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f240u) & 0xFFFFu);
    c.lr = 0x10d6c44u;
    f_mr011_0108f4f0(c);
R_010d6c44:
    c.r[3] = 0xffffffffu;
    goto L_010d6da8;
L_010d6c4c:
    c.r[3] = c.r[1] + 0x2cu;
    c.lr = 0x10d6c54u;
    f_mr011_010d6e60(c);
R_010d6c54:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::slw(c.r[4], c.r[0]);
    c.r[0] = c.r[3] & c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d6c84;
    c.r[4] = ((((g_mr011_bases[5] + 0x2f254u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f254u) & 0xFFFFu);
    c.lr = 0x10d6c7cu;
    f_mr011_0108f4f0(c);
R_010d6c7c:
    c.r[3] = 0xffffffffu;
    goto L_010d6da8;
L_010d6c84:
    c.r[3] = c.r[1] + 0x30u;
    c.r[4] = c.r[1] + 0x28u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[1] + 0xau;
    c.r[7] = c.r[1] + 0x24u;
    c.r[8] = c.r[1] + 0x20u;
    c.r[9] = c.r[1] + 0x1cu;
    c.r[10] = c.r[1] + 0x8u;
    c.lr = 0x10d6ca8u;
    f_800d1510(c);
R_010d6ca8:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x2cu;
    c.lr = 0x10d6cb4u;
    f_800cf240(c);
R_010d6cb4:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10d6d00u;
    f_801521c0(c);
R_010d6d00:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d0cu;
    f_801521b0(c);
R_010d6d0c:
    ea = c.r[1] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[8] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0xau;
    c.r[6] = wp::rd16(ea);
    c.r[9] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x24u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[10] = wp::rd8(ea);
    c.lr = 0x10d6d30u;
    f_80151d00(c);
R_010d6d30:
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d38u;
    f_80152360(c);
R_010d6d38:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d44u;
    f_80152340(c);
R_010d6d44:
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d50u;
    f_80152330(c);
R_010d6d50:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d5cu;
    f_801522f0(c);
R_010d6d5c:
    c.f[31] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d68u;
    f_801522e0(c);
R_010d6d68:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10d6d74u;
    f_801522c0(c);
R_010d6d74:
    c.f[3] = c.f[31];
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x20u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x1cu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = c.r[31] | c.r[31];
    c.r[8] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] & 0xffu;
    c.r[7] = c.r[29] & 0xffu;
    c.lr = 0x10d6d9cu;
    f_80151f60(c);
R_010d6d9c:
    c.r[3] = c.r[1] + 0x2cu;
    c.lr = 0x10d6da4u;
    f_mr011_010d6e70(c);
R_010d6da4:
    c.r[3] = 0x0u;
L_010d6da8:
    c.r[11] = c.r[1] + 0x80u;
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10d6db8u;
    f_801c8404(c);
R_010d6db8:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_mr011_010d6dd0(wp::Cpu& c) {
    WP_ENTER(0x10d6dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6de0u: goto R_010d6de0;
        case 0x10d6df0u: goto R_010d6df0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6de0u;
    f_mr011_010d6e50(c);
R_010d6de0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[4] + 0x40u;
    c.lr = 0x10d6df0u;
    f_mr011_010d6e10(c);
R_010d6df0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6e10(wp::Cpu& c) {
    WP_ENTER(0x10d6e10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6e28u: goto R_010d6e28;
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
    c.lr = 0x10d6e28u;
    f_mr011_010d6e40(c);
R_010d6e28:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6e40(wp::Cpu& c) {
    WP_ENTER(0x10d6e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d6e50(wp::Cpu& c) {
    WP_ENTER(0x10d6e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d69e0(c);
    return;
}

void f_mr011_010d6e60(wp::Cpu& c) {
    WP_ENTER(0x10d6e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d6e70(wp::Cpu& c) {
    WP_ENTER(0x10d6e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mr011_010d6e80(wp::Cpu& c) {
    WP_ENTER(0x10d6e80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6e98u: goto R_010d6e98;
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
    c.lr = 0x10d6e98u;
    f_mr011_010d6eb0(c);
R_010d6e98:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6eb0(wp::Cpu& c) {
    WP_ENTER(0x10d6eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d6ec0(wp::Cpu& c) {
    WP_ENTER(0x10d6ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6ed8u: goto R_010d6ed8;
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
    c.lr = 0x10d6ed8u;
    f_mr011_010d6ef0(c);
R_010d6ed8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6ef0(wp::Cpu& c) {
    WP_ENTER(0x10d6ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mr011_010d6f00(wp::Cpu& c) {
    WP_ENTER(0x10d6f00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_mr011_010d6f20(wp::Cpu& c) {
    WP_ENTER(0x10d6f20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6f3cu: goto R_010d6f3c;
        case 0x10d6f48u: goto R_010d6f48;
        case 0x10d6f54u: goto R_010d6f54;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d6f3cu;
    f_mr011_010d6f80(c);
R_010d6f3c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6f48u;
    f_mr011_010d6f70(c);
R_010d6f48:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d6f54u;
    f_mr011_0108a6f0(c);
R_010d6f54:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d6f70(wp::Cpu& c) {
    WP_ENTER(0x10d6f70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mr011_010d6f80(wp::Cpu& c) {
    WP_ENTER(0x10d6f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6fa4u: goto R_010d6fa4;
        case 0x10d6fb0u: goto R_010d6fb0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x34e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x34e0u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d6fa4u;
    f_mr011_0108de20(c);
R_010d6fa4:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d6fb0u;
    f_mr011_010d6fd0(c);
R_010d6fb0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d6fd0(wp::Cpu& c) {
    WP_ENTER(0x10d6fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d6fe8u: goto R_010d6fe8;
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
    c.lr = 0x10d6fe8u;
    f_mr011_010d7000(c);
R_010d6fe8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d7000(wp::Cpu& c) {
    WP_ENTER(0x10d7000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mr011_010d7010(wp::Cpu& c) {
    WP_ENTER(0x10d7010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d702cu: goto R_010d702c;
        case 0x10d7038u: goto R_010d7038;
        case 0x10d7048u: goto R_010d7048;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d702cu;
    f_mr011_010d6f80(c);
R_010d702c:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d7038u;
    f_mr011_010d7060(c);
R_010d7038:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7048u;
    f_mr011_0108a4e0(c);
R_010d7048:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7060(wp::Cpu& c) {
    WP_ENTER(0x10d7060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7078u: goto R_010d7078;
        case 0x10d7088u: goto R_010d7088;
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
    c.lr = 0x10d7078u;
    f_mr011_010d70c0(c);
R_010d7078:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x38u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d7088u;
    f_mr011_010d70a0(c);
R_010d7088:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d70a0(wp::Cpu& c) {
    WP_ENTER(0x10d70a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_010d70b4;
    c.r[3] = c.r[0] + c.r[4];
    return;
L_010d70b4:
    c.r[3] = 0x0u;
    return;
}

void f_mr011_010d70c0(wp::Cpu& c) {
    WP_ENTER(0x10d70c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d4710(c);
    return;
}

void f_mr011_010d70d0(wp::Cpu& c) {
    WP_ENTER(0x10d70d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d70ecu: goto R_010d70ec;
        case 0x10d70f8u: goto R_010d70f8;
        case 0x10d7104u: goto R_010d7104;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d70ecu;
    f_mr011_010d6f80(c);
R_010d70ec:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d70f8u;
    f_mr011_010d7120(c);
R_010d70f8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d7104u;
    f_mr011_0108a590(c);
R_010d7104:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7120(wp::Cpu& c) {
    WP_ENTER(0x10d7120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7130u: goto R_010d7130;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7130u;
    f_mr011_010d70c0(c);
R_010d7130:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d7150(wp::Cpu& c) {
    WP_ENTER(0x10d7150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7160u: goto R_010d7160;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7160u;
    f_mr011_010d7180(c);
R_010d7160:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d7180(wp::Cpu& c) {
    WP_ENTER(0x10d7180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7198u: goto R_010d7198;
        case 0x10d71a0u: goto R_010d71a0;
        case 0x10d71b0u: goto R_010d71b0;
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
    c.lr = 0x10d7198u;
    f_mr011_010d71d0(c);
R_010d7198:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d71a0u;
    f_mr011_010d4440(c);
R_010d71a0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d71b0u;
    f_mr011_0108e190(c);
R_010d71b0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d71d0(wp::Cpu& c) {
    WP_ENTER(0x10d71d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mr011_bases[4] + 0x34a8u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x7u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x34a8u) & 0xFFFFu);
    f_mr011_0108a4e0(c);
    return;
}

void f_mr011_010d71e0(wp::Cpu& c) {
    WP_ENTER(0x10d71e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_mr011_010d2bd0(c);
    return;
}

void f_mr011_010d71f0(wp::Cpu& c) {
    WP_ENTER(0x10d71f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7224u: goto R_010d7224;
        case 0x10d7240u: goto R_010d7240;
        case 0x10d7250u: goto R_010d7250;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3500u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3500u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7224u;
    f_mr011_0108de20(c);
R_010d7224:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3500u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7240u;
    f_801cf168(c);
R_010d7240:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7250u;
    f_mr011_0108a4e0(c);
R_010d7250:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7270(wp::Cpu& c) {
    WP_ENTER(0x10d7270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d72a4u: goto R_010d72a4;
        case 0x10d72c0u: goto R_010d72c0;
        case 0x10d72d0u: goto R_010d72d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34f0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34f0u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d72a4u;
    f_mr011_0108de20(c);
R_010d72a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34f0u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d72c0u;
    f_801cf168(c);
R_010d72c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d72d0u;
    f_mr011_0108a4e0(c);
R_010d72d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d72f0(wp::Cpu& c) {
    WP_ENTER(0x10d72f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7324u: goto R_010d7324;
        case 0x10d7340u: goto R_010d7340;
        case 0x10d7350u: goto R_010d7350;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34e0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34e0u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7324u;
    f_mr011_0108de20(c);
R_010d7324:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34e0u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7340u;
    f_801cf168(c);
R_010d7340:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7350u;
    f_mr011_0108a4e0(c);
R_010d7350:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7370(wp::Cpu& c) {
    WP_ENTER(0x10d7370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d73a4u: goto R_010d73a4;
        case 0x10d73c0u: goto R_010d73c0;
        case 0x10d73d0u: goto R_010d73d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34c0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34c0u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d73a4u;
    f_mr011_0108de20(c);
R_010d73a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34c0u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d73c0u;
    f_801cf168(c);
R_010d73c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d73d0u;
    f_mr011_0108a4e0(c);
R_010d73d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d73f0(wp::Cpu& c) {
    WP_ENTER(0x10d73f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7424u: goto R_010d7424;
        case 0x10d7440u: goto R_010d7440;
        case 0x10d7450u: goto R_010d7450;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34d0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34d0u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7424u;
    f_mr011_0108de20(c);
R_010d7424:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34d0u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7440u;
    f_801cf168(c);
R_010d7440:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7450u;
    f_mr011_0108a4e0(c);
R_010d7450:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7470(wp::Cpu& c) {
    WP_ENTER(0x10d7470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d74a4u: goto R_010d74a4;
        case 0x10d74c0u: goto R_010d74c0;
        case 0x10d74d0u: goto R_010d74d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34a8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34a8u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d74a4u;
    f_mr011_0108de20(c);
R_010d74a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34a8u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d74c0u;
    f_801cf168(c);
R_010d74c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d74d0u;
    f_mr011_0108a4e0(c);
R_010d74d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d74f0(wp::Cpu& c) {
    WP_ENTER(0x10d74f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7524u: goto R_010d7524;
        case 0x10d7540u: goto R_010d7540;
        case 0x10d7550u: goto R_010d7550;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3470u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3470u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7524u;
    f_mr011_0108de20(c);
R_010d7524:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3470u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7540u;
    f_801cf168(c);
R_010d7540:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7550u;
    f_mr011_0108a4e0(c);
R_010d7550:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7570(wp::Cpu& c) {
    WP_ENTER(0x10d7570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d75a4u: goto R_010d75a4;
        case 0x10d75c0u: goto R_010d75c0;
        case 0x10d75d0u: goto R_010d75d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x348cu) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x348cu) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d75a4u;
    f_mr011_0108de20(c);
R_010d75a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x348cu) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d75c0u;
    f_801cf168(c);
R_010d75c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d75d0u;
    f_mr011_0108a4e0(c);
R_010d75d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d75f0(wp::Cpu& c) {
    WP_ENTER(0x10d75f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7624u: goto R_010d7624;
        case 0x10d7640u: goto R_010d7640;
        case 0x10d7650u: goto R_010d7650;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x347cu) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x347cu) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7624u;
    f_mr011_0108de20(c);
R_010d7624:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x347cu) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7640u;
    f_801cf168(c);
R_010d7640:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7650u;
    f_mr011_0108a4e0(c);
R_010d7650:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7670(wp::Cpu& c) {
    WP_ENTER(0x10d7670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d76a4u: goto R_010d76a4;
        case 0x10d76c0u: goto R_010d76c0;
        case 0x10d76d0u: goto R_010d76d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3464u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3464u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d76a4u;
    f_mr011_0108de20(c);
R_010d76a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3464u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d76c0u;
    f_801cf168(c);
R_010d76c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d76d0u;
    f_mr011_0108a4e0(c);
R_010d76d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d76f0(wp::Cpu& c) {
    WP_ENTER(0x10d76f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7724u: goto R_010d7724;
        case 0x10d7740u: goto R_010d7740;
        case 0x10d7750u: goto R_010d7750;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x349cu) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x349cu) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7724u;
    f_mr011_0108de20(c);
R_010d7724:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x349cu) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7740u;
    f_801cf168(c);
R_010d7740:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7750u;
    f_mr011_0108a4e0(c);
R_010d7750:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7770(wp::Cpu& c) {
    WP_ENTER(0x10d7770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d77a4u: goto R_010d77a4;
        case 0x10d77c0u: goto R_010d77c0;
        case 0x10d77d0u: goto R_010d77d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3458u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3458u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d77a4u;
    f_mr011_0108de20(c);
R_010d77a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3458u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d77c0u;
    f_801cf168(c);
R_010d77c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d77d0u;
    f_mr011_0108a4e0(c);
R_010d77d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d77f0(wp::Cpu& c) {
    WP_ENTER(0x10d77f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7824u: goto R_010d7824;
        case 0x10d7840u: goto R_010d7840;
        case 0x10d7850u: goto R_010d7850;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34d8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34d8u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7824u;
    f_mr011_0108de20(c);
R_010d7824:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34d8u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7840u;
    f_801cf168(c);
R_010d7840:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7850u;
    f_mr011_0108a4e0(c);
R_010d7850:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7870(wp::Cpu& c) {
    WP_ENTER(0x10d7870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d78a4u: goto R_010d78a4;
        case 0x10d78c0u: goto R_010d78c0;
        case 0x10d78d0u: goto R_010d78d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34e8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34e8u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d78a4u;
    f_mr011_0108de20(c);
R_010d78a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34e8u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d78c0u;
    f_801cf168(c);
R_010d78c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d78d0u;
    f_mr011_0108a4e0(c);
R_010d78d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d78f0(wp::Cpu& c) {
    WP_ENTER(0x10d78f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7924u: goto R_010d7924;
        case 0x10d7940u: goto R_010d7940;
        case 0x10d7950u: goto R_010d7950;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34c8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34c8u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7924u;
    f_mr011_0108de20(c);
R_010d7924:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34c8u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d7940u;
    f_801cf168(c);
R_010d7940:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7950u;
    f_mr011_0108a4e0(c);
R_010d7950:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d7970(wp::Cpu& c) {
    WP_ENTER(0x10d7970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d79a4u: goto R_010d79a4;
        case 0x10d79c0u: goto R_010d79c0;
        case 0x10d79d0u: goto R_010d79d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x34b0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34b0u) & 0xFFFFu);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d79a4u;
    f_mr011_0108de20(c);
R_010d79a4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f28cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x34b0u) & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f28cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d79c0u;
    f_801cf168(c);
R_010d79c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d79d0u;
    f_mr011_0108a4e0(c);
R_010d79d0:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x118u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010d79f0(wp::Cpu& c) {
    WP_ENTER(0x10d79f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7a1cu: goto R_010d7a1c;
        case 0x10d7a24u: goto R_010d7a24;
        case 0x10d7a34u: goto R_010d7a34;
        case 0x10d7a40u: goto R_010d7a40;
        case 0x10d7a54u: goto R_010d7a54;
        case 0x10d7a64u: goto R_010d7a64;
        case 0x10d7a74u: goto R_010d7a74;
        case 0x10d7ac4u: goto R_010d7ac4;
        case 0x10d7ad4u: goto R_010d7ad4;
        case 0x10d7ae0u: goto R_010d7ae0;
        case 0x10d7af0u: goto R_010d7af0;
        case 0x10d7afcu: goto R_010d7afc;
        case 0x10d7b0cu: goto R_010d7b0c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3c20u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3c20u) & 0xFFFFu);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[4] = c.r[31] + 0x0u;
    c.lr = 0x10d7a1cu;
    f_mr011_0108a4e0(c);
R_010d7a1c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d7a24u;
    f_mr011_0108cb10(c);
R_010d7a24:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7a34u;
    f_mr011_0108a4e0(c);
R_010d7a34:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7a40u;
    f_mr011_0108eb00(c);
R_010d7a40:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010d7af0;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10d7a54u;
    f_mr011_0108aac0(c);
R_010d7a54:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x148u;
    c.lr = 0x10d7a64u;
    f_mr011_0108dc10(c);
R_010d7a64:
    ea = c.r[31] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d7a74u;
    f_mr011_0108d6c0(c);
R_010d7a74:
    c.r[10] = c.r[31] + 0x18u;
    ea = c.r[31] + 0x18u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[10] + 0x4u;
    c.r[11] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[10] + 0x8u;
    c.r[9] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[10] + 0xcu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[10] + 0x10u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[10] + 0x14u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[10] + 0x18u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[10] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7ac4u;
    f_mr011_010d19e0(c);
R_010d7ac4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7ad4u;
    f_mr011_0108a4e0(c);
R_010d7ad4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7ae0u;
    f_mr011_0108ce30(c);
R_010d7ae0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10d7af0u;
    f_mr011_0108e190(c);
L_010d7af0:
R_010d7af0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7afcu;
    f_mr011_0108e120(c);
R_010d7afc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d7b0cu;
    f_mr011_0108e190(c);
R_010d7b0c:
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

void f_mr011_010d7b30(wp::Cpu& c) {
    WP_ENTER(0x10d7b30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7b70u: goto R_010d7b70;
        case 0x10d7b80u: goto R_010d7b80;
        case 0x10d7b90u: goto R_010d7b90;
        case 0x10d7ba8u: goto R_010d7ba8;
        case 0x10d7bbcu: goto R_010d7bbc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c30u) + 0x8000u) >> 16) << 16);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[7] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c30u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[0] = 0xeu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7b70u;
    f_mr011_0108de20(c);
R_010d7b70:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10d7b80u;
    f_mr011_0108cf80(c);
R_010d7b80:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10d7b90u;
    f_mr011_0108cf80(c);
R_010d7b90:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d7ba8;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10d7ba8u;
    f_mr011_010898d0(c);
L_010d7ba8:
R_010d7ba8:
    c.r[5] = ((((g_mr011_bases[1] + 0xd7be0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xd7be0u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10d7bbcu;
    f_mr011_0108fb40(c);
R_010d7bbc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7be0(wp::Cpu& c) {
    WP_ENTER(0x10d7be0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7c00u: goto R_010d7c00;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10d7c00u;
    wp::call(c, c.ctr);
R_010d7c00:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d7c20(wp::Cpu& c) {
    WP_ENTER(0x10d7c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7c4cu: goto R_010d7c4c;
        case 0x10d7c54u: goto R_010d7c54;
        case 0x10d7c64u: goto R_010d7c64;
        case 0x10d7c70u: goto R_010d7c70;
        case 0x10d7c84u: goto R_010d7c84;
        case 0x10d7c94u: goto R_010d7c94;
        case 0x10d7ca4u: goto R_010d7ca4;
        case 0x10d7cd8u: goto R_010d7cd8;
        case 0x10d7ce8u: goto R_010d7ce8;
        case 0x10d7cf4u: goto R_010d7cf4;
        case 0x10d7d04u: goto R_010d7d04;
        case 0x10d7d10u: goto R_010d7d10;
        case 0x10d7d20u: goto R_010d7d20;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff30u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0xd4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xccu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3c58u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3c58u) & 0xFFFFu);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[4] = c.r[31] + 0x0u;
    c.lr = 0x10d7c4cu;
    f_mr011_0108a4e0(c);
R_010d7c4c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d7c54u;
    f_mr011_0108cb10(c);
R_010d7c54:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7c64u;
    f_mr011_0108a4e0(c);
R_010d7c64:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7c70u;
    f_mr011_0108eb00(c);
R_010d7c70:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010d7d04;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10d7c84u;
    f_mr011_0108aac0(c);
R_010d7c84:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x150u;
    c.lr = 0x10d7c94u;
    f_mr011_0108dc10(c);
R_010d7c94:
    ea = c.r[31] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d7ca4u;
    f_mr011_0108d6c0(c);
R_010d7ca4:
    c.r[3] = c.r[31] + 0x10u;
    c.r[0] = 0x18u;
    c.r[5] = c.r[1] + 0x4u;
    c.r[4] = c.r[3] + 0xfffffffcu;
    c.ctr = c.r[0];
L_010d7cb8:
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ea;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010d7cb8;
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x10d7cd8u;
    f_mr011_010d19e0(c);
R_010d7cd8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10d7ce8u;
    f_mr011_0108a4e0(c);
R_010d7ce8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7cf4u;
    f_mr011_0108ce30(c);
R_010d7cf4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10d7d04u;
    f_mr011_0108e190(c);
L_010d7d04:
R_010d7d04:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d7d10u;
    f_mr011_0108e120(c);
R_010d7d10:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10d7d20u;
    f_mr011_0108e190(c);
R_010d7d20:
    ea = c.r[1] + 0xd4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xccu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0xc8u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xd0u;
    return;
}

void f_mr011_010d7d40(wp::Cpu& c) {
    WP_ENTER(0x10d7d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7d70u: goto R_010d7d70;
        case 0x10d7d80u: goto R_010d7d80;
        case 0x10d7d90u: goto R_010d7d90;
        case 0x10d7db0u: goto R_010d7db0;
        case 0x10d7dc4u: goto R_010d7dc4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d7d70u;
    f_mr011_0108de20(c);
R_010d7d70:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10d7d80u;
    f_mr011_0108cf80(c);
R_010d7d80:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10d7d90u;
    f_mr011_0108cf80(c);
R_010d7d90:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d7db0;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] & 0xffffu;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x10d7db0u;
    f_mr011_0102f2c0(c);
L_010d7db0:
R_010d7db0:
    c.r[5] = ((((g_mr011_bases[1] + 0xd7de0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xd7de0u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10d7dc4u;
    f_mr011_0108fb40(c);
R_010d7dc4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7de0(wp::Cpu& c) {
    WP_ENTER(0x10d7de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7e00u: goto R_010d7e00;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10d7e00u;
    wp::call(c, c.ctr);
R_010d7e00:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d7e20(wp::Cpu& c) {
    WP_ENTER(0x10d7e20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7e48u: goto R_010d7e48;
        case 0x10d7e58u: goto R_010d7e58;
        case 0x10d7e68u: goto R_010d7e68;
        case 0x10d7e78u: goto R_010d7e78;
        case 0x10d7e8cu: goto R_010d7e8c;
        case 0x10d7e98u: goto R_010d7e98;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d7e48u;
    f_mr011_0108de20(c);
R_010d7e48:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10d7e58u;
    f_mr011_0108d120(c);
R_010d7e58:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10d7e68u;
    f_mr011_0108d120(c);
R_010d7e68:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x4u;
    c.lr = 0x10d7e78u;
    f_mr011_0108d120(c);
R_010d7e78:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.lr = 0x10d7e8cu;
    f_mr011_0102f900(c);
R_010d7e8c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d7e98u;
    f_mr011_0108a590(c);
R_010d7e98:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7eb0(wp::Cpu& c) {
    WP_ENTER(0x10d7eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7ed8u: goto R_010d7ed8;
        case 0x10d7ee8u: goto R_010d7ee8;
        case 0x10d7ef4u: goto R_010d7ef4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d7ed8u;
    f_mr011_0108de20(c);
R_010d7ed8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10d7ee8u;
    f_mr011_0108cf80(c);
R_010d7ee8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d7ef4u;
    f_mr011_0102fcd0(c);
R_010d7ef4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7f10(wp::Cpu& c) {
    WP_ENTER(0x10d7f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7f38u: goto R_010d7f38;
        case 0x10d7f48u: goto R_010d7f48;
        case 0x10d7f60u: goto R_010d7f60;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d7f38u;
    f_mr011_0108de20(c);
R_010d7f38:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10d7f48u;
    f_mr011_0108d0b0(c);
R_010d7f48:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10d7f60u;
    f_mr011_0102f5c0(c);
R_010d7f60:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d7f80(wp::Cpu& c) {
    WP_ENTER(0x10d7f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d7fa8u: goto R_010d7fa8;
        case 0x10d7fb8u: goto R_010d7fb8;
        case 0x10d7fdcu: goto R_010d7fdc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d7fa8u;
    f_mr011_0108de20(c);
R_010d7fa8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10d7fb8u;
    f_mr011_0108d0b0(c);
R_010d7fb8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[4];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10d7fdcu;
    wp::call(c, c.ctr);
R_010d7fdc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d8000(wp::Cpu& c) {
    WP_ENTER(0x10d8000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8020u: goto R_010d8020;
        case 0x10d8028u: goto R_010d8028;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10d8020u;
    f_mr011_0108de20(c);
R_010d8020:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8028u;
    f_mr011_0102f7b0(c);
R_010d8028:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d8040(wp::Cpu& c) {
    WP_ENTER(0x10d8040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8060u: goto R_010d8060;
        case 0x10d8068u: goto R_010d8068;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10d8060u;
    f_mr011_0108de20(c);
R_010d8060:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8068u;
    f_mr011_0102f810(c);
R_010d8068:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d8080(wp::Cpu& c) {
    WP_ENTER(0x10d8080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d80a8u: goto R_010d80a8;
        case 0x10d80b0u: goto R_010d80b0;
        case 0x10d80bcu: goto R_010d80bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d80a8u;
    f_mr011_0108de20(c);
R_010d80a8:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d80b0u;
    f_mr011_0102f790(c);
R_010d80b0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d80bcu;
    f_mr011_0108a600(c);
R_010d80bc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d80e0(wp::Cpu& c) {
    WP_ENTER(0x10d80e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8108u: goto R_010d8108;
        case 0x10d8110u: goto R_010d8110;
        case 0x10d811cu: goto R_010d811c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d8108u;
    f_mr011_0108de20(c);
R_010d8108:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8110u;
    f_mr011_0102f7a0(c);
R_010d8110:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d811cu;
    f_mr011_0108a600(c);
R_010d811c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d8140(wp::Cpu& c) {
    WP_ENTER(0x10d8140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8168u: goto R_010d8168;
        case 0x10d8170u: goto R_010d8170;
        case 0x10d817cu: goto R_010d817c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d8168u;
    f_mr011_0108de20(c);
R_010d8168:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8170u;
    f_mr011_0102f870(c);
R_010d8170:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d817cu;
    f_mr011_0108a600(c);
R_010d817c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d81a0(wp::Cpu& c) {
    WP_ENTER(0x10d81a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d81c8u: goto R_010d81c8;
        case 0x10d81d0u: goto R_010d81d0;
        case 0x10d81dcu: goto R_010d81dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3c64u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3c64u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d81c8u;
    f_mr011_0108de20(c);
R_010d81c8:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d81d0u;
    f_mr011_0102f8c0(c);
R_010d81d0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d81dcu;
    f_mr011_0108a600(c);
R_010d81dc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d8200(wp::Cpu& c) {
    WP_ENTER(0x10d8200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d827cu: goto R_010d827c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    if (!wp::cr_get(c, 6)) goto L_010d8238;
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[4]);
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[5]);
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[6]);
    ea = c.r[1] + 0x58u;
    wp::wrf64(ea, c.f[7]);
    ea = c.r[1] + 0x60u;
    wp::wrf64(ea, c.f[8]);
L_010d8238:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[11] = c.r[1] + 0x88u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[12] = 0x2000000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x68u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d827cu;
    f_801ceeec(c);
R_010d827c:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr011_010d8290(wp::Cpu& c) {
    WP_ENTER(0x10d8290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d82b0u: goto R_010d82b0;
        case 0x10d82c0u: goto R_010d82c0;
        case 0x10d82d0u: goto R_010d82d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d82b0u;
    f_mr011_0108d120(c);
R_010d82b0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10d82c0u;
    f_mr011_0108d0b0(c);
R_010d82c0:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10d82d0u;
    f_mr011_010d8ec0(c);
R_010d82d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x1u;
    if (!wp::cr_get(c, 0)) goto L_010d82e0;
    c.r[3] = 0xffffffffu;
L_010d82e0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d8300(wp::Cpu& c) {
    WP_ENTER(0x10d8300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d831cu: goto R_010d831c;
        case 0x10d833cu: goto R_010d833c;
        case 0x10d836cu: goto R_010d836c;
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
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d831cu;
    f_mr011_010915c0(c);
R_010d831c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010d836c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10d833cu;
    f_mr011_010ce250(c);
R_010d833c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010d834c;
    c.r[3] = 0xffffffffu;
    goto L_010d8370;
L_010d834c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f350u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f350u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.r[12] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10d836cu;
    wp::call(c, c.ctr);
L_010d836c:
R_010d836c:
    c.r[3] = 0x0u;
L_010d8370:
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

void f_mr011_010d8390(wp::Cpu& c) {
    WP_ENTER(0x10d8390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d83b8u: goto R_010d83b8;
        case 0x10d83ccu: goto R_010d83cc;
        case 0x10d83e8u: goto R_010d83e8;
        case 0x10d83f4u: goto R_010d83f4;
        case 0x10d8408u: goto R_010d8408;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d83b8u;
    f_mr011_0108d120(c);
R_010d83b8:
    c.r[4] = ((((g_mr011_bases[6] + 0x5ab4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ab4u) & 0xFFFFu);
    c.lr = 0x10d83ccu;
    f_mr011_010d8420(c);
R_010d83cc:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d83e0;
    c.r[3] = c.r[1] + 0xdu;
    goto L_010d83e4;
L_010d83e0:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_010d83e4:
    c.lr = 0x10d83e8u;
    f_80035c50(c);
R_010d83e8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d83f4u;
    f_mr011_0108a600(c);
R_010d83f4:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d8408;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8408u;
    f_801c7a8c(c);
L_010d8408:
R_010d8408:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d8420(wp::Cpu& c) {
    WP_ENTER(0x10d8420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8434u: goto R_010d8434;
        case 0x10d8458u: goto R_010d8458;
        case 0x10d848cu: goto R_010d848c;
        case 0x10d84b0u: goto R_010d84b0;
        case 0x10d84d0u: goto R_010d84d0;
        case 0x10d84d8u: goto R_010d84d8;
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
    c.lr = 0x10d8434u;
    f_801c83b8(c);
R_010d8434:
    c.r[0] = 0x0u;
    c.r[28] = c.r[5] | c.r[5];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10d8458u;
    f_801c7860(c);
R_010d8458:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d8478;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[29] = c.r[30] + 0x1u;
    c.r[30] = c.r[0] & 0x7fu;
    goto L_010d8480;
L_010d8478:
    ea = c.r[30] + 0x8u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[30] + 0x4u;
    c.r[30] = wp::rd32(ea);
L_010d8480:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[30] + c.r[31];
    c.lr = 0x10d848cu;
    f_mr011_010043a0(c);
R_010d848c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[29] | c.r[29];
    c.r[7] = c.r[29] + c.r[30];
    c.r[8] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10d84b0u;
    f_mr011_01004560(c);
R_010d84b0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[28] | c.r[28];
    c.r[7] = c.r[28] + c.r[31];
    c.r[8] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.lr = 0x10d84d0u;
    f_mr011_01004560(c);
R_010d84d0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10d84d8u;
    f_801c8404(c);
R_010d84d8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010d84f0(wp::Cpu& c) {
    WP_ENTER(0x10d84f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8504u: goto R_010d8504;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d8504u;
    f_mr011_01090650(c);
R_010d8504:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d8520(wp::Cpu& c) {
    WP_ENTER(0x10d8520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d853cu: goto R_010d853c;
        case 0x10d8550u: goto R_010d8550;
        case 0x10d8564u: goto R_010d8564;
        case 0x10d8570u: goto R_010d8570;
        case 0x10d8580u: goto R_010d8580;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d853cu;
    f_mr011_0108eb00(c);
R_010d853c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010d8578;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d8550u;
    f_mr011_0108ce90(c);
R_010d8550:
    c.r[0] = c.r[3] & 0x300u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d8570;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d8564u;
    f_mr011_0108ce30(c);
R_010d8564:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d8570u;
    f_mr011_0108bb80(c);
L_010d8570:
R_010d8570:
    c.r[3] = 0x1u;
    goto L_010d8584;
L_010d8578:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d8580u;
    f_mr011_0108a4d0(c);
R_010d8580:
    c.r[3] = 0x1u;
L_010d8584:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d85a0(wp::Cpu& c) {
    WP_ENTER(0x10d85a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d85c8u: goto R_010d85c8;
        case 0x10d85d4u: goto R_010d85d4;
        case 0x10d85f0u: goto R_010d85f0;
        case 0x10d8608u: goto R_010d8608;
        case 0x10d8614u: goto R_010d8614;
        case 0x10d861cu: goto R_010d861c;
        case 0x10d8640u: goto R_010d8640;
        case 0x10d8650u: goto R_010d8650;
        case 0x10d865cu: goto R_010d865c;
        case 0x10d8668u: goto R_010d8668;
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
    c.r[30] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.lr = 0x10d85c8u;
    f_mr011_0108ce20(c);
R_010d85c8:
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10d85d4u;
    f_mr011_0108e060(c);
R_010d85d4:
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010d85e0;
    c.r[30] = 0x3u;
L_010d85e0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10d85f0u;
    f_mr011_0108f1d0(c);
R_010d85f0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d860c;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.lr = 0x10d8608u;
    f_mr011_0108f1d0(c);
R_010d8608:
    goto L_010d8614;
L_010d860c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d8614u;
    f_mr011_0108f4d0(c);
L_010d8614:
R_010d8614:
    c.r[3] = 0x28u;
    c.lr = 0x10d861cu;
    f_801c79a4(c);
R_010d861c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010d8644;
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[28] | c.r[28];
    c.r[6] = c.r[1] + 0x8u;
    c.r[7] = c.r[1] + 0x10u;
    c.r[8] = 0x20u;
    c.lr = 0x10d8640u;
    f_mr011_010d97b0(c);
R_010d8640:
    c.r[31] = c.r[3] | c.r[3];
L_010d8644:
    ea = c.r[31] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10d8650u;
    f_mr011_0108ce10(c);
R_010d8650:
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d865cu;
    f_mr011_010915c0(c);
R_010d865c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d8668u;
    f_mr011_010915b0(c);
R_010d8668:
    ea = c.r[29] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[31]);
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

void f_mr011_010d86b0(wp::Cpu& c) {
    WP_ENTER(0x10d86b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d86dcu: goto R_010d86dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x8000000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] + 0x1000u;
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x10d86dcu;
    f_mr011_0108f450(c);
R_010d86dc:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d86f0(wp::Cpu& c) {
    WP_ENTER(0x10d86f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8708u: goto R_010d8708;
        case 0x10d8718u: goto R_010d8718;
        case 0x10d8720u: goto R_010d8720;
        case 0x10d8734u: goto R_010d8734;
        case 0x10d8748u: goto R_010d8748;
        case 0x10d8754u: goto R_010d8754;
        case 0x10d8768u: goto R_010d8768;
        case 0x10d8774u: goto R_010d8774;
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
    c.lr = 0x10d8708u;
    f_mr011_0108a4d0(c);
R_010d8708:
    goto L_010d8748;
L_010d870c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d8718u;
    f_mr011_0108ce30(c);
R_010d8718:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d8720u;
    f_mr011_0108e130(c);
R_010d8720:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d873c;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8734u;
    f_mr011_0108a600(c);
R_010d8734:
    c.r[3] = 0x1u;
    goto L_010d8778;
L_010d873c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x3u;
    c.lr = 0x10d8748u;
    f_mr011_0108e100(c);
L_010d8748:
R_010d8748:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8754u;
    f_mr011_01090e60(c);
R_010d8754:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d870c;
    }
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8768u;
    f_mr011_0108e100(c);
R_010d8768:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x10d8774u;
    f_mr011_0108a600(c);
R_010d8774:
    c.r[3] = 0x1u;
L_010d8778:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d8790(wp::Cpu& c) {
    WP_ENTER(0x10d8790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d87a4u: goto R_010d87a4;
        case 0x10d87b0u: goto R_010d87b0;
        case 0x10d8814u: goto R_010d8814;
        case 0x10d8818u: goto R_010d8818;
        case 0x10d8820u: goto R_010d8820;
        case 0x10d8848u: goto R_010d8848;
        case 0x10d884cu: goto R_010d884c;
        case 0x10d88f8u: goto R_010d88f8;
        case 0x10d8900u: goto R_010d8900;
        case 0x10d8940u: goto R_010d8940;
        case 0x10d8998u: goto R_010d8998;
        case 0x10d899cu: goto R_010d899c;
        case 0x10d89e4u: goto R_010d89e4;
        case 0x10d89e8u: goto R_010d89e8;
        case 0x10d8a88u: goto R_010d8a88;
        case 0x10d8a8cu: goto R_010d8a8c;
        case 0x10d8a94u: goto R_010d8a94;
        case 0x10d8ab0u: goto R_010d8ab0;
        case 0x10d8ab4u: goto R_010d8ab4;
        case 0x10d8ba4u: goto R_010d8ba4;
        case 0x10d8bb0u: goto R_010d8bb0;
        case 0x10d8bbcu: goto R_010d8bbc;
        case 0x10d8bccu: goto R_010d8bcc;
        case 0x10d8c28u: goto R_010d8c28;
        case 0x10d8c30u: goto R_010d8c30;
        case 0x10d8c3cu: goto R_010d8c3c;
        case 0x10d8cb0u: goto R_010d8cb0;
        case 0x10d8cccu: goto R_010d8ccc;
        case 0x10d8cd4u: goto R_010d8cd4;
        case 0x10d8d0cu: goto R_010d8d0c;
        case 0x10d8d14u: goto R_010d8d14;
        case 0x10d8d20u: goto R_010d8d20;
        case 0x10d8d80u: goto R_010d8d80;
        case 0x10d8d8cu: goto R_010d8d8c;
        case 0x10d8dbcu: goto R_010d8dbc;
        case 0x10d8dd4u: goto R_010d8dd4;
        case 0x10d8e08u: goto R_010d8e08;
        case 0x10d8e14u: goto R_010d8e14;
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
    c.lr = 0x10d87a4u;
    f_801c8398(c);
R_010d87a4:
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x10d87b0u;
    f_mr011_0108d510(c);
R_010d87b0:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    c.r[19] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 1)) goto L_010d87c4;
    c.r[3] = 0x0u;
    goto L_010d8e0c;
L_010d87c4:
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[5]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[5]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 1)) goto L_010d88f8;
    c.r[4] = 0x20000000u;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 1)) goto L_010d8818;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x2f354u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f354u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d8814u;
    f_801cee24(c);
R_010d8814:
    c.lr = 0x10d8818u;
    f_801d3940(c);
L_010d8818:
R_010d8818:
    c.r[3] = wp::rotl(c.r[19], 3) & 0xfffffff8u;
    c.lr = 0x10d8820u;
    f_801c79a4(c);
R_010d8820:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[20] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010d884c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x864u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x864u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d8848u;
    f_801cee24(c);
R_010d8848:
    c.lr = 0x10d884cu;
    f_801d3940(c);
L_010d884c:
R_010d884c:
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[6] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[6] + c.r[0];
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[20]);
    c.r[0] = c.r[5] + 0x7u;
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[0] = c.r[0] - c.r[6];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[19]);
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = c.r[20] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_010d88b8;
L_010d8888:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d88a0;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010d88a0:
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = c.r[6] + 0x8u;
    c.r[4] = c.r[4] + 0x8u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010d8888;
    }
L_010d88b8:
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x44u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_010d88f8;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    c.lr = 0x10d88f8u;
    f_801c7a8c(c);
L_010d88f8:
R_010d88f8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d8900u;
    f_mr011_0108a4d0(c);
R_010d8900:
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[1] + 0x44u;
    c.r[19] = c.r[1] + 0x48u;
    c.r[26] = 0xcccd0000u;
    c.r[23] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[22] = ((((g_mr011_bases[5] + 0x2f354u) + 0x8000u) >> 16) << 16);
    c.r[21] = 0x20000000u;
    c.r[30] = 0x0u;
    c.r[27] = 0xaab0000u;
    c.r[25] = 0x15550000u;
    c.r[24] = ((((g_mr011_bases[5] + 0x864u) + 0x8000u) >> 16) << 16);
    goto L_010d8bb0;
L_010d8930:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x28u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d8940u;
    f_mr011_0108f1d0(c);
R_010d8940:
    ea = c.r[1] + 0x40u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_010d8978;
    c.r[3] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    wp::wr32(ea, c.r[0]);
    c.r[3] = ea;
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010d8ba4;
L_010d8978:
    c.r[0] = c.r[21] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010d899c;
    c.r[4] = c.r[22] + wp::sign_extend16((g_mr011_bases[5] + 0x2f354u) & 0xFFFFu);
    c.r[3] = c.r[23] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d8998u;
    f_801cee24(c);
R_010d8998:
    c.lr = 0x10d899cu;
    f_801d3940(c);
L_010d899c:
R_010d899c:
    ea = c.r[1] + 0x40u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[21] + 0xffffffffu;
    ea = c.r[1] + 0x44u;
    c.r[28] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[3] - c.r[28];
    c.r[0] = c.r[0] - c.r[28];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010d89e8;
    c.r[4] = c.r[22] + wp::sign_extend16((g_mr011_bases[5] + 0x2f354u) & 0xFFFFu);
    c.r[3] = c.r[23] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d89e4u;
    f_801cee24(c);
R_010d89e4:
    c.lr = 0x10d89e8u;
    f_801d3940(c);
L_010d89e8:
R_010d89e8:
    c.r[0] = c.r[27] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010d8a30;
    c.r[4] = c.r[28] + 0x1u;
    c.r[5] = c.r[26] + 0xffffcccdu;
    c.r[3] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] - c.r[4];
    c.r[4] = wp::mulhwu(c.r[5], c.r[4]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = wp::rotl(c.r[4], 30) & 0x3fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010d8a24;
    c.r[3] = c.r[1] + 0x14u;
L_010d8a24:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[28] = c.r[28] + c.r[0];
    goto L_010d8a6c;
L_010d8a30:
    c.r[0] = c.r[25] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010d8a68;
    c.r[3] = c.r[28] + 0x1u;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0x10u;
    if (!wp::cr_get(c, 0)) goto L_010d8a5c;
    c.r[3] = c.r[1] + 0x14u;
L_010d8a5c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[28] = c.r[28] + c.r[0];
    goto L_010d8a6c;
L_010d8a68:
    c.r[28] = c.r[21] + 0xffffffffu;
L_010d8a6c:
    c.r[0] = c.r[21] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010d8a8c;
    c.r[4] = c.r[22] + wp::sign_extend16((g_mr011_bases[5] + 0x2f354u) & 0xFFFFu);
    c.r[3] = c.r[23] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d8a88u;
    f_801cee24(c);
R_010d8a88:
    c.lr = 0x10d8a8cu;
    f_801d3940(c);
L_010d8a8c:
R_010d8a8c:
    c.r[3] = wp::rotl(c.r[28], 3) & 0xfffffff8u;
    c.lr = 0x10d8a94u;
    f_801c79a4(c);
R_010d8a94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[20] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010d8ab4;
    c.r[3] = c.r[23] + 0xa0u;
    c.r[4] = c.r[24] + wp::sign_extend16((g_mr011_bases[5] + 0x864u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d8ab0u;
    f_801cee24(c);
R_010d8ab0:
    c.lr = 0x10d8ab4u;
    f_801d3940(c);
L_010d8ab4:
R_010d8ab4:
    ea = c.r[1] + 0x40u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[20]);
    c.r[4] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = c.r[20] + c.r[3];
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + c.r[4];
    wp::wr32(ea, c.r[0]);
    c.r[3] = ea;
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x4cu;
    c.r[6] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x3cu;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[6] + 0x1u;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.r[6] = c.r[7] + c.r[5];
    ea = c.r[1] + 0x48u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[6] + 0x7u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[5] = c.r[4] + c.r[3];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_010d8b60;
L_010d8b28:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010d8b44;
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010d8b44:
    ea = c.r[1] + 0x58u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_010d8b28;
    }
L_010d8b60:
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    ea = c.r[1] + 0x44u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010d8ba4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d8ba4;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x10d8ba4u;
    f_801c7a8c(c);
L_010d8ba4:
R_010d8ba4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10d8bb0u;
    f_mr011_0108e100(c);
L_010d8bb0:
R_010d8bb0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8bbcu;
    f_mr011_01090e60(c);
R_010d8bbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8930;
    }
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d8bccu;
    f_mr011_0108e110(c);
R_010d8bcc:
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[24] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[24] + c.r[0];
    c.r[0] = c.r[3] - c.r[24];
    c.r[0] = wp::sraw(c, c.r[0], 3);
    c.r[19] = wp::add_extended(c, c.r[0], 0);
    wp::compare_signed(c, 0, c.r[19], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_010d8d74;
    c.r[20] = c.r[3] + 0xfffffff8u;
    c.r[26] = 0x1u;
    c.r[25] = ((((g_mr011_bases[4] + 0x3e5cu) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x10000u;
    c.r[28] = 0x40000000u;
    c.r[30] = 0x80000000u;
    c.r[29] = 0xffffffffu;
    goto L_010d8d6c;
L_010d8c10:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d8c24;
    wp::compare_unsigned(c, 0, c.r[19], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010d8c48;
    goto L_010d8c50;
L_010d8c24:
    c.lr = 0x10d8c28u;
    f_801cf23c(c);
R_010d8c28:
    c.r[21] = wp::rotl(c.r[3], 19) & 0x7ffffu;
    c.lr = 0x10d8c30u;
    f_801cf23c(c);
R_010d8c30:
    c.r[0] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[21] = c.r[0] | c.r[21];
    c.lr = 0x10d8c3cu;
    f_801cf23c(c);
R_010d8c3c:
    c.r[0] = wp::rotl(c.r[3], 17) & 0xfffe0000u;
    c.r[0] = c.r[0] | c.r[21];
    goto L_010d8d34;
L_010d8c48:
    c.r[0] = 0x0u;
    goto L_010d8d34;
L_010d8c50:
    c.r[4] = 0xfu;
    goto L_010d8c78;
L_010d8c58:
    c.r[0] = wp::sub_carry(c, c.r[4], 0x20u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0xfu);
    c.r[3] = c.r[25] + wp::sign_extend16((g_mr011_bases[4] + 0x3e5cu) & 0xFFFFu);
    if (!wp::cr_get(c, 0)) goto L_010d8c70;
    c.r[3] = c.r[1] + 0x8u;
L_010d8c70:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + c.r[0];
L_010d8c78:
    wp::compare_signed(c, 0, c.r[4], 0x20u);
    if (!wp::cr_get(c, 0)) goto L_010d8c8c;
    c.r[0] = wp::slw(c.r[26], c.r[4]);
    wp::compare_unsigned(c, 0, c.r[19], c.r[0]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_010d8c58;
    }
L_010d8c8c:
    wp::compare_signed(c, 0, c.r[4], 0xfu);
    if (wp::cr_get(c, 2)) goto L_010d8ca0;
    wp::compare_signed(c, 0, c.r[4], 0x1eu);
    if (wp::cr_get(c, 2)) goto L_010d8cc0;
    goto L_010d8cec;
L_010d8ca0:
    c.r[0] = c.r[27] + 0xffff8000u;
    c.r[22] = wp::divwu(c.r[0], c.r[19]);
    c.r[21] = c.r[22] * c.r[19];
L_010d8cac:
    c.lr = 0x10d8cb0u;
    f_801cf23c(c);
R_010d8cb0:
    wp::compare_unsigned(c, 0, c.r[3], c.r[21]);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8cac;
    }
    c.r[0] = wp::divwu(c.r[3], c.r[22]);
    goto L_010d8d34;
L_010d8cc0:
    c.r[23] = wp::divwu(c.r[28], c.r[19]);
    c.r[22] = c.r[23] * c.r[19];
L_010d8cc8:
    c.lr = 0x10d8cccu;
    f_801cf23c(c);
R_010d8ccc:
    c.r[21] = c.r[3] | c.r[3];
    c.lr = 0x10d8cd4u;
    f_801cf23c(c);
R_010d8cd4:
    c.r[0] = wp::rotl(c.r[3], 15) & 0xffff8000u;
    c.r[0] = c.r[0] | c.r[21];
    wp::compare_unsigned(c, 0, c.r[0], c.r[22]);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8cc8;
    }
    c.r[0] = wp::divwu(c.r[0], c.r[23]);
    goto L_010d8d34;
L_010d8cec:
    c.r[0] = c.r[19] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d8cfc;
    c.r[21] = wp::divwu(c.r[29], c.r[19]);
    goto L_010d8d04;
L_010d8cfc:
    c.r[0] = wp::rotl(c.r[19], 31) & 0x7fffffffu;
    c.r[21] = wp::divwu(c.r[30], c.r[0]);
L_010d8d04:
    c.r[22] = c.r[21] * c.r[19];
L_010d8d08:
    c.lr = 0x10d8d0cu;
    f_801cf23c(c);
R_010d8d0c:
    c.r[23] = wp::rotl(c.r[3], 19) & 0x7ffffu;
    c.lr = 0x10d8d14u;
    f_801cf23c(c);
R_010d8d14:
    c.r[0] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[23] = c.r[0] | c.r[23];
    c.lr = 0x10d8d20u;
    f_801cf23c(c);
R_010d8d20:
    c.r[0] = wp::rotl(c.r[3], 17) & 0xfffe0000u;
    c.r[0] = c.r[0] | c.r[23];
    wp::compare_unsigned(c, 0, c.r[0], c.r[22]);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8d08;
    }
    c.r[0] = wp::divwu(c.r[0], c.r[21]);
L_010d8d34:
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[24] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[24] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[24] + c.r[0];
    ea = c.r[24] + c.r[0];
    c.r[0] = wp::rd32(ea);
    c.r[19] = c.r[19] + 0xffffffffu;
    ea = c.r[24] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[24] = c.r[24] + 0x8u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_010d8d6c:
    wp::compare_unsigned(c, 0, c.r[24], c.r[20]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8c10;
    }
L_010d8d74:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8d80u;
    f_mr011_0108d380(c);
R_010d8d80:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d8d8cu;
    f_mr011_0108c910(c);
R_010d8d8c:
    goto L_010d8dd4;
L_010d8d90:
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x20u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    ea = c.r[6] + 0xfffffff8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10d8dbcu;
    f_mr011_0108f450(c);
R_010d8dbc:
    ea = c.r[1] + 0x40u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.r[0] = c.r[5] + 0xffffffffu;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d8dd4u;
    f_mr011_0108ac90(c);
L_010d8dd4:
R_010d8dd4:
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010d8d90;
    }
    c.r[0] = wp::add_carry(c, c.r[1], 0x3cu, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d8e08;
    if (wp::cr_get(c, 2)) goto L_010d8e08;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d8e08;
    ea = c.r[1] + 0x40u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d8e08u;
    f_801c7a8c(c);
L_010d8e08:
R_010d8e08:
    c.r[3] = 0x0u;
L_010d8e0c:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10d8e14u;
    f_801c83e4(c);
R_010d8e14:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mr011_010d8e30(wp::Cpu& c) {
    WP_ENTER(0x10d8e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8e50u: goto R_010d8e50;
        case 0x10d8e58u: goto R_010d8e58;
        case 0x10d8e64u: goto R_010d8e64;
        case 0x10d8e70u: goto R_010d8e70;
        case 0x10d8e7cu: goto R_010d8e7c;
        case 0x10d8e88u: goto R_010d8e88;
        case 0x10d8e9cu: goto R_010d8e9c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d8e50u;
    f_mr011_0108a890(c);
R_010d8e50:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d8e58u;
    f_mr011_0108e060(c);
R_010d8e58:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d8e64u;
    f_mr011_0108a4d0(c);
R_010d8e64:
    goto L_010d8e7c;
L_010d8e68:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d8e70u;
    f_mr011_0108e110(c);
R_010d8e70:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10d8e7cu;
    f_mr011_0108ac90(c);
L_010d8e7c:
R_010d8e7c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10d8e88u;
    f_mr011_01090e60(c);
R_010d8e88:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010d8e68;
    }
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10d8e9cu;
    f_mr011_0108e100(c);
R_010d8e9c:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d8ec0(wp::Cpu& c) {
    WP_ENTER(0x10d8ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d8ed4u: goto R_010d8ed4;
        case 0x10d8f04u: goto R_010d8f04;
        case 0x10d8f8cu: goto R_010d8f8c;
        case 0x10d8fc0u: goto R_010d8fc0;
        case 0x10d8fe0u: goto R_010d8fe0;
        case 0x10d8ff4u: goto R_010d8ff4;
        case 0x10d9010u: goto R_010d9010;
        case 0x10d902cu: goto R_010d902c;
        case 0x10d90b4u: goto R_010d90b4;
        case 0x10d90c8u: goto R_010d90c8;
        case 0x10d90e4u: goto R_010d90e4;
        case 0x10d90f8u: goto R_010d90f8;
        case 0x10d9124u: goto R_010d9124;
        case 0x10d9130u: goto R_010d9130;
        case 0x10d9148u: goto R_010d9148;
        case 0x10d917cu: goto R_010d917c;
        case 0x10d91b0u: goto R_010d91b0;
        case 0x10d91d8u: goto R_010d91d8;
        case 0x10d91e4u: goto R_010d91e4;
        case 0x10d91ecu: goto R_010d91ec;
        case 0x10d9200u: goto R_010d9200;
        case 0x10d920cu: goto R_010d920c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x80u;
    c.lr = 0x10d8ed4u;
    f_801c83b8(c);
R_010d8ed4:
    c.r[0] = 0x0u;
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mr011_bases[6] + 0x5ab4u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ab4u) & 0xFFFFu);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d8f04u;
    f_mr011_010d8420(c);
R_010d8f04:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010d8f34;
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d8f34;
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    goto L_010d8f8c;
L_010d8f34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d8f44;
    ea = c.r[1] + 0x40u;
    c.r[5] = wp::rd32(ea);
    goto L_010d8f4c;
L_010d8f44:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[0] & 0x7fu;
L_010d8f4c:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d8f68;
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = c.r[1] + 0x31u;
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010d8f70;
L_010d8f68:
    ea = c.r[1] + 0x38u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
L_010d8f70:
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd8(ea);
    c.r[7] = c.r[6] + c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x3cu;
    c.r[8] = c.r[1] + 0x18u;
    c.r[4] = 0x0u;
    c.lr = 0x10d8f8cu;
    f_mr011_01004560(c);
L_010d8f8c:
R_010d8f8c:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[28] = ((((g_mr011_bases[5] + 0x2f368u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[28] + wp::sign_extend16((g_mr011_bases[5] + 0x2f368u) & 0xFFFFu);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d8fac;
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd8(ea);
    c.r[27] = c.r[0] & 0x7fu;
    goto L_010d8fb0;
L_010d8fac:
    ea = c.r[1] + 0x40u;
    c.r[27] = wp::rd32(ea);
L_010d8fb0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10d8fc0u;
    f_801c7860(c);
R_010d8fc0:
    c.r[0] = c.r[3] | c.r[3];
    c.r[4] = c.r[27] | c.r[27];
    c.r[6] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x3cu;
    c.r[7] = c.r[28] + c.r[0];
    c.r[8] = c.r[1] + 0x10u;
    c.r[5] = 0x0u;
    c.lr = 0x10d8fe0u;
    f_mr011_01004560(c);
R_010d8fe0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d8ff4;
    ea = c.r[1] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d8ff4u;
    f_801c7a8c(c);
L_010d8ff4:
R_010d8ff4:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d9008;
    c.r[3] = c.r[1] + 0x3du;
    goto L_010d900c;
L_010d9008:
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
L_010d900c:
    c.lr = 0x10d9010u;
    f_80035c50(c);
R_010d9010:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d9150;
    c.r[4] = ((((g_mr011_bases[6] + 0x5ab4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ab4u) & 0xFFFFu);
    c.lr = 0x10d902cu;
    f_mr011_010d8420(c);
R_010d902c:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010d905c;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d905c;
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    goto L_010d90b4;
L_010d905c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d906c;
    ea = c.r[1] + 0x40u;
    c.r[5] = wp::rd32(ea);
    goto L_010d9074;
L_010d906c:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[0] & 0x7fu;
L_010d9074:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d9090;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = c.r[1] + 0x25u;
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010d9098;
L_010d9090:
    ea = c.r[1] + 0x2cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[4] = wp::rd32(ea);
L_010d9098:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[7] = c.r[6] + c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x3cu;
    c.r[8] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.lr = 0x10d90b4u;
    f_mr011_01004560(c);
L_010d90b4:
R_010d90b4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d90c8;
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d90c8u;
    f_801c7a8c(c);
L_010d90c8:
R_010d90c8:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d90dc;
    c.r[3] = c.r[1] + 0x3du;
    goto L_010d90e0;
L_010d90dc:
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
L_010d90e0:
    c.lr = 0x10d90e4u;
    f_80035c50(c);
R_010d90e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d9150;
L_010d90ec:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x400u;
    c.lr = 0x10d90f8u;
    f_mr011_0108ff00(c);
R_010d90f8:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mr011_bases[5] + 0x2f370u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f370u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_010d9118;
    c.r[5] = c.r[1] + 0x3du;
    goto L_010d911c;
L_010d9118:
    ea = c.r[1] + 0x44u;
    c.r[5] = wp::rd32(ea);
L_010d911c:
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10d9124u;
    f_801cf168(c);
R_010d9124:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x10d9130u;
    f_mr011_0108f4f0(c);
R_010d9130:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[3] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d9148;
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9148u;
    f_801c7a8c(c);
L_010d9148:
R_010d9148:
    c.r[3] = c.r[29] | c.r[29];
    goto L_010d9204;
L_010d9150:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010d916c;
    c.r[3] = c.r[1] + 0x3du;
    goto L_010d9170;
L_010d916c:
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
L_010d9170:
    c.r[5] = c.r[1] + 0x20u;
    c.r[4] = 0x4u;
    c.lr = 0x10d917cu;
    f_80035ef0(c);
R_010d917c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010d90ec;
    }
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x10000u;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + c.r[0];
    c.r[3] = c.r[4] + 0xffff8000u;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x10d91b0u;
    f_801c7a9c(c);
R_010d91b0:
    c.r[29] = c.r[3] | c.r[3];
    c.r[7] = ((((g_mr011_bases[1] + 0xd9220u) + 0x8000u) >> 16) << 16);
    c.r[8] = c.r[29] + 0x10000u;
    c.r[3] = c.r[1] + 0x48u;
    c.r[7] = c.r[7] + wp::sign_extend16((g_mr011_bases[1] + 0xd9220u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[8] = c.r[8] + 0xffff8000u;
    c.lr = 0x10d91d8u;
    f_80138430(c);
R_010d91d8:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10d91e4u;
    f_801c7c38(c);
R_010d91e4:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10d91ecu;
    f_800370a0(c);
R_010d91ec:
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d9200;
    ea = c.r[1] + 0x44u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9200u;
    f_801c7a8c(c);
L_010d9200:
R_010d9200:
    c.r[3] = c.r[28] | c.r[28];
L_010d9204:
    c.r[11] = c.r[1] + 0x80u;
    c.lr = 0x10d920cu;
    f_801c8404(c);
R_010d920c:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_mr011_010d9220(wp::Cpu& c) {
    WP_ENTER(0x10d9220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xfafau);
    if (!wp::cr_get(c, 2)) goto L_010d9244;
    c.r[4] = ((((g_mr011_bases[1] + 0xd9260u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[1] + 0xd9260u) & 0xFFFFu);
    f_mr011_0108fbf0(c);
    return;
L_010d9244:
    c.r[4] = ((((g_mr011_bases[1] + 0xd92e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[1] + 0xd92e0u) & 0xFFFFu);
    ea = c.r[5] + 0x10u;
    c.r[7] = wp::rd32(ea);
    f_mr011_0108a180(c);
    return;
}

void f_mr011_010d9260(wp::Cpu& c) {
    WP_ENTER(0x10d9260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d92b0u: goto R_010d92b0;
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
    ea = c.r[3] + 0x0u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[6];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010d9294;
    c.r[3] = 0xffffffffu;
    goto L_010d92c0;
L_010d9294:
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010d92a0;
    c.r[31] = c.r[0] | c.r[0];
L_010d92a0:
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] | c.r[6];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x10d92b0u;
    f_800043c4(c);
R_010d92b0:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d92c0:
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

void f_mr011_010d92e0(wp::Cpu& c) {
    WP_ENTER(0x10d92e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010d92f8;
    c.r[3] = 0x0u;
    return;
L_010d92f8:
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd8(ea);
    c.r[3] = wp::sign_extend8(c.r[3]);
    return;
}

void f_mr011_010d9310(wp::Cpu& c) {
    WP_ENTER(0x10d9310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9348u: goto R_010d9348;
        case 0x10d9350u: goto R_010d9350;
        case 0x10d9368u: goto R_010d9368;
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
    c.r[29] = c.r[3] | c.r[3];
    c.r[0] = c.r[29] + 0x10u;
    c.r[3] = c.r[4] | c.r[4];
    ea = c.r[29] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d9348u;
    f_80049120(c);
R_010d9348:
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d9350u;
    f_80169d90(c);
R_010d9350:
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.lr = 0x10d9368u;
    f_mr011_010d9390(c);
R_010d9368:
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

void f_mr011_010d9390(wp::Cpu& c) {
    WP_ENTER(0x10d9390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d93c4u: goto R_010d93c4;
        case 0x10d93d0u: goto R_010d93d0;
        case 0x10d93d8u: goto R_010d93d8;
        case 0x10d93e8u: goto R_010d93e8;
        case 0x10d93f8u: goto R_010d93f8;
        case 0x10d9404u: goto R_010d9404;
        case 0x10d940cu: goto R_010d940c;
        case 0x10d9414u: goto R_010d9414;
        case 0x10d9424u: goto R_010d9424;
        case 0x10d9444u: goto R_010d9444;
        case 0x10d944cu: goto R_010d944c;
        case 0x10d9460u: goto R_010d9460;
        case 0x10d946cu: goto R_010d946c;
        case 0x10d947cu: goto R_010d947c;
        case 0x10d948cu: goto R_010d948c;
        case 0x10d9494u: goto R_010d9494;
        case 0x10d949cu: goto R_010d949c;
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
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x10d93c4u;
    f_80169010(c);
R_010d93c4:
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x10d93d0u;
    f_mr011_010bdfb0(c);
R_010d93d0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d93d8u;
    f_mr011_01089cf0(c);
R_010d93d8:
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10d93e8u;
    f_mr011_0108ce10(c);
R_010d93e8:
    c.r[4] = ((((g_mr011_bases[1] + 0xd8200u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[1] + 0xd8200u) & 0xFFFFu);
    c.lr = 0x10d93f8u;
    f_mr011_010915b0(c);
R_010d93f8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d9404u;
    f_mr011_0108a470(c);
R_010d9404:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d940cu;
    f_mr011_010cf520(c);
R_010d940c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9414u;
    f_mr011_0108cb00(c);
R_010d9414:
    c.r[4] = ((((g_mr011_bases[4] + 0x3d28u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3d28u) & 0xFFFFu);
    c.lr = 0x10d9424u;
    f_mr011_010d19e0(c);
R_010d9424:
    c.r[4] = ((((g_mr011_bases[4] + 0x3db8u) + 0x8000u) >> 16) << 16);
    c.r[6] = ((((g_mr011_bases[5] + 0x2f424u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0x6du;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3db8u) & 0xFFFFu);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[5] + 0x2f424u) & 0xFFFFu);
    c.r[7] = 0x0u;
    c.lr = 0x10d9444u;
    f_mr011_010912d0(c);
R_010d9444:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d944cu;
    f_mr011_0108cb00(c);
R_010d944c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.lr = 0x10d9460u;
    f_mr011_0108f5d0(c);
R_010d9460:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d946cu;
    f_mr011_0108e100(c);
R_010d946c:
    c.r[4] = 0x8000000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x40u;
    c.lr = 0x10d947cu;
    f_mr011_01090c10(c);
R_010d947c:
    c.r[4] = ((((g_mr011_bases[4] + 0x3e28u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e28u) & 0xFFFFu);
    c.lr = 0x10d948cu;
    f_mr011_010d19e0(c);
R_010d948c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9494u;
    f_mr011_0108e110(c);
R_010d9494:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d949cu;
    f_mr011_0108e110(c);
R_010d949c:
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

void f_mr011_010d94c0(wp::Cpu& c) {
    WP_ENTER(0x10d94c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d94d4u: goto R_010d94d4;
        case 0x10d9510u: goto R_010d9510;
        case 0x10d951cu: goto R_010d951c;
        case 0x10d9528u: goto R_010d9528;
        case 0x10d9534u: goto R_010d9534;
        case 0x10d955cu: goto R_010d955c;
        case 0x10d958cu: goto R_010d958c;
        case 0x10d9594u: goto R_010d9594;
        case 0x10d959cu: goto R_010d959c;
        case 0x10d95d4u: goto R_010d95d4;
        case 0x10d95e0u: goto R_010d95e0;
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
    c.lr = 0x10d94d4u;
    f_801c83b8(c);
R_010d94d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    c.r[31] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_010d95d4;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d959c;
    c.r[29] = c.r[3] + 0x10u;
    goto L_010d955c;
L_010d94f8:
    ea = c.r[30] + 0x14u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d955c;
    ea = c.r[28] + 0x10u;
    c.r[27] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10d9510u;
    f_mr011_0108e060(c);
R_010d9510:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10d951cu;
    f_mr011_0108e100(c);
R_010d951c:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0xcu;
    c.lr = 0x10d9528u;
    f_mr011_0108a4b0(c);
R_010d9528:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x1cu;
    c.lr = 0x10d9534u;
    f_mr011_0108a4b0(c);
R_010d9534:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9554;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d9554:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10d955cu;
    f_801c7a8c(c);
L_010d955c:
R_010d955c:
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    wp::compare_unsigned(c, 0, c.r[0], c.r[29]);
    if (!wp::cr_get(c, 2)) goto L_010d957c;
    ea = c.r[30] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[29]);
    if (!wp::cr_get(c, 2)) goto L_010d957c;
    c.r[3] = 0x1u;
L_010d957c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010d94f8;
    }
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d958cu;
    f_mr011_0108a120(c);
R_010d958c:
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9594u;
    f_801690c0(c);
R_010d9594:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d959cu;
    f_80048e10(c);
L_010d959c:
R_010d959c:
    c.r[0] = wp::add_carry(c, c.r[30], 0x10u, 0);
    wp::record(c, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d95c4;
    ea = c.r[30] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d95c4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010d95d4;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d95d4u;
    f_801c7a8c(c);
L_010d95d4:
R_010d95d4:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d95e0u;
    f_801c8404(c);
R_010d95e0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d95f0(wp::Cpu& c) {
    WP_ENTER(0x10d95f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9620u: goto R_010d9620;
        case 0x10d9634u: goto R_010d9634;
        case 0x10d9648u: goto R_010d9648;
        case 0x10d9668u: goto R_010d9668;
        case 0x10d967cu: goto R_010d967c;
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
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9620u;
    f_mr011_010d8ec0(c);
R_010d9620:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010d967c;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10d9634u;
    f_mr011_0108ce30(c);
R_010d9634:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10d9648u;
    f_mr011_0108f5d0(c);
R_010d9648:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010d9670;
    c.r[0] = 0u - c.r[29];
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = c.r[0] | c.r[29];
    c.r[4] = wp::sraw(c, c.r[0], 31);
    c.r[4] = c.r[4] + 0xffffffffu;
    c.lr = 0x10d9668u;
    f_mr011_0108e120(c);
R_010d9668:
    c.r[3] = 0x1u;
    goto L_010d9680;
L_010d9670:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10d967cu;
    f_mr011_0108e100(c);
L_010d967c:
R_010d967c:
    c.r[3] = 0xffffffffu;
L_010d9680:
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

void f_mr011_010d96a0(wp::Cpu& c) {
    WP_ENTER(0x10d96a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d96e4u: goto R_010d96e4;
        case 0x10d96f0u: goto R_010d96f0;
        case 0x10d9708u: goto R_010d9708;
        case 0x10d9714u: goto R_010d9714;
        case 0x10d971cu: goto R_010d971c;
        case 0x10d9740u: goto R_010d9740;
        case 0x10d9750u: goto R_010d9750;
        case 0x10d975cu: goto R_010d975c;
        case 0x10d9768u: goto R_010d9768;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010d96e8;
    c.r[4] = c.r[5] | c.r[5];
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.lr = 0x10d96e4u;
    f_mr011_0108f1d0(c);
R_010d96e4:
    goto L_010d96f0;
L_010d96e8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10d96f0u;
    f_mr011_0108f4d0(c);
L_010d96f0:
R_010d96f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d970c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10d9708u;
    f_mr011_0108f1d0(c);
R_010d9708:
    goto L_010d9714;
L_010d970c:
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x10d9714u;
    f_mr011_0108f4d0(c);
L_010d9714:
R_010d9714:
    c.r[3] = 0x28u;
    c.lr = 0x10d971cu;
    f_801c79a4(c);
R_010d971c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010d9744;
    ea = c.r[28] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[29] | c.r[29];
    c.r[8] = c.r[30] | c.r[30];
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x8u;
    c.lr = 0x10d9740u;
    f_mr011_010d97b0(c);
R_010d9740:
    c.r[31] = c.r[3] | c.r[3];
L_010d9744:
    ea = c.r[31] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x10d9750u;
    f_mr011_0108ce10(c);
R_010d9750:
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d975cu;
    f_mr011_010915c0(c);
R_010d975c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9768u;
    f_mr011_010915b0(c);
R_010d9768:
    ea = c.r[28] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[31] + 0x10u;
    c.r[3] = wp::rd32(ea);
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

void f_mr011_010d97b0(wp::Cpu& c) {
    WP_ENTER(0x10d97b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9814u: goto R_010d9814;
        case 0x10d9824u: goto R_010d9824;
        case 0x10d9840u: goto R_010d9840;
        case 0x10d9868u: goto R_010d9868;
        case 0x10d9874u: goto R_010d9874;
        case 0x10d9884u: goto R_010d9884;
        case 0x10d9890u: goto R_010d9890;
        case 0x10d989cu: goto R_010d989c;
        case 0x10d98a8u: goto R_010d98a8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[9] = ((((g_mr011_bases[4] + 0x3e58u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[7] | c.r[7];
    ea = c.r[9] + wp::sign_extend16((g_mr011_bases[4] + 0x3e58u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = c.r[8] | c.r[8];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = 0x8000000u;
    c.r[0] = c.r[3] + 0x1000u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[29] + 0x14u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[29] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[29] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d9814u;
    f_mr011_01089e60(c);
R_010d9814:
    ea = c.r[29] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] + 0xcu;
    c.lr = 0x10d9824u;
    f_mr011_0108a490(c);
R_010d9824:
    ea = c.r[29] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (!wp::cr_get(c, 2)) goto L_010d9840;
    ea = c.r[29] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] + 0x14u;
    c.lr = 0x10d9840u;
    f_mr011_0108a490(c);
L_010d9840:
R_010d9840:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xff000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010d98a0;
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d9868u;
    f_mr011_0108f450(c);
R_010d9868:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d9874u;
    f_mr011_01090950(c);
R_010d9874:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[29] + 0x1cu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d9884u;
    f_mr011_0108f1d0(c);
R_010d9884:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] + 0x1cu;
    c.lr = 0x10d9890u;
    f_mr011_0108a490(c);
R_010d9890:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10d989cu;
    f_mr011_0108e100(c);
R_010d989c:
    goto L_010d98a8;
L_010d98a0:
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x10d98a8u;
    f_mr011_0108f4d0(c);
L_010d98a8:
R_010d98a8:
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

void f_mr011_010d98d0(wp::Cpu& c) {
    WP_ENTER(0x10d98d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9904u: goto R_010d9904;
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
    c.r[31] = c.r[3] + 0x10u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    goto L_010d990c;
L_010d98f8:
    ea = c.r[4] + 0x0u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x10d9904u;
    f_mr011_010d9940(c);
R_010d9904:
    c.r[4] = c.r[29] | c.r[29];
    c.r[30] = c.r[30] + 0x1u;
L_010d990c:
    wp::compare_unsigned(c, 0, c.r[4], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010d98f8;
    }
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

void f_mr011_010d9940(wp::Cpu& c) {
    WP_ENTER(0x10d9940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d99a8u: goto R_010d99a8;
        case 0x10d99b4u: goto R_010d99b4;
        case 0x10d99c0u: goto R_010d99c0;
        case 0x10d99e0u: goto R_010d99e0;
        case 0x10d99ecu: goto R_010d99ec;
        case 0x10d99f8u: goto R_010d99f8;
        case 0x10d9a04u: goto R_010d9a04;
        case 0x10d9a2cu: goto R_010d9a2c;
        case 0x10d9a3cu: goto R_010d9a3c;
        case 0x10d9a64u: goto R_010d9a64;
        case 0x10d9a6cu: goto R_010d9a6c;
        case 0x10d9a78u: goto R_010d9a78;
        case 0x10d9a80u: goto R_010d9a80;
        case 0x10d9a94u: goto R_010d9a94;
        case 0x10d9ab0u: goto R_010d9ab0;
        case 0x10d9abcu: goto R_010d9abc;
        case 0x10d9ac8u: goto R_010d9ac8;
        case 0x10d9ad4u: goto R_010d9ad4;
        case 0x10d9afcu: goto R_010d9afc;
        case 0x10d9b18u: goto R_010d9b18;
        case 0x10d9b34u: goto R_010d9b34;
        case 0x10d9b40u: goto R_010d9b40;
        case 0x10d9b4cu: goto R_010d9b4c;
        case 0x10d9b58u: goto R_010d9b58;
        case 0x10d9b80u: goto R_010d9b80;
        case 0x10d9ba0u: goto R_010d9ba0;
        case 0x10d9ba8u: goto R_010d9ba8;
        case 0x10d9bb0u: goto R_010d9bb0;
        case 0x10d9bccu: goto R_010d9bcc;
        case 0x10d9bd8u: goto R_010d9bd8;
        case 0x10d9be4u: goto R_010d9be4;
        case 0x10d9bf0u: goto R_010d9bf0;
        case 0x10d9c18u: goto R_010d9c18;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x3e58u) + 0x8000u) >> 16) << 16);
    c.r[5] = (((0x802f5ed4u + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e58u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x24u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + wp::sign_extend16(0x802f5ed4u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[2] - c.f[1]);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (wp::cr_get(c, 1)) goto L_010d9c18;
    ea = c.r[3] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xf7ff0000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010d9a3c;
    ea = c.r[3] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10d99a8u;
    f_mr011_0108f450(c);
R_010d99a8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d99b4u;
    f_mr011_01090a80(c);
R_010d99b4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d99c0u;
    f_mr011_0108ce90(c);
R_010d99c0:
    c.r[0] = c.r[3] + 0xff000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010d9a30;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9c18;
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d99e0u;
    f_mr011_0108e060(c);
R_010d99e0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d99ecu;
    f_mr011_0108e100(c);
R_010d99ec:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xcu;
    c.lr = 0x10d99f8u;
    f_mr011_0108a4b0(c);
R_010d99f8:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x1cu;
    c.lr = 0x10d9a04u;
    f_mr011_0108a4b0(c);
R_010d9a04:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9a24;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d9a24:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9a2cu;
    f_801c7a8c(c);
R_010d9a2c:
    goto L_010d9c18;
L_010d9a30:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10d9a3cu;
    f_mr011_0108e100(c);
L_010d9a3c:
R_010d9a3c:
    ea = c.r[31] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (!wp::cr_get(c, 2)) goto L_010d9b00;
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10d9a64u;
    f_mr011_0108f450(c);
R_010d9a64:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9a6cu;
    f_mr011_0108cb00(c);
R_010d9a6c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x14u;
    c.lr = 0x10d9a78u;
    f_mr011_0108a4b0(c);
R_010d9a78:
    c.r[3] = c.r[31] + 0x14u;
    c.lr = 0x10d9a80u;
    f_mr011_0108f4d0(c);
R_010d9a80:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    c.lr = 0x10d9a94u;
    f_mr011_0108f5d0(c);
R_010d9a94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010d9b84;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9c18;
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9ab0u;
    f_mr011_0108e060(c);
R_010d9ab0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9abcu;
    f_mr011_0108e100(c);
R_010d9abc:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xcu;
    c.lr = 0x10d9ac8u;
    f_mr011_0108a4b0(c);
R_010d9ac8:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x1cu;
    c.lr = 0x10d9ad4u;
    f_mr011_0108a4b0(c);
R_010d9ad4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9af4;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d9af4:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9afcu;
    f_801c7a8c(c);
R_010d9afc:
    goto L_010d9c18;
L_010d9b00:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0x1u;
    c.r[7] = 0x0u;
    c.lr = 0x10d9b18u;
    f_mr011_0108f770(c);
R_010d9b18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010d9b84;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9c18;
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9b34u;
    f_mr011_0108e060(c);
R_010d9b34:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9b40u;
    f_mr011_0108e100(c);
R_010d9b40:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xcu;
    c.lr = 0x10d9b4cu;
    f_mr011_0108a4b0(c);
R_010d9b4c:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x1cu;
    c.lr = 0x10d9b58u;
    f_mr011_0108a4b0(c);
R_010d9b58:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9b78;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d9b78:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9b80u;
    f_801c7a8c(c);
R_010d9b80:
    goto L_010d9c18;
L_010d9b84:
    c.r[4] = ((((g_mr011_bases[4] + 0x3e58u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e58u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[31] + 0x24u;
    ea = c.r[31] + 0x24u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0xffffffffu;
    c.lr = 0x10d9ba0u;
    f_mr011_0108d010(c);
R_010d9ba0:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9ba8u;
    f_mr011_0108e110(c);
R_010d9ba8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9bb0u;
    f_mr011_01089f70(c);
R_010d9bb0:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010d9c18;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9c18;
    ea = c.r[31] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9bccu;
    f_mr011_0108e060(c);
R_010d9bcc:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10d9bd8u;
    f_mr011_0108e100(c);
R_010d9bd8:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xcu;
    c.lr = 0x10d9be4u;
    f_mr011_0108a4b0(c);
R_010d9be4:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0x1cu;
    c.lr = 0x10d9bf0u;
    f_mr011_0108a4b0(c);
R_010d9bf0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010d9c10;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010d9c10:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9c18u;
    f_801c7a8c(c);
L_010d9c18:
R_010d9c18:
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

void f_mr011_010d9c30(wp::Cpu& c) {
    WP_ENTER(0x10d9c30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9c6cu: goto R_010d9c6c;
        case 0x10d9c7cu: goto R_010d9c7c;
        case 0x10d9ca0u: goto R_010d9ca0;
        case 0x10d9cb8u: goto R_010d9cb8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2f428u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f428u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_mr011_bases[6] + 0x5ab4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + wp::sign_extend16((g_mr011_bases[6] + 0x5ab4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[30] = ea;
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d9c6cu;
    f_801c7860(c);
R_010d9c6c:
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x10d9c7cu;
    f_mr011_010043a0(c);
R_010d9c7c:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[31] | c.r[31];
    c.r[7] = c.r[31] + c.r[29];
    c.r[8] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.lr = 0x10d9ca0u;
    f_mr011_01004560(c);
R_010d9ca0:
    c.r[4] = ((((g_mr011_bases[1] + 0x4330u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[6] + 0x5aa8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[1] + 0x4330u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[6] + 0x5aa8u) & 0xFFFFu);
    c.lr = 0x10d9cb8u;
    f_mr011_01000000(c);
R_010d9cb8:
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

void f_mr011_010d9ce0(wp::Cpu& c) {
    WP_ENTER(0x10d9ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9d00u: goto R_010d9d00;
        case 0x10d9d08u: goto R_010d9d08;
        case 0x10d9d0cu: goto R_010d9d0c;
        case 0x10d9d18u: goto R_010d9d18;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10d9d00u;
    f_mr011_0108d120(c);
R_010d9d00:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9d08u;
    f_80013e00(c);
R_010d9d08:
    c.lr = 0x10d9d0cu;
    f_8001b020(c);
R_010d9d0c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9d18u;
    f_mr011_0108a600(c);
R_010d9d18:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d9d30(wp::Cpu& c) {
    WP_ENTER(0x10d9d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9d58u: goto R_010d9d58;
        case 0x10d9d68u: goto R_010d9d68;
        case 0x10d9d78u: goto R_010d9d78;
        case 0x10d9d80u: goto R_010d9d80;
        case 0x10d9d98u: goto R_010d9d98;
        case 0x10d9dacu: goto R_010d9dac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0xffffffffu;
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10d9d58u;
    f_mr011_0108d010(c);
R_010d9d58:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10d9d68u;
    f_mr011_0108d010(c);
R_010d9d68:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x4u;
    c.lr = 0x10d9d78u;
    f_mr011_0108d010(c);
R_010d9d78:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10d9d80u;
    f_mr011_0108e060(c);
R_010d9d80:
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 0)) goto L_010d9d98;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x5u;
    c.lr = 0x10d9d98u;
    f_mr011_0108cf80(c);
L_010d9d98:
R_010d9d98:
    ea = c.r[1] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x10u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0xcu;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9dacu;
    f_8001b280(c);
R_010d9dac:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010d9dd0(wp::Cpu& c) {
    WP_ENTER(0x10d9dd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9df4u: goto R_010d9df4;
        case 0x10d9dfcu: goto R_010d9dfc;
        case 0x10d9e20u: goto R_010d9e20;
        case 0x10d9e70u: goto R_010d9e70;
        case 0x10d9edcu: goto R_010d9edc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10d9df4u;
    f_mr011_0108d120(c);
R_010d9df4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10d9dfcu;
    f_80013de0(c);
R_010d9dfc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f43cu) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f43cu) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010d9eec;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10d9e20u;
    f_mr011_0108d010(c);
R_010d9e20:
    c.r[3] = ((((g_mr011_bases[5] + 0x2f438u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[5] + 0x2f438u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010d9e70;
    c.r[4] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = ((((g_mr011_bases[4] + 0x3e70u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] ^ 0x80000000u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e70u) & 0xFFFFu);
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[0] = c.f[0];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10d9e70u;
    f_8001a0f0(c);
L_010d9e70:
R_010d9e70:
    c.r[3] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    ea = c.r[3] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[4] = wp::rd32(ea);
    c.r[3] = ((((g_mr011_bases[4] + 0x3e70u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = ((((g_mr011_bases[6] + 0x5ac0u) + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] ^ 0x80000000u;
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ac0u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x3e70u) & 0xFFFFu);
    c.f[1] = wp::rdf64(ea);
    c.r[5] = c.r[5] + 0x1u;
    ea = c.r[1] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[0] = c.r[5] & 0x1u;
    ea = c.r[1] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[0] = c.f[0];
    c.r[0] = c.r[0] ^ c.r[3];
    c.r[3] = c.r[0] - c.r[3];
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ac0u) & 0xFFFFu);
    wp::wr32(ea, c.r[5]);
    c.r[30] = c.r[3] + 0x1u;
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[30] | c.r[30];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10d9edcu;
    f_8001a070(c);
R_010d9edc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f438u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mr011_bases[5] + 0x2f43cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f438u) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[5] + 0x2f43cu) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
L_010d9eec:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010d9f10(wp::Cpu& c) {
    WP_ENTER(0x10d9f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9f34u: goto R_010d9f34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = ((((g_mr011_bases[5] + 0x2f438u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[5] + 0x2f438u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010d9f34;
    c.r[4] = 0x5u;
    c.lr = 0x10d9f34u;
    f_8001a0f0(c);
L_010d9f34:
R_010d9f34:
    c.r[3] = ((((g_mr011_bases[5] + 0x2f43cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[5] + 0x2f43cu) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010d9f60(wp::Cpu& c) {
    WP_ENTER(0x10d9f60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10d9f94u: goto R_010d9f94;
        case 0x10d9fa4u: goto R_010d9fa4;
        case 0x10d9fe8u: goto R_010d9fe8;
        case 0x10da008u: goto R_010da008;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[5] + 0x2f438u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f438u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010da008;
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10d9f94u;
    f_mr011_0108d010(c);
R_010d9f94:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10d9fa4u;
    f_mr011_0108d010(c);
R_010d9fa4:
    c.r[3] = (((0x802f5ed0u + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    ea = c.r[3] + wp::sign_extend16(0x802f5ed0u & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = ((((g_mr011_bases[4] + 0x3e70u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] ^ 0x80000000u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e70u) & 0xFFFFu);
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = wp::round_single(c.f[0] - c.f[1]);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[0] = c.f[0];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = 0x10d9fe8u;
    f_8001a430(c);
R_010d9fe8:
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    c.r[4] = wp::mfcr(c);
    c.f[1] = c.f[0];
    c.r[4] = wp::rotl(c.r[4], 2) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x10da008u;
    f_8001a360(c);
L_010da008:
R_010da008:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010da030(wp::Cpu& c) {
    WP_ENTER(0x10da030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da048u: goto R_010da048;
        case 0x10da050u: goto R_010da050;
        case 0x10da054u: goto R_010da054;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10da048u;
    f_mr011_0108d120(c);
R_010da048:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da050u;
    f_80013de0(c);
R_010da050:
    c.lr = 0x10da054u;
    f_8001a480(c);
R_010da054:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010da070(wp::Cpu& c) {
    WP_ENTER(0x10da070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da0a8u: goto R_010da0a8;
        case 0x10da0d4u: goto R_010da0d4;
        case 0x10da0e4u: goto R_010da0e4;
        case 0x10da0f4u: goto R_010da0f4;
        case 0x10da104u: goto R_010da104;
        case 0x10da10cu: goto R_010da10c;
        case 0x10da118u: goto R_010da118;
        case 0x10da128u: goto R_010da128;
        case 0x10da134u: goto R_010da134;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr011_bases[4] + 0x3e78u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[4] + 0x3e7cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3e78u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e7cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.lr = 0x10da0a8u;
    f_mr011_0108e060(c);
R_010da0a8:
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_010da0c4;
    wp::compare_signed(c, 0, c.r[3], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010da0d4;
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010da0e4;
    goto L_010da0f4;
L_010da0c4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x5u;
    c.lr = 0x10da0d4u;
    f_mr011_0108d010(c);
L_010da0d4:
R_010da0d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x4u;
    c.lr = 0x10da0e4u;
    f_mr011_0108d010(c);
L_010da0e4:
R_010da0e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10da0f4u;
    f_mr011_0108d010(c);
L_010da0f4:
R_010da0f4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x2u;
    c.lr = 0x10da104u;
    f_mr011_0108d120(c);
R_010da104:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10da10cu;
    f_80071fe0(c);
R_010da10c:
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da118u;
    f_80013de0(c);
R_010da118:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10da128u;
    f_80018e30(c);
R_010da128:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da134u;
    f_mr011_0108a590(c);
R_010da134:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da150(wp::Cpu& c) {
    WP_ENTER(0x10da150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da170u: goto R_010da170;
        case 0x10da178u: goto R_010da178;
        case 0x10da190u: goto R_010da190;
        case 0x10da198u: goto R_010da198;
        case 0x10da1acu: goto R_010da1ac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da170u;
    f_mr011_0108cf80(c);
R_010da170:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da178u;
    f_mr011_0108e060(c);
R_010da178:
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010da1a0;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10da190u;
    f_mr011_0108d010(c);
R_010da190:
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10da198u;
    f_80071fe0(c);
R_010da198:
    c.r[4] = c.r[3] | c.r[3];
    goto L_010da1a4;
L_010da1a0:
    c.r[4] = 0x5u;
L_010da1a4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da1acu;
    f_800195d0(c);
R_010da1ac:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da1d0(wp::Cpu& c) {
    WP_ENTER(0x10da1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da1f0u: goto R_010da1f0;
        case 0x10da1f8u: goto R_010da1f8;
        case 0x10da210u: goto R_010da210;
        case 0x10da21cu: goto R_010da21c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da1f0u;
    f_mr011_0108d120(c);
R_010da1f0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da1f8u;
    f_80013de0(c);
R_010da1f8:
    c.r[4] = ((((g_mr011_bases[4] + 0x3e7cu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3e78u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e7cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3e78u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10da210u;
    f_80019090(c);
R_010da210:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da21cu;
    f_mr011_0108a590(c);
R_010da21c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da240(wp::Cpu& c) {
    WP_ENTER(0x10da240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da260u: goto R_010da260;
        case 0x10da268u: goto R_010da268;
        case 0x10da280u: goto R_010da280;
        case 0x10da28cu: goto R_010da28c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da260u;
    f_mr011_0108d120(c);
R_010da260:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da268u;
    f_80013de0(c);
R_010da268:
    c.r[4] = ((((g_mr011_bases[4] + 0x3e7cu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[4] + 0x3e78u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3e7cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = 0x0u;
    ea = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3e78u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x10da280u;
    f_80018f60(c);
R_010da280:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da28cu;
    f_mr011_0108a590(c);
R_010da28c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da2b0(wp::Cpu& c) {
    WP_ENTER(0x10da2b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da2d4u: goto R_010da2d4;
        case 0x10da2e0u: goto R_010da2e0;
        case 0x10da2ecu: goto R_010da2ec;
        case 0x10da300u: goto R_010da300;
        case 0x10da30cu: goto R_010da30c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10da2d4u;
    f_mr011_0108d120(c);
R_010da2d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x3u;
    c.lr = 0x10da2e0u;
    f_mr011_010df6e0(c);
R_010da2e0:
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da2ecu;
    f_80013de0(c);
R_010da2ec:
    c.r[5] = ((((g_mr011_bases[4] + 0x3e7cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x3e7cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = 0x0u;
    c.lr = 0x10da300u;
    f_800192f0(c);
R_010da300:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da30cu;
    f_mr011_0108a590(c);
R_010da30c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da330(wp::Cpu& c) {
    WP_ENTER(0x10da330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da350u: goto R_010da350;
        case 0x10da360u: goto R_010da360;
        case 0x10da36cu: goto R_010da36c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da350u;
    f_mr011_0108cf80(c);
R_010da350:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10da360u;
    f_mr011_0108d010(c);
R_010da360:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10da36cu;
    f_80019a90(c);
R_010da36c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da390(wp::Cpu& c) {
    WP_ENTER(0x10da390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da3b0u: goto R_010da3b0;
        case 0x10da3b8u: goto R_010da3b8;
        case 0x10da3c4u: goto R_010da3c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da3b0u;
    f_mr011_0108d120(c);
R_010da3b0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da3b8u;
    f_80013de0(c);
R_010da3b8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da3c4u;
    f_mr011_0108a590(c);
R_010da3c4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da3e0(wp::Cpu& c) {
    WP_ENTER(0x10da3e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da400u: goto R_010da400;
        case 0x10da408u: goto R_010da408;
        case 0x10da420u: goto R_010da420;
        case 0x10da42cu: goto R_010da42c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da400u;
    f_mr011_0108cf80(c);
R_010da400:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da408u;
    f_80013e10(c);
R_010da408:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[4] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010da424;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0xffffffffu;
    c.lr = 0x10da420u;
    f_mr011_0108a4e0(c);
R_010da420:
    goto L_010da42c;
L_010da424:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da42cu;
    f_mr011_0108a4d0(c);
L_010da42c:
R_010da42c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da450(wp::Cpu& c) {
    WP_ENTER(0x10da450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da470u: goto R_010da470;
        case 0x10da478u: goto R_010da478;
        case 0x10da484u: goto R_010da484;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da470u;
    f_mr011_0108d120(c);
R_010da470:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10da478u;
    f_80013e00(c);
R_010da478:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10da484u;
    f_mr011_0108a590(c);
R_010da484:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010da4a0(wp::Cpu& c) {
    WP_ENTER(0x10da4a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da4ccu: goto R_010da4cc;
        case 0x10da4d4u: goto R_010da4d4;
        case 0x10da4e4u: goto R_010da4e4;
        case 0x10da4f0u: goto R_010da4f0;
        case 0x10da504u: goto R_010da504;
        case 0x10da514u: goto R_010da514;
        case 0x10da520u: goto R_010da520;
        case 0x10da530u: goto R_010da530;
        case 0x10da53cu: goto R_010da53c;
        case 0x10da54cu: goto R_010da54c;
        case 0x10da558u: goto R_010da558;
        case 0x10da568u: goto R_010da568;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3e60u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3e60u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[4] = c.r[31] + 0x0u;
    c.lr = 0x10da4ccu;
    f_mr011_0108a4e0(c);
R_010da4cc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da4d4u;
    f_mr011_0108cb10(c);
R_010da4d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10da4e4u;
    f_mr011_0108a4e0(c);
R_010da4e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da4f0u;
    f_mr011_0108eb00(c);
R_010da4f0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010da54c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10da504u;
    f_mr011_0108aac0(c);
R_010da504:
    ea = c.r[31] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10da514u;
    f_mr011_0108d6c0(c);
R_010da514:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x20u;
    c.lr = 0x10da520u;
    f_mr011_010d19e0(c);
R_010da520:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10da530u;
    f_mr011_0108a4e0(c);
R_010da530:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da53cu;
    f_mr011_0108ce30(c);
R_010da53c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10da54cu;
    f_mr011_0108e190(c);
L_010da54c:
R_010da54c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da558u;
    f_mr011_0108e120(c);
R_010da558:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10da568u;
    f_mr011_0108e190(c);
R_010da568:
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

void f_mr011_010da580(wp::Cpu& c) {
    WP_ENTER(0x10da580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    if (!wp::cr_get(c, 6)) goto L_010da5a8;
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[4]);
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[5]);
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[6]);
    ea = c.r[1] + 0x58u;
    wp::wrf64(ea, c.f[7]);
    ea = c.r[1] + 0x60u;
    wp::wrf64(ea, c.f[8]);
L_010da5a8:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr011_010da5d0(wp::Cpu& c) {
    WP_ENTER(0x10da5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    if (!wp::cr_get(c, 6)) goto L_010da5f8;
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[4]);
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[5]);
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[6]);
    ea = c.r[1] + 0x58u;
    wp::wrf64(ea, c.f[7]);
    ea = c.r[1] + 0x60u;
    wp::wrf64(ea, c.f[8]);
L_010da5f8:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr011_010da620(wp::Cpu& c) {
    WP_ENTER(0x10da620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da638u: goto R_010da638;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10da638u;
    f_mr011_0108cf80(c);
R_010da638:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010da650(wp::Cpu& c) {
    WP_ENTER(0x10da650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da674u: goto R_010da674;
        case 0x10da684u: goto R_010da684;
        case 0x10da694u: goto R_010da694;
        case 0x10da6a4u: goto R_010da6a4;
        case 0x10da6bcu: goto R_010da6bc;
        case 0x10da6d4u: goto R_010da6d4;
        case 0x10da70cu: goto R_010da70c;
        case 0x10da734u: goto R_010da734;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x1cu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10da674u;
    f_mr011_0108cf80(c);
R_010da674:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x3u;
    c.lr = 0x10da684u;
    f_mr011_0108cf80(c);
R_010da684:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x4u;
    c.lr = 0x10da694u;
    f_mr011_0108d010(c);
R_010da694:
    c.r[3] = c.r[30] | c.r[30];
    c.r[31] = 0x5u;
    c.r[4] = 0x5u;
    c.lr = 0x10da6a4u;
    f_mr011_0108ce90(c);
R_010da6a4:
    c.r[0] = c.r[3] & 0x4000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010da6c0;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x5u;
    c.lr = 0x10da6bcu;
    f_mr011_0108d010(c);
R_010da6bc:
    c.r[31] = 0x6u;
L_010da6c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[1] + 0xcu;
    c.lr = 0x10da6d4u;
    f_mr011_010ce250(c);
R_010da6d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010da6e4;
    c.r[3] = 0xffffffffu;
    goto L_010da738;
L_010da6e4:
    wp::compare_signed(c, 0, c.r[31], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_010da710;
    c.r[5] = ((((g_mr011_bases[5] + 0x2f538u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[5] + 0x2f538u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    wp::cr_set(c, 6, wp::cr_get(c, 6) == wp::cr_get(c, 6));
    c.lr = 0x10da70cu;
    f_mr011_010da580(c);
R_010da70c:
    goto L_010da734;
L_010da710:
    c.r[5] = ((((g_mr011_bases[5] + 0x2f538u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[5] + 0x2f538u) & 0xFFFFu);
    ea = c.r[1] + 0x14u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x10u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    wp::cr_set(c, 6, wp::cr_get(c, 6) == wp::cr_get(c, 6));
    c.lr = 0x10da734u;
    f_mr011_010da5d0(c);
L_010da734:
R_010da734:
    c.r[3] = 0x0u;
L_010da738:
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

void f_mr011_010da750(wp::Cpu& c) {
    WP_ENTER(0x10da750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da770u: goto R_010da770;
        case 0x10da780u: goto R_010da780;
        case 0x10da790u: goto R_010da790;
        case 0x10da7a0u: goto R_010da7a0;
        case 0x10da7b0u: goto R_010da7b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10da770u;
    f_mr011_0108cf80(c);
R_010da770:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x3u;
    c.lr = 0x10da780u;
    f_mr011_0108cf80(c);
R_010da780:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x4u;
    c.lr = 0x10da790u;
    f_mr011_0108cf80(c);
R_010da790:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x5u;
    c.lr = 0x10da7a0u;
    f_mr011_0108cf80(c);
R_010da7a0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x6u;
    c.lr = 0x10da7b0u;
    f_mr011_0108cf80(c);
R_010da7b0:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010da7d0(wp::Cpu& c) {
    WP_ENTER(0x10da7d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da7f0u: goto R_010da7f0;
        case 0x10da80cu: goto R_010da80c;
        case 0x10da824u: goto R_010da824;
        case 0x10da830u: goto R_010da830;
        case 0x10da840u: goto R_010da840;
        case 0x10da850u: goto R_010da850;
        case 0x10da85cu: goto R_010da85c;
        case 0x10da86cu: goto R_010da86c;
        case 0x10da87cu: goto R_010da87c;
        case 0x10da884u: goto R_010da884;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10da7f0u;
    f_mr011_0108ce90(c);
R_010da7f0:
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x20u);
    if (wp::cr_get(c, 2)) goto L_010da810;
    c.r[4] = ((((g_mr011_bases[5] + 0x2f568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f568u) & 0xFFFFu);
    c.lr = 0x10da80cu;
    f_mr011_0108f4f0(c);
R_010da80c:
    goto L_010da888;
L_010da810:
    c.r[31] = ((((g_mr011_bases[5] + 0x2f578u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f578u) & 0xFFFFu);
    c.r[5] = 0x2u;
    c.lr = 0x10da824u;
    f_mr011_0108a4e0(c);
R_010da824:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da830u;
    f_mr011_0108eb00(c);
R_010da830:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010da86c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da840u;
    f_mr011_0108a7c0(c);
R_010da840:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f578u) & 0xFFFFu);
    c.r[5] = 0x2u;
    c.lr = 0x10da850u;
    f_mr011_0108a4e0(c);
R_010da850:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da85cu;
    f_mr011_0108ce30(c);
R_010da85c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10da86cu;
    f_mr011_0108e190(c);
L_010da86c:
R_010da86c:
    c.r[4] = ((((g_mr011_bases[4] + 0x3f80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3f80u) & 0xFFFFu);
    c.lr = 0x10da87cu;
    f_mr011_010d19e0(c);
R_010da87c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da884u;
    f_mr011_0108e110(c);
R_010da884:
    c.r[3] = 0x0u;
L_010da888:
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

void f_mr011_010da8a0(wp::Cpu& c) {
    WP_ENTER(0x10da8a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da8c8u: goto R_010da8c8;
        case 0x10da8d0u: goto R_010da8d0;
        case 0x10da8e0u: goto R_010da8e0;
        case 0x10da8ecu: goto R_010da8ec;
        case 0x10da900u: goto R_010da900;
        case 0x10da910u: goto R_010da910;
        case 0x10da920u: goto R_010da920;
        case 0x10da930u: goto R_010da930;
        case 0x10da940u: goto R_010da940;
        case 0x10da94cu: goto R_010da94c;
        case 0x10da95cu: goto R_010da95c;
        case 0x10da968u: goto R_010da968;
        case 0x10da978u: goto R_010da978;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10da8c8u;
    f_mr011_0108a4e0(c);
R_010da8c8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10da8d0u;
    f_mr011_0108cb10(c);
R_010da8d0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10da8e0u;
    f_mr011_0108a4e0(c);
R_010da8e0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da8ecu;
    f_mr011_0108eb00(c);
R_010da8ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010da95c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10da900u;
    f_mr011_0108aac0(c);
R_010da900:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x148u;
    c.lr = 0x10da910u;
    f_mr011_0108dc10(c);
R_010da910:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10da920u;
    f_mr011_0108d6c0(c);
R_010da920:
    c.r[4] = ((((g_mr011_bases[4] + 0x3fd0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x3fd0u) & 0xFFFFu);
    c.lr = 0x10da930u;
    f_mr011_010d19e0(c);
R_010da930:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10da940u;
    f_mr011_0108a4e0(c);
R_010da940:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da94cu;
    f_mr011_0108ce30(c);
R_010da94c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10da95cu;
    f_mr011_0108e190(c);
L_010da95c:
R_010da95c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10da968u;
    f_mr011_0108e120(c);
R_010da968:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10da978u;
    f_mr011_0108e190(c);
R_010da978:
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

void f_mr011_010da990(wp::Cpu& c) {
    WP_ENTER(0x10da990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10da9b0u: goto R_010da9b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10da9b0u;
    wp::call(c, c.ctr);
R_010da9b0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010da9d0(wp::Cpu& c) {
    WP_ENTER(0x10da9d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10daa08u: goto R_010daa08;
        case 0x10daa14u: goto R_010daa14;
        case 0x10daa40u: goto R_010daa40;
        case 0x10daa58u: goto R_010daa58;
        case 0x10daa70u: goto R_010daa70;
        case 0x10daa84u: goto R_010daa84;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10daa08u;
    f_mr011_0108de20(c);
R_010daa08:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10daa14u;
    f_mr011_0108e060(c);
R_010daa14:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    c.r[4] = 0x1u;
    c.r[0] = 0xfu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010daa40;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10daa40u;
    f_mr011_0108cf80(c);
L_010daa40:
R_010daa40:
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010daa58;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10daa58u;
    f_mr011_0108cf80(c);
L_010daa58:
R_010daa58:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010daa70;
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10daa70u;
    f_mr011_0101ae00(c);
L_010daa70:
R_010daa70:
    c.r[5] = ((((g_mr011_bases[1] + 0xda990u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xda990u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10daa84u;
    f_mr011_0108fb40(c);
R_010daa84:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010daab0(wp::Cpu& c) {
    WP_ENTER(0x10daab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10daae4u: goto R_010daae4;
        case 0x10daaf8u: goto R_010daaf8;
        case 0x10dab04u: goto R_010dab04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10daae4u;
    f_mr011_0108de20(c);
R_010daae4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10daaf8u;
    f_mr011_0108d010(c);
R_010daaf8:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dab04u;
    f_mr011_0101af80(c);
R_010dab04:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dab20(wp::Cpu& c) {
    WP_ENTER(0x10dab20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dab48u: goto R_010dab48;
        case 0x10dab50u: goto R_010dab50;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dab48u;
    f_mr011_0108de20(c);
R_010dab48:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10dab50u;
    f_mr011_0101afa0(c);
R_010dab50:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010dab70(wp::Cpu& c) {
    WP_ENTER(0x10dab70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10daba4u: goto R_010daba4;
        case 0x10dabb8u: goto R_010dabb8;
        case 0x10dabc4u: goto R_010dabc4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10daba4u;
    f_mr011_0108de20(c);
R_010daba4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dabb8u;
    f_mr011_0108d010(c);
R_010dabb8:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dabc4u;
    f_mr011_0101af70(c);
R_010dabc4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dabe0(wp::Cpu& c) {
    WP_ENTER(0x10dabe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dac14u: goto R_010dac14;
        case 0x10dac24u: goto R_010dac24;
        case 0x10dac30u: goto R_010dac30;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x3fc0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x3fc0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dac14u;
    f_mr011_0108de20(c);
R_010dac14:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10dac24u;
    f_mr011_010df6e0(c);
R_010dac24:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dac30u;
    f_mr011_0101af50(c);
R_010dac30:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dac50(wp::Cpu& c) {
    WP_ENTER(0x10dac50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dac64u: goto R_010dac64;
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
    c.lr = 0x10dac64u;
    f_8002f100(c);
R_010dac64:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010dac80(wp::Cpu& c) {
    WP_ENTER(0x10dac80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dacbcu: goto R_010dacbc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[31] = c.r[30] + c.r[0];
    goto L_010dacc0;
L_010dacb0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10dacbcu;
    f_8002e580(c);
R_010dacbc:
    c.r[30] = c.r[30] + 0x4u;
L_010dacc0:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010dacb0;
    }
    c.r[4] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
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

void f_mr011_010dad00(wp::Cpu& c) {
    WP_ENTER(0x10dad00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dad14u: goto R_010dad14;
        case 0x10dad20u: goto R_010dad20;
        case 0x10dad28u: goto R_010dad28;
        case 0x10dad3cu: goto R_010dad3c;
        case 0x10dada4u: goto R_010dada4;
        case 0x10dada8u: goto R_010dada8;
        case 0x10dae10u: goto R_010dae10;
        case 0x10dae14u: goto R_010dae14;
        case 0x10daed4u: goto R_010daed4;
        case 0x10daed8u: goto R_010daed8;
        case 0x10daee0u: goto R_010daee0;
        case 0x10daf08u: goto R_010daf08;
        case 0x10daf0cu: goto R_010daf0c;
        case 0x10daf88u: goto R_010daf88;
        case 0x10daf98u: goto R_010daf98;
        case 0x10dafe4u: goto R_010dafe4;
        case 0x10daff0u: goto R_010daff0;
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
    c.lr = 0x10dad14u;
    f_801c83b8(c);
R_010dad14:
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x2u;
    c.lr = 0x10dad20u;
    f_mr011_0108d120(c);
R_010dad20:
    c.r[3] = 0x10u;
    c.lr = 0x10dad28u;
    f_801c79a4(c);
R_010dad28:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010dad40;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10dad3cu;
    f_8002e090(c);
R_010dad3c:
    c.r[29] = c.r[3] | c.r[3];
L_010dad40:
    c.r[6] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_010dad74;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    goto L_010dafe4;
L_010dad74:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010dada8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x2f5e8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f5e8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10dada4u;
    f_801cee24(c);
R_010dada4:
    c.lr = 0x10dada8u;
    f_801d3940(c);
L_010dada8:
R_010dada8:
    c.r[6] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    c.r[7] = 0x0u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[3] = 0x40000000u;
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[6] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[5] = c.r[6] + 0x8u;
    c.r[3] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[3] - c.r[30];
    c.r[0] = c.r[0] - c.r[30];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_010dae14;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x2f5e8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f5e8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10dae10u;
    f_801cee24(c);
R_010dae10:
    c.lr = 0x10dae14u;
    f_801d3940(c);
L_010dae14:
R_010dae14:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5555u;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010dae64;
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
    if (!wp::cr_get(c, 0)) goto L_010dae58;
    c.r[3] = c.r[1] + 0x8u;
L_010dae58:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_010daea8;
L_010dae64:
    c.r[3] = 0x2aab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010daea0;
    c.r[3] = c.r[30] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010dae94;
    c.r[3] = c.r[1] + 0x8u;
L_010dae94:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[30] + c.r[0];
    goto L_010daea8;
L_010daea0:
    c.r[3] = 0x40000000u;
    c.r[27] = c.r[3] + 0xffffffffu;
L_010daea8:
    c.r[3] = 0x40000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010daed8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x2f5e8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f5e8u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10daed4u;
    f_801cee24(c);
R_010daed4:
    c.lr = 0x10daed8u;
    f_801d3940(c);
L_010daed8:
R_010daed8:
    c.r[3] = wp::rotl(c.r[27], 2) & 0xfffffffcu;
    c.lr = 0x10daee0u;
    f_801c79a4(c);
R_010daee0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010daf0c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mr011_bases[5] + 0x670u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x670u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10daf08u;
    f_801cee24(c);
R_010daf08:
    c.lr = 0x10daf0cu;
    f_801d3940(c);
L_010daf0c:
R_010daf0c:
    c.r[30] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[30] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[27]);
    c.r[0] = wp::rotl(c.r[4], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[28] + c.r[0];
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[29]);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[28] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] + c.r[0];
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[3] - c.r[28];
    c.r[4] = wp::sraw(c, c.r[3], 2);
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[29] = wp::add_extended(c, c.r[4], 0);
    c.r[0] = c.r[0] - c.r[29];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = wp::rotl(c.r[29], 2) & 0xfffffffcu;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[27] | c.r[27];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x10daf88u;
    f_800043c4(c);
R_010daf88:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x10daf98u;
    f_80004714(c);
R_010daf98:
    c.r[0] = wp::add_carry(c, c.r[1], 0x18u, 0);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[31] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[0] + c.r[29];
    ea = c.r[30] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[30] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_010dafe4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010dafe4;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    c.lr = 0x10dafe4u;
    f_801c7a8c(c);
L_010dafe4:
R_010dafe4:
    c.r[11] = c.r[1] + 0x50u;
    c.r[3] = 0x0u;
    c.lr = 0x10daff0u;
    f_801c8404(c);
R_010daff0:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mr011_010db000(wp::Cpu& c) {
    WP_ENTER(0x10db000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db020u: goto R_010db020;
        case 0x10db028u: goto R_010db028;
        case 0x10db03cu: goto R_010db03c;
        case 0x10db04cu: goto R_010db04c;
        case 0x10db060u: goto R_010db060;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10db020u;
    f_mr011_0108d120(c);
R_010db020:
    c.r[3] = 0x3cu;
    c.lr = 0x10db028u;
    f_8002e6a0(c);
R_010db028:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010db040;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10db03cu;
    f_8002e9f0(c);
R_010db03c:
    c.r[5] = c.r[3] | c.r[3];
L_010db040:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10db04cu;
    f_mr011_0108dad0(c);
R_010db04c:
    c.r[5] = ((((g_mr011_bases[1] + 0xdac50u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xdac50u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10db060u;
    f_mr011_0108fb40(c);
R_010db060:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db080(wp::Cpu& c) {
    WP_ENTER(0x10db080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db0a4u: goto R_010db0a4;
        case 0x10db0acu: goto R_010db0ac;
        case 0x10db0c0u: goto R_010db0c0;
        case 0x10db0ccu: goto R_010db0cc;
        case 0x10db0e0u: goto R_010db0e0;
        case 0x10db0f4u: goto R_010db0f4;
        case 0x10db108u: goto R_010db108;
        case 0x10db118u: goto R_010db118;
        case 0x10db128u: goto R_010db128;
        case 0x10db134u: goto R_010db134;
        case 0x10db144u: goto R_010db144;
        case 0x10db150u: goto R_010db150;
        case 0x10db15cu: goto R_010db15c;
        case 0x10db164u: goto R_010db164;
        case 0x10db174u: goto R_010db174;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10db0a4u;
    f_mr011_0108d120(c);
R_010db0a4:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10db0acu;
    f_mr011_0108cb10(c);
R_010db0ac:
    c.r[31] = ((((g_mr011_bases[4] + 0x4030u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4030u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db0c0u;
    f_mr011_0108a4e0(c);
R_010db0c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db0ccu;
    f_mr011_0108eb00(c);
R_010db0cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010db144;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10db0e0u;
    f_mr011_0108aac0(c);
R_010db0e0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4038u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4038u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db0f4u;
    f_mr011_0108d6c0(c);
R_010db0f4:
    c.r[5] = ((((g_mr011_bases[1] + 0xdac80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xdac80u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db108u;
    f_mr011_0108fb40(c);
R_010db108:
    c.r[4] = ((((g_mr011_bases[4] + 0x4040u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4040u) & 0xFFFFu);
    c.lr = 0x10db118u;
    f_mr011_010d19e0(c);
R_010db118:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4030u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db128u;
    f_mr011_0108a4e0(c);
R_010db128:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db134u;
    f_mr011_0108ce30(c);
R_010db134:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10db144u;
    f_mr011_0108e190(c);
L_010db144:
R_010db144:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db150u;
    f_mr011_0108e120(c);
R_010db150:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db15cu;
    f_mr011_010907d0(c);
R_010db15c:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10db164u;
    f_8002ed90(c);
R_010db164:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db174u;
    f_mr011_0108dad0(c);
R_010db174:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db190(wp::Cpu& c) {
    WP_ENTER(0x10db190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db1b8u: goto R_010db1b8;
        case 0x10db1c4u: goto R_010db1c4;
        case 0x10db1d0u: goto R_010db1d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4038u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4038u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10db1b8u;
    f_mr011_0108de20(c);
R_010db1b8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10db1c4u;
    f_mr011_010df6e0(c);
R_010db1c4:
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10db1d0u;
    f_8002f5b0(c);
R_010db1d0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db1f0(wp::Cpu& c) {
    WP_ENTER(0x10db1f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db210u: goto R_010db210;
        case 0x10db228u: goto R_010db228;
        case 0x10db234u: goto R_010db234;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10db210u;
    f_mr011_0108d010(c);
R_010db210:
    c.r[4] = ((((g_mr011_bases[4] + 0x4038u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4038u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x1u;
    c.lr = 0x10db228u;
    f_mr011_0108de20(c);
R_010db228:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10db234u;
    f_8002f630(c);
R_010db234:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db250(wp::Cpu& c) {
    WP_ENTER(0x10db250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db270u: goto R_010db270;
        case 0x10db288u: goto R_010db288;
        case 0x10db294u: goto R_010db294;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10db270u;
    f_mr011_0108cf80(c);
R_010db270:
    c.r[4] = ((((g_mr011_bases[4] + 0x4038u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4038u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x1u;
    c.lr = 0x10db288u;
    f_mr011_0108de20(c);
R_010db288:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10db294u;
    f_8002f570(c);
R_010db294:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db2b0(wp::Cpu& c) {
    WP_ENTER(0x10db2b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db2d8u: goto R_010db2d8;
        case 0x10db2e0u: goto R_010db2e0;
        case 0x10db2f0u: goto R_010db2f0;
        case 0x10db2fcu: goto R_010db2fc;
        case 0x10db314u: goto R_010db314;
        case 0x10db32cu: goto R_010db32c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4038u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4038u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10db2d8u;
    f_mr011_0108de20(c);
R_010db2d8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10db2e0u;
    f_mr011_0108e060(c);
R_010db2e0:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010db304;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10db2f0u;
    f_8002f590(c);
R_010db2f0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10db2fcu;
    f_mr011_0108a600(c);
R_010db2fc:
    c.r[3] = 0x1u;
    goto L_010db330;
L_010db304:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10db314u;
    f_mr011_0108d0b0(c);
R_010db314:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10db32cu;
    f_8002f580(c);
R_010db32c:
    c.r[3] = 0x0u;
L_010db330:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db350(wp::Cpu& c) {
    WP_ENTER(0x10db350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db37cu: goto R_010db37c;
        case 0x10db384u: goto R_010db384;
        case 0x10db394u: goto R_010db394;
        case 0x10db3a0u: goto R_010db3a0;
        case 0x10db3b4u: goto R_010db3b4;
        case 0x10db3c4u: goto R_010db3c4;
        case 0x10db3d8u: goto R_010db3d8;
        case 0x10db3e4u: goto R_010db3e4;
        case 0x10db3f4u: goto R_010db3f4;
        case 0x10db400u: goto R_010db400;
        case 0x10db410u: goto R_010db410;
        case 0x10db41cu: goto R_010db41c;
        case 0x10db42cu: goto R_010db42c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x4030u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4030u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[4] = c.r[31] + 0x0u;
    c.lr = 0x10db37cu;
    f_mr011_0108a4e0(c);
R_010db37c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10db384u;
    f_mr011_0108cb10(c);
R_010db384:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db394u;
    f_mr011_0108a4e0(c);
R_010db394:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db3a0u;
    f_mr011_0108eb00(c);
R_010db3a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010db410;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10db3b4u;
    f_mr011_0108aac0(c);
R_010db3b4:
    ea = c.r[31] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db3c4u;
    f_mr011_0108d6c0(c);
R_010db3c4:
    c.r[5] = ((((g_mr011_bases[1] + 0xdac80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xdac80u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db3d8u;
    f_mr011_0108fb40(c);
R_010db3d8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x10u;
    c.lr = 0x10db3e4u;
    f_mr011_010d19e0(c);
R_010db3e4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db3f4u;
    f_mr011_0108a4e0(c);
R_010db3f4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db400u;
    f_mr011_0108ce30(c);
R_010db400:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10db410u;
    f_mr011_0108e190(c);
L_010db410:
R_010db410:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db41cu;
    f_mr011_0108e120(c);
R_010db41c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10db42cu;
    f_mr011_0108e190(c);
R_010db42c:
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

void f_mr011_010db450(wp::Cpu& c) {
    WP_ENTER(0x10db450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = ((((g_mr011_bases[6] + 0x5ad4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    c.r[4] = ((((g_mr011_bases[1] + 0xdb480u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mr011_bases[6] + 0x5ac8u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[6] + 0x5ad4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[1] + 0xdb480u) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[6] + 0x5ac8u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    f_mr011_01000000(c);
    return;
}

void f_mr011_010db480(wp::Cpu& c) {
    WP_ENTER(0x10db480u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db4d0u: goto R_010db4d0;
        case 0x10db4e0u: goto R_010db4e0;
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
    if (wp::cr_get(c, 2)) goto L_010db4e0;
    if (wp::cr_get(c, 2)) goto L_010db4d0;
    if (wp::cr_get(c, 2)) goto L_010db4d0;
    if (wp::cr_get(c, 2)) goto L_010db4d0;
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010db4d0;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[4] | c.r[4];
    c.lr = 0x10db4d0u;
    f_801c7a8c(c);
L_010db4d0:
R_010db4d0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010db4e0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10db4e0u;
    f_801c7a8c(c);
L_010db4e0:
R_010db4e0:
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

void f_mr011_010db500(wp::Cpu& c) {
    WP_ENTER(0x10db500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db528u: goto R_010db528;
        case 0x10db530u: goto R_010db530;
        case 0x10db540u: goto R_010db540;
        case 0x10db54cu: goto R_010db54c;
        case 0x10db560u: goto R_010db560;
        case 0x10db570u: goto R_010db570;
        case 0x10db580u: goto R_010db580;
        case 0x10db590u: goto R_010db590;
        case 0x10db5a0u: goto R_010db5a0;
        case 0x10db5acu: goto R_010db5ac;
        case 0x10db5bcu: goto R_010db5bc;
        case 0x10db5c8u: goto R_010db5c8;
        case 0x10db5d8u: goto R_010db5d8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10db528u;
    f_mr011_0108a4e0(c);
R_010db528:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10db530u;
    f_mr011_0108cb10(c);
R_010db530:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db540u;
    f_mr011_0108a4e0(c);
R_010db540:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db54cu;
    f_mr011_0108eb00(c);
R_010db54c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010db5bc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10db560u;
    f_mr011_0108aac0(c);
R_010db560:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x148u;
    c.lr = 0x10db570u;
    f_mr011_0108dc10(c);
R_010db570:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10db580u;
    f_mr011_0108d6c0(c);
R_010db580:
    c.r[4] = ((((g_mr011_bases[4] + 0x40c8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x40c8u) & 0xFFFFu);
    c.lr = 0x10db590u;
    f_mr011_010d19e0(c);
R_010db590:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10db5a0u;
    f_mr011_0108a4e0(c);
R_010db5a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db5acu;
    f_mr011_0108ce30(c);
R_010db5ac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10db5bcu;
    f_mr011_0108e190(c);
L_010db5bc:
R_010db5bc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10db5c8u;
    f_mr011_0108e120(c);
R_010db5c8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10db5d8u;
    f_mr011_0108e190(c);
R_010db5d8:
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

void f_mr011_010db5f0(wp::Cpu& c) {
    WP_ENTER(0x10db5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db610u: goto R_010db610;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10db610u;
    wp::call(c, c.ctr);
R_010db610:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010db630(wp::Cpu& c) {
    WP_ENTER(0x10db630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db668u: goto R_010db668;
        case 0x10db674u: goto R_010db674;
        case 0x10db6a0u: goto R_010db6a0;
        case 0x10db6b8u: goto R_010db6b8;
        case 0x10db6d0u: goto R_010db6d0;
        case 0x10db6e4u: goto R_010db6e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db668u;
    f_mr011_0108de20(c);
R_010db668:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10db674u;
    f_mr011_0108e060(c);
R_010db674:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    c.r[4] = 0x1u;
    c.r[0] = 0xfu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010db6a0;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10db6a0u;
    f_mr011_0108cf80(c);
L_010db6a0:
R_010db6a0:
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010db6b8;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10db6b8u;
    f_mr011_0108cf80(c);
L_010db6b8:
R_010db6b8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010db6d0;
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10db6d0u;
    f_mr011_01023f60(c);
L_010db6d0:
R_010db6d0:
    c.r[5] = ((((g_mr011_bases[1] + 0xdb5f0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xdb5f0u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10db6e4u;
    f_mr011_0108fb40(c);
R_010db6e4:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010db710(wp::Cpu& c) {
    WP_ENTER(0x10db710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db744u: goto R_010db744;
        case 0x10db758u: goto R_010db758;
        case 0x10db764u: goto R_010db764;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db744u;
    f_mr011_0108de20(c);
R_010db744:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10db758u;
    f_mr011_0108cf80(c);
R_010db758:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10db764u;
    f_mr011_010240e0(c);
R_010db764:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db780(wp::Cpu& c) {
    WP_ENTER(0x10db780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db7b4u: goto R_010db7b4;
        case 0x10db7c8u: goto R_010db7c8;
        case 0x10db7d4u: goto R_010db7d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db7b4u;
    f_mr011_0108de20(c);
R_010db7b4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10db7c8u;
    f_mr011_0108d010(c);
R_010db7c8:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10db7d4u;
    f_mr011_010240f0(c);
R_010db7d4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db7f0(wp::Cpu& c) {
    WP_ENTER(0x10db7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db824u: goto R_010db824;
        case 0x10db838u: goto R_010db838;
        case 0x10db850u: goto R_010db850;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db824u;
    f_mr011_0108de20(c);
R_010db824:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10db838u;
    f_mr011_0108d0b0(c);
R_010db838:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10db850u;
    f_mr011_01024100(c);
R_010db850:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db870(wp::Cpu& c) {
    WP_ENTER(0x10db870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db8a4u: goto R_010db8a4;
        case 0x10db8b8u: goto R_010db8b8;
        case 0x10db8c4u: goto R_010db8c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x40c0u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x40c0u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db8a4u;
    f_mr011_0108de20(c);
R_010db8a4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10db8b8u;
    f_mr011_0108d010(c);
R_010db8b8:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10db8c4u;
    f_mr011_01024110(c);
R_010db8c4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010db8e0(wp::Cpu& c) {
    WP_ENTER(0x10db8e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10db900u: goto R_010db900;
        case 0x10db910u: goto R_010db910;
        case 0x10db928u: goto R_010db928;
        case 0x10db938u: goto R_010db938;
        case 0x10db960u: goto R_010db960;
        case 0x10db970u: goto R_010db970;
        case 0x10db980u: goto R_010db980;
        case 0x10db994u: goto R_010db994;
        case 0x10db9b0u: goto R_010db9b0;
        case 0x10db9c4u: goto R_010db9c4;
        case 0x10db9d0u: goto R_010db9d0;
        case 0x10db9ecu: goto R_010db9ec;
        case 0x10db9fcu: goto R_010db9fc;
        case 0x10dba10u: goto R_010dba10;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10db900u;
    f_mr011_0108ce90(c);
R_010db900:
    wp::compare_signed(c, 0, c.r[3], 0x800u);
    if (!wp::cr_get(c, 2)) goto L_010db940;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10db910u;
    f_mr011_0108e060(c);
R_010db910:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_010db940;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x2u;
    c.lr = 0x10db928u;
    f_mr011_0108d9b0(c);
R_010db928:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10db938u;
    f_mr011_0108dad0(c);
R_010db938:
    c.r[3] = 0x1u;
    goto L_010dba14;
L_010db940:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x2u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10db960u;
    f_mr011_0108d120(c);
R_010db960:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10db970u;
    f_mr011_0108d9b0(c);
R_010db970:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10db980u;
    f_mr011_0108d120(c);
R_010db980:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010db9b8;
    c.r[3] = 0x144u;
    c.lr = 0x10db994u;
    f_801c79a4(c);
R_010db994:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010db9b0;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.lr = 0x10db9b0u;
    f_800508f0(c);
L_010db9b0:
R_010db9b0:
    c.r[31] = c.r[3] | c.r[3];
    goto L_010db9ec;
L_010db9b8:
    ea = c.r[1] + 0x10u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x144u;
    c.lr = 0x10db9c4u;
    f_801c79a4(c);
R_010db9c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010db9d0;
    c.lr = 0x10db9d0u;
    f_80050490(c);
L_010db9d0:
R_010db9d0:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    c.r[5] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x10db9ecu;
    f_800511f0(c);
L_010db9ec:
R_010db9ec:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10db9fcu;
    f_mr011_0108dad0(c);
R_010db9fc:
    c.r[5] = ((((g_mr011_bases[1] + 0xdba30u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xdba30u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10dba10u;
    f_mr011_0108fb40(c);
R_010dba10:
    c.r[3] = 0x1u;
L_010dba14:
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

void f_mr011_010dba30(wp::Cpu& c) {
    WP_ENTER(0x10dba30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dba58u: goto R_010dba58;
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
    if (wp::cr_get(c, 2)) goto L_010dba58;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10dba58u;
    wp::call(c, c.ctr);
L_010dba58:
R_010dba58:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010dba70(wp::Cpu& c) {
    WP_ENTER(0x10dba70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dbaa0u: goto R_010dbaa0;
        case 0x10dbac8u: goto R_010dbac8;
        case 0x10dbad8u: goto R_010dbad8;
        case 0x10dbae8u: goto R_010dbae8;
        case 0x10dbb00u: goto R_010dbb00;
        case 0x10dbb08u: goto R_010dbb08;
        case 0x10dbb14u: goto R_010dbb14;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dbaa0u;
    f_mr011_0108de20(c);
R_010dbaa0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbaec;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010dbac8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10dbac8u;
    wp::call(c, c.ctr);
L_010dbac8:
R_010dbac8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.lr = 0x10dbad8u;
    f_mr011_0108dad0(c);
R_010dbad8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.lr = 0x10dbae8u;
    f_mr011_0108fb40(c);
R_010dbae8:
    goto L_010dbb14;
L_010dbaec:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dbb00u;
    f_mr011_0108a4e0(c);
R_010dbb00:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dbb08u;
    f_mr011_0108a4d0(c);
R_010dbb08:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dbb14u;
    f_mr011_0108e360(c);
L_010dbb14:
R_010dbb14:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dbb30(wp::Cpu& c) {
    WP_ENTER(0x10dbb30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dbb4cu: goto R_010dbb4c;
        case 0x10dbb6cu: goto R_010dbb6c;
        case 0x10dbb8cu: goto R_010dbb8c;
        case 0x10dbb98u: goto R_010dbb98;
        case 0x10dbbb0u: goto R_010dbbb0;
        case 0x10dbbc0u: goto R_010dbbc0;
        case 0x10dbbdcu: goto R_010dbbdc;
        case 0x10dbbecu: goto R_010dbbec;
        case 0x10dbbfcu: goto R_010dbbfc;
        case 0x10dbc04u: goto R_010dbc04;
        case 0x10dbc14u: goto R_010dbc14;
        case 0x10dbc2cu: goto R_010dbc2c;
        case 0x10dbc3cu: goto R_010dbc3c;
        case 0x10dbc4cu: goto R_010dbc4c;
        case 0x10dbc58u: goto R_010dbc58;
        case 0x10dbc70u: goto R_010dbc70;
        case 0x10dbc9cu: goto R_010dbc9c;
        case 0x10dbcc0u: goto R_010dbcc0;
        case 0x10dbcecu: goto R_010dbcec;
        case 0x10dbcf8u: goto R_010dbcf8;
        case 0x10dbd44u: goto R_010dbd44;
        case 0x10dbd50u: goto R_010dbd50;
        case 0x10dbd74u: goto R_010dbd74;
        case 0x10dbd7cu: goto R_010dbd7c;
        case 0x10dbd88u: goto R_010dbd88;
        case 0x10dbd94u: goto R_010dbd94;
        case 0x10dbda0u: goto R_010dbda0;
        case 0x10dbdacu: goto R_010dbdac;
        case 0x10dbdb8u: goto R_010dbdb8;
        case 0x10dbde0u: goto R_010dbde0;
        case 0x10dbdf4u: goto R_010dbdf4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff40u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0xb0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xb8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x10dbb4cu;
    f_801c83b8(c);
R_010dbb4c:
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_mr011_bases[5] + 0x2f6b8u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6b8u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.lr = 0x10dbb6cu;
    f_mr011_0108de20(c);
R_010dbb6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbb7c;
    ea = c.r[1] + 0x10u;
    c.r[30] = wp::rd32(ea);
    goto L_010dbbcc;
L_010dbb7c:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[29] + 0xcu;
    c.r[5] = 0xau;
    c.lr = 0x10dbb8cu;
    f_mr011_0108a4e0(c);
R_010dbb8c:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x10dbb98u;
    f_mr011_0108eb00(c);
R_010dbb98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbbc8;
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dbbb0u;
    f_mr011_0108d9b0(c);
R_010dbbb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbbc8;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10dbbc0u;
    f_mr011_0108e110(c);
R_010dbbc0:
    ea = c.r[1] + 0x10u;
    c.r[30] = wp::rd32(ea);
    goto L_010dbbcc;
L_010dbbc8:
    c.r[30] = 0x0u;
L_010dbbcc:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x38u;
    c.r[4] = 0x2u;
    c.lr = 0x10dbbdcu;
    f_mr011_0108d120(c);
R_010dbbdc:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x34u;
    c.r[4] = 0x3u;
    c.lr = 0x10dbbecu;
    f_mr011_0108cf80(c);
R_010dbbec:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x30u;
    c.r[4] = 0x4u;
    c.lr = 0x10dbbfcu;
    f_mr011_0108d9b0(c);
R_010dbbfc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dbc04u;
    f_8005a730(c);
R_010dbc04:
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x2cu;
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10dbc14u;
    f_800cd2d0(c);
R_010dbc14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010dbc34;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[29] + 0x18u;
    c.lr = 0x10dbc2cu;
    f_mr011_0108f4f0(c);
R_010dbc2c:
    c.r[3] = 0xffffffffu;
    goto L_010dbde4;
L_010dbc34:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dbc3cu;
    f_8005a6f0(c);
R_010dbc3c:
    ea = c.r[28] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x60u;
    c.lr = 0x10dbc4cu;
    f_800f2190(c);
R_010dbc4c:
    c.r[3] = c.r[1] + 0x60u;
    c.r[4] = 0x0u;
    c.lr = 0x10dbc58u;
    f_800f1c30(c);
R_010dbc58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010dbc78;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[29] + 0x2cu;
    c.lr = 0x10dbc70u;
    f_mr011_0108f4f0(c);
R_010dbc70:
    c.r[3] = 0xffffffffu;
    goto L_010dbde4;
L_010dbc78:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::slw(c.r[4], c.r[0]);
    c.r[0] = c.r[3] & c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010dbca4;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[29] + 0x40u;
    c.lr = 0x10dbc9cu;
    f_mr011_0108f4f0(c);
R_010dbc9c:
    c.r[3] = 0xffffffffu;
    goto L_010dbde4;
L_010dbca4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010dbcc8;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[29] + 0x64u;
    c.lr = 0x10dbcc0u;
    f_mr011_0108f4f0(c);
R_010dbcc0:
    c.r[3] = 0xffffffffu;
    goto L_010dbde4;
L_010dbcc8:
    c.r[3] = c.r[1] + 0x24u;
    c.r[4] = c.r[1] + 0x20u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = c.r[1] + 0xau;
    c.r[7] = c.r[1] + 0x1cu;
    c.r[8] = c.r[1] + 0x18u;
    c.r[9] = c.r[1] + 0x14u;
    c.r[10] = c.r[1] + 0x8u;
    c.lr = 0x10dbcecu;
    f_800d1510(c);
R_010dbcec:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x28u;
    c.lr = 0x10dbcf8u;
    f_800cf240(c);
R_010dbcf8:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10dbd44u;
    f_801521c0(c);
R_010dbd44:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbd50u;
    f_801521b0(c);
R_010dbd50:
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[8] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0xau;
    c.r[6] = wp::rd16(ea);
    c.r[9] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[10] = wp::rd8(ea);
    c.lr = 0x10dbd74u;
    f_80151d00(c);
R_010dbd74:
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbd7cu;
    f_80152360(c);
R_010dbd7c:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbd88u;
    f_80152340(c);
R_010dbd88:
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbd94u;
    f_80152330(c);
R_010dbd94:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbda0u;
    f_801522f0(c);
R_010dbda0:
    c.f[31] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbdacu;
    f_801522e0(c);
R_010dbdac:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x40u;
    c.lr = 0x10dbdb8u;
    f_801522c0(c);
R_010dbdb8:
    c.f[3] = c.f[31];
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x14u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[5] = c.r[31] | c.r[31];
    c.r[8] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] & 0xffu;
    c.r[7] = c.r[29] & 0xffu;
    c.lr = 0x10dbde0u;
    f_80151f60(c);
R_010dbde0:
    c.r[3] = 0x0u;
L_010dbde4:
    c.r[11] = c.r[1] + 0xb0u;
    ea = c.r[1] + 0xb8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x10dbdf4u;
    f_801c8404(c);
R_010dbdf4:
    ea = c.r[1] + 0xc4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xc0u;
    return;
}

void f_mr011_010dbe10(wp::Cpu& c) {
    WP_ENTER(0x10dbe10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dbe4cu: goto R_010dbe4c;
        case 0x10dbe6cu: goto R_010dbe6c;
        case 0x10dbe78u: goto R_010dbe78;
        case 0x10dbe90u: goto R_010dbe90;
        case 0x10dbea0u: goto R_010dbea0;
        case 0x10dbebcu: goto R_010dbebc;
        case 0x10dbeccu: goto R_010dbecc;
        case 0x10dbed4u: goto R_010dbed4;
        case 0x10dbee4u: goto R_010dbee4;
        case 0x10dbefcu: goto R_010dbefc;
        case 0x10dbf0cu: goto R_010dbf0c;
        case 0x10dbf1cu: goto R_010dbf1c;
        case 0x10dbf28u: goto R_010dbf28;
        case 0x10dbf40u: goto R_010dbf40;
        case 0x10dbf60u: goto R_010dbf60;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_mr011_bases[5] + 0x2f6b8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6b8u) & 0xFFFFu);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.lr = 0x10dbe4cu;
    f_mr011_0108de20(c);
R_010dbe4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbe5c;
    ea = c.r[1] + 0x8u;
    c.r[29] = wp::rd32(ea);
    goto L_010dbeac;
L_010dbe5c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] + 0xcu;
    c.r[5] = 0xau;
    c.lr = 0x10dbe6cu;
    f_mr011_0108a4e0(c);
R_010dbe6c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.lr = 0x10dbe78u;
    f_mr011_0108eb00(c);
R_010dbe78:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbea8;
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dbe90u;
    f_mr011_0108d9b0(c);
R_010dbe90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbea8;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10dbea0u;
    f_mr011_0108e110(c);
R_010dbea0:
    ea = c.r[1] + 0x8u;
    c.r[29] = wp::rd32(ea);
    goto L_010dbeac;
L_010dbea8:
    c.r[29] = 0x0u;
L_010dbeac:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[4] = 0x2u;
    c.lr = 0x10dbebcu;
    f_mr011_0108d120(c);
R_010dbebc:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x3u;
    c.lr = 0x10dbeccu;
    f_mr011_0108cf80(c);
R_010dbecc:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dbed4u;
    f_8005a730(c);
R_010dbed4:
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10dbee4u;
    f_800cd2d0(c);
R_010dbee4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010dbf04;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] + 0x18u;
    c.lr = 0x10dbefcu;
    f_mr011_0108f4f0(c);
R_010dbefc:
    c.r[3] = 0xffffffffu;
    goto L_010dbf64;
L_010dbf04:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dbf0cu;
    f_8005a6f0(c);
R_010dbf0c:
    ea = c.r[31] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x10dbf1cu;
    f_800f2190(c);
R_010dbf1c:
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = 0x0u;
    c.lr = 0x10dbf28u;
    f_800f1cd0(c);
R_010dbf28:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_010dbf48;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] + 0x78u;
    c.lr = 0x10dbf40u;
    f_mr011_0108f4f0(c);
R_010dbf40:
    c.r[3] = 0xffffffffu;
    goto L_010dbf64;
L_010dbf48:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x10dbf60u;
    f_800d04c0(c);
R_010dbf60:
    c.r[3] = 0x0u;
L_010dbf64:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x6cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x60u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr011_010dbf90(wp::Cpu& c) {
    WP_ENTER(0x10dbf90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dbfbcu: goto R_010dbfbc;
        case 0x10dbfe0u: goto R_010dbfe0;
        case 0x10dbfecu: goto R_010dbfec;
        case 0x10dc004u: goto R_010dc004;
        case 0x10dc014u: goto R_010dc014;
        case 0x10dc028u: goto R_010dc028;
        case 0x10dc048u: goto R_010dc048;
        case 0x10dc058u: goto R_010dc058;
        case 0x10dc064u: goto R_010dc064;
        case 0x10dc08cu: goto R_010dc08c;
        case 0x10dc09cu: goto R_010dc09c;
        case 0x10dc0b8u: goto R_010dc0b8;
        case 0x10dc0c4u: goto R_010dc0c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dbfbcu;
    f_mr011_0108de20(c);
R_010dbfbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dbfcc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc020;
L_010dbfcc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dbfe0u;
    f_mr011_0108a4e0(c);
R_010dbfe0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dbfecu;
    f_mr011_0108eb00(c);
R_010dbfec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc01c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc004u;
    f_mr011_0108d9b0(c);
R_010dc004:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc01c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc014u;
    f_mr011_0108e110(c);
R_010dc014:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc020;
L_010dc01c:
    c.r[31] = 0x0u;
L_010dc020:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc028u;
    f_mr011_0108e060(c);
R_010dc028:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_010dc068;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x2u;
    c.lr = 0x10dc048u;
    f_mr011_0108d120(c);
R_010dc048:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = 0x0u;
    c.lr = 0x10dc058u;
    f_80053f80(c);
R_010dc058:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc064u;
    f_mr011_0108a590(c);
R_010dc064:
    goto L_010dc0c4;
L_010dc068:
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_010dc0c4;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x2u;
    c.lr = 0x10dc08cu;
    f_mr011_0108d9b0(c);
R_010dc08c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10dc09cu;
    f_mr011_0108d120(c);
R_010dc09c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.lr = 0x10dc0b8u;
    f_800545f0(c);
R_010dc0b8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc0c4u;
    f_mr011_0108a590(c);
L_010dc0c4:
R_010dc0c4:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010dc0e0(wp::Cpu& c) {
    WP_ENTER(0x10dc0e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc108u: goto R_010dc108;
        case 0x10dc12cu: goto R_010dc12c;
        case 0x10dc138u: goto R_010dc138;
        case 0x10dc150u: goto R_010dc150;
        case 0x10dc160u: goto R_010dc160;
        case 0x10dc170u: goto R_010dc170;
        case 0x10dc17cu: goto R_010dc17c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dc108u;
    f_mr011_0108de20(c);
R_010dc108:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc118;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc16c;
L_010dc118:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc12cu;
    f_mr011_0108a4e0(c);
R_010dc12c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dc138u;
    f_mr011_0108eb00(c);
R_010dc138:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc168;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc150u;
    f_mr011_0108d9b0(c);
R_010dc150:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc168;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc160u;
    f_mr011_0108e110(c);
R_010dc160:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc16c;
L_010dc168:
    c.r[3] = 0x0u;
L_010dc16c:
    c.lr = 0x10dc170u;
    f_80055bb0(c);
R_010dc170:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc17cu;
    f_mr011_0108a600(c);
R_010dc17c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc1a0(wp::Cpu& c) {
    WP_ENTER(0x10dc1a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc1ccu: goto R_010dc1cc;
        case 0x10dc1f0u: goto R_010dc1f0;
        case 0x10dc1fcu: goto R_010dc1fc;
        case 0x10dc214u: goto R_010dc214;
        case 0x10dc224u: goto R_010dc224;
        case 0x10dc238u: goto R_010dc238;
        case 0x10dc248u: goto R_010dc248;
        case 0x10dc254u: goto R_010dc254;
        case 0x10dc26cu: goto R_010dc26c;
        case 0x10dc284u: goto R_010dc284;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc1ccu;
    f_mr011_0108de20(c);
R_010dc1cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc1dc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc230;
L_010dc1dc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc1f0u;
    f_mr011_0108a4e0(c);
R_010dc1f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc1fcu;
    f_mr011_0108eb00(c);
R_010dc1fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc22c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc214u;
    f_mr011_0108d9b0(c);
R_010dc214:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc22c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc224u;
    f_mr011_0108e110(c);
R_010dc224:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc230;
L_010dc22c:
    c.r[31] = 0x0u;
L_010dc230:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc238u;
    f_mr011_0108e060(c);
R_010dc238:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010dc25c;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc248u;
    f_80052260(c);
R_010dc248:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc254u;
    f_mr011_0108a600(c);
R_010dc254:
    c.r[3] = 0x1u;
    goto L_010dc288;
L_010dc25c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dc26cu;
    f_mr011_0108d0b0(c);
R_010dc26c:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10dc284u;
    f_80052250(c);
R_010dc284:
    c.r[3] = 0x0u;
L_010dc288:
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

void f_mr011_010dc2a0(wp::Cpu& c) {
    WP_ENTER(0x10dc2a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc2c8u: goto R_010dc2c8;
        case 0x10dc2ecu: goto R_010dc2ec;
        case 0x10dc2f8u: goto R_010dc2f8;
        case 0x10dc310u: goto R_010dc310;
        case 0x10dc320u: goto R_010dc320;
        case 0x10dc330u: goto R_010dc330;
        case 0x10dc338u: goto R_010dc338;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dc2c8u;
    f_mr011_0108de20(c);
R_010dc2c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc2d8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc32c;
L_010dc2d8:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc2ecu;
    f_mr011_0108a4e0(c);
R_010dc2ec:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dc2f8u;
    f_mr011_0108eb00(c);
R_010dc2f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc328;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc310u;
    f_mr011_0108d9b0(c);
R_010dc310:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc328;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc320u;
    f_mr011_0108e110(c);
R_010dc320:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc32c;
L_010dc328:
    c.r[3] = 0x0u;
L_010dc32c:
    c.lr = 0x10dc330u;
    f_80053e50(c);
R_010dc330:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc338u;
    f_mr011_0108a680(c);
R_010dc338:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc350(wp::Cpu& c) {
    WP_ENTER(0x10dc350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc37cu: goto R_010dc37c;
        case 0x10dc3a0u: goto R_010dc3a0;
        case 0x10dc3acu: goto R_010dc3ac;
        case 0x10dc3c4u: goto R_010dc3c4;
        case 0x10dc3d4u: goto R_010dc3d4;
        case 0x10dc3fcu: goto R_010dc3fc;
        case 0x10dc408u: goto R_010dc408;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc37cu;
    f_mr011_0108de20(c);
R_010dc37c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc38c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc3e0;
L_010dc38c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc3a0u;
    f_mr011_0108a4e0(c);
R_010dc3a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc3acu;
    f_mr011_0108eb00(c);
R_010dc3ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc3dc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc3c4u;
    f_mr011_0108d9b0(c);
R_010dc3c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc3dc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc3d4u;
    f_mr011_0108e110(c);
R_010dc3d4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc3e0;
L_010dc3dc:
    c.r[31] = 0x0u;
L_010dc3e0:
    c.r[4] = ((((g_mr011_bases[4] + 0x412cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x412cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0x2u;
    c.lr = 0x10dc3fcu;
    f_mr011_0108d010(c);
R_010dc3fc:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc408u;
    f_80053e40(c);
R_010dc408:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc430(wp::Cpu& c) {
    WP_ENTER(0x10dc430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc45cu: goto R_010dc45c;
        case 0x10dc480u: goto R_010dc480;
        case 0x10dc48cu: goto R_010dc48c;
        case 0x10dc4a4u: goto R_010dc4a4;
        case 0x10dc4b4u: goto R_010dc4b4;
        case 0x10dc4d0u: goto R_010dc4d0;
        case 0x10dc4d8u: goto R_010dc4d8;
        case 0x10dc4ecu: goto R_010dc4ec;
        case 0x10dc500u: goto R_010dc500;
        case 0x10dc510u: goto R_010dc510;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc45cu;
    f_mr011_0108de20(c);
R_010dc45c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc46c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc4c0;
L_010dc46c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc480u;
    f_mr011_0108a4e0(c);
R_010dc480:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc48cu;
    f_mr011_0108eb00(c);
R_010dc48c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc4bc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc4a4u;
    f_mr011_0108d9b0(c);
R_010dc4a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc4bc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc4b4u;
    f_mr011_0108e110(c);
R_010dc4b4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc4c0;
L_010dc4bc:
    c.r[31] = 0x0u;
L_010dc4c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10dc4d0u;
    f_mr011_0108cf80(c);
R_010dc4d0:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc4d8u;
    f_mr011_0108e060(c);
R_010dc4d8:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_010dc4f0;
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc4ecu;
    f_80053060(c);
R_010dc4ec:
    goto L_010dc510;
L_010dc4f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10dc500u;
    f_mr011_0108d120(c);
R_010dc500:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10dc510u;
    f_80053580(c);
L_010dc510:
R_010dc510:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc530(wp::Cpu& c) {
    WP_ENTER(0x10dc530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc55cu: goto R_010dc55c;
        case 0x10dc580u: goto R_010dc580;
        case 0x10dc58cu: goto R_010dc58c;
        case 0x10dc5a4u: goto R_010dc5a4;
        case 0x10dc5b4u: goto R_010dc5b4;
        case 0x10dc5d0u: goto R_010dc5d0;
        case 0x10dc5dcu: goto R_010dc5dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc55cu;
    f_mr011_0108de20(c);
R_010dc55c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc56c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc5c0;
L_010dc56c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc580u;
    f_mr011_0108a4e0(c);
R_010dc580:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc58cu;
    f_mr011_0108eb00(c);
R_010dc58c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc5bc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc5a4u;
    f_mr011_0108d9b0(c);
R_010dc5a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc5bc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc5b4u;
    f_mr011_0108e110(c);
R_010dc5b4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc5c0;
L_010dc5bc:
    c.r[31] = 0x0u;
L_010dc5c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dc5d0u;
    f_mr011_0108cf80(c);
R_010dc5d0:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc5dcu;
    f_80052190(c);
R_010dc5dc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc600(wp::Cpu& c) {
    WP_ENTER(0x10dc600u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc62cu: goto R_010dc62c;
        case 0x10dc650u: goto R_010dc650;
        case 0x10dc65cu: goto R_010dc65c;
        case 0x10dc674u: goto R_010dc674;
        case 0x10dc684u: goto R_010dc684;
        case 0x10dc6a0u: goto R_010dc6a0;
        case 0x10dc6a8u: goto R_010dc6a8;
        case 0x10dc6b4u: goto R_010dc6b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc62cu;
    f_mr011_0108de20(c);
R_010dc62c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc63c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc690;
L_010dc63c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc650u;
    f_mr011_0108a4e0(c);
R_010dc650:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc65cu;
    f_mr011_0108eb00(c);
R_010dc65c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc68c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc674u;
    f_mr011_0108d9b0(c);
R_010dc674:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc68c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc684u;
    f_mr011_0108e110(c);
R_010dc684:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc690;
L_010dc68c:
    c.r[31] = 0x0u;
L_010dc690:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dc6a0u;
    f_mr011_0108cf80(c);
R_010dc6a0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc6a8u;
    f_800521a0(c);
R_010dc6a8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc6b4u;
    f_mr011_0108a590(c);
R_010dc6b4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc6d0(wp::Cpu& c) {
    WP_ENTER(0x10dc6d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc6fcu: goto R_010dc6fc;
        case 0x10dc720u: goto R_010dc720;
        case 0x10dc72cu: goto R_010dc72c;
        case 0x10dc744u: goto R_010dc744;
        case 0x10dc754u: goto R_010dc754;
        case 0x10dc77cu: goto R_010dc77c;
        case 0x10dc788u: goto R_010dc788;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc6fcu;
    f_mr011_0108de20(c);
R_010dc6fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc70c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc760;
L_010dc70c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc720u;
    f_mr011_0108a4e0(c);
R_010dc720:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc72cu;
    f_mr011_0108eb00(c);
R_010dc72c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc75c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc744u;
    f_mr011_0108d9b0(c);
R_010dc744:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc75c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc754u;
    f_mr011_0108e110(c);
R_010dc754:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc760;
L_010dc75c:
    c.r[31] = 0x0u;
L_010dc760:
    c.r[4] = ((((g_mr011_bases[4] + 0x412cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x412cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0x2u;
    c.lr = 0x10dc77cu;
    f_mr011_0108d010(c);
R_010dc77c:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc788u;
    f_80055d90(c);
R_010dc788:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc7b0(wp::Cpu& c) {
    WP_ENTER(0x10dc7b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc7d8u: goto R_010dc7d8;
        case 0x10dc7fcu: goto R_010dc7fc;
        case 0x10dc808u: goto R_010dc808;
        case 0x10dc820u: goto R_010dc820;
        case 0x10dc830u: goto R_010dc830;
        case 0x10dc840u: goto R_010dc840;
        case 0x10dc848u: goto R_010dc848;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dc7d8u;
    f_mr011_0108de20(c);
R_010dc7d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc7e8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc83c;
L_010dc7e8:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc7fcu;
    f_mr011_0108a4e0(c);
R_010dc7fc:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dc808u;
    f_mr011_0108eb00(c);
R_010dc808:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc838;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc820u;
    f_mr011_0108d9b0(c);
R_010dc820:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc838;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc830u;
    f_mr011_0108e110(c);
R_010dc830:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc83c;
L_010dc838:
    c.r[3] = 0x0u;
L_010dc83c:
    c.lr = 0x10dc840u;
    f_80055e60(c);
R_010dc840:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc848u;
    f_mr011_0108a680(c);
R_010dc848:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc860(wp::Cpu& c) {
    WP_ENTER(0x10dc860u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc888u: goto R_010dc888;
        case 0x10dc8acu: goto R_010dc8ac;
        case 0x10dc8b8u: goto R_010dc8b8;
        case 0x10dc8d0u: goto R_010dc8d0;
        case 0x10dc8e0u: goto R_010dc8e0;
        case 0x10dc8f0u: goto R_010dc8f0;
        case 0x10dc8f8u: goto R_010dc8f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dc888u;
    f_mr011_0108de20(c);
R_010dc888:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc898;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc8ec;
L_010dc898:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc8acu;
    f_mr011_0108a4e0(c);
R_010dc8ac:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dc8b8u;
    f_mr011_0108eb00(c);
R_010dc8b8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc8e8;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc8d0u;
    f_mr011_0108d9b0(c);
R_010dc8d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc8e8;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc8e0u;
    f_mr011_0108e110(c);
R_010dc8e0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dc8ec;
L_010dc8e8:
    c.r[3] = 0x0u;
L_010dc8ec:
    c.lr = 0x10dc8f0u;
    f_80055f10(c);
R_010dc8f0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc8f8u;
    f_mr011_0108a680(c);
R_010dc8f8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc910(wp::Cpu& c) {
    WP_ENTER(0x10dc910u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc93cu: goto R_010dc93c;
        case 0x10dc960u: goto R_010dc960;
        case 0x10dc96cu: goto R_010dc96c;
        case 0x10dc984u: goto R_010dc984;
        case 0x10dc994u: goto R_010dc994;
        case 0x10dc9a8u: goto R_010dc9a8;
        case 0x10dc9b4u: goto R_010dc9b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc93cu;
    f_mr011_0108de20(c);
R_010dc93c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc94c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc9a0;
L_010dc94c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dc960u;
    f_mr011_0108a4e0(c);
R_010dc960:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dc96cu;
    f_mr011_0108eb00(c);
R_010dc96c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc99c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dc984u;
    f_mr011_0108d9b0(c);
R_010dc984:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dc99c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc994u;
    f_mr011_0108e110(c);
R_010dc994:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dc9a0;
L_010dc99c:
    c.r[31] = 0x0u;
L_010dc9a0:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dc9a8u;
    f_mr011_010df5d0(c);
R_010dc9a8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dc9b4u;
    f_80053ef0(c);
R_010dc9b4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dc9d0(wp::Cpu& c) {
    WP_ENTER(0x10dc9d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dc9fcu: goto R_010dc9fc;
        case 0x10dca20u: goto R_010dca20;
        case 0x10dca2cu: goto R_010dca2c;
        case 0x10dca44u: goto R_010dca44;
        case 0x10dca54u: goto R_010dca54;
        case 0x10dca6cu: goto R_010dca6c;
        case 0x10dca78u: goto R_010dca78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dc9fcu;
    f_mr011_0108de20(c);
R_010dc9fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dca0c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dca60;
L_010dca0c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dca20u;
    f_mr011_0108a4e0(c);
R_010dca20:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dca2cu;
    f_mr011_0108eb00(c);
R_010dca2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dca5c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dca44u;
    f_mr011_0108d9b0(c);
R_010dca44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dca5c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dca54u;
    f_mr011_0108e110(c);
R_010dca54:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dca60;
L_010dca5c:
    c.r[31] = 0x0u;
L_010dca60:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10dca6cu;
    f_mr011_010df720(c);
R_010dca6c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dca78u;
    f_80053ed0(c);
R_010dca78:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcaa0(wp::Cpu& c) {
    WP_ENTER(0x10dcaa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dcaccu: goto R_010dcacc;
        case 0x10dcaf0u: goto R_010dcaf0;
        case 0x10dcafcu: goto R_010dcafc;
        case 0x10dcb14u: goto R_010dcb14;
        case 0x10dcb24u: goto R_010dcb24;
        case 0x10dcb40u: goto R_010dcb40;
        case 0x10dcb48u: goto R_010dcb48;
        case 0x10dcb58u: goto R_010dcb58;
        case 0x10dcb68u: goto R_010dcb68;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dcaccu;
    f_mr011_0108de20(c);
R_010dcacc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcadc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcb30;
L_010dcadc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dcaf0u;
    f_mr011_0108a4e0(c);
R_010dcaf0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dcafcu;
    f_mr011_0108eb00(c);
R_010dcafc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcb2c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dcb14u;
    f_mr011_0108d9b0(c);
R_010dcb14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcb2c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcb24u;
    f_mr011_0108e110(c);
R_010dcb24:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcb30;
L_010dcb2c:
    c.r[31] = 0x0u;
L_010dcb30:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dcb40u;
    f_mr011_0108d120(c);
R_010dcb40:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcb48u;
    f_mr011_010df4c0(c);
R_010dcb48:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dcb58u;
    f_80056110(c);
R_010dcb58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010dcb68;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcb68u;
    f_mr011_0108a4d0(c);
L_010dcb68:
R_010dcb68:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcb90(wp::Cpu& c) {
    WP_ENTER(0x10dcb90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dcbbcu: goto R_010dcbbc;
        case 0x10dcbe0u: goto R_010dcbe0;
        case 0x10dcbecu: goto R_010dcbec;
        case 0x10dcc04u: goto R_010dcc04;
        case 0x10dcc14u: goto R_010dcc14;
        case 0x10dcc30u: goto R_010dcc30;
        case 0x10dcc38u: goto R_010dcc38;
        case 0x10dcc48u: goto R_010dcc48;
        case 0x10dcc58u: goto R_010dcc58;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dcbbcu;
    f_mr011_0108de20(c);
R_010dcbbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcbcc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcc20;
L_010dcbcc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dcbe0u;
    f_mr011_0108a4e0(c);
R_010dcbe0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dcbecu;
    f_mr011_0108eb00(c);
R_010dcbec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcc1c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dcc04u;
    f_mr011_0108d9b0(c);
R_010dcc04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcc1c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcc14u;
    f_mr011_0108e110(c);
R_010dcc14:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcc20;
L_010dcc1c:
    c.r[31] = 0x0u;
L_010dcc20:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dcc30u;
    f_mr011_0108d120(c);
R_010dcc30:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcc38u;
    f_mr011_010df4c0(c);
R_010dcc38:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dcc48u;
    f_800562b0(c);
R_010dcc48:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010dcc58;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcc58u;
    f_mr011_0108a4d0(c);
L_010dcc58:
R_010dcc58:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcc80(wp::Cpu& c) {
    WP_ENTER(0x10dcc80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dccacu: goto R_010dccac;
        case 0x10dccd0u: goto R_010dccd0;
        case 0x10dccdcu: goto R_010dccdc;
        case 0x10dccf4u: goto R_010dccf4;
        case 0x10dcd04u: goto R_010dcd04;
        case 0x10dcd1cu: goto R_010dcd1c;
        case 0x10dcd28u: goto R_010dcd28;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dccacu;
    f_mr011_0108de20(c);
R_010dccac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dccbc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcd10;
L_010dccbc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dccd0u;
    f_mr011_0108a4e0(c);
R_010dccd0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dccdcu;
    f_mr011_0108eb00(c);
R_010dccdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcd0c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dccf4u;
    f_mr011_0108d9b0(c);
R_010dccf4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcd0c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcd04u;
    f_mr011_0108e110(c);
R_010dcd04:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcd10;
L_010dcd0c:
    c.r[31] = 0x0u;
L_010dcd10:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10dcd1cu;
    f_mr011_010df6e0(c);
R_010dcd1c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dcd28u;
    f_80053d20(c);
R_010dcd28:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcd50(wp::Cpu& c) {
    WP_ENTER(0x10dcd50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dcd78u: goto R_010dcd78;
        case 0x10dcd9cu: goto R_010dcd9c;
        case 0x10dcda8u: goto R_010dcda8;
        case 0x10dcdc0u: goto R_010dcdc0;
        case 0x10dcdd0u: goto R_010dcdd0;
        case 0x10dcde0u: goto R_010dcde0;
        case 0x10dcdf0u: goto R_010dcdf0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dcd78u;
    f_mr011_0108de20(c);
R_010dcd78:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcd88;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dcddc;
L_010dcd88:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dcd9cu;
    f_mr011_0108a4e0(c);
R_010dcd9c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dcda8u;
    f_mr011_0108eb00(c);
R_010dcda8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcdd8;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dcdc0u;
    f_mr011_0108d9b0(c);
R_010dcdc0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcdd8;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dcdd0u;
    f_mr011_0108e110(c);
R_010dcdd0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dcddc;
L_010dcdd8:
    c.r[3] = 0x0u;
L_010dcddc:
    c.lr = 0x10dcde0u;
    f_8005a730(c);
R_010dcde0:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x10dcdf0u;
    f_mr011_010d71e0(c);
R_010dcdf0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dce10(wp::Cpu& c) {
    WP_ENTER(0x10dce10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dce3cu: goto R_010dce3c;
        case 0x10dce60u: goto R_010dce60;
        case 0x10dce6cu: goto R_010dce6c;
        case 0x10dce84u: goto R_010dce84;
        case 0x10dce94u: goto R_010dce94;
        case 0x10dcea8u: goto R_010dcea8;
        case 0x10dcec0u: goto R_010dcec0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dce3cu;
    f_mr011_0108de20(c);
R_010dce3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dce4c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcea0;
L_010dce4c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dce60u;
    f_mr011_0108a4e0(c);
R_010dce60:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dce6cu;
    f_mr011_0108eb00(c);
R_010dce6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dce9c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dce84u;
    f_mr011_0108d9b0(c);
R_010dce84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dce9c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dce94u;
    f_mr011_0108e110(c);
R_010dce94:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcea0;
L_010dce9c:
    c.r[31] = 0x0u;
L_010dcea0:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcea8u;
    f_mr011_010df4c0(c);
R_010dcea8:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10dcec0u;
    wp::call(c, c.ctr);
R_010dcec0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcee0(wp::Cpu& c) {
    WP_ENTER(0x10dcee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dcf0cu: goto R_010dcf0c;
        case 0x10dcf30u: goto R_010dcf30;
        case 0x10dcf3cu: goto R_010dcf3c;
        case 0x10dcf54u: goto R_010dcf54;
        case 0x10dcf64u: goto R_010dcf64;
        case 0x10dcf7cu: goto R_010dcf7c;
        case 0x10dcf88u: goto R_010dcf88;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dcf0cu;
    f_mr011_0108de20(c);
R_010dcf0c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcf1c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcf70;
L_010dcf1c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dcf30u;
    f_mr011_0108a4e0(c);
R_010dcf30:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dcf3cu;
    f_mr011_0108eb00(c);
R_010dcf3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcf6c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dcf54u;
    f_mr011_0108d9b0(c);
R_010dcf54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcf6c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dcf64u;
    f_mr011_0108e110(c);
R_010dcf64:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dcf70;
L_010dcf6c:
    c.r[31] = 0x0u;
L_010dcf70:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x2u;
    c.lr = 0x10dcf7cu;
    f_mr011_010df6e0(c);
R_010dcf7c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dcf88u;
    f_80053df0(c);
R_010dcf88:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dcfb0(wp::Cpu& c) {
    WP_ENTER(0x10dcfb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dcfdcu: goto R_010dcfdc;
        case 0x10dd000u: goto R_010dd000;
        case 0x10dd00cu: goto R_010dd00c;
        case 0x10dd024u: goto R_010dd024;
        case 0x10dd034u: goto R_010dd034;
        case 0x10dd048u: goto R_010dd048;
        case 0x10dd054u: goto R_010dd054;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dcfdcu;
    f_mr011_0108de20(c);
R_010dcfdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dcfec;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd040;
L_010dcfec:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd000u;
    f_mr011_0108a4e0(c);
R_010dd000:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd00cu;
    f_mr011_0108eb00(c);
R_010dd00c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd03c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd024u;
    f_mr011_0108d9b0(c);
R_010dd024:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd03c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd034u;
    f_mr011_0108e110(c);
R_010dd034:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd040;
L_010dd03c:
    c.r[31] = 0x0u;
L_010dd040:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd048u;
    f_mr011_010df4c0(c);
R_010dd048:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd054u;
    f_80053e20(c);
R_010dd054:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd070(wp::Cpu& c) {
    WP_ENTER(0x10dd070u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd09cu: goto R_010dd09c;
        case 0x10dd0c0u: goto R_010dd0c0;
        case 0x10dd0ccu: goto R_010dd0cc;
        case 0x10dd0e4u: goto R_010dd0e4;
        case 0x10dd0f4u: goto R_010dd0f4;
        case 0x10dd110u: goto R_010dd110;
        case 0x10dd11cu: goto R_010dd11c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd09cu;
    f_mr011_0108de20(c);
R_010dd09c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd0ac;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd100;
L_010dd0ac:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd0c0u;
    f_mr011_0108a4e0(c);
R_010dd0c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd0ccu;
    f_mr011_0108eb00(c);
R_010dd0cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd0fc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd0e4u;
    f_mr011_0108d9b0(c);
R_010dd0e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd0fc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd0f4u;
    f_mr011_0108e110(c);
R_010dd0f4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd100;
L_010dd0fc:
    c.r[31] = 0x0u;
L_010dd100:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dd110u;
    f_mr011_0108d010(c);
R_010dd110:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd11cu;
    f_80053e60(c);
R_010dd11c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd140(wp::Cpu& c) {
    WP_ENTER(0x10dd140u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd16cu: goto R_010dd16c;
        case 0x10dd190u: goto R_010dd190;
        case 0x10dd19cu: goto R_010dd19c;
        case 0x10dd1b4u: goto R_010dd1b4;
        case 0x10dd1c4u: goto R_010dd1c4;
        case 0x10dd1d8u: goto R_010dd1d8;
        case 0x10dd1e4u: goto R_010dd1e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd16cu;
    f_mr011_0108de20(c);
R_010dd16c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd17c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd1d0;
L_010dd17c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd190u;
    f_mr011_0108a4e0(c);
R_010dd190:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd19cu;
    f_mr011_0108eb00(c);
R_010dd19c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd1cc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd1b4u;
    f_mr011_0108d9b0(c);
R_010dd1b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd1cc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd1c4u;
    f_mr011_0108e110(c);
R_010dd1c4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd1d0;
L_010dd1cc:
    c.r[31] = 0x0u;
L_010dd1d0:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd1d8u;
    f_mr011_010df4c0(c);
R_010dd1d8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd1e4u;
    f_80053eb0(c);
R_010dd1e4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd200(wp::Cpu& c) {
    WP_ENTER(0x10dd200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd228u: goto R_010dd228;
        case 0x10dd24cu: goto R_010dd24c;
        case 0x10dd258u: goto R_010dd258;
        case 0x10dd270u: goto R_010dd270;
        case 0x10dd280u: goto R_010dd280;
        case 0x10dd290u: goto R_010dd290;
        case 0x10dd29cu: goto R_010dd29c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dd228u;
    f_mr011_0108de20(c);
R_010dd228:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd238;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd28c;
L_010dd238:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd24cu;
    f_mr011_0108a4e0(c);
R_010dd24c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dd258u;
    f_mr011_0108eb00(c);
R_010dd258:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd288;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd270u;
    f_mr011_0108d9b0(c);
R_010dd270:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd288;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd280u;
    f_mr011_0108e110(c);
R_010dd280:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd28c;
L_010dd288:
    c.r[3] = 0x0u;
L_010dd28c:
    c.lr = 0x10dd290u;
    f_8005a6f0(c);
R_010dd290:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd29cu;
    f_mr011_0108a6f0(c);
R_010dd29c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd2c0(wp::Cpu& c) {
    WP_ENTER(0x10dd2c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd2ecu: goto R_010dd2ec;
        case 0x10dd310u: goto R_010dd310;
        case 0x10dd31cu: goto R_010dd31c;
        case 0x10dd334u: goto R_010dd334;
        case 0x10dd344u: goto R_010dd344;
        case 0x10dd368u: goto R_010dd368;
        case 0x10dd378u: goto R_010dd378;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd2ecu;
    f_mr011_0108de20(c);
R_010dd2ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd2fc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd350;
L_010dd2fc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd310u;
    f_mr011_0108a4e0(c);
R_010dd310:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd31cu;
    f_mr011_0108eb00(c);
R_010dd31c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd34c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd334u;
    f_mr011_0108d9b0(c);
R_010dd334:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd34c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd344u;
    f_mr011_0108e110(c);
R_010dd344:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd350;
L_010dd34c:
    c.r[31] = 0x0u;
L_010dd350:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dd368u;
    f_mr011_0108cf80(c);
R_010dd368:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] & 0x1fffu;
    c.lr = 0x10dd378u;
    f_80052170(c);
R_010dd378:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd3a0(wp::Cpu& c) {
    WP_ENTER(0x10dd3a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd3ccu: goto R_010dd3cc;
        case 0x10dd3f0u: goto R_010dd3f0;
        case 0x10dd3fcu: goto R_010dd3fc;
        case 0x10dd414u: goto R_010dd414;
        case 0x10dd424u: goto R_010dd424;
        case 0x10dd448u: goto R_010dd448;
        case 0x10dd454u: goto R_010dd454;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd3ccu;
    f_mr011_0108de20(c);
R_010dd3cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd3dc;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd430;
L_010dd3dc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd3f0u;
    f_mr011_0108a4e0(c);
R_010dd3f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd3fcu;
    f_mr011_0108eb00(c);
R_010dd3fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd42c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd414u;
    f_mr011_0108d9b0(c);
R_010dd414:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd42c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd424u;
    f_mr011_0108e110(c);
R_010dd424:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd430;
L_010dd42c:
    c.r[31] = 0x0u;
L_010dd430:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dd448u;
    f_mr011_0108cf80(c);
R_010dd448:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd454u;
    f_80055ba0(c);
R_010dd454:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd470(wp::Cpu& c) {
    WP_ENTER(0x10dd470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd498u: goto R_010dd498;
        case 0x10dd4bcu: goto R_010dd4bc;
        case 0x10dd4c8u: goto R_010dd4c8;
        case 0x10dd4e0u: goto R_010dd4e0;
        case 0x10dd4f0u: goto R_010dd4f0;
        case 0x10dd500u: goto R_010dd500;
        case 0x10dd50cu: goto R_010dd50c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dd498u;
    f_mr011_0108de20(c);
R_010dd498:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd4a8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd4fc;
L_010dd4a8:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd4bcu;
    f_mr011_0108a4e0(c);
R_010dd4bc:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dd4c8u;
    f_mr011_0108eb00(c);
R_010dd4c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd4f8;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd4e0u;
    f_mr011_0108d9b0(c);
R_010dd4e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd4f8;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd4f0u;
    f_mr011_0108e110(c);
R_010dd4f0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd4fc;
L_010dd4f8:
    c.r[3] = 0x0u;
L_010dd4fc:
    c.lr = 0x10dd500u;
    f_80055d70(c);
R_010dd500:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd50cu;
    f_mr011_0108a590(c);
R_010dd50c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd530(wp::Cpu& c) {
    WP_ENTER(0x10dd530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd558u: goto R_010dd558;
        case 0x10dd57cu: goto R_010dd57c;
        case 0x10dd588u: goto R_010dd588;
        case 0x10dd5a0u: goto R_010dd5a0;
        case 0x10dd5b0u: goto R_010dd5b0;
        case 0x10dd5c0u: goto R_010dd5c0;
        case 0x10dd5ccu: goto R_010dd5cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10dd558u;
    f_mr011_0108de20(c);
R_010dd558:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd568;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd5bc;
L_010dd568:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd57cu;
    f_mr011_0108a4e0(c);
R_010dd57c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10dd588u;
    f_mr011_0108eb00(c);
R_010dd588:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd5b8;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd5a0u;
    f_mr011_0108d9b0(c);
R_010dd5a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd5b8;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd5b0u;
    f_mr011_0108e110(c);
R_010dd5b0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dd5bc;
L_010dd5b8:
    c.r[3] = 0x0u;
L_010dd5bc:
    c.lr = 0x10dd5c0u;
    f_80055d80(c);
R_010dd5c0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd5ccu;
    f_mr011_0108a590(c);
R_010dd5cc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd5f0(wp::Cpu& c) {
    WP_ENTER(0x10dd5f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd61cu: goto R_010dd61c;
        case 0x10dd640u: goto R_010dd640;
        case 0x10dd64cu: goto R_010dd64c;
        case 0x10dd664u: goto R_010dd664;
        case 0x10dd674u: goto R_010dd674;
        case 0x10dd6a4u: goto R_010dd6a4;
        case 0x10dd6b4u: goto R_010dd6b4;
        case 0x10dd6c4u: goto R_010dd6c4;
        case 0x10dd6f0u: goto R_010dd6f0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd61cu;
    f_mr011_0108de20(c);
R_010dd61c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd62c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd680;
L_010dd62c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd640u;
    f_mr011_0108a4e0(c);
R_010dd640:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd64cu;
    f_mr011_0108eb00(c);
R_010dd64c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd67c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd664u;
    f_mr011_0108d9b0(c);
R_010dd664:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd67c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd674u;
    f_mr011_0108e110(c);
R_010dd674:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd680;
L_010dd67c:
    c.r[31] = 0x0u;
L_010dd680:
    c.r[6] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.lr = 0x10dd6a4u;
    f_mr011_0108cf80(c);
R_010dd6a4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10dd6b4u;
    f_mr011_0108d0b0(c);
R_010dd6b4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x4u;
    c.lr = 0x10dd6c4u;
    f_mr011_0108d0b0(c);
R_010dd6c4:
    ea = c.r[1] + 0x10u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[6] = 0u - c.r[7];
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0u - c.r[5];
    c.r[6] = c.r[6] | c.r[7];
    c.r[0] = c.r[0] | c.r[5];
    c.r[5] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10dd6f0u;
    f_80054e60(c);
R_010dd6f0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd710(wp::Cpu& c) {
    WP_ENTER(0x10dd710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd73cu: goto R_010dd73c;
        case 0x10dd760u: goto R_010dd760;
        case 0x10dd76cu: goto R_010dd76c;
        case 0x10dd784u: goto R_010dd784;
        case 0x10dd794u: goto R_010dd794;
        case 0x10dd7bcu: goto R_010dd7bc;
        case 0x10dd7c8u: goto R_010dd7c8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd73cu;
    f_mr011_0108de20(c);
R_010dd73c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd74c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd7a0;
L_010dd74c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd760u;
    f_mr011_0108a4e0(c);
R_010dd760:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd76cu;
    f_mr011_0108eb00(c);
R_010dd76c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd79c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd784u;
    f_mr011_0108d9b0(c);
R_010dd784:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd79c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd794u;
    f_mr011_0108e110(c);
R_010dd794:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd7a0;
L_010dd79c:
    c.r[31] = 0x0u;
L_010dd7a0:
    c.r[4] = ((((g_mr011_bases[4] + 0x412cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x412cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0x2u;
    c.lr = 0x10dd7bcu;
    f_mr011_0108d010(c);
R_010dd7bc:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd7c8u;
    f_80055f40(c);
R_010dd7c8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd7f0(wp::Cpu& c) {
    WP_ENTER(0x10dd7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd81cu: goto R_010dd81c;
        case 0x10dd840u: goto R_010dd840;
        case 0x10dd84cu: goto R_010dd84c;
        case 0x10dd864u: goto R_010dd864;
        case 0x10dd874u: goto R_010dd874;
        case 0x10dd898u: goto R_010dd898;
        case 0x10dd8b0u: goto R_010dd8b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd81cu;
    f_mr011_0108de20(c);
R_010dd81c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd82c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd880;
L_010dd82c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd840u;
    f_mr011_0108a4e0(c);
R_010dd840:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd84cu;
    f_mr011_0108eb00(c);
R_010dd84c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd87c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd864u;
    f_mr011_0108d9b0(c);
R_010dd864:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd87c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd874u;
    f_mr011_0108e110(c);
R_010dd874:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd880;
L_010dd87c:
    c.r[31] = 0x0u;
L_010dd880:
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dd898u;
    f_mr011_0108d0b0(c);
R_010dd898:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10dd8b0u;
    f_80059b50(c);
R_010dd8b0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd8d0(wp::Cpu& c) {
    WP_ENTER(0x10dd8d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd8fcu: goto R_010dd8fc;
        case 0x10dd920u: goto R_010dd920;
        case 0x10dd92cu: goto R_010dd92c;
        case 0x10dd944u: goto R_010dd944;
        case 0x10dd954u: goto R_010dd954;
        case 0x10dd97cu: goto R_010dd97c;
        case 0x10dd988u: goto R_010dd988;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10dd8fcu;
    f_mr011_0108de20(c);
R_010dd8fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd90c;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd960;
L_010dd90c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dd920u;
    f_mr011_0108a4e0(c);
R_010dd920:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10dd92cu;
    f_mr011_0108eb00(c);
R_010dd92c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd95c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dd944u;
    f_mr011_0108d9b0(c);
R_010dd944:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd95c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dd954u;
    f_mr011_0108e110(c);
R_010dd954:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    goto L_010dd960;
L_010dd95c:
    c.r[31] = 0x0u;
L_010dd960:
    c.r[4] = ((((g_mr011_bases[4] + 0x4130u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4130u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[4] = 0x2u;
    c.lr = 0x10dd97cu;
    f_mr011_0108d010(c);
R_010dd97c:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10dd988u;
    f_80053620(c);
R_010dd988:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dd9b0(wp::Cpu& c) {
    WP_ENTER(0x10dd9b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dd9e4u: goto R_010dd9e4;
        case 0x10dda08u: goto R_010dda08;
        case 0x10dda14u: goto R_010dda14;
        case 0x10dda2cu: goto R_010dda2c;
        case 0x10dda3cu: goto R_010dda3c;
        case 0x10dda7cu: goto R_010dda7c;
        case 0x10dda8cu: goto R_010dda8c;
        case 0x10dda9cu: goto R_010dda9c;
        case 0x10ddaacu: goto R_010ddaac;
        case 0x10ddabcu: goto R_010ddabc;
        case 0x10ddaf0u: goto R_010ddaf0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[31] + 0x0u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10dd9e4u;
    f_mr011_0108de20(c);
R_010dd9e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dd9f4;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    goto L_010dda48;
L_010dd9f4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dda08u;
    f_mr011_0108a4e0(c);
R_010dda08:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10dda14u;
    f_mr011_0108eb00(c);
R_010dda14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dda44;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dda2cu;
    f_mr011_0108d9b0(c);
R_010dda2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dda44;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dda3cu;
    f_mr011_0108e110(c);
R_010dda3c:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    goto L_010dda48;
L_010dda44:
    c.r[30] = 0x0u;
L_010dda48:
    ea = c.r[31] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[6] = 0x0u;
    ea = c.r[31] + 0xcu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[6]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.lr = 0x10dda7cu;
    f_mr011_0108cf80(c);
R_010dda7c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x3u;
    c.lr = 0x10dda8cu;
    f_mr011_0108d010(c);
R_010dda8c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x4u;
    c.lr = 0x10dda9cu;
    f_mr011_0108d010(c);
R_010dda9c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x5u;
    c.lr = 0x10ddaacu;
    f_mr011_0108d0b0(c);
R_010ddaac:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x6u;
    c.lr = 0x10ddabcu;
    f_mr011_0108d0b0(c);
R_010ddabc:
    ea = c.r[1] + 0x10u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[6] = 0u - c.r[7];
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0u - c.r[5];
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[6] = c.r[6] | c.r[7];
    ea = c.r[1] + 0x14u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[0] = c.r[0] | c.r[5];
    c.r[5] = wp::rotl(c.r[6], 1) & 0x1u;
    c.r[6] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10ddaf0u;
    f_80055290(c);
R_010ddaf0:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
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

void f_mr011_010ddb10(wp::Cpu& c) {
    WP_ENTER(0x10ddb10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ddb44u: goto R_010ddb44;
        case 0x10ddb68u: goto R_010ddb68;
        case 0x10ddb74u: goto R_010ddb74;
        case 0x10ddb8cu: goto R_010ddb8c;
        case 0x10ddb9cu: goto R_010ddb9c;
        case 0x10ddbb8u: goto R_010ddbb8;
        case 0x10ddbccu: goto R_010ddbcc;
        case 0x10ddbf0u: goto R_010ddbf0;
        case 0x10ddbfcu: goto R_010ddbfc;
        case 0x10ddc14u: goto R_010ddc14;
        case 0x10ddc24u: goto R_010ddc24;
        case 0x10ddc3cu: goto R_010ddc3c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10ddb44u;
    f_mr011_0108de20(c);
R_010ddb44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddb54;
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    goto L_010ddba8;
L_010ddb54:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10ddb68u;
    f_mr011_0108a4e0(c);
R_010ddb68:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10ddb74u;
    f_mr011_0108eb00(c);
R_010ddb74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddba4;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddb8cu;
    f_mr011_0108d9b0(c);
R_010ddb8c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddba4;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10ddb9cu;
    f_mr011_0108e110(c);
R_010ddb9c:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    goto L_010ddba8;
L_010ddba4:
    c.r[31] = 0x0u;
L_010ddba8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10ddbb8u;
    f_mr011_0108d120(c);
R_010ddbb8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10ddbccu;
    f_mr011_0108de20(c);
R_010ddbcc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddbdc;
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    goto L_010ddc30;
L_010ddbdc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10ddbf0u;
    f_mr011_0108a4e0(c);
R_010ddbf0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x3u;
    c.lr = 0x10ddbfcu;
    f_mr011_0108eb00(c);
R_010ddbfc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddc2c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddc14u;
    f_mr011_0108d9b0(c);
R_010ddc14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddc2c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10ddc24u;
    f_mr011_0108e110(c);
R_010ddc24:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    goto L_010ddc30;
L_010ddc2c:
    c.r[5] = 0x0u;
L_010ddc30:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddc3cu;
    f_80058490(c);
R_010ddc3c:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
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

void f_mr011_010ddc60(wp::Cpu& c) {
    WP_ENTER(0x10ddc60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ddc88u: goto R_010ddc88;
        case 0x10ddcacu: goto R_010ddcac;
        case 0x10ddcb8u: goto R_010ddcb8;
        case 0x10ddcd0u: goto R_010ddcd0;
        case 0x10ddce0u: goto R_010ddce0;
        case 0x10ddcf4u: goto R_010ddcf4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10ddc88u;
    f_mr011_0108de20(c);
R_010ddc88:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddc98;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    goto L_010ddcec;
L_010ddc98:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10ddcacu;
    f_mr011_0108a4e0(c);
R_010ddcac:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x1u;
    c.lr = 0x10ddcb8u;
    f_mr011_0108eb00(c);
R_010ddcb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddce8;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddcd0u;
    f_mr011_0108d9b0(c);
R_010ddcd0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddce8;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddce0u;
    f_mr011_0108e110(c);
R_010ddce0:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    goto L_010ddcec;
L_010ddce8:
    c.r[4] = 0x0u;
L_010ddcec:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddcf4u;
    f_mr011_0108a6f0(c);
R_010ddcf4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010ddd10(wp::Cpu& c) {
    WP_ENTER(0x10ddd10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ddd34u: goto R_010ddd34;
        case 0x10ddd44u: goto R_010ddd44;
        case 0x10ddd60u: goto R_010ddd60;
        case 0x10ddd84u: goto R_010ddd84;
        case 0x10ddd90u: goto R_010ddd90;
        case 0x10ddda8u: goto R_010ddda8;
        case 0x10dddb8u: goto R_010dddb8;
        case 0x10dddd4u: goto R_010dddd4;
        case 0x10ddde0u: goto R_010ddde0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10ddd34u;
    f_mr011_0108d120(c);
R_010ddd34:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10ddd44u;
    f_mr011_0108cf80(c);
R_010ddd44:
    c.r[3] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x10ddd60u;
    f_mr011_0108de20(c);
R_010ddd60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddd70;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dddc4;
L_010ddd70:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10ddd84u;
    f_mr011_0108a4e0(c);
R_010ddd84:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10ddd90u;
    f_mr011_0108eb00(c);
R_010ddd90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dddc0;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddda8u;
    f_mr011_0108d9b0(c);
R_010ddda8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dddc0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10dddb8u;
    f_mr011_0108e110(c);
R_010dddb8:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010dddc4;
L_010dddc0:
    c.r[3] = 0x0u;
L_010dddc4:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10dddd4u;
    f_8006f140(c);
R_010dddd4:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10ddde0u;
    f_mr011_0108a600(c);
R_010ddde0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dde00(wp::Cpu& c) {
    WP_ENTER(0x10dde00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dde34u: goto R_010dde34;
        case 0x10dde58u: goto R_010dde58;
        case 0x10dde64u: goto R_010dde64;
        case 0x10dde7cu: goto R_010dde7c;
        case 0x10dde8cu: goto R_010dde8c;
        case 0x10ddeacu: goto R_010ddeac;
        case 0x10dded0u: goto R_010dded0;
        case 0x10ddedcu: goto R_010ddedc;
        case 0x10ddef4u: goto R_010ddef4;
        case 0x10ddf04u: goto R_010ddf04;
        case 0x10ddf28u: goto R_010ddf28;
        case 0x10ddf34u: goto R_010ddf34;
        case 0x10ddf40u: goto R_010ddf40;
        case 0x10ddf4cu: goto R_010ddf4c;
        case 0x10ddf58u: goto R_010ddf58;
        case 0x10ddf64u: goto R_010ddf64;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10dde34u;
    f_mr011_0108de20(c);
R_010dde34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dde44;
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    goto L_010dde98;
L_010dde44:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dde58u;
    f_mr011_0108a4e0(c);
R_010dde58:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10dde64u;
    f_mr011_0108eb00(c);
R_010dde64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dde94;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dde7cu;
    f_mr011_0108d9b0(c);
R_010dde7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010dde94;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dde8cu;
    f_mr011_0108e110(c);
R_010dde8c:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    goto L_010dde98;
L_010dde94:
    c.r[31] = 0x0u;
L_010dde98:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10ddeacu;
    f_mr011_0108de20(c);
R_010ddeac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddebc;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    goto L_010ddf10;
L_010ddebc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10dded0u;
    f_mr011_0108a4e0(c);
R_010dded0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x2u;
    c.lr = 0x10ddedcu;
    f_mr011_0108eb00(c);
R_010ddedc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddf0c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddef4u;
    f_mr011_0108d9b0(c);
R_010ddef4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010ddf0c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10ddf04u;
    f_mr011_0108e110(c);
R_010ddf04:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    goto L_010ddf10;
L_010ddf0c:
    c.r[30] = 0x0u;
L_010ddf10:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10ddf28u;
    wp::call(c, c.ctr);
R_010ddf28:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddf34u;
    f_80053d20(c);
R_010ddf34:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10ddf40u;
    f_80053e20(c);
R_010ddf40:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddf4cu;
    f_80053df0(c);
R_010ddf4c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x10ddf58u;
    f_80053eb0(c);
R_010ddf58:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10ddf64u;
    f_80053e80(c);
R_010ddf64:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
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

void f_mr011_010ddf90(wp::Cpu& c) {
    WP_ENTER(0x10ddf90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ddfacu: goto R_010ddfac;
        case 0x10ddfc0u: goto R_010ddfc0;
        case 0x10ddfccu: goto R_010ddfcc;
        case 0x10ddfe0u: goto R_010ddfe0;
        case 0x10ddff4u: goto R_010ddff4;
        case 0x10de004u: goto R_010de004;
        case 0x10de014u: goto R_010de014;
        case 0x10de020u: goto R_010de020;
        case 0x10de030u: goto R_010de030;
        case 0x10de03cu: goto R_010de03c;
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
    c.lr = 0x10ddfacu;
    f_mr011_0108cb10(c);
R_010ddfac:
    c.r[31] = ((((g_mr011_bases[5] + 0x2f98cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f98cu) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10ddfc0u;
    f_mr011_0108a4e0(c);
R_010ddfc0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10ddfccu;
    f_mr011_0108eb00(c);
R_010ddfcc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010de030;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10ddfe0u;
    f_mr011_0108aac0(c);
R_010ddfe0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10ddff4u;
    f_mr011_0108d6c0(c);
R_010ddff4:
    c.r[4] = ((((g_mr011_bases[4] + 0x4138u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4138u) & 0xFFFFu);
    c.lr = 0x10de004u;
    f_mr011_010d19e0(c);
R_010de004:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f98cu) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10de014u;
    f_mr011_0108a4e0(c);
R_010de014:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de020u;
    f_mr011_0108ce30(c);
R_010de020:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10de030u;
    f_mr011_0108e190(c);
L_010de030:
R_010de030:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de03cu;
    f_mr011_0108e120(c);
R_010de03c:
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

void f_mr011_010de060(wp::Cpu& c) {
    WP_ENTER(0x10de060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de080u: goto R_010de080;
        case 0x10de09cu: goto R_010de09c;
        case 0x10de0b4u: goto R_010de0b4;
        case 0x10de0bcu: goto R_010de0bc;
        case 0x10de0ccu: goto R_010de0cc;
        case 0x10de0d8u: goto R_010de0d8;
        case 0x10de0ecu: goto R_010de0ec;
        case 0x10de100u: goto R_010de100;
        case 0x10de110u: goto R_010de110;
        case 0x10de120u: goto R_010de120;
        case 0x10de12cu: goto R_010de12c;
        case 0x10de13cu: goto R_010de13c;
        case 0x10de148u: goto R_010de148;
        case 0x10de158u: goto R_010de158;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10de080u;
    f_mr011_0108ce90(c);
R_010de080:
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x20u);
    if (wp::cr_get(c, 2)) goto L_010de0a0;
    c.r[4] = ((((g_mr011_bases[5] + 0x2f994u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f994u) & 0xFFFFu);
    c.lr = 0x10de09cu;
    f_mr011_0108f4f0(c);
R_010de09c:
    goto L_010de15c;
L_010de0a0:
    c.r[31] = ((((g_mr011_bases[5] + 0x2f98cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f98cu) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10de0b4u;
    f_mr011_0108a4e0(c);
R_010de0b4:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de0bcu;
    f_mr011_0108cb10(c);
R_010de0bc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f98cu) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10de0ccu;
    f_mr011_0108a4e0(c);
R_010de0cc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de0d8u;
    f_mr011_0108eb00(c);
R_010de0d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010de13c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10de0ecu;
    f_mr011_0108aac0(c);
R_010de0ec:
    c.r[4] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10de100u;
    f_mr011_0108d6c0(c);
R_010de100:
    c.r[4] = ((((g_mr011_bases[4] + 0x4138u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4138u) & 0xFFFFu);
    c.lr = 0x10de110u;
    f_mr011_010d19e0(c);
R_010de110:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2f98cu) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10de120u;
    f_mr011_0108a4e0(c);
R_010de120:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de12cu;
    f_mr011_0108ce30(c);
R_010de12c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10de13cu;
    f_mr011_0108e190(c);
L_010de13c:
R_010de13c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de148u;
    f_mr011_0108e120(c);
R_010de148:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10de158u;
    f_mr011_0108e190(c);
R_010de158:
    c.r[3] = 0x0u;
L_010de15c:
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

void f_mr011_010de180(wp::Cpu& c) {
    WP_ENTER(0x10de180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de1acu: goto R_010de1ac;
        case 0x10de1d0u: goto R_010de1d0;
        case 0x10de1dcu: goto R_010de1dc;
        case 0x10de1f4u: goto R_010de1f4;
        case 0x10de204u: goto R_010de204;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mr011_bases[4] + 0x4128u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + wp::sign_extend16((g_mr011_bases[4] + 0x4128u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10de1acu;
    f_mr011_0108de20(c);
R_010de1ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010de1bc;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010de210;
L_010de1bc:
    c.r[4] = ((((g_mr011_bases[5] + 0x2f6c4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2f6c4u) & 0xFFFFu);
    c.r[5] = 0xau;
    c.lr = 0x10de1d0u;
    f_mr011_0108a4e0(c);
R_010de1d0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10de1dcu;
    f_mr011_0108eb00(c);
R_010de1dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010de20c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10de1f4u;
    f_mr011_0108d9b0(c);
R_010de1f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010de20c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de204u;
    f_mr011_0108e110(c);
R_010de204:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    goto L_010de210;
L_010de20c:
    c.r[3] = 0x0u;
L_010de210:
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

void f_mr011_010de230(wp::Cpu& c) {
    WP_ENTER(0x10de230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de258u: goto R_010de258;
        case 0x10de260u: goto R_010de260;
        case 0x10de270u: goto R_010de270;
        case 0x10de27cu: goto R_010de27c;
        case 0x10de290u: goto R_010de290;
        case 0x10de2a0u: goto R_010de2a0;
        case 0x10de2b0u: goto R_010de2b0;
        case 0x10de2c0u: goto R_010de2c0;
        case 0x10de2d0u: goto R_010de2d0;
        case 0x10de2dcu: goto R_010de2dc;
        case 0x10de2ecu: goto R_010de2ec;
        case 0x10de2f8u: goto R_010de2f8;
        case 0x10de308u: goto R_010de308;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10de258u;
    f_mr011_0108a4e0(c);
R_010de258:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de260u;
    f_mr011_0108cb10(c);
R_010de260:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10de270u;
    f_mr011_0108a4e0(c);
R_010de270:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de27cu;
    f_mr011_0108eb00(c);
R_010de27c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010de2ec;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10de290u;
    f_mr011_0108aac0(c);
R_010de290:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x9c4u;
    c.lr = 0x10de2a0u;
    f_mr011_0108dc10(c);
R_010de2a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10de2b0u;
    f_mr011_0108d6c0(c);
R_010de2b0:
    c.r[4] = ((((g_mr011_bases[4] + 0x43d8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x43d8u) & 0xFFFFu);
    c.lr = 0x10de2c0u;
    f_mr011_010d19e0(c);
R_010de2c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10de2d0u;
    f_mr011_0108a4e0(c);
R_010de2d0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de2dcu;
    f_mr011_0108ce30(c);
R_010de2dc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10de2ecu;
    f_mr011_0108e190(c);
L_010de2ec:
R_010de2ec:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de2f8u;
    f_mr011_0108e120(c);
R_010de2f8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10de308u;
    f_mr011_0108e190(c);
R_010de308:
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

void f_mr011_010de320(wp::Cpu& c) {
    WP_ENTER(0x10de320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de334u: goto R_010de334;
        case 0x10de354u: goto R_010de354;
        case 0x10de364u: goto R_010de364;
        case 0x10de398u: goto R_010de398;
        case 0x10de3a4u: goto R_010de3a4;
        case 0x10de3b4u: goto R_010de3b4;
        case 0x10de3c4u: goto R_010de3c4;
        case 0x10de3d4u: goto R_010de3d4;
        case 0x10de3e8u: goto R_010de3e8;
        case 0x10de400u: goto R_010de400;
        case 0x10de40cu: goto R_010de40c;
        case 0x10de41cu: goto R_010de41c;
        case 0x10de42cu: goto R_010de42c;
        case 0x10de444u: goto R_010de444;
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
    c.lr = 0x10de334u;
    f_801c83b8(c);
R_010de334:
    c.r[0] = 0x0u;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[3] | c.r[3];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10de354u;
    f_mr011_0108de20(c);
R_010de354:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x10de364u;
    f_mr011_0108ce90(c);
R_010de364:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010de388;
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010de388;
    c.r[0] = c.r[3] + 0xf8000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x40u);
    if (wp::cr_get(c, 2)) goto L_010de3a8;
    goto L_010de430;
L_010de388:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10de398u;
    f_mr011_0108cf80(c);
R_010de398:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de3a4u;
    f_mr011_0102ff50(c);
R_010de3a4:
    goto L_010de438;
L_010de3a8:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x10de3b4u;
    f_mr011_0108d510(c);
R_010de3b4:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = wp::rotl(c.r[30], 2) & 0xfffffffcu;
    c.lr = 0x10de3c4u;
    f_mr011_0108ff00(c);
R_010de3c4:
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[29] = c.r[28] | c.r[28];
    c.lr = 0x10de3d4u;
    f_mr011_0108a4d0(c);
R_010de3d4:
    goto L_010de400;
L_010de3d8:
    c.r[3] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10de3e8u;
    f_mr011_0108cf80(c);
R_010de3e8:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x2u;
    c.r[28] = c.r[28] + 0x4u;
    c.lr = 0x10de400u;
    f_mr011_0108e100(c);
L_010de400:
R_010de400:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x10de40cu;
    f_mr011_01090e60(c);
R_010de40c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010de3d8;
    }
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10de41cu;
    f_mr011_0108e110(c);
R_010de41c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x10de42cu;
    f_mr011_01030160(c);
R_010de42c:
    goto L_010de438;
L_010de430:
    c.r[3] = 0xffffffffu;
    goto L_010de43c;
L_010de438:
    c.r[3] = 0x0u;
L_010de43c:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10de444u;
    f_801c8404(c);
R_010de444:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010de460(wp::Cpu& c) {
    WP_ENTER(0x10de460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de490u: goto R_010de490;
        case 0x10de4acu: goto R_010de4ac;
        case 0x10de4b8u: goto R_010de4b8;
        case 0x10de4c4u: goto R_010de4c4;
        case 0x10de4ccu: goto R_010de4cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de490u;
    f_mr011_0108de20(c);
R_010de490:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010de4a4;
    c.r[0] = 0x271u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010de4a4:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de4acu;
    f_mr011_0108e060(c);
R_010de4ac:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010de4c4;
    c.lr = 0x10de4b8u;
    f_80140b60(c);
R_010de4b8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de4c4u;
    f_mr011_0108a590(c);
L_010de4c4:
R_010de4c4:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de4ccu;
    f_mr011_010de320(c);
R_010de4cc:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de4f0(wp::Cpu& c) {
    WP_ENTER(0x10de4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de520u: goto R_010de520;
        case 0x10de528u: goto R_010de528;
        case 0x10de534u: goto R_010de534;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de520u;
    f_mr011_0108de20(c);
R_010de520:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10de528u;
    f_mr011_01030480(c);
R_010de528:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de534u;
    f_mr011_0108a590(c);
R_010de534:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de550(wp::Cpu& c) {
    WP_ENTER(0x10de550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de580u: goto R_010de580;
        case 0x10de588u: goto R_010de588;
        case 0x10de594u: goto R_010de594;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de580u;
    f_mr011_0108de20(c);
R_010de580:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10de588u;
    f_mr011_01030a90(c);
R_010de588:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de594u;
    f_mr011_0108a590(c);
R_010de594:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de5b0(wp::Cpu& c) {
    WP_ENTER(0x10de5b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de5e0u: goto R_010de5e0;
        case 0x10de5e8u: goto R_010de5e8;
        case 0x10de5f4u: goto R_010de5f4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de5e0u;
    f_mr011_0108de20(c);
R_010de5e0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10de5e8u;
    f_mr011_01030ac0(c);
R_010de5e8:
    c.f[1] = wp::round_single(c.f[1]);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de5f4u;
    f_mr011_0108a680(c);
R_010de5f4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de610(wp::Cpu& c) {
    WP_ENTER(0x10de610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de640u: goto R_010de640;
        case 0x10de648u: goto R_010de648;
        case 0x10de654u: goto R_010de654;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de640u;
    f_mr011_0108de20(c);
R_010de640:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10de648u;
    f_mr011_01030b10(c);
R_010de648:
    c.f[1] = wp::round_single(c.f[1]);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de654u;
    f_mr011_0108a680(c);
R_010de654:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de670(wp::Cpu& c) {
    WP_ENTER(0x10de670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de6a0u: goto R_010de6a0;
        case 0x10de6a8u: goto R_010de6a8;
        case 0x10de6b4u: goto R_010de6b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de6a0u;
    f_mr011_0108de20(c);
R_010de6a0:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10de6a8u;
    f_mr011_01030b60(c);
R_010de6a8:
    c.f[1] = wp::round_single(c.f[1]);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de6b4u;
    f_mr011_0108a680(c);
R_010de6b4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de6d0(wp::Cpu& c) {
    WP_ENTER(0x10de6d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de704u: goto R_010de704;
        case 0x10de710u: goto R_010de710;
        case 0x10de728u: goto R_010de728;
        case 0x10de730u: goto R_010de730;
        case 0x10de748u: goto R_010de748;
        case 0x10de754u: goto R_010de754;
        case 0x10de760u: goto R_010de760;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x43c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x43c8u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de704u;
    f_mr011_0108de20(c);
R_010de704:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de710u;
    f_mr011_0108e060(c);
R_010de710:
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010de74c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10de728u;
    f_mr011_0108cf80(c);
R_010de728:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de730u;
    f_mr011_01030a90(c);
R_010de730:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::divw(c.r[3], c.r[4]);
    c.r[0] = c.r[0] * c.r[4];
    c.r[4] = c.r[3] - c.r[0];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de748u;
    f_mr011_0108a590(c);
R_010de748:
    goto L_010de760;
L_010de74c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10de754u;
    f_mr011_01030a90(c);
R_010de754:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de760u;
    f_mr011_0108a590(c);
L_010de760:
R_010de760:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de780(wp::Cpu& c) {
    WP_ENTER(0x10de780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de7a8u: goto R_010de7a8;
        case 0x10de7b0u: goto R_010de7b0;
        case 0x10de7c0u: goto R_010de7c0;
        case 0x10de7ccu: goto R_010de7cc;
        case 0x10de7e0u: goto R_010de7e0;
        case 0x10de7f0u: goto R_010de7f0;
        case 0x10de800u: goto R_010de800;
        case 0x10de810u: goto R_010de810;
        case 0x10de820u: goto R_010de820;
        case 0x10de82cu: goto R_010de82c;
        case 0x10de83cu: goto R_010de83c;
        case 0x10de848u: goto R_010de848;
        case 0x10de858u: goto R_010de858;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10de7a8u;
    f_mr011_0108a4e0(c);
R_010de7a8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10de7b0u;
    f_mr011_0108cb10(c);
R_010de7b0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10de7c0u;
    f_mr011_0108a4e0(c);
R_010de7c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de7ccu;
    f_mr011_0108eb00(c);
R_010de7cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010de83c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10de7e0u;
    f_mr011_0108aac0(c);
R_010de7e0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x144u;
    c.lr = 0x10de7f0u;
    f_mr011_0108dc10(c);
R_010de7f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10de800u;
    f_mr011_0108d6c0(c);
R_010de800:
    c.r[4] = ((((g_mr011_bases[4] + 0x4478u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4478u) & 0xFFFFu);
    c.lr = 0x10de810u;
    f_mr011_010d19e0(c);
R_010de810:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10de820u;
    f_mr011_0108a4e0(c);
R_010de820:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de82cu;
    f_mr011_0108ce30(c);
R_010de82c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10de83cu;
    f_mr011_0108e190(c);
L_010de83c:
R_010de83c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10de848u;
    f_mr011_0108e120(c);
R_010de848:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10de858u;
    f_mr011_0108e190(c);
R_010de858:
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

void f_mr011_010de870(wp::Cpu& c) {
    WP_ENTER(0x10de870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de890u: goto R_010de890;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10de890u;
    wp::call(c, c.ctr);
R_010de890:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010de8b0(wp::Cpu& c) {
    WP_ENTER(0x10de8b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de8e4u: goto R_010de8e4;
        case 0x10de8f8u: goto R_010de8f8;
        case 0x10de908u: goto R_010de908;
        case 0x10de92cu: goto R_010de92c;
        case 0x10de940u: goto R_010de940;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de8e4u;
    f_mr011_0108de20(c);
R_010de8e4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10de8f8u;
    f_mr011_0108d120(c);
R_010de8f8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10de908u;
    f_mr011_0108d120(c);
R_010de908:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010de92c;
    c.r[3] = 0x10000u;
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffff8000u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10de92cu;
    f_mr011_0107b830(c);
L_010de92c:
R_010de92c:
    c.r[5] = ((((g_mr011_bases[1] + 0xde870u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xde870u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10de940u;
    f_mr011_0108fb40(c);
R_010de940:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de960(wp::Cpu& c) {
    WP_ENTER(0x10de960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10de994u: goto R_010de994;
        case 0x10de9a8u: goto R_010de9a8;
        case 0x10de9c4u: goto R_010de9c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10de994u;
    f_mr011_0108de20(c);
R_010de994:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10de9a8u;
    f_mr011_0108cf80(c);
R_010de9a8:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[12] + 0x44u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x10de9c4u;
    wp::call(c, c.ctr);
R_010de9c4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010de9e0(wp::Cpu& c) {
    WP_ENTER(0x10de9e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dea14u: goto R_010dea14;
        case 0x10dea28u: goto R_010dea28;
        case 0x10dea40u: goto R_010dea40;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dea14u;
    f_mr011_0108de20(c);
R_010dea14:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dea28u;
    f_mr011_0108d120(c);
R_010dea28:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10dea40u;
    wp::call(c, c.ctr);
R_010dea40:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dea60(wp::Cpu& c) {
    WP_ENTER(0x10dea60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dea9cu: goto R_010dea9c;
        case 0x10deab0u: goto R_010deab0;
        case 0x10deab8u: goto R_010deab8;
        case 0x10deae8u: goto R_010deae8;
        case 0x10deafcu: goto R_010deafc;
        case 0x10deb30u: goto R_010deb30;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[6] = c.r[31] + 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dea9cu;
    f_mr011_0108de20(c);
R_010dea9c:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10deab0u;
    f_mr011_0108cf80(c);
R_010deab0:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10deab8u;
    f_mr011_0108e060(c);
R_010deab8:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_010deaec;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x0u;
    ea = c.r[31] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10deae8u;
    wp::call(c, c.ctr);
R_010deae8:
    goto L_010deb30;
L_010deaec:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10deafcu;
    f_mr011_0108d0b0(c);
R_010deafc:
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[0] = 0u - c.r[6];
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[6];
    ea = c.r[12] + 0x23cu;
    c.r[12] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[31] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10deb30u;
    wp::call(c, c.ctr);
L_010deb30:
R_010deb30:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
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

void f_mr011_010deb50(wp::Cpu& c) {
    WP_ENTER(0x10deb50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10deb84u: goto R_010deb84;
        case 0x10deb9cu: goto R_010deb9c;
        case 0x10debb4u: goto R_010debb4;
        case 0x10debc0u: goto R_010debc0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10deb84u;
    f_mr011_0108de20(c);
R_010deb84:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x250u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10deb9cu;
    wp::call(c, c.ctr);
R_010deb9c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10debb4u;
    wp::call(c, c.ctr);
R_010debb4:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10debc0u;
    f_mr011_0108a600(c);
R_010debc0:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010debe0(wp::Cpu& c) {
    WP_ENTER(0x10debe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dec14u: goto R_010dec14;
        case 0x10dec28u: goto R_010dec28;
        case 0x10dec38u: goto R_010dec38;
        case 0x10dec48u: goto R_010dec48;
        case 0x10dec58u: goto R_010dec58;
        case 0x10dec68u: goto R_010dec68;
        case 0x10dec78u: goto R_010dec78;
        case 0x10decc8u: goto R_010decc8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dec14u;
    f_mr011_0108de20(c);
R_010dec14:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x20u;
    c.r[4] = 0x2u;
    c.lr = 0x10dec28u;
    f_mr011_0108d120(c);
R_010dec28:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[4] = 0x3u;
    c.lr = 0x10dec38u;
    f_mr011_0108cf80(c);
R_010dec38:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x4u;
    c.lr = 0x10dec48u;
    f_mr011_0108cf80(c);
R_010dec48:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x5u;
    c.lr = 0x10dec58u;
    f_mr011_0108d0b0(c);
R_010dec58:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x6u;
    c.lr = 0x10dec68u;
    f_mr011_0108d0b0(c);
R_010dec68:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x7u;
    c.lr = 0x10dec78u;
    f_mr011_0108d0b0(c);
R_010dec78:
    ea = c.r[1] + 0x14u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[7] = 0u - c.r[8];
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0u - c.r[6];
    c.r[0] = 0u - c.r[4];
    c.r[7] = c.r[7] | c.r[8];
    c.r[5] = c.r[5] | c.r[6];
    ea = c.r[12] + 0x21cu;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[4];
    c.r[7] = wp::rotl(c.r[7], 1) & 0x1u;
    c.r[8] = wp::rotl(c.r[5], 1) & 0x1u;
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[1] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[6] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10decc8u;
    wp::call(c, c.ctr);
R_010decc8:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010decf0(wp::Cpu& c) {
    WP_ENTER(0x10decf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10ded24u: goto R_010ded24;
        case 0x10ded38u: goto R_010ded38;
        case 0x10ded48u: goto R_010ded48;
        case 0x10ded58u: goto R_010ded58;
        case 0x10ded78u: goto R_010ded78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10ded24u;
    f_mr011_0108de20(c);
R_010ded24:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x2u;
    c.lr = 0x10ded38u;
    f_mr011_0108d120(c);
R_010ded38:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x3u;
    c.lr = 0x10ded48u;
    f_mr011_0108d010(c);
R_010ded48:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x4u;
    c.lr = 0x10ded58u;
    f_mr011_0108d010(c);
R_010ded58:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0xe4u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x10ded78u;
    wp::call(c, c.ctr);
R_010ded78:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010deda0(wp::Cpu& c) {
    WP_ENTER(0x10deda0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dedd4u: goto R_010dedd4;
        case 0x10dede8u: goto R_010dede8;
        case 0x10dedf8u: goto R_010dedf8;
        case 0x10dee20u: goto R_010dee20;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dedd4u;
    f_mr011_0108de20(c);
R_010dedd4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10dede8u;
    f_mr011_0108d120(c);
R_010dede8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10dedf8u;
    f_mr011_0108d0b0(c);
R_010dedf8:
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[5];
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[0] | c.r[5];
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10dee20u;
    wp::call(c, c.ctr);
R_010dee20:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dee40(wp::Cpu& c) {
    WP_ENTER(0x10dee40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dee74u: goto R_010dee74;
        case 0x10dee88u: goto R_010dee88;
        case 0x10deeacu: goto R_010deeac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10dee74u;
    f_mr011_0108de20(c);
R_010dee74:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dee88u;
    f_mr011_0108d0b0(c);
R_010dee88:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0u - c.r[4];
    c.r[0] = c.r[0] | c.r[4];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10deeacu;
    wp::call(c, c.ctr);
R_010deeac:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010deed0(wp::Cpu& c) {
    WP_ENTER(0x10deed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10deee4u: goto R_010deee4;
        case 0x10deef8u: goto R_010deef8;
        case 0x10def04u: goto R_010def04;
        case 0x10def14u: goto R_010def14;
        case 0x10def30u: goto R_010def30;
        case 0x10def3cu: goto R_010def3c;
        case 0x10def4cu: goto R_010def4c;
        case 0x10def68u: goto R_010def68;
        case 0x10def74u: goto R_010def74;
        case 0x10def84u: goto R_010def84;
        case 0x10def98u: goto R_010def98;
        case 0x10defc4u: goto R_010defc4;
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
    c.lr = 0x10deee4u;
    f_801c83b0(c);
R_010deee4:
    c.r[26] = c.r[4] | c.r[4];
    c.r[25] = c.r[3] | c.r[3];
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[4] + 0xbcu;
    c.lr = 0x10deef8u;
    f_mr011_0108a4e0(c);
R_010deef8:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10def04u;
    f_mr011_0108a6f0(c);
R_010def04:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10def14u;
    f_mr011_0108e190(c);
R_010def14:
    ea = c.r[26] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ea;
    goto L_010defb4;
L_010def1c:
    c.r[27] = c.r[31] + 0xfffffffcu;
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[27] + 0xbcu;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10def30u;
    f_mr011_0108a4e0(c);
R_010def30:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x10def3cu;
    f_mr011_0108a6f0(c);
R_010def3c:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10def4cu;
    f_mr011_0108e190(c);
R_010def4c:
    ea = c.r[27] + 0x14u;
    c.r[30] = wp::rd32(ea);
    c.r[27] = ea;
    goto L_010defa8;
L_010def54:
    c.r[28] = c.r[30] + 0xfffffffcu;
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] + 0xbcu;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10def68u;
    f_mr011_0108a4e0(c);
R_010def68:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x10def74u;
    f_mr011_0108a6f0(c);
R_010def74:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10def84u;
    f_mr011_0108e190(c);
R_010def84:
    ea = c.r[28] + 0x14u;
    c.r[29] = wp::rd32(ea);
    c.r[28] = ea;
    goto L_010def9c;
L_010def8c:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[29] + 0xfffffffcu;
    c.lr = 0x10def98u;
    f_mr011_010deed0(c);
R_010def98:
    ea = c.r[29] + 0x0u;
    c.r[29] = wp::rd32(ea);
L_010def9c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[28]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010def8c;
    }
    ea = c.r[30] + 0x0u;
    c.r[30] = wp::rd32(ea);
L_010defa8:
    wp::compare_unsigned(c, 0, c.r[30], c.r[27]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010def54;
    }
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010defb4:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010def1c;
    }
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10defc4u;
    f_801c83fc(c);
R_010defc4:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010defe0(wp::Cpu& c) {
    WP_ENTER(0x10defe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10deff4u: goto R_010deff4;
        case 0x10df014u: goto R_010df014;
        case 0x10df020u: goto R_010df020;
        case 0x10df034u: goto R_010df034;
        case 0x10df040u: goto R_010df040;
        case 0x10df050u: goto R_010df050;
        case 0x10df06cu: goto R_010df06c;
        case 0x10df078u: goto R_010df078;
        case 0x10df088u: goto R_010df088;
        case 0x10df0a4u: goto R_010df0a4;
        case 0x10df0b0u: goto R_010df0b0;
        case 0x10df0c0u: goto R_010df0c0;
        case 0x10df0d4u: goto R_010df0d4;
        case 0x10df104u: goto R_010df104;
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
    c.lr = 0x10deff4u;
    f_801c83b0(c);
R_010deff4:
    c.r[0] = 0x0u;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10df014u;
    f_mr011_0108de20(c);
R_010df014:
    ea = c.r[1] + 0x8u;
    c.r[26] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10df020u;
    f_mr011_0108a7c0(c);
R_010df020:
    ea = c.r[26] + 0x10u;
    c.r[26] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[26] + 0xbcu;
    c.lr = 0x10df034u;
    f_mr011_0108a4e0(c);
R_010df034:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10df040u;
    f_mr011_0108a6f0(c);
R_010df040:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10df050u;
    f_mr011_0108e190(c);
R_010df050:
    ea = c.r[26] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ea;
    goto L_010df0f0;
L_010df058:
    c.r[27] = c.r[31] + 0xfffffffcu;
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[27] + 0xbcu;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10df06cu;
    f_mr011_0108a4e0(c);
R_010df06c:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x10df078u;
    f_mr011_0108a6f0(c);
R_010df078:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10df088u;
    f_mr011_0108e190(c);
R_010df088:
    ea = c.r[27] + 0x14u;
    c.r[30] = wp::rd32(ea);
    c.r[27] = ea;
    goto L_010df0e4;
L_010df090:
    c.r[28] = c.r[30] + 0xfffffffcu;
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] + 0xbcu;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10df0a4u;
    f_mr011_0108a4e0(c);
R_010df0a4:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x10df0b0u;
    f_mr011_0108a6f0(c);
R_010df0b0:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10df0c0u;
    f_mr011_0108e190(c);
R_010df0c0:
    ea = c.r[28] + 0x14u;
    c.r[29] = wp::rd32(ea);
    c.r[28] = ea;
    goto L_010df0d8;
L_010df0c8:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[29] + 0xfffffffcu;
    c.lr = 0x10df0d4u;
    f_mr011_010deed0(c);
R_010df0d4:
    ea = c.r[29] + 0x0u;
    c.r[29] = wp::rd32(ea);
L_010df0d8:
    wp::compare_unsigned(c, 0, c.r[29], c.r[28]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010df0c8;
    }
    ea = c.r[30] + 0x0u;
    c.r[30] = wp::rd32(ea);
L_010df0e4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[27]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010df090;
    }
    ea = c.r[31] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_010df0f0:
    wp::compare_unsigned(c, 0, c.r[31], c.r[26]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010df058;
    }
    c.r[11] = c.r[1] + 0x30u;
    c.r[3] = 0x1u;
    c.lr = 0x10df104u;
    f_801c83fc(c);
R_010df104:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010df120(wp::Cpu& c) {
    WP_ENTER(0x10df120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df154u: goto R_010df154;
        case 0x10df168u: goto R_010df168;
        case 0x10df178u: goto R_010df178;
        case 0x10df194u: goto R_010df194;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10df154u;
    f_mr011_0108de20(c);
R_010df154:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10df168u;
    f_mr011_0108d010(c);
R_010df168:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10df178u;
    f_mr011_0108d010(c);
R_010df178:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    c.lr = 0x10df194u;
    f_80043250(c);
R_010df194:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010df1b0(wp::Cpu& c) {
    WP_ENTER(0x10df1b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df1e4u: goto R_010df1e4;
        case 0x10df1f8u: goto R_010df1f8;
        case 0x10df208u: goto R_010df208;
        case 0x10df224u: goto R_010df224;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10df1e4u;
    f_mr011_0108de20(c);
R_010df1e4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10df1f8u;
    f_mr011_0108d120(c);
R_010df1f8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10df208u;
    f_mr011_0108d120(c);
R_010df208:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x224u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10df224u;
    wp::call(c, c.ctr);
R_010df224:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df240(wp::Cpu& c) {
    WP_ENTER(0x10df240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df274u: goto R_010df274;
        case 0x10df288u: goto R_010df288;
        case 0x10df2acu: goto R_010df2ac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4468u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4468u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10df274u;
    f_mr011_0108de20(c);
R_010df274:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10df288u;
    f_mr011_0108d120(c);
R_010df288:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = 0x1u;
    c.r[7] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x10df2acu;
    wp::call(c, c.ctr);
R_010df2ac:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df2d0(wp::Cpu& c) {
    WP_ENTER(0x10df2d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df2f8u: goto R_010df2f8;
        case 0x10df310u: goto R_010df310;
        case 0x10df324u: goto R_010df324;
        case 0x10df32cu: goto R_010df32c;
        case 0x10df33cu: goto R_010df33c;
        case 0x10df348u: goto R_010df348;
        case 0x10df35cu: goto R_010df35c;
        case 0x10df36cu: goto R_010df36c;
        case 0x10df380u: goto R_010df380;
        case 0x10df390u: goto R_010df390;
        case 0x10df3a0u: goto R_010df3a0;
        case 0x10df3acu: goto R_010df3ac;
        case 0x10df3bcu: goto R_010df3bc;
        case 0x10df3c8u: goto R_010df3c8;
        case 0x10df3d8u: goto R_010df3d8;
        case 0x10df3e8u: goto R_010df3e8;
        case 0x10df3f0u: goto R_010df3f0;
        case 0x10df400u: goto R_010df400;
        case 0x10df40cu: goto R_010df40c;
        case 0x10df420u: goto R_010df420;
        case 0x10df430u: goto R_010df430;
        case 0x10df444u: goto R_010df444;
        case 0x10df454u: goto R_010df454;
        case 0x10df464u: goto R_010df464;
        case 0x10df470u: goto R_010df470;
        case 0x10df480u: goto R_010df480;
        case 0x10df48cu: goto R_010df48c;
        case 0x10df49cu: goto R_010df49c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2fae8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fae8u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10df2f8u;
    f_mr011_0108ce90(c);
R_010df2f8:
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x20u);
    if (wp::cr_get(c, 2)) goto L_010df314;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0xcu;
    c.lr = 0x10df310u;
    f_mr011_0108f4f0(c);
R_010df310:
    goto L_010df4a0;
L_010df314:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1cu;
    c.r[5] = 0x4u;
    c.lr = 0x10df324u;
    f_mr011_0108a4e0(c);
R_010df324:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10df32cu;
    f_mr011_0108cb10(c);
R_010df32c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1cu;
    c.r[5] = 0x4u;
    c.lr = 0x10df33cu;
    f_mr011_0108a4e0(c);
R_010df33c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df348u;
    f_mr011_0108eb00(c);
R_010df348:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010df3bc;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10df35cu;
    f_mr011_0108aac0(c);
R_010df35c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10df36cu;
    f_mr011_0108dc10(c);
R_010df36c:
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df380u;
    f_mr011_0108d6c0(c);
R_010df380:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10df390u;
    f_mr011_010d19e0(c);
R_010df390:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x1cu;
    c.r[5] = 0x4u;
    c.lr = 0x10df3a0u;
    f_mr011_0108a4e0(c);
R_010df3a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df3acu;
    f_mr011_0108ce30(c);
R_010df3ac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10df3bcu;
    f_mr011_0108e190(c);
L_010df3bc:
R_010df3bc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df3c8u;
    f_mr011_0108e120(c);
R_010df3c8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10df3d8u;
    f_mr011_0108e190(c);
R_010df3d8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x24u;
    c.r[5] = 0x3u;
    c.lr = 0x10df3e8u;
    f_mr011_0108a4e0(c);
R_010df3e8:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10df3f0u;
    f_mr011_0108cb10(c);
R_010df3f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x24u;
    c.r[5] = 0x3u;
    c.lr = 0x10df400u;
    f_mr011_0108a4e0(c);
R_010df400:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df40cu;
    f_mr011_0108eb00(c);
R_010df40c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010df480;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10df420u;
    f_mr011_0108aac0(c);
R_010df420:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10df430u;
    f_mr011_0108dc10(c);
R_010df430:
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df444u;
    f_mr011_0108d6c0(c);
R_010df444:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10df454u;
    f_mr011_010d19e0(c);
R_010df454:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x24u;
    c.r[5] = 0x3u;
    c.lr = 0x10df464u;
    f_mr011_0108a4e0(c);
R_010df464:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df470u;
    f_mr011_0108ce30(c);
R_010df470:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10df480u;
    f_mr011_0108e190(c);
L_010df480:
R_010df480:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df48cu;
    f_mr011_0108e120(c);
R_010df48c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10df49cu;
    f_mr011_0108e190(c);
R_010df49c:
    c.r[3] = 0x0u;
L_010df4a0:
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

void f_mr011_010df4c0(wp::Cpu& c) {
    WP_ENTER(0x10df4c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df4dcu: goto R_010df4dc;
        case 0x10df4f0u: goto R_010df4f0;
        case 0x10df4fcu: goto R_010df4fc;
        case 0x10df510u: goto R_010df510;
        case 0x10df520u: goto R_010df520;
        case 0x10df534u: goto R_010df534;
        case 0x10df544u: goto R_010df544;
        case 0x10df554u: goto R_010df554;
        case 0x10df560u: goto R_010df560;
        case 0x10df570u: goto R_010df570;
        case 0x10df57cu: goto R_010df57c;
        case 0x10df588u: goto R_010df588;
        case 0x10df594u: goto R_010df594;
        case 0x10df5a8u: goto R_010df5a8;
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
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10df4dcu;
    f_mr011_0108cb10(c);
R_010df4dc:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10df4f0u;
    f_mr011_0108a4e0(c);
R_010df4f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df4fcu;
    f_mr011_0108eb00(c);
R_010df4fc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010df570;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10df510u;
    f_mr011_0108aac0(c);
R_010df510:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10df520u;
    f_mr011_0108dc10(c);
R_010df520:
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df534u;
    f_mr011_0108d6c0(c);
R_010df534:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10df544u;
    f_mr011_010d19e0(c);
R_010df544:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10df554u;
    f_mr011_0108a4e0(c);
R_010df554:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df560u;
    f_mr011_0108ce30(c);
R_010df560:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10df570u;
    f_mr011_0108e190(c);
L_010df570:
R_010df570:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df57cu;
    f_mr011_0108e120(c);
R_010df57c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df588u;
    f_mr011_010907d0(c);
R_010df588:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df594u;
    f_mr011_0108e120(c);
R_010df594:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10df5a8u;
    f_mr011_0108de20(c);
R_010df5a8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df5d0(wp::Cpu& c) {
    WP_ENTER(0x10df5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df5ecu: goto R_010df5ec;
        case 0x10df600u: goto R_010df600;
        case 0x10df60cu: goto R_010df60c;
        case 0x10df620u: goto R_010df620;
        case 0x10df630u: goto R_010df630;
        case 0x10df644u: goto R_010df644;
        case 0x10df654u: goto R_010df654;
        case 0x10df664u: goto R_010df664;
        case 0x10df670u: goto R_010df670;
        case 0x10df680u: goto R_010df680;
        case 0x10df68cu: goto R_010df68c;
        case 0x10df698u: goto R_010df698;
        case 0x10df6a4u: goto R_010df6a4;
        case 0x10df6b8u: goto R_010df6b8;
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
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10df5ecu;
    f_mr011_0108cb10(c);
R_010df5ec:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10df600u;
    f_mr011_0108a4e0(c);
R_010df600:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df60cu;
    f_mr011_0108eb00(c);
R_010df60c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010df680;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10df620u;
    f_mr011_0108aac0(c);
R_010df620:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10df630u;
    f_mr011_0108dc10(c);
R_010df630:
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df644u;
    f_mr011_0108d6c0(c);
R_010df644:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10df654u;
    f_mr011_010d19e0(c);
R_010df654:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10df664u;
    f_mr011_0108a4e0(c);
R_010df664:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df670u;
    f_mr011_0108ce30(c);
R_010df670:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10df680u;
    f_mr011_0108e190(c);
L_010df680:
R_010df680:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df68cu;
    f_mr011_0108e120(c);
R_010df68c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10df698u;
    f_mr011_010907d0(c);
R_010df698:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10df6a4u;
    f_mr011_0108e120(c);
R_010df6a4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10df6b8u;
    f_mr011_0108de20(c);
R_010df6b8:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df6e0(wp::Cpu& c) {
    WP_ENTER(0x10df6e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df704u: goto R_010df704;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10df704u;
    f_mr011_0108de20(c);
R_010df704:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010df720(wp::Cpu& c) {
    WP_ENTER(0x10df720u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df744u: goto R_010df744;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10df744u;
    f_mr011_0108de20(c);
R_010df744:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010df760(wp::Cpu& c) {
    WP_ENTER(0x10df760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df784u: goto R_010df784;
        case 0x10df7acu: goto R_010df7ac;
        case 0x10df7dcu: goto R_010df7dc;
        case 0x10df7f0u: goto R_010df7f0;
        case 0x10df800u: goto R_010df800;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10df784u;
    f_mr011_0108de20(c);
R_010df784:
    c.r[3] = ((((g_mr011_bases[4] + 0x4560u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x4560u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.lr = 0x10df7acu;
    f_mr011_0108e060(c);
R_010df7ac:
    wp::compare_signed(c, 0, c.r[3], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010df7c8;
    wp::compare_signed(c, 0, c.r[3], 0x3u);
    if (wp::cr_get(c, 2)) goto L_010df7dc;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010df7f0;
    goto L_010df800;
L_010df7c8:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x4u;
    c.r[5] = c.r[5] + 0x8u;
    c.lr = 0x10df7dcu;
    f_mr011_0108d010(c);
L_010df7dc:
R_010df7dc:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x3u;
    c.r[5] = c.r[5] + 0x4u;
    c.lr = 0x10df7f0u;
    f_mr011_0108d010(c);
L_010df7f0:
R_010df7f0:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x2u;
    c.lr = 0x10df800u;
    f_mr011_0108d010(c);
L_010df800:
R_010df800:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df820(wp::Cpu& c) {
    WP_ENTER(0x10df820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df850u: goto R_010df850;
        case 0x10df864u: goto R_010df864;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[31] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[6] = c.r[31] | c.r[31];
    c.lr = 0x10df850u;
    f_mr011_0108de20(c);
R_010df850:
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10df864u;
    f_mr011_0108de20(c);
R_010df864:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[4] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
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

void f_mr011_010df8a0(wp::Cpu& c) {
    WP_ENTER(0x10df8a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df8c8u: goto R_010df8c8;
        case 0x10df8e4u: goto R_010df8e4;
        case 0x10df920u: goto R_010df920;
        case 0x10df934u: goto R_010df934;
        case 0x10df948u: goto R_010df948;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10df8c8u;
    f_mr011_0108de20(c);
R_010df8c8:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fb10u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb10u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10df8e4u;
    f_mr011_0108d120(c);
R_010df8e4:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    c.r[0] = c.r[0] | 0x20u;
    wp::compare_signed(c, 0, c.r[0], 0x78u);
    if (wp::cr_get(c, 2)) goto L_010df910;
    wp::compare_signed(c, 0, c.r[0], 0x79u);
    if (wp::cr_get(c, 2)) goto L_010df924;
    wp::compare_signed(c, 0, c.r[0], 0x7au);
    if (wp::cr_get(c, 2)) goto L_010df938;
    goto L_010df94c;
L_010df910:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10df920u;
    f_mr011_0108a680(c);
R_010df920:
    goto L_010df954;
L_010df924:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10df934u;
    f_mr011_0108a680(c);
R_010df934:
    goto L_010df954;
L_010df938:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10df948u;
    f_mr011_0108a680(c);
R_010df948:
    goto L_010df954;
L_010df94c:
    c.r[3] = 0x0u;
    goto L_010df958;
L_010df954:
    c.r[3] = 0x1u;
L_010df958:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010df970(wp::Cpu& c) {
    WP_ENTER(0x10df970u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10df998u: goto R_010df998;
        case 0x10df9b4u: goto R_010df9b4;
        case 0x10df9c4u: goto R_010df9c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10df998u;
    f_mr011_0108de20(c);
R_010df998:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fb10u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb10u) & 0xFFFFu);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10df9b4u;
    f_mr011_0108d120(c);
R_010df9b4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x3u;
    c.lr = 0x10df9c4u;
    f_mr011_0108d010(c);
R_010df9c4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    c.r[0] = c.r[0] | 0x20u;
    wp::compare_signed(c, 0, c.r[0], 0x78u);
    if (wp::cr_get(c, 2)) goto L_010df9f0;
    wp::compare_signed(c, 0, c.r[0], 0x79u);
    if (wp::cr_get(c, 2)) goto L_010dfa00;
    wp::compare_signed(c, 0, c.r[0], 0x7au);
    if (wp::cr_get(c, 2)) goto L_010dfa10;
    goto L_010dfa1c;
L_010df9f0:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_010dfa1c;
L_010dfa00:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_010dfa1c;
L_010dfa10:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010dfa1c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010dfa40(wp::Cpu& c) {
    WP_ENTER(0x10dfa40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dfa74u: goto R_010dfa74;
        case 0x10dfa88u: goto R_010dfa88;
        case 0x10dfa90u: goto R_010dfa90;
        case 0x10dfaa4u: goto R_010dfaa4;
        case 0x10dfab0u: goto R_010dfab0;
        case 0x10dfac4u: goto R_010dfac4;
        case 0x10dfad4u: goto R_010dfad4;
        case 0x10dfae4u: goto R_010dfae4;
        case 0x10dfaf4u: goto R_010dfaf4;
        case 0x10dfb04u: goto R_010dfb04;
        case 0x10dfb10u: goto R_010dfb10;
        case 0x10dfb20u: goto R_010dfb20;
        case 0x10dfb2cu: goto R_010dfb2c;
        case 0x10dfb38u: goto R_010dfb38;
        case 0x10dfb44u: goto R_010dfb44;
        case 0x10dfb58u: goto R_010dfb58;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10dfa74u;
    f_mr011_0108de20(c);
R_010dfa74:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dfa88u;
    f_mr011_0108de20(c);
R_010dfa88:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dfa90u;
    f_mr011_0108cb10(c);
R_010dfa90:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfaa4u;
    f_mr011_0108a4e0(c);
R_010dfaa4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfab0u;
    f_mr011_0108eb00(c);
R_010dfab0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010dfb20;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10dfac4u;
    f_mr011_0108aac0(c);
R_010dfac4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10dfad4u;
    f_mr011_0108dc10(c);
R_010dfad4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfae4u;
    f_mr011_0108d6c0(c);
R_010dfae4:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10dfaf4u;
    f_mr011_010d19e0(c);
R_010dfaf4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfb04u;
    f_mr011_0108a4e0(c);
R_010dfb04:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfb10u;
    f_mr011_0108ce30(c);
R_010dfb10:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10dfb20u;
    f_mr011_0108e190(c);
L_010dfb20:
R_010dfb20:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfb2cu;
    f_mr011_0108e120(c);
R_010dfb2c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfb38u;
    f_mr011_010907d0(c);
R_010dfb38:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfb44u;
    f_mr011_0108e120(c);
R_010dfb44:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10dfb58u;
    f_mr011_0108de20(c);
R_010dfb58:
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[6] + 0x0u;
    wp::load_quantized(c, 1, ea, 0, 0, q);
    ea = c.r[5] + 0x0u;
    wp::load_quantized(c, 0, ea, 0, 0, q);
    ea = c.r[1] + 0x8u;
    c.r[7] = wp::rd32(ea);
    wp::ps_add(c, 2, 0, 1);
    ea = c.r[5] + 0x8u;
    wp::load_quantized(c, 0, ea, 1, 0, q);
    ea = c.r[6] + 0x8u;
    wp::load_quantized(c, 1, ea, 1, 0, q);
    ea = c.r[4] + 0x0u;
    wp::store_quantized(c, 2, ea, 0, 0, q);
    wp::ps_add(c, 2, 0, 1);
    ea = c.r[1] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x8u;
    wp::store_quantized(c, 2, ea, 1, 0, q);
    ea = c.r[7] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
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

void f_mr011_010dfbc0(wp::Cpu& c) {
    WP_ENTER(0x10dfbc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dfbf4u: goto R_010dfbf4;
        case 0x10dfc08u: goto R_010dfc08;
        case 0x10dfc10u: goto R_010dfc10;
        case 0x10dfc24u: goto R_010dfc24;
        case 0x10dfc30u: goto R_010dfc30;
        case 0x10dfc44u: goto R_010dfc44;
        case 0x10dfc54u: goto R_010dfc54;
        case 0x10dfc64u: goto R_010dfc64;
        case 0x10dfc74u: goto R_010dfc74;
        case 0x10dfc84u: goto R_010dfc84;
        case 0x10dfc90u: goto R_010dfc90;
        case 0x10dfca0u: goto R_010dfca0;
        case 0x10dfcacu: goto R_010dfcac;
        case 0x10dfcb8u: goto R_010dfcb8;
        case 0x10dfcc4u: goto R_010dfcc4;
        case 0x10dfcd8u: goto R_010dfcd8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10dfbf4u;
    f_mr011_0108de20(c);
R_010dfbf4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dfc08u;
    f_mr011_0108de20(c);
R_010dfc08:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dfc10u;
    f_mr011_0108cb10(c);
R_010dfc10:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfc24u;
    f_mr011_0108a4e0(c);
R_010dfc24:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfc30u;
    f_mr011_0108eb00(c);
R_010dfc30:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010dfca0;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10dfc44u;
    f_mr011_0108aac0(c);
R_010dfc44:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10dfc54u;
    f_mr011_0108dc10(c);
R_010dfc54:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfc64u;
    f_mr011_0108d6c0(c);
R_010dfc64:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10dfc74u;
    f_mr011_010d19e0(c);
R_010dfc74:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfc84u;
    f_mr011_0108a4e0(c);
R_010dfc84:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfc90u;
    f_mr011_0108ce30(c);
R_010dfc90:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10dfca0u;
    f_mr011_0108e190(c);
L_010dfca0:
R_010dfca0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfcacu;
    f_mr011_0108e120(c);
R_010dfcac:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfcb8u;
    f_mr011_010907d0(c);
R_010dfcb8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfcc4u;
    f_mr011_0108e120(c);
R_010dfcc4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10dfcd8u;
    f_mr011_0108de20(c);
R_010dfcd8:
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[6] + 0x0u;
    wp::load_quantized(c, 1, ea, 0, 0, q);
    ea = c.r[5] + 0x0u;
    wp::load_quantized(c, 0, ea, 0, 0, q);
    ea = c.r[1] + 0x8u;
    c.r[7] = wp::rd32(ea);
    wp::ps_sub(c, 2, 0, 1);
    ea = c.r[5] + 0x8u;
    wp::load_quantized(c, 0, ea, 1, 0, q);
    ea = c.r[6] + 0x8u;
    wp::load_quantized(c, 1, ea, 1, 0, q);
    ea = c.r[4] + 0x0u;
    wp::store_quantized(c, 2, ea, 0, 0, q);
    wp::ps_sub(c, 2, 0, 1);
    ea = c.r[1] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x8u;
    wp::store_quantized(c, 2, ea, 1, 0, q);
    ea = c.r[7] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[7] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
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

void f_mr011_010dfd40(wp::Cpu& c) {
    WP_ENTER(0x10dfd40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dfd74u: goto R_010dfd74;
        case 0x10dfd88u: goto R_010dfd88;
        case 0x10dfd90u: goto R_010dfd90;
        case 0x10dfda4u: goto R_010dfda4;
        case 0x10dfdb0u: goto R_010dfdb0;
        case 0x10dfdc4u: goto R_010dfdc4;
        case 0x10dfdd4u: goto R_010dfdd4;
        case 0x10dfde4u: goto R_010dfde4;
        case 0x10dfdf4u: goto R_010dfdf4;
        case 0x10dfe04u: goto R_010dfe04;
        case 0x10dfe10u: goto R_010dfe10;
        case 0x10dfe20u: goto R_010dfe20;
        case 0x10dfe2cu: goto R_010dfe2c;
        case 0x10dfe38u: goto R_010dfe38;
        case 0x10dfe44u: goto R_010dfe44;
        case 0x10dfe58u: goto R_010dfe58;
        case 0x10dfe68u: goto R_010dfe68;
        case 0x10dfe9cu: goto R_010dfe9c;
        case 0x10dfef0u: goto R_010dfef0;
        case 0x10dff4cu: goto R_010dff4c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10dfd74u;
    f_mr011_0108de20(c);
R_010dfd74:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x1u;
    c.lr = 0x10dfd88u;
    f_mr011_0108de20(c);
R_010dfd88:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dfd90u;
    f_mr011_0108cb10(c);
R_010dfd90:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfda4u;
    f_mr011_0108a4e0(c);
R_010dfda4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfdb0u;
    f_mr011_0108eb00(c);
R_010dfdb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010dfe20;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10dfdc4u;
    f_mr011_0108aac0(c);
R_010dfdc4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10dfdd4u;
    f_mr011_0108dc10(c);
R_010dfdd4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfde4u;
    f_mr011_0108d6c0(c);
R_010dfde4:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10dfdf4u;
    f_mr011_010d19e0(c);
R_010dfdf4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dfe04u;
    f_mr011_0108a4e0(c);
R_010dfe04:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfe10u;
    f_mr011_0108ce30(c);
R_010dfe10:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10dfe20u;
    f_mr011_0108e190(c);
L_010dfe20:
R_010dfe20:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfe2cu;
    f_mr011_0108e120(c);
R_010dfe2c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10dfe38u;
    f_mr011_010907d0(c);
R_010dfe38:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dfe44u;
    f_mr011_0108e120(c);
R_010dfe44:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10dfe58u;
    f_mr011_0108de20(c);
R_010dfe58:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x2u;
    c.lr = 0x10dfe68u;
    f_mr011_0108ce90(c);
R_010dfe68:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010dfe8c;
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_010dfe8c;
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x8000u);
    if (wp::cr_get(c, 2)) goto L_010dfedc;
    goto L_010dff3c;
L_010dfe8c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10dfe9cu;
    f_mr011_0108d010(c);
R_010dfe9c:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x1cu;
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x0u;
    wp::load_quantized(c, 1, ea, 0, 0, q);
    wp::ps_muls0(c, 2, 1, 0);
    ea = c.r[4] + 0x8u;
    wp::load_quantized(c, 1, ea, 1, 0, q);
    ea = c.r[3] + 0x0u;
    wp::store_quantized(c, 2, ea, 0, 0, q);
    wp::ps_muls0(c, 2, 1, 0);
    ea = c.r[1] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x8u;
    wp::store_quantized(c, 2, ea, 1, 0, q);
    ea = c.r[31] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_010dff50;
L_010dfedc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10dfef0u;
    f_mr011_0108de20(c);
R_010dfef0:
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_010dff50;
L_010dff3c:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fb18u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb18u) & 0xFFFFu);
    c.lr = 0x10dff4cu;
    f_mr011_0108f4f0(c);
R_010dff4c:
    goto L_010dff54;
L_010dff50:
    c.r[3] = 0x1u;
L_010dff54:
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

void f_mr011_010dff70(wp::Cpu& c) {
    WP_ENTER(0x10dff70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10dffa4u: goto R_010dffa4;
        case 0x10dffacu: goto R_010dffac;
        case 0x10dffc0u: goto R_010dffc0;
        case 0x10dffccu: goto R_010dffcc;
        case 0x10dffe0u: goto R_010dffe0;
        case 0x10dfff0u: goto R_010dfff0;
        case 0x10e0000u: goto R_010e0000;
        case 0x10e0010u: goto R_010e0010;
        case 0x10e0020u: goto R_010e0020;
        case 0x10e002cu: goto R_010e002c;
        case 0x10e003cu: goto R_010e003c;
        case 0x10e0048u: goto R_010e0048;
        case 0x10e0054u: goto R_010e0054;
        case 0x10e0060u: goto R_010e0060;
        case 0x10e0074u: goto R_010e0074;
        case 0x10e0084u: goto R_010e0084;
        case 0x10e00a8u: goto R_010e00a8;
        case 0x10e0104u: goto R_010e0104;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10dffa4u;
    f_mr011_0108de20(c);
R_010dffa4:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10dffacu;
    f_mr011_0108cb10(c);
R_010dffac:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10dffc0u;
    f_mr011_0108a4e0(c);
R_010dffc0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10dffccu;
    f_mr011_0108eb00(c);
R_010dffcc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e003c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10dffe0u;
    f_mr011_0108aac0(c);
R_010dffe0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10dfff0u;
    f_mr011_0108dc10(c);
R_010dfff0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0000u;
    f_mr011_0108d6c0(c);
R_010e0000:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10e0010u;
    f_mr011_010d19e0(c);
R_010e0010:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e0020u;
    f_mr011_0108a4e0(c);
R_010e0020:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e002cu;
    f_mr011_0108ce30(c);
R_010e002c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e003cu;
    f_mr011_0108e190(c);
L_010e003c:
R_010e003c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0048u;
    f_mr011_0108e120(c);
R_010e0048:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0054u;
    f_mr011_010907d0(c);
R_010e0054:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0060u;
    f_mr011_0108e120(c);
R_010e0060:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0074u;
    f_mr011_0108de20(c);
R_010e0074:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x2u;
    c.lr = 0x10e0084u;
    f_mr011_0108ce90(c);
R_010e0084:
    c.r[0] = c.r[3] + 0xfb000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010e0098;
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_010e00f4;
L_010e0098:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e00a8u;
    f_mr011_0108d010(c);
R_010e00a8:
    c.r[3] = ((((g_mr011_bases[4] + 0x4564u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[1] + 0x14u;
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x4564u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x0u;
    wp::load_quantized(c, 2, ea, 0, 0, q);
    c.f[0] = wp::round_single(c.f[0] / c.f[1]);
    c.ps1[0] = c.f[0];
    wp::ps_muls0(c, 1, 2, 0);
    ea = c.r[5] + 0x8u;
    wp::load_quantized(c, 2, ea, 1, 0, q);
    ea = c.r[4] + 0x0u;
    wp::store_quantized(c, 1, ea, 0, 0, q);
    wp::ps_muls0(c, 1, 2, 0);
    ea = c.r[1] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x8u;
    wp::store_quantized(c, 1, ea, 1, 0, q);
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[30] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[30] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[30] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_010e0108;
L_010e00f4:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fb18u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb18u) & 0xFFFFu);
    c.lr = 0x10e0104u;
    f_mr011_0108f4f0(c);
R_010e0104:
    goto L_010e010c;
L_010e0108:
    c.r[3] = 0x1u;
L_010e010c:
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

void f_mr011_010e0130(wp::Cpu& c) {
    WP_ENTER(0x10e0130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0164u: goto R_010e0164;
        case 0x10e016cu: goto R_010e016c;
        case 0x10e0180u: goto R_010e0180;
        case 0x10e018cu: goto R_010e018c;
        case 0x10e01a0u: goto R_010e01a0;
        case 0x10e01b0u: goto R_010e01b0;
        case 0x10e01c0u: goto R_010e01c0;
        case 0x10e01d0u: goto R_010e01d0;
        case 0x10e01e0u: goto R_010e01e0;
        case 0x10e01ecu: goto R_010e01ec;
        case 0x10e01fcu: goto R_010e01fc;
        case 0x10e0208u: goto R_010e0208;
        case 0x10e0214u: goto R_010e0214;
        case 0x10e0220u: goto R_010e0220;
        case 0x10e0234u: goto R_010e0234;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10e0164u;
    f_mr011_0108de20(c);
R_010e0164:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10e016cu;
    f_mr011_0108cb10(c);
R_010e016c:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e0180u;
    f_mr011_0108a4e0(c);
R_010e0180:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e018cu;
    f_mr011_0108eb00(c);
R_010e018c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e01fc;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10e01a0u;
    f_mr011_0108aac0(c);
R_010e01a0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10e01b0u;
    f_mr011_0108dc10(c);
R_010e01b0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e01c0u;
    f_mr011_0108d6c0(c);
R_010e01c0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10e01d0u;
    f_mr011_010d19e0(c);
R_010e01d0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e01e0u;
    f_mr011_0108a4e0(c);
R_010e01e0:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e01ecu;
    f_mr011_0108ce30(c);
R_010e01ec:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e01fcu;
    f_mr011_0108e190(c);
L_010e01fc:
R_010e01fc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0208u;
    f_mr011_0108e120(c);
R_010e0208:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0214u;
    f_mr011_010907d0(c);
R_010e0214:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0220u;
    f_mr011_0108e120(c);
R_010e0220:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0234u;
    f_mr011_0108de20(c);
R_010e0234:
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[5] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = -c.f[0];
    ea = c.r[5] + 0x8u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[4] = -c.f[1];
    c.f[3] = -c.f[0];
    ea = c.r[1] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    c.f[2] = wp::round_single(c.f[2]);
    c.ps1[2] = c.f[2];
    c.f[1] = wp::round_single(c.f[4]);
    c.ps1[1] = c.f[1];
    ea = c.r[1] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[4]));
    c.f[0] = wp::round_single(c.f[3]);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + 0x0u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[4] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[4] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[3]));
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mr011_010e02a0(wp::Cpu& c) {
    WP_ENTER(0x10e02a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e02c8u: goto R_010e02c8;
        case 0x10e02ecu: goto R_010e02ec;
        case 0x10e02fcu: goto R_010e02fc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffee0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x124u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10e02c8u;
    f_mr011_0108de20(c);
R_010e02c8:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = ((((g_mr011_bases[5] + 0x2fb28u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[5] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb28u) & 0xFFFFu);
    ea = c.r[5] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    wp::cr_set(c, 6, wp::cr_get(c, 6) == wp::cr_get(c, 6));
    c.lr = 0x10e02ecu;
    f_801cf168(c);
R_010e02ec:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10e02fcu;
    f_mr011_0108a4e0(c);
R_010e02fc:
    ea = c.r[1] + 0x11cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x124u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x120u;
    return;
}

void f_mr011_010e0320(wp::Cpu& c) {
    WP_ENTER(0x10e0320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0348u: goto R_010e0348;
        case 0x10e0350u: goto R_010e0350;
        case 0x10e0358u: goto R_010e0358;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10e0348u;
    f_mr011_0108de20(c);
R_010e0348:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e0350u;
    f_8014c1e0(c);
R_010e0350:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10e0358u;
    f_mr011_0108a680(c);
R_010e0358:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e0370(wp::Cpu& c) {
    WP_ENTER(0x10e0370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0390u: goto R_010e0390;
        case 0x10e039cu: goto R_010e039c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10e0390u;
    f_mr011_0108de20(c);
R_010e0390:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x10e039cu;
    f_8014c170(c);
R_010e039c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010e03b0(wp::Cpu& c) {
    WP_ENTER(0x10e03b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e03e0u: goto R_010e03e0;
        case 0x10e03f4u: goto R_010e03f4;
        case 0x10e0400u: goto R_010e0400;
        case 0x10e0408u: goto R_010e0408;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[31] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[6] = c.r[31] | c.r[31];
    c.lr = 0x10e03e0u;
    f_mr011_0108de20(c);
R_010e03e0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10e03f4u;
    f_mr011_0108de20(c);
R_010e03f4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10e0400u;
    f_8014c230(c);
R_010e0400:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e0408u;
    f_mr011_0108a680(c);
R_010e0408:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e0430(wp::Cpu& c) {
    WP_ENTER(0x10e0430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0464u: goto R_010e0464;
        case 0x10e0478u: goto R_010e0478;
        case 0x10e0480u: goto R_010e0480;
        case 0x10e0494u: goto R_010e0494;
        case 0x10e04a0u: goto R_010e04a0;
        case 0x10e04b4u: goto R_010e04b4;
        case 0x10e04c4u: goto R_010e04c4;
        case 0x10e04d4u: goto R_010e04d4;
        case 0x10e04e4u: goto R_010e04e4;
        case 0x10e04f4u: goto R_010e04f4;
        case 0x10e0500u: goto R_010e0500;
        case 0x10e0510u: goto R_010e0510;
        case 0x10e051cu: goto R_010e051c;
        case 0x10e0528u: goto R_010e0528;
        case 0x10e0534u: goto R_010e0534;
        case 0x10e0548u: goto R_010e0548;
        case 0x10e0558u: goto R_010e0558;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[30] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x10e0464u;
    f_mr011_0108de20(c);
R_010e0464:
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e0478u;
    f_mr011_0108de20(c);
R_010e0478:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10e0480u;
    f_mr011_0108cb10(c);
R_010e0480:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb04u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e0494u;
    f_mr011_0108a4e0(c);
R_010e0494:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e04a0u;
    f_mr011_0108eb00(c);
R_010e04a0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e0510;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10e04b4u;
    f_mr011_0108aac0(c);
R_010e04b4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10e04c4u;
    f_mr011_0108dc10(c);
R_010e04c4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e04d4u;
    f_mr011_0108d6c0(c);
R_010e04d4:
    c.r[4] = ((((g_mr011_bases[4] + 0x4568u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4568u) & 0xFFFFu);
    c.lr = 0x10e04e4u;
    f_mr011_010d19e0(c);
R_010e04e4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb04u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e04f4u;
    f_mr011_0108a4e0(c);
R_010e04f4:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0500u;
    f_mr011_0108ce30(c);
R_010e0500:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e0510u;
    f_mr011_0108e190(c);
L_010e0510:
R_010e0510:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e051cu;
    f_mr011_0108e120(c);
R_010e051c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0528u;
    f_mr011_010907d0(c);
R_010e0528:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0534u;
    f_mr011_0108e120(c);
R_010e0534:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0548u;
    f_mr011_0108de20(c);
R_010e0548:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10e0558u;
    f_8014c250(c);
R_010e0558:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010e0580(wp::Cpu& c) {
    WP_ENTER(0x10e0580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e05a8u: goto R_010e05a8;
        case 0x10e0600u: goto R_010e0600;
        case 0x10e0610u: goto R_010e0610;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffdc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x28u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x23cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10e05a8u;
    f_mr011_0108de20(c);
R_010e05a8:
    ea = c.r[1] + 0x28u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = ((((g_mr011_bases[5] + 0x2fbc0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[1] + 0x30u;
    ea = c.r[5] + 0x20u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fbc0u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[5] + 0x24u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[5] + 0x28u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[5] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[5] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[5] + 0xcu;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[5] + 0x10u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[5] + 0x14u;
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    ea = c.r[5] + 0x18u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    ea = c.r[5] + 0x1cu;
    c.f[8] = wp::rdf32(ea);
    c.ps1[8] = c.f[8];
    wp::cr_set(c, 6, wp::cr_get(c, 6) == wp::cr_get(c, 6));
    c.lr = 0x10e0600u;
    f_801cf168(c);
R_010e0600:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x30u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x10e0610u;
    f_mr011_0108a4e0(c);
R_010e0610:
    ea = c.r[1] + 0x23cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x244u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x240u;
    return;
}

void f_mr011_010e0630(wp::Cpu& c) {
    WP_ENTER(0x10e0630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0660u: goto R_010e0660;
        case 0x10e0674u: goto R_010e0674;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[31] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[6] = c.r[31] | c.r[31];
    c.lr = 0x10e0660u;
    f_mr011_0108de20(c);
R_010e0660:
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x10e0674u;
    f_mr011_0108de20(c);
R_010e0674:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x20u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x20u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x28u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x2cu;
    wp::wr32(ea, c.r[0]);
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

void f_mr011_010e0700(wp::Cpu& c) {
    WP_ENTER(0x10e0700u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0720u: goto R_010e0720;
        case 0x10e0728u: goto R_010e0728;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x10e0720u;
    f_mr011_0108de20(c);
R_010e0720:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e0728u;
    f_8014b090(c);
R_010e0728:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010e0740(wp::Cpu& c) {
    WP_ENTER(0x10e0740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0768u: goto R_010e0768;
        case 0x10e0778u: goto R_010e0778;
        case 0x10e0790u: goto R_010e0790;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10e0768u;
    f_mr011_0108de20(c);
R_010e0768:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10e0778u;
    f_mr011_0108cf80(c);
R_010e0778:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[4] + c.r[0];
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10e0790u;
    f_mr011_0108a680(c);
R_010e0790:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e07b0(wp::Cpu& c) {
    WP_ENTER(0x10e07b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e07d8u: goto R_010e07d8;
        case 0x10e07e8u: goto R_010e07e8;
        case 0x10e0804u: goto R_010e0804;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x10e07d8u;
    f_mr011_0108de20(c);
R_010e07d8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x10e07e8u;
    f_mr011_0108cf80(c);
R_010e07e8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0x3u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + c.r[0];
    c.lr = 0x10e0804u;
    f_mr011_0108d010(c);
R_010e0804:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e0820(wp::Cpu& c) {
    WP_ENTER(0x10e0820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0864u: goto R_010e0864;
        case 0x10e0870u: goto R_010e0870;
        case 0x10e088cu: goto R_010e088c;
        case 0x10e08a0u: goto R_010e08a0;
        case 0x10e08b0u: goto R_010e08b0;
        case 0x10e08bcu: goto R_010e08bc;
        case 0x10e08d0u: goto R_010e08d0;
        case 0x10e08e0u: goto R_010e08e0;
        case 0x10e08f0u: goto R_010e08f0;
        case 0x10e0900u: goto R_010e0900;
        case 0x10e0910u: goto R_010e0910;
        case 0x10e091cu: goto R_010e091c;
        case 0x10e092cu: goto R_010e092c;
        case 0x10e0938u: goto R_010e0938;
        case 0x10e0944u: goto R_010e0944;
        case 0x10e0950u: goto R_010e0950;
        case 0x10e0964u: goto R_010e0964;
        case 0x10e0984u: goto R_010e0984;
        case 0x10e0994u: goto R_010e0994;
        case 0x10e09b0u: goto R_010e09b0;
        case 0x10e09c0u: goto R_010e09c0;
        case 0x10e09ccu: goto R_010e09cc;
        case 0x10e09e0u: goto R_010e09e0;
        case 0x10e09f0u: goto R_010e09f0;
        case 0x10e0a00u: goto R_010e0a00;
        case 0x10e0a0cu: goto R_010e0a0c;
        case 0x10e0a1cu: goto R_010e0a1c;
        case 0x10e0a28u: goto R_010e0a28;
        case 0x10e0a38u: goto R_010e0a38;
        case 0x10e0a44u: goto R_010e0a44;
        case 0x10e0a50u: goto R_010e0a50;
        case 0x10e0a5cu: goto R_010e0a5c;
        case 0x10e0a70u: goto R_010e0a70;
        case 0x10e0a90u: goto R_010e0a90;
        case 0x10e0aa0u: goto R_010e0aa0;
        case 0x10e0ab4u: goto R_010e0ab4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x1cu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[5] + 0x2fae8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fae8u) & 0xFFFFu);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + 0x4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[6] = c.r[29] | c.r[29];
    c.lr = 0x10e0864u;
    f_mr011_0108de20(c);
R_010e0864:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x2u;
    c.lr = 0x10e0870u;
    f_mr011_0108ce90(c);
R_010e0870:
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x8000u);
    if (!wp::cr_get(c, 2)) goto L_010e0aa8;
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x18u;
    c.r[4] = 0x2u;
    c.lr = 0x10e088cu;
    f_mr011_0108d820(c);
R_010e088c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[29]);
    if (!wp::cr_get(c, 2)) goto L_010e099c;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10e08a0u;
    f_mr011_0108cb10(c);
R_010e08a0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x24u;
    c.r[5] = 0x3u;
    c.lr = 0x10e08b0u;
    f_mr011_0108a4e0(c);
R_010e08b0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e08bcu;
    f_mr011_0108eb00(c);
R_010e08bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e092c;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10e08d0u;
    f_mr011_0108aac0(c);
R_010e08d0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10e08e0u;
    f_mr011_0108dc10(c);
R_010e08e0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e08f0u;
    f_mr011_0108d6c0(c);
R_010e08f0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10e0900u;
    f_mr011_010d19e0(c);
R_010e0900:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x24u;
    c.r[5] = 0x3u;
    c.lr = 0x10e0910u;
    f_mr011_0108a4e0(c);
R_010e0910:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e091cu;
    f_mr011_0108ce30(c);
R_010e091c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e092cu;
    f_mr011_0108e190(c);
L_010e092c:
R_010e092c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0938u;
    f_mr011_0108e120(c);
R_010e0938:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0944u;
    f_mr011_010907d0(c);
R_010e0944:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0950u;
    f_mr011_0108e120(c);
R_010e0950:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0964u;
    f_mr011_0108de20(c);
R_010e0964:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x2u;
    c.lr = 0x10e0984u;
    f_mr011_0108de20(c);
R_010e0984:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10e0994u;
    f_8014b100(c);
R_010e0994:
    c.r[3] = 0x1u;
    goto L_010e0ab4;
L_010e099c:
    ea = c.r[30] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[29]);
    if (!wp::cr_get(c, 2)) goto L_010e0aa8;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10e09b0u;
    f_mr011_0108cb10(c);
R_010e09b0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x1cu;
    c.r[5] = 0x4u;
    c.lr = 0x10e09c0u;
    f_mr011_0108a4e0(c);
R_010e09c0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e09ccu;
    f_mr011_0108eb00(c);
R_010e09cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e0a38;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x10e09e0u;
    f_mr011_0108aac0(c);
R_010e09e0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0xcu;
    c.lr = 0x10e09f0u;
    f_mr011_0108dc10(c);
R_010e09f0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0a00u;
    f_mr011_0108d6c0(c);
R_010e0a00:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] + 0x10u;
    c.lr = 0x10e0a0cu;
    f_mr011_010d19e0(c);
R_010e0a0c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x1cu;
    c.r[5] = 0x4u;
    c.lr = 0x10e0a1cu;
    f_mr011_0108a4e0(c);
R_010e0a1c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0a28u;
    f_mr011_0108ce30(c);
R_010e0a28:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e0a38u;
    f_mr011_0108e190(c);
L_010e0a38:
R_010e0a38:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0a44u;
    f_mr011_0108e120(c);
R_010e0a44:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0a50u;
    f_mr011_010907d0(c);
R_010e0a50:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0a5cu;
    f_mr011_0108e120(c);
R_010e0a5c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0a70u;
    f_mr011_0108de20(c);
R_010e0a70:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e0a90u;
    f_mr011_0108de20(c);
R_010e0a90:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x10e0aa0u;
    f_8014bd70(c);
R_010e0aa0:
    c.r[3] = 0x1u;
    goto L_010e0ab4;
L_010e0aa8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] + 0x30u;
    c.lr = 0x10e0ab4u;
    f_mr011_0108f4f0(c);
L_010e0ab4:
R_010e0ab4:
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

void f_mr011_010e0ae0(wp::Cpu& c) {
    WP_ENTER(0x10e0ae0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0b0cu: goto R_010e0b0c;
        case 0x10e0b1cu: goto R_010e0b1c;
        case 0x10e0b64u: goto R_010e0b64;
        case 0x10e0b80u: goto R_010e0b80;
        case 0x10e0b8cu: goto R_010e0b8c;
        case 0x10e0b98u: goto R_010e0b98;
        case 0x10e0bacu: goto R_010e0bac;
        case 0x10e0bb8u: goto R_010e0bb8;
        case 0x10e0bccu: goto R_010e0bcc;
        case 0x10e0bdcu: goto R_010e0bdc;
        case 0x10e0bf0u: goto R_010e0bf0;
        case 0x10e0c00u: goto R_010e0c00;
        case 0x10e0c10u: goto R_010e0c10;
        case 0x10e0c1cu: goto R_010e0c1c;
        case 0x10e0c2cu: goto R_010e0c2c;
        case 0x10e0c38u: goto R_010e0c38;
        case 0x10e0c44u: goto R_010e0c44;
        case 0x10e0c50u: goto R_010e0c50;
        case 0x10e0c64u: goto R_010e0c64;
        case 0x10e0c7cu: goto R_010e0c7c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10e0b0cu;
    f_mr011_0108de20(c);
R_010e0b0c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x1u;
    c.lr = 0x10e0b1cu;
    f_mr011_0108d820(c);
R_010e0b1c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010e0b40;
    c.r[3] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[4];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    goto L_010e0b44;
L_010e0b40:
    c.r[0] = 0x0u;
L_010e0b44:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e0b90;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.lr = 0x10e0b64u;
    f_mr011_0108de20(c);
R_010e0b64:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x10e0b80u;
    f_8014b8a0(c);
R_010e0b80:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10e0b8cu;
    f_mr011_0108ce30(c);
R_010e0b8c:
    goto L_010e0c7c;
L_010e0b90:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e0b98u;
    f_mr011_0108cb10(c);
R_010e0b98:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e0bacu;
    f_mr011_0108a4e0(c);
R_010e0bac:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0bb8u;
    f_mr011_0108eb00(c);
R_010e0bb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e0c2c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10e0bccu;
    f_mr011_0108aac0(c);
R_010e0bcc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10e0bdcu;
    f_mr011_0108dc10(c);
R_010e0bdc:
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0bf0u;
    f_mr011_0108d6c0(c);
R_010e0bf0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10e0c00u;
    f_mr011_010d19e0(c);
R_010e0c00:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e0c10u;
    f_mr011_0108a4e0(c);
R_010e0c10:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0c1cu;
    f_mr011_0108ce30(c);
R_010e0c1c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e0c2cu;
    f_mr011_0108e190(c);
L_010e0c2c:
R_010e0c2c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0c38u;
    f_mr011_0108e120(c);
R_010e0c38:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0c44u;
    f_mr011_010907d0(c);
R_010e0c44:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0c50u;
    f_mr011_0108e120(c);
R_010e0c50:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0c64u;
    f_mr011_0108de20(c);
R_010e0c64:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x10e0c7cu;
    f_8014b870(c);
L_010e0c7c:
R_010e0c7c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e0ca0(wp::Cpu& c) {
    WP_ENTER(0x10e0ca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0cccu: goto R_010e0ccc;
        case 0x10e0cdcu: goto R_010e0cdc;
        case 0x10e0d24u: goto R_010e0d24;
        case 0x10e0d40u: goto R_010e0d40;
        case 0x10e0d4cu: goto R_010e0d4c;
        case 0x10e0d58u: goto R_010e0d58;
        case 0x10e0d6cu: goto R_010e0d6c;
        case 0x10e0d78u: goto R_010e0d78;
        case 0x10e0d8cu: goto R_010e0d8c;
        case 0x10e0d9cu: goto R_010e0d9c;
        case 0x10e0db0u: goto R_010e0db0;
        case 0x10e0dc0u: goto R_010e0dc0;
        case 0x10e0dd0u: goto R_010e0dd0;
        case 0x10e0ddcu: goto R_010e0ddc;
        case 0x10e0decu: goto R_010e0dec;
        case 0x10e0df8u: goto R_010e0df8;
        case 0x10e0e04u: goto R_010e0e04;
        case 0x10e0e10u: goto R_010e0e10;
        case 0x10e0e24u: goto R_010e0e24;
        case 0x10e0e3cu: goto R_010e0e3c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x14u;
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10e0cccu;
    f_mr011_0108de20(c);
R_010e0ccc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x1u;
    c.lr = 0x10e0cdcu;
    f_mr011_0108d820(c);
R_010e0cdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010e0d00;
    c.r[3] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[4];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    goto L_010e0d04;
L_010e0d00:
    c.r[0] = 0x0u;
L_010e0d04:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e0d50;
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.lr = 0x10e0d24u;
    f_mr011_0108de20(c);
R_010e0d24:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.r[4] = c.r[3] | c.r[3];
    c.lr = 0x10e0d40u;
    f_8014b820(c);
R_010e0d40:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10e0d4cu;
    f_mr011_0108ce30(c);
R_010e0d4c:
    goto L_010e0e3c;
L_010e0d50:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e0d58u;
    f_mr011_0108cb10(c);
R_010e0d58:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e0d6cu;
    f_mr011_0108a4e0(c);
R_010e0d6c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0d78u;
    f_mr011_0108eb00(c);
R_010e0d78:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e0dec;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10e0d8cu;
    f_mr011_0108aac0(c);
R_010e0d8c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10e0d9cu;
    f_mr011_0108dc10(c);
R_010e0d9c:
    c.r[4] = ((((g_mr011_bases[4] + 0x455cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x455cu) & 0xFFFFu);
    c.r[5] = wp::rd32(ea);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0db0u;
    f_mr011_0108d6c0(c);
R_010e0db0:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10e0dc0u;
    f_mr011_010d19e0(c);
R_010e0dc0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e0dd0u;
    f_mr011_0108a4e0(c);
R_010e0dd0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0ddcu;
    f_mr011_0108ce30(c);
R_010e0ddc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e0decu;
    f_mr011_0108e190(c);
L_010e0dec:
R_010e0dec:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0df8u;
    f_mr011_0108e120(c);
R_010e0df8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0e04u;
    f_mr011_010907d0(c);
R_010e0e04:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0e10u;
    f_mr011_0108e120(c);
R_010e0e10:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e0e24u;
    f_mr011_0108de20(c);
R_010e0e24:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[4] + 0x8u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.lr = 0x10e0e3cu;
    f_8014b7e0(c);
L_010e0e3c:
R_010e0e3c:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e0e60(wp::Cpu& c) {
    WP_ENTER(0x10e0e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e0e90u: goto R_010e0e90;
        case 0x10e0e9cu: goto R_010e0e9c;
        case 0x10e0ebcu: goto R_010e0ebc;
        case 0x10e0ed4u: goto R_010e0ed4;
        case 0x10e0ee8u: goto R_010e0ee8;
        case 0x10e0ef8u: goto R_010e0ef8;
        case 0x10e0f08u: goto R_010e0f08;
        case 0x10e0f20u: goto R_010e0f20;
        case 0x10e0f30u: goto R_010e0f30;
        case 0x10e0f70u: goto R_010e0f70;
        case 0x10e0f80u: goto R_010e0f80;
        case 0x10e0f8cu: goto R_010e0f8c;
        case 0x10e0f98u: goto R_010e0f98;
        case 0x10e0facu: goto R_010e0fac;
        case 0x10e0fb8u: goto R_010e0fb8;
        case 0x10e0fccu: goto R_010e0fcc;
        case 0x10e0fdcu: goto R_010e0fdc;
        case 0x10e0fecu: goto R_010e0fec;
        case 0x10e0ffcu: goto R_010e0ffc;
        case 0x10e100cu: goto R_010e100c;
        case 0x10e1018u: goto R_010e1018;
        case 0x10e1028u: goto R_010e1028;
        case 0x10e1034u: goto R_010e1034;
        case 0x10e1040u: goto R_010e1040;
        case 0x10e104cu: goto R_010e104c;
        case 0x10e1060u: goto R_010e1060;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x2u;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_mr011_bases[4] + 0x4558u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mr011_bases[4] + 0x4558u) & 0xFFFFu);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10e0e90u;
    f_mr011_0108d010(c);
R_010e0e90:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x3u;
    c.lr = 0x10e0e9cu;
    f_mr011_0108ce90(c);
R_010e0e9c:
    c.r[0] = c.r[3] + 0xf6000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x8000u);
    if (!wp::cr_get(c, 2)) goto L_010e0ed8;
    ea = c.r[30] + 0x0u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x14u;
    c.r[4] = 0x3u;
    c.lr = 0x10e0ebcu;
    f_mr011_0108de20(c);
R_010e0ebc:
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[30] + 0x100u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.f[1] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10e0ed4u;
    f_80126a90(c);
R_010e0ed4:
    goto L_010e0f20;
L_010e0ed8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x1cu;
    c.r[4] = 0x3u;
    c.lr = 0x10e0ee8u;
    f_mr011_0108d010(c);
R_010e0ee8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x20u;
    c.r[4] = 0x4u;
    c.lr = 0x10e0ef8u;
    f_mr011_0108d010(c);
R_010e0ef8:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x24u;
    c.r[4] = 0x5u;
    c.lr = 0x10e0f08u;
    f_mr011_0108d010(c);
R_010e0f08:
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[30] + 0x100u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[1] + 0x1cu;
    c.f[1] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[1] = c.f[1];
    c.lr = 0x10e0f20u;
    f_80126a90(c);
L_010e0f20:
R_010e0f20:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x1u;
    c.lr = 0x10e0f30u;
    f_mr011_0108d820(c);
R_010e0f30:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010e0f50;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[3];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[0] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    goto L_010e0f54;
L_010e0f50:
    c.r[0] = 0x0u;
L_010e0f54:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e0f90;
    ea = c.r[30] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.lr = 0x10e0f70u;
    f_mr011_0108de20(c);
R_010e0f70:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x28u;
    c.r[5] = c.r[4] | c.r[4];
    c.lr = 0x10e0f80u;
    f_8014b100(c);
R_010e0f80:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x10e0f8cu;
    f_mr011_0108ce30(c);
R_010e0f8c:
    goto L_010e10c4;
L_010e0f90:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10e0f98u;
    f_mr011_0108cb10(c);
R_010e0f98:
    c.r[31] = ((((g_mr011_bases[5] + 0x2fb0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e0facu;
    f_mr011_0108a4e0(c);
R_010e0fac:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e0fb8u;
    f_mr011_0108eb00(c);
R_010e0fb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e1028;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x10e0fccu;
    f_mr011_0108aac0(c);
R_010e0fcc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x30u;
    c.lr = 0x10e0fdcu;
    f_mr011_0108dc10(c);
R_010e0fdc:
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e0fecu;
    f_mr011_0108d6c0(c);
R_010e0fec:
    c.r[4] = ((((g_mr011_bases[4] + 0x4660u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4660u) & 0xFFFFu);
    c.lr = 0x10e0ffcu;
    f_mr011_010d19e0(c);
R_010e0ffc:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[5] + 0x2fb0cu) & 0xFFFFu);
    c.r[5] = 0x3u;
    c.lr = 0x10e100cu;
    f_mr011_0108a4e0(c);
R_010e100c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e1018u;
    f_mr011_0108ce30(c);
R_010e1018:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e1028u;
    f_mr011_0108e190(c);
L_010e1028:
R_010e1028:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e1034u;
    f_mr011_0108e120(c);
R_010e1034:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e1040u;
    f_mr011_010907d0(c);
R_010e1040:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e104cu;
    f_mr011_0108e120(c);
R_010e104c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.r[6] = 0x0u;
    c.lr = 0x10e1060u;
    f_mr011_0108de20(c);
R_010e1060:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x2cu;
    wp::wr32(ea, c.r[0]);
L_010e10c4:
    ea = c.r[1] + 0x6cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x68u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mr011_010e10f0(wp::Cpu& c) {
    WP_ENTER(0x10e10f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1118u: goto R_010e1118;
        case 0x10e1120u: goto R_010e1120;
        case 0x10e1130u: goto R_010e1130;
        case 0x10e113cu: goto R_010e113c;
        case 0x10e1150u: goto R_010e1150;
        case 0x10e1160u: goto R_010e1160;
        case 0x10e1170u: goto R_010e1170;
        case 0x10e1180u: goto R_010e1180;
        case 0x10e1194u: goto R_010e1194;
        case 0x10e11a0u: goto R_010e11a0;
        case 0x10e11b0u: goto R_010e11b0;
        case 0x10e11c4u: goto R_010e11c4;
        case 0x10e11d0u: goto R_010e11d0;
        case 0x10e11e0u: goto R_010e11e0;
        case 0x10e11f0u: goto R_010e11f0;
        case 0x10e11fcu: goto R_010e11fc;
        case 0x10e120cu: goto R_010e120c;
        case 0x10e1218u: goto R_010e1218;
        case 0x10e1228u: goto R_010e1228;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10e1118u;
    f_mr011_0108a4e0(c);
R_010e1118:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10e1120u;
    f_mr011_0108cb10(c);
R_010e1120:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10e1130u;
    f_mr011_0108a4e0(c);
R_010e1130:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e113cu;
    f_mr011_0108eb00(c);
R_010e113c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010e120c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10e1150u;
    f_mr011_0108aac0(c);
R_010e1150:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffffffffu;
    c.r[5] = 0x148u;
    c.lr = 0x10e1160u;
    f_mr011_0108dc10(c);
R_010e1160:
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    c.r[4] = 0xffffffffu;
    c.lr = 0x10e1170u;
    f_mr011_0108d6c0(c);
R_010e1170:
    c.r[4] = ((((g_mr011_bases[4] + 0x4708u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[4] + 0x4708u) & 0xFFFFu);
    c.lr = 0x10e1180u;
    f_mr011_010d19e0(c);
R_010e1180:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fc28u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fc28u) & 0xFFFFu);
    c.r[5] = 0x5u;
    c.lr = 0x10e1194u;
    f_mr011_0108a4e0(c);
R_010e1194:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10e11a0u;
    f_mr011_0108a590(c);
R_010e11a0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x1u;
    c.lr = 0x10e11b0u;
    f_mr011_0108e190(c);
R_010e11b0:
    c.r[4] = ((((g_mr011_bases[5] + 0x2fc30u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mr011_bases[5] + 0x2fc30u) & 0xFFFFu);
    c.r[5] = 0x4u;
    c.lr = 0x10e11c4u;
    f_mr011_0108a4e0(c);
R_010e11c4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x10e11d0u;
    f_mr011_0108a590(c);
R_010e11d0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x1u;
    c.lr = 0x10e11e0u;
    f_mr011_0108e190(c);
R_010e11e0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    c.r[5] = 0xffffffffu;
    c.lr = 0x10e11f0u;
    f_mr011_0108a4e0(c);
R_010e11f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e11fcu;
    f_mr011_0108ce30(c);
R_010e11fc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffcu;
    c.r[5] = 0x0u;
    c.lr = 0x10e120cu;
    f_mr011_0108e190(c);
L_010e120c:
R_010e120c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffeu;
    c.lr = 0x10e1218u;
    f_mr011_0108e120(c);
R_010e1218:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfffffffdu;
    c.r[5] = 0x0u;
    c.lr = 0x10e1228u;
    f_mr011_0108e190(c);
R_010e1228:
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

void f_mr011_010e1240(wp::Cpu& c) {
    WP_ENTER(0x10e1240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1260u: goto R_010e1260;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10e1260u;
    wp::call(c, c.ctr);
R_010e1260:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mr011_010e1280(wp::Cpu& c) {
    WP_ENTER(0x10e1280u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e12b8u: goto R_010e12b8;
        case 0x10e12c4u: goto R_010e12c4;
        case 0x10e12f0u: goto R_010e12f0;
        case 0x10e1308u: goto R_010e1308;
        case 0x10e1320u: goto R_010e1320;
        case 0x10e1334u: goto R_010e1334;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e12b8u;
    f_mr011_0108de20(c);
R_010e12b8:
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10e12c4u;
    f_mr011_0108e060(c);
R_010e12c4:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    c.r[4] = 0x1u;
    c.r[0] = 0xfu;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 0)) goto L_010e12f0;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = 0x2u;
    c.lr = 0x10e12f0u;
    f_mr011_0108cf80(c);
L_010e12f0:
R_010e12f0:
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 0)) goto L_010e1308;
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x3u;
    c.lr = 0x10e1308u;
    f_mr011_0108cf80(c);
L_010e1308:
R_010e1308:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010e1320;
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x10e1320u;
    f_mr011_01087c00(c);
L_010e1320:
R_010e1320:
    c.r[5] = ((((g_mr011_bases[1] + 0xe1240u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mr011_bases[1] + 0xe1240u) & 0xFFFFu);
    c.r[4] = 0x1u;
    c.lr = 0x10e1334u;
    f_mr011_0108fb40(c);
R_010e1334:
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x1u;
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

void f_mr011_010e1360(wp::Cpu& c) {
    WP_ENTER(0x10e1360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1394u: goto R_010e1394;
        case 0x10e13a8u: goto R_010e13a8;
        case 0x10e13b4u: goto R_010e13b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e1394u;
    f_mr011_0108de20(c);
R_010e1394:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e13a8u;
    f_mr011_0108cf80(c);
R_010e13a8:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10e13b4u;
    f_mr011_01087da0(c);
R_010e13b4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e13d0(wp::Cpu& c) {
    WP_ENTER(0x10e13d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1404u: goto R_010e1404;
        case 0x10e1418u: goto R_010e1418;
        case 0x10e1424u: goto R_010e1424;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e1404u;
    f_mr011_0108de20(c);
R_010e1404:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e1418u;
    f_mr011_0108cf80(c);
R_010e1418:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10e1424u;
    f_mr011_01087d50(c);
R_010e1424:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e1440(wp::Cpu& c) {
    WP_ENTER(0x10e1440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1474u: goto R_010e1474;
        case 0x10e1488u: goto R_010e1488;
        case 0x10e1494u: goto R_010e1494;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e1474u;
    f_mr011_0108de20(c);
R_010e1474:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e1488u;
    f_mr011_0108d010(c);
R_010e1488:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10e1494u;
    f_mr011_01087d60(c);
R_010e1494:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e14b0(wp::Cpu& c) {
    WP_ENTER(0x10e14b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e14e4u: goto R_010e14e4;
        case 0x10e14f8u: goto R_010e14f8;
        case 0x10e1504u: goto R_010e1504;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e14e4u;
    f_mr011_0108de20(c);
R_010e14e4:
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0xcu;
    c.r[4] = 0x2u;
    c.lr = 0x10e14f8u;
    f_mr011_0108d010(c);
R_010e14f8:
    ea = c.r[1] + 0xcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10e1504u;
    f_mr011_01087d70(c);
R_010e1504:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mr011_010e1520(wp::Cpu& c) {
    WP_ENTER(0x10e1520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10e1548u: goto R_010e1548;
        case 0x10e1550u: goto R_010e1550;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mr011_bases[4] + 0x4700u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[6] + wp::sign_extend16((g_mr011_bases[4] + 0x4700u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10e1548u;
    f_mr011_0108de20(c);
R_010e1548:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10e1550u;
    f_mr011_01087d90(c);
R_010e1550:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

