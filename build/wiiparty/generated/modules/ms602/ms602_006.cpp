#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_ms602_bases[17];
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
void f_80034f00(wp::Cpu& c);
void f_80034f20(wp::Cpu& c);
void f_800374b0(wp::Cpu& c);
void f_80038a00(wp::Cpu& c);
void f_8003b350(wp::Cpu& c);
void f_8003b480(wp::Cpu& c);
void f_8003d6b0(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_800402f0(wp::Cpu& c);
void f_800403a0(wp::Cpu& c);
void f_800403b0(wp::Cpu& c);
void f_80041c20(wp::Cpu& c);
void f_80041f70(wp::Cpu& c);
void f_80043060(wp::Cpu& c);
void f_80043120(wp::Cpu& c);
void f_80043290(wp::Cpu& c);
void f_80043490(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a110(wp::Cpu& c);
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
void f_ms602_010057e0(wp::Cpu& c);
void f_ms602_010125a0(wp::Cpu& c);
void f_ms602_01012d70(wp::Cpu& c);
void f_ms602_01012e90(wp::Cpu& c);
void f_ms602_010132d0(wp::Cpu& c);
void f_ms602_01013f50(wp::Cpu& c);
void f_ms602_01019670(wp::Cpu& c);
void f_ms602_0102a930(wp::Cpu& c);
void f_ms602_0102aaa0(wp::Cpu& c);
void f_ms602_0102aac0(wp::Cpu& c);
void f_ms602_0102aae0(wp::Cpu& c);
void f_ms602_0102b040(wp::Cpu& c);
void f_ms602_0102d9d0(wp::Cpu& c);
void f_ms602_0102ef10(wp::Cpu& c);
void f_ms602_0102efb0(wp::Cpu& c);
void f_ms602_0102f030(wp::Cpu& c);
void f_ms602_0102f040(wp::Cpu& c);
void f_ms602_0102f050(wp::Cpu& c);
void f_ms602_0102f060(wp::Cpu& c);
void f_ms602_0102f080(wp::Cpu& c);
void f_ms602_01033d80(wp::Cpu& c);
void f_ms602_01033f50(wp::Cpu& c);
void f_ms602_01033fd0(wp::Cpu& c);
void f_ms602_01033ff0(wp::Cpu& c);
void f_ms602_01034390(wp::Cpu& c);
void f_ms602_010348c0(wp::Cpu& c);
void f_ms602_0103b230(wp::Cpu& c);
void f_ms602_0103d2f0(wp::Cpu& c);
void f_ms602_0104d820(wp::Cpu& c);
void f_ms602_0104e860(wp::Cpu& c);
void f_ms602_0104f460(wp::Cpu& c);
void f_ms602_01065a10(wp::Cpu& c);
void f_ms602_01078db0(wp::Cpu& c);
void f_ms602_0107a350(wp::Cpu& c);
void f_ms602_0107c7a0(wp::Cpu& c);
void f_ms602_0107d6a0(wp::Cpu& c);
void f_ms602_0107e190(wp::Cpu& c);
void f_ms602_0107fc20(wp::Cpu& c);
void f_ms602_0107fcb0(wp::Cpu& c);
void f_ms602_0107fd30(wp::Cpu& c);
void f_ms602_0107fe50(wp::Cpu& c);
void f_ms602_0107ff50(wp::Cpu& c);
void f_ms602_010804d0(wp::Cpu& c);
void f_ms602_010804e0(wp::Cpu& c);
void f_ms602_01080510(wp::Cpu& c);
void f_ms602_01080520(wp::Cpu& c);
void f_ms602_010806f0(wp::Cpu& c);
void f_ms602_01080830(wp::Cpu& c);
void f_ms602_01080840(wp::Cpu& c);
void f_ms602_01080990(wp::Cpu& c);
void f_ms602_01080a50(wp::Cpu& c);
void f_ms602_01080b20(wp::Cpu& c);
void f_ms602_01080d90(wp::Cpu& c);
void f_ms602_01080db0(wp::Cpu& c);
void f_ms602_01080e20(wp::Cpu& c);
void f_ms602_01080ee0(wp::Cpu& c);
void f_ms602_01081420(wp::Cpu& c);
void f_ms602_010817c0(wp::Cpu& c);
void f_ms602_010817e0(wp::Cpu& c);
void f_ms602_01081af0(wp::Cpu& c);
void f_ms602_01081b00(wp::Cpu& c);
void f_ms602_01081b10(wp::Cpu& c);
void f_ms602_01081f10(wp::Cpu& c);
void f_ms602_01081fe0(wp::Cpu& c);
void f_ms602_010821f0(wp::Cpu& c);
void f_ms602_01082300(wp::Cpu& c);
void f_ms602_01082380(wp::Cpu& c);
void f_ms602_010823e0(wp::Cpu& c);
void f_ms602_01082520(wp::Cpu& c);
void f_ms602_01082530(wp::Cpu& c);
void f_ms602_01082540(wp::Cpu& c);
void f_ms602_01082550(wp::Cpu& c);
void f_ms602_01082610(wp::Cpu& c);
void f_ms602_01082890(wp::Cpu& c);
void f_ms602_010828c0(wp::Cpu& c);
void f_ms602_010828e0(wp::Cpu& c);
void f_ms602_01082940(wp::Cpu& c);
void f_ms602_01082bc0(wp::Cpu& c);
void f_ms602_01082be0(wp::Cpu& c);
void f_ms602_01082c00(wp::Cpu& c);
void f_ms602_01082c70(wp::Cpu& c);
void f_ms602_01082cf0(wp::Cpu& c);
void f_ms602_01082d10(wp::Cpu& c);
void f_ms602_01082d30(wp::Cpu& c);
void f_ms602_01082d50(wp::Cpu& c);
void f_ms602_01082d90(wp::Cpu& c);
void f_ms602_01082db0(wp::Cpu& c);
void f_ms602_01082dd0(wp::Cpu& c);
void f_ms602_01082df0(wp::Cpu& c);
void f_ms602_01082e10(wp::Cpu& c);
void f_ms602_01082e30(wp::Cpu& c);
void f_ms602_01082e70(wp::Cpu& c);
void f_ms602_01083040(wp::Cpu& c);
void f_ms602_01083060(wp::Cpu& c);
void f_ms602_01083090(wp::Cpu& c);
void f_ms602_010830c0(wp::Cpu& c);
void f_ms602_010830f0(wp::Cpu& c);
void f_ms602_01083120(wp::Cpu& c);
void f_ms602_01083140(wp::Cpu& c);
void f_ms602_01083160(wp::Cpu& c);
void f_ms602_01083170(wp::Cpu& c);
void f_ms602_01083180(wp::Cpu& c);
void f_ms602_010831f0(wp::Cpu& c);
void f_ms602_01083200(wp::Cpu& c);
void f_ms602_01083210(wp::Cpu& c);
void f_ms602_01083220(wp::Cpu& c);
void f_ms602_01083240(wp::Cpu& c);
void f_ms602_010832b0(wp::Cpu& c);
void f_ms602_010832c0(wp::Cpu& c);
void f_ms602_010832d0(wp::Cpu& c);
void f_ms602_010832e0(wp::Cpu& c);
void f_ms602_010832f0(wp::Cpu& c);
void f_ms602_01083300(wp::Cpu& c);
void f_ms602_01083310(wp::Cpu& c);
void f_ms602_01083320(wp::Cpu& c);
void f_ms602_01083330(wp::Cpu& c);
void f_ms602_01083340(wp::Cpu& c);
void f_ms602_01083350(wp::Cpu& c);
void f_ms602_01083360(wp::Cpu& c);
void f_ms602_010833c0(wp::Cpu& c);
void f_ms602_01083420(wp::Cpu& c);
void f_ms602_010837d0(wp::Cpu& c);
void f_ms602_01083a20(wp::Cpu& c);
void f_ms602_01083eb0(wp::Cpu& c);
void f_ms602_01083ec0(wp::Cpu& c);
void f_ms602_01083ed0(wp::Cpu& c);
void f_ms602_01084080(wp::Cpu& c);
void f_ms602_01084310(wp::Cpu& c);
void f_ms602_010843d0(wp::Cpu& c);
void f_ms602_010843e0(wp::Cpu& c);
void f_ms602_010843f0(wp::Cpu& c);
void f_ms602_01084a10(wp::Cpu& c);
void f_ms602_01084c50(wp::Cpu& c);
void f_ms602_01084ea0(wp::Cpu& c);
void f_ms602_010851e0(wp::Cpu& c);
void f_ms602_01085230(wp::Cpu& c);
void f_ms602_01085240(wp::Cpu& c);
void f_ms602_010852f0(wp::Cpu& c);
void f_ms602_01085390(wp::Cpu& c);
void f_ms602_010853a0(wp::Cpu& c);
void f_ms602_010853b0(wp::Cpu& c);
void f_ms602_010853c0(wp::Cpu& c);
void f_ms602_010853d0(wp::Cpu& c);
void f_ms602_01085440(wp::Cpu& c);
void f_ms602_010854c0(wp::Cpu& c);
void f_ms602_010854d0(wp::Cpu& c);
void f_ms602_01085550(wp::Cpu& c);
void f_ms602_01085560(wp::Cpu& c);
void f_ms602_01085570(wp::Cpu& c);
void f_ms602_01085580(wp::Cpu& c);
void f_ms602_01085590(wp::Cpu& c);
void f_ms602_010855a0(wp::Cpu& c);
void f_ms602_010855b0(wp::Cpu& c);
void f_ms602_010855c0(wp::Cpu& c);
void f_ms602_01085630(wp::Cpu& c);
void f_ms602_01085750(wp::Cpu& c);
void f_ms602_010858f0(wp::Cpu& c);
void f_ms602_010859a0(wp::Cpu& c);
void f_ms602_01085a40(wp::Cpu& c);
void f_ms602_01085c80(wp::Cpu& c);
void f_ms602_01085d40(wp::Cpu& c);
void f_ms602_01085de0(wp::Cpu& c);
void f_ms602_01085e10(wp::Cpu& c);
void f_ms602_01085e50(wp::Cpu& c);
void f_ms602_01085e60(wp::Cpu& c);
void f_ms602_01085ec0(wp::Cpu& c);
void f_ms602_01085fd0(wp::Cpu& c);
void f_ms602_010861e0(wp::Cpu& c);
void f_ms602_010862d0(wp::Cpu& c);
void f_ms602_01086610(wp::Cpu& c);
void f_ms602_01086a40(wp::Cpu& c);
void f_ms602_01086cc0(wp::Cpu& c);
void f_ms602_01087000(wp::Cpu& c);
void f_ms602_01087210(wp::Cpu& c);
void f_ms602_01087640(wp::Cpu& c);
void f_ms602_01087a90(wp::Cpu& c);
void f_ms602_01087ab0(wp::Cpu& c);
void f_ms602_01087ba0(wp::Cpu& c);
void f_ms602_01087c10(wp::Cpu& c);
void f_ms602_01087d30(wp::Cpu& c);
void f_ms602_01087f30(wp::Cpu& c);
void f_ms602_010880f0(wp::Cpu& c);
void f_ms602_010888b0(wp::Cpu& c);
void f_ms602_010888f0(wp::Cpu& c);
void f_ms602_01088a70(wp::Cpu& c);
void f_ms602_01088a80(wp::Cpu& c);
void f_ms602_01088ee0(wp::Cpu& c);
void f_ms602_01088ef0(wp::Cpu& c);
void f_ms602_01089000(wp::Cpu& c);
void f_ms602_01089010(wp::Cpu& c);
void f_ms602_010890b0(wp::Cpu& c);
void f_ms602_010890d0(wp::Cpu& c);
void f_ms602_01089110(wp::Cpu& c);
void f_ms602_01089130(wp::Cpu& c);
void f_ms602_01089160(wp::Cpu& c);
void f_ms602_01089190(wp::Cpu& c);
void f_ms602_010891c0(wp::Cpu& c);
void f_ms602_010891f0(wp::Cpu& c);
void f_ms602_01089220(wp::Cpu& c);
void f_ms602_01089250(wp::Cpu& c);
void f_ms602_01089310(wp::Cpu& c);
void f_ms602_010893b0(wp::Cpu& c);
void f_ms602_010893c0(wp::Cpu& c);
void f_ms602_010893d0(wp::Cpu& c);
void f_ms602_010893f0(wp::Cpu& c);
void f_ms602_01089400(wp::Cpu& c);
void f_ms602_01089410(wp::Cpu& c);
void f_ms602_01089420(wp::Cpu& c);
void f_ms602_010894e0(wp::Cpu& c);
void f_ms602_010895b0(wp::Cpu& c);
void f_ms602_01089650(wp::Cpu& c);
void f_ms602_01089760(wp::Cpu& c);
void f_ms602_01089770(wp::Cpu& c);
void f_ms602_01089780(wp::Cpu& c);
void f_ms602_01089790(wp::Cpu& c);
void f_ms602_010897b0(wp::Cpu& c);
void f_ms602_010898e0(wp::Cpu& c);
void f_ms602_010899e0(wp::Cpu& c);
void f_ms602_01089c50(wp::Cpu& c);
void f_ms602_01089f80(wp::Cpu& c);
void f_ms602_0108a0d0(wp::Cpu& c);
void f_ms602_0108a0e0(wp::Cpu& c);
void f_ms602_0108a1b0(wp::Cpu& c);
void f_ms602_0108a250(wp::Cpu& c);
void f_ms602_0108a360(wp::Cpu& c);
void f_ms602_0108a4e0(wp::Cpu& c);
void f_ms602_0108a4f0(wp::Cpu& c);
void f_ms602_0108a500(wp::Cpu& c);
void f_ms602_0108a510(wp::Cpu& c);
void f_ms602_0108a530(wp::Cpu& c);
void f_ms602_0108a660(wp::Cpu& c);
void f_ms602_0108a950(wp::Cpu& c);
void f_ms602_0108aa50(wp::Cpu& c);
void f_ms602_0108ab40(wp::Cpu& c);
void f_ms602_0108abb0(wp::Cpu& c);
void f_ms602_0108ac10(wp::Cpu& c);
void f_ms602_0108ad70(wp::Cpu& c);
void f_ms602_0108af90(wp::Cpu& c);
void f_ms602_0108b080(wp::Cpu& c);
void f_ms602_0108b180(wp::Cpu& c);
void f_ms602_0108b260(wp::Cpu& c);
void f_ms602_0108b2e0(wp::Cpu& c);
void f_ms602_0108b340(wp::Cpu& c);
void f_ms602_0108b4a0(wp::Cpu& c);
void f_ms602_0108b6c0(wp::Cpu& c);

void f_ms602_0107fc20(wp::Cpu& c) {
    WP_ENTER(0x107fc20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fc48u: goto R_0107fc48;
        case 0x107fc6cu: goto R_0107fc6c;
        case 0x107fc90u: goto R_0107fc90;
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
    c.lr = 0x107fc48u;
    f_80043290(c);
R_0107fc48:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fc6c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fc6cu;
    wp::call(c, c.ctr);
L_0107fc6c:
R_0107fc6c:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fc90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fc90u;
    wp::call(c, c.ctr);
L_0107fc90:
R_0107fc90:
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

void f_ms602_0107fcb0(wp::Cpu& c) {
    WP_ENTER(0x107fcb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fcd0u: goto R_0107fcd0;
        case 0x107fcf0u: goto R_0107fcf0;
        case 0x107fd10u: goto R_0107fd10;
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
    c.lr = 0x107fcd0u;
    f_800402f0(c);
R_0107fcd0:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fcf0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fcf0u;
    wp::call(c, c.ctr);
L_0107fcf0:
R_0107fcf0:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fd10;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fd10u;
    wp::call(c, c.ctr);
L_0107fd10:
R_0107fd10:
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

void f_ms602_0107fd30(wp::Cpu& c) {
    WP_ENTER(0x107fd30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fd58u: goto R_0107fd58;
        case 0x107fd74u: goto R_0107fd74;
        case 0x107fda4u: goto R_0107fda4;
        case 0x107fdc4u: goto R_0107fdc4;
        case 0x107fdd8u: goto R_0107fdd8;
        case 0x107fe08u: goto R_0107fe08;
        case 0x107fe28u: goto R_0107fe28;
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
    c.lr = 0x107fd58u;
    f_801c79a4(c);
R_0107fd58:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fd74;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x107fd74u;
    f_ms602_0103b230(c);
L_0107fd74:
R_0107fd74:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fda4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0107fda4;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fda4u;
    wp::call(c, c.ctr);
L_0107fda4:
R_0107fda4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x29be0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29be0u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x107fdc4u;
    wp::call(c, c.ctr);
R_0107fdc4:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x107fdd8u;
    f_80043490(c);
R_0107fdd8:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107fe08;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fe08u;
    wp::call(c, c.ctr);
L_0107fe08:
R_0107fe08:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fe28;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fe28u;
    wp::call(c, c.ctr);
L_0107fe28:
R_0107fe28:
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

void f_ms602_0107fe50(wp::Cpu& c) {
    WP_ENTER(0x107fe50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107fe70u: goto R_0107fe70;
        case 0x107fe8cu: goto R_0107fe8c;
        case 0x107fea0u: goto R_0107fea0;
        case 0x107feb4u: goto R_0107feb4;
        case 0x107fec8u: goto R_0107fec8;
        case 0x107fedcu: goto R_0107fedc;
        case 0x107ff00u: goto R_0107ff00;
        case 0x107ff18u: goto R_0107ff18;
        case 0x107ff34u: goto R_0107ff34;
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
    c.lr = 0x107fe70u;
    f_ms602_0107a350(c);
R_0107fe70:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fe8cu;
    wp::call(c, c.ctr);
R_0107fe8c:
    c.r[31] = ((((g_ms602_bases[4] + 0x2544u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2544u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107fea0u;
    f_80071fe0(c);
R_0107fea0:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0107febc;
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2544u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107feb4u;
    f_80071fe0(c);
R_0107feb4:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_0107fee0;
L_0107febc:
    c.r[31] = ((((g_ms602_bases[4] + 0x2564u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2564u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107fec8u;
    f_80071fe0(c);
R_0107fec8:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0107fee0;
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2564u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107fedcu;
    f_80071fe0(c);
R_0107fedc:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_0107fee0:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ff34;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ff00u;
    wp::call(c, c.ctr);
R_0107ff00:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ff18u;
    wp::call(c, c.ctr);
R_0107ff18:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ff34u;
    wp::call(c, c.ctr);
L_0107ff34:
R_0107ff34:
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

void f_ms602_0107ff50(wp::Cpu& c) {
    WP_ENTER(0x107ff50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107ff64u: goto R_0107ff64;
        case 0x107ff84u: goto R_0107ff84;
        case 0x107ffacu: goto R_0107ffac;
        case 0x107fff0u: goto R_0107fff0;
        case 0x1080008u: goto R_01080008;
        case 0x108001cu: goto R_0108001c;
        case 0x1080028u: goto R_01080028;
        case 0x1080030u: goto R_01080030;
        case 0x108005cu: goto R_0108005c;
        case 0x10800a4u: goto R_010800a4;
        case 0x10800f0u: goto R_010800f0;
        case 0x1080104u: goto R_01080104;
        case 0x108011cu: goto R_0108011c;
        case 0x1080138u: goto R_01080138;
        case 0x1080148u: goto R_01080148;
        case 0x1080154u: goto R_01080154;
        case 0x1080164u: goto R_01080164;
        case 0x1080168u: goto R_01080168;
        case 0x1080170u: goto R_01080170;
        case 0x108019cu: goto R_0108019c;
        case 0x10801a8u: goto R_010801a8;
        case 0x10801b4u: goto R_010801b4;
        case 0x10801c4u: goto R_010801c4;
        case 0x10801c8u: goto R_010801c8;
        case 0x10801d0u: goto R_010801d0;
        case 0x1080200u: goto R_01080200;
        case 0x1080228u: goto R_01080228;
        case 0x1080234u: goto R_01080234;
        case 0x1080244u: goto R_01080244;
        case 0x1080248u: goto R_01080248;
        case 0x1080250u: goto R_01080250;
        case 0x10802c0u: goto R_010802c0;
        case 0x10802f4u: goto R_010802f4;
        case 0x1080310u: goto R_01080310;
        case 0x1080338u: goto R_01080338;
        case 0x1080354u: goto R_01080354;
        case 0x1080374u: goto R_01080374;
        case 0x108039cu: goto R_0108039c;
        case 0x10803d8u: goto R_010803d8;
        case 0x1080400u: goto R_01080400;
        case 0x1080440u: goto R_01080440;
        case 0x108045cu: goto R_0108045c;
        case 0x10804b0u: goto R_010804b0;
        case 0x10804b8u: goto R_010804b8;
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
    c.lr = 0x107ff64u;
    f_801c83ac(c);
R_0107ff64:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x107ff84u;
    wp::call(c, c.ctr);
R_0107ff84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ffac;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ffac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107ffacu;
    wp::call(c, c.ctr);
L_0107ffac:
R_0107ffac:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080030;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107ffd0;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107ffdc;
L_0107ffd0:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107fff4;
L_0107ffdc:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107fff0u;
    wp::call(c, c.ctr);
R_0107fff0:
    goto L_01080008;
L_0107fff4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080008u;
    wp::call(c, c.ctr);
L_01080008:
R_01080008:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108001cu;
    wp::call(c, c.ctr);
R_0108001c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080030;
    c.lr = 0x1080028u;
    f_8004a110(c);
R_01080028:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x1080030u;
    f_8004a100(c);
L_01080030:
R_01080030:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010804b0;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010800b4;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108005cu;
    wp::call(c, c.ctr);
R_0108005c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010804b0;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108007c;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_0108007c:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010800a4;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10800a4u;
    wp::call(c, c.ctr);
L_010800a4:
R_010800a4:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_010800b4;
    goto L_010804b0;
L_010800b4:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108039c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108039c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010800e4;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_010804b0;
L_010800e4:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x10800f0u;
    f_8000e2a0(c);
R_010800f0:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_010800fc:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080104u;
    f_8000fc20(c);
R_01080104:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108011cu;
    wp::call(c, c.ctr);
R_0108011c:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108017c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080140;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080138u;
    f_8000fc40(c);
R_01080138:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108017c;
L_01080140:
    c.r[29] = 0x0u;
    c.lr = 0x1080148u;
    f_8000dd70(c);
R_01080148:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080154u;
    f_8000fc20(c);
R_01080154:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0108017c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080164u;
    f_8000fc20(c);
R_01080164:
    c.lr = 0x1080168u;
    f_800699d0(c);
R_01080168:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080170u;
    f_80066cd0(c);
R_01080170:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108017c;
    c.r[30] = 0x1u;
L_0108017c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010800fc;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010801e8;
    c.r[24] = 0x0u;
L_01080194:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x108019cu;
    f_8000fc40(c);
R_0108019c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010801dc;
    c.lr = 0x10801a8u;
    f_8000dd70(c);
R_010801a8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10801b4u;
    f_8000fc20(c);
R_010801b4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_010801dc;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x10801c4u;
    f_8000fc20(c);
R_010801c4:
    c.lr = 0x10801c8u;
    f_800699d0(c);
R_010801c8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x10801d0u;
    f_80066cd0(c);
R_010801d0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010801dc;
    c.r[30] = 0x1u;
L_010801dc:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080194;
    }
L_010801e8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080268;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_010801f8:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1080200u;
    f_8000fc40(c);
R_01080200:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108020c;
    c.r[24] = 0x0u;
L_0108020c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010801f8;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080268;
    c.r[24] = 0x0u;
L_01080224:
    c.lr = 0x1080228u;
    f_8000dd70(c);
R_01080228:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080234u;
    f_8000fc20(c);
R_01080234:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_0108025c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1080244u;
    f_8000fc20(c);
R_01080244:
    c.lr = 0x1080248u;
    f_800699d0(c);
R_01080248:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1080250u;
    f_80066cd0(c);
R_01080250:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108025c;
    c.r[30] = 0x1u;
L_0108025c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01080224;
    }
L_01080268:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080298;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080298;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01080298;
    c.r[30] = 0x1u;
L_01080298:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108039c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108039c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10802c0u;
    wp::call(c, c.ctr);
R_010802c0:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080310;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080310;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080310;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10802f4u;
    wp::call(c, c.ctr);
R_010802f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080310;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1080310u;
    f_80018e30(c);
L_01080310:
R_01080310:
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
    c.lr = 0x1080338u;
    wp::call(c, c.ctr);
R_01080338:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080354u;
    wp::call(c, c.ctr);
R_01080354:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01080378;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080374u;
    wp::call(c, c.ctr);
R_01080374:
    goto L_01080384;
L_01080378:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01080384:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108039cu;
    wp::call(c, c.ctr);
L_0108039c:
R_0108039c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108040c;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108040c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108040c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10803d8u;
    wp::call(c, c.ctr);
R_010803d8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108040c;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108040c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080400u;
    wp::call(c, c.ctr);
R_01080400:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108040c;
    c.r[30] = 0x1u;
L_0108040c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010804b0;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080490;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_0108042c:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080440u;
    wp::call(c, c.ctr);
R_01080440:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01080484;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x108045cu;
    f_8000ffd0(c);
R_0108045c:
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
    goto L_01080490;
L_01080484:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108042c;
    }
L_01080490:
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
    c.lr = 0x10804b0u;
    wp::call(c, c.ctr);
L_010804b0:
R_010804b0:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x10804b8u;
    f_801c83f8(c);
R_010804b8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_ms602_010804d0(wp::Cpu& c) {
    WP_ENTER(0x10804d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_010804e0(wp::Cpu& c) {
    WP_ENTER(0x10804e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_ms602_bases[4] + 0x251cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x251cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01080508;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080508;
    c.r[4] = 0x1u;
L_01080508:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_ms602_01080510(wp::Cpu& c) {
    WP_ENTER(0x1080510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x154u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_01080520(wp::Cpu& c) {
    WP_ENTER(0x1080520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080558u: goto R_01080558;
        case 0x1080570u: goto R_01080570;
        case 0x1080578u: goto R_01080578;
        case 0x10805a4u: goto R_010805a4;
        case 0x10805bcu: goto R_010805bc;
        case 0x10805c4u: goto R_010805c4;
        case 0x10805f0u: goto R_010805f0;
        case 0x1080608u: goto R_01080608;
        case 0x1080610u: goto R_01080610;
        case 0x108063cu: goto R_0108063c;
        case 0x1080654u: goto R_01080654;
        case 0x108065cu: goto R_0108065c;
        case 0x108066cu: goto R_0108066c;
        case 0x1080684u: goto R_01080684;
        case 0x108069cu: goto R_0108069c;
        case 0x10806b4u: goto R_010806b4;
        case 0x10806ccu: goto R_010806cc;
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
    if (wp::cr_get(c, 2)) goto L_01080578;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080558u;
    wp::call(c, c.ctr);
R_01080558:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080570u;
    wp::call(c, c.ctr);
R_01080570:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1080578u;
    f_80019f20(c);
L_01080578:
R_01080578:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010806b8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010805c4;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10805a4u;
    wp::call(c, c.ctr);
R_010805a4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10805bcu;
    wp::call(c, c.ctr);
R_010805bc:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10805c4u;
    f_80019f20(c);
L_010805c4:
R_010805c4:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010806a0;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080610;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10805f0u;
    wp::call(c, c.ctr);
R_010805f0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080608u;
    wp::call(c, c.ctr);
R_01080608:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1080610u;
    f_80019f20(c);
L_01080610:
R_01080610:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080688;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108065c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108063cu;
    wp::call(c, c.ctr);
R_0108063c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080654u;
    wp::call(c, c.ctr);
R_01080654:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x108065cu;
    f_80019f20(c);
L_0108065c:
R_0108065c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080670;
    c.lr = 0x108066cu;
    f_ms602_01080520(c);
R_0108066c:
    goto L_010806cc;
L_01080670:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080684u;
    wp::call(c, c.ctr);
R_01080684:
    goto L_010806cc;
L_01080688:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108069cu;
    wp::call(c, c.ctr);
R_0108069c:
    goto L_010806cc;
L_010806a0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10806b4u;
    wp::call(c, c.ctr);
R_010806b4:
    goto L_010806cc;
L_010806b8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10806ccu;
    wp::call(c, c.ctr);
L_010806cc:
R_010806cc:
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

void f_ms602_010806f0(wp::Cpu& c) {
    WP_ENTER(0x10806f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080738u: goto R_01080738;
        case 0x1080768u: goto R_01080768;
        case 0x1080770u: goto R_01080770;
        case 0x108078cu: goto R_0108078c;
        case 0x1080794u: goto R_01080794;
        case 0x10807b4u: goto R_010807b4;
        case 0x10807bcu: goto R_010807bc;
        case 0x10807e0u: goto R_010807e0;
        case 0x1080804u: goto R_01080804;
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
    c.r[31] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
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
    c.lr = 0x1080738u;
    wp::call(c, c.ctr);
R_01080738:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01080750;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01080774;
L_01080750:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080768u;
    wp::call(c, c.ctr);
R_01080768:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080770u;
    f_80043120(c);
R_01080770:
    goto L_01080794;
L_01080774:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108078cu;
    wp::call(c, c.ctr);
R_0108078c:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1080794u;
    f_80043120(c);
L_01080794:
R_01080794:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010807bc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10807b4u;
    wp::call(c, c.ctr);
R_010807b4:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10807bcu;
    f_80043060(c);
L_010807bc:
R_010807bc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010807e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10807e0u;
    wp::call(c, c.ctr);
L_010807e0:
R_010807e0:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080804;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080804u;
    wp::call(c, c.ctr);
L_01080804:
R_01080804:
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

void f_ms602_01080830(wp::Cpu& c) {
    WP_ENTER(0x1080830u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_ms602_01080840(wp::Cpu& c) {
    WP_ENTER(0x1080840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10808d0u: goto R_010808d0;
        case 0x10808f4u: goto R_010808f4;
        case 0x1080930u: goto R_01080930;
        case 0x1080944u: goto R_01080944;
        case 0x1080968u: goto R_01080968;
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
    if (wp::cr_get(c, 2)) goto L_01080968;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808f8;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808f8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010808a8;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010808b0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010808d4;
    goto L_010808fc;
L_010808a8:
    c.r[31] = 0x1u;
    goto L_010808fc;
L_010808b0:
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
    c.lr = 0x10808d0u;
    wp::call(c, c.ctr);
R_010808d0:
    goto L_010808fc;
L_010808d4:
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
    c.lr = 0x10808f4u;
    wp::call(c, c.ctr);
R_010808f4:
    goto L_010808fc;
L_010808f8:
    c.r[31] = 0x1u;
L_010808fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080968;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080968;
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
    c.lr = 0x1080930u;
    wp::call(c, c.ctr);
R_01080930:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080944u;
    wp::call(c, c.ctr);
R_01080944:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01080968;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080968u;
    wp::call(c, c.ctr);
L_01080968:
R_01080968:
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

void f_ms602_01080990(wp::Cpu& c) {
    WP_ENTER(0x1080990u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010809a4;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_010809a4:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080a24;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080a24;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010809dc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010809fc;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01080a10;
    return;
L_010809dc:
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
L_010809fc:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01080a10:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01080a24:
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

void f_ms602_01080a50(wp::Cpu& c) {
    WP_ENTER(0x1080a50u);
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
    if (!wp::cr_get(c, 2)) goto L_01080a78;
    return;
L_01080a78:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080af8;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080af8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080ab0;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01080ad0;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01080ae4;
    return;
L_01080ab0:
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
L_01080ad0:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01080ae4:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01080af8:
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

void f_ms602_01080b20(wp::Cpu& c) {
    WP_ENTER(0x1080b20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080b5cu: goto R_01080b5c;
        case 0x1080b70u: goto R_01080b70;
        case 0x1080bf8u: goto R_01080bf8;
        case 0x1080c14u: goto R_01080c14;
        case 0x1080c30u: goto R_01080c30;
        case 0x1080c3cu: goto R_01080c3c;
        case 0x1080c48u: goto R_01080c48;
        case 0x1080c50u: goto R_01080c50;
        case 0x1080c78u: goto R_01080c78;
        case 0x1080ce8u: goto R_01080ce8;
        case 0x1080d18u: goto R_01080d18;
        case 0x1080d24u: goto R_01080d24;
        case 0x1080d30u: goto R_01080d30;
        case 0x1080d3cu: goto R_01080d3c;
        case 0x1080d48u: goto R_01080d48;
        case 0x1080d5cu: goto R_01080d5c;
        case 0x1080d68u: goto R_01080d68;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_ms602_bases[5] + 0x29d98u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    c.r[4] = c.r[6] + wp::sign_extend16((g_ms602_bases[5] + 0x29d98u) & 0xFFFFu);
    c.lr = 0x1080b5cu;
    f_ms602_01034390(c);
R_01080b5c:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[29] + 0x2bcu;
    c.r[4] = c.r[4] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.lr = 0x1080b70u;
    f_80063370(c);
R_01080b70:
    c.r[3] = ((((g_ms602_bases[5] + 0x2a1b0u) + 0x8000u) >> 16) << 16);
    c.r[6] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2a1b0u) & 0xFFFFu);
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
    c.lr = 0x1080bf8u;
    f_80053d20(c);
R_01080bf8:
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
    c.lr = 0x1080c14u;
    f_80053df0(c);
R_01080c14:
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
    c.lr = 0x1080c30u;
    f_ms602_0102b040(c);
R_01080c30:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1000u;
    c.lr = 0x1080c3cu;
    f_80052170(c);
R_01080c3c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0xcu;
    c.lr = 0x1080c48u;
    f_80052190(c);
R_01080c48:
    c.r[3] = 0x18u;
    c.lr = 0x1080c50u;
    f_801c79a4(c);
R_01080c50:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01080cbc;
    c.r[5] = ((((g_ms602_bases[5] + 0xefcu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0xf1cu) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0xefcu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0xf1cu) & 0xFFFFu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1080c78u;
    f_8003b350(c);
R_01080c78:
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_ms602_bases[5] + 0xf10u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x34u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0xf10u) & 0xFFFFu);
    c.r[4] = ((((g_ms602_bases[5] + 0x2a198u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2a198u) & 0xFFFFu);
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
L_01080cbc:
    ea = c.r[29] + 0x2d4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080ce8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x2d4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01080ce8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080ce8u;
    wp::call(c, c.ctr);
L_01080ce8:
R_01080ce8:
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
    c.lr = 0x1080d18u;
    wp::call(c, c.ctr);
R_01080d18:
    ea = c.r[29] + 0x2d4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1080d24u;
    f_ms602_0102a930(c);
R_01080d24:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x1080d30u;
    f_ms602_0102aac0(c);
R_01080d30:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x1080d3cu;
    f_ms602_0102aae0(c);
R_01080d3c:
    ea = c.r[31] + 0x6cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1080d48u;
    f_ms602_0102aaa0(c);
R_01080d48:
    ea = c.r[29] + 0x2ecu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] + 0x54u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1080d5cu;
    f_80054e60(c);
R_01080d5c:
    c.r[3] = c.r[29] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x1080d68u;
    f_80056040(c);
R_01080d68:
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

void f_ms602_01080d90(wp::Cpu& c) {
    WP_ENTER(0x1080d90u);
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

void f_ms602_01080db0(wp::Cpu& c) {
    WP_ENTER(0x1080db0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080df4u: goto R_01080df4;
        case 0x1080e04u: goto R_01080e04;
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
    if (wp::cr_get(c, 2)) goto L_01080e04;
    if (wp::cr_get(c, 2)) goto L_01080df4;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01080df4;
    c.r[4] = ((((g_ms602_bases[5] + 0xf10u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0xf10u) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1080df4u;
    f_8003b480(c);
L_01080df4:
R_01080df4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080e04;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1080e04u;
    f_801c7a8c(c);
L_01080e04:
R_01080e04:
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

void f_ms602_01080e20(wp::Cpu& c) {
    WP_ENTER(0x1080e20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080e70u: goto R_01080e70;
        case 0x1080e98u: goto R_01080e98;
        case 0x1080ea4u: goto R_01080ea4;
        case 0x1080eb0u: goto R_01080eb0;
        case 0x1080ec0u: goto R_01080ec0;
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
    if (wp::cr_get(c, 2)) goto L_01080ec0;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01080e70;
    if (wp::cr_get(c, 2)) goto L_01080e70;
    if (wp::cr_get(c, 2)) goto L_01080e70;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080e70;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1080e70u;
    f_801c7a8c(c);
L_01080e70:
R_01080e70:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01080e98;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01080e98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1080e98u;
    wp::call(c, c.ctr);
L_01080e98:
R_01080e98:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x1080ea4u;
    f_80063bb0(c);
R_01080ea4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1080eb0u;
    f_ms602_010348c0(c);
R_01080eb0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01080ec0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1080ec0u;
    f_801c7a8c(c);
L_01080ec0:
R_01080ec0:
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

void f_ms602_01080ee0(wp::Cpu& c) {
    WP_ENTER(0x1080ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1080ef4u: goto R_01080ef4;
        case 0x1080f14u: goto R_01080f14;
        case 0x1080facu: goto R_01080fac;
        case 0x1080ff4u: goto R_01080ff4;
        case 0x1081050u: goto R_01081050;
        case 0x10810e4u: goto R_010810e4;
        case 0x108112cu: goto R_0108112c;
        case 0x1081188u: goto R_01081188;
        case 0x10811ccu: goto R_010811cc;
        case 0x1081204u: goto R_01081204;
        case 0x10812a0u: goto R_010812a0;
        case 0x10812e4u: goto R_010812e4;
        case 0x1081344u: goto R_01081344;
        case 0x1081388u: goto R_01081388;
        case 0x10813e4u: goto R_010813e4;
        case 0x1081400u: goto R_01081400;
        case 0x1081408u: goto R_01081408;
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
    c.lr = 0x1080ef4u;
    f_801c83ac(c);
R_01080ef4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x1080f14u;
    wp::call(c, c.ctr);
R_01080f14:
    c.r[4] = ((((g_ms602_bases[5] + 0x29dc0u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29dc0u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01080f5c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01080f5c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01080f5c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081050;
L_01080f5c:
    c.r[3] = ((((g_ms602_bases[5] + 0x29dc0u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29dc0u) & 0xFFFFu);
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
    c.lr = 0x1080facu;
    wp::call(c, c.ctr);
R_01080fac:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01080ff4;
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
    c.lr = 0x1080ff4u;
    wp::call(c, c.ctr);
L_01080ff4:
R_01080ff4:
    c.r[3] = ((((g_ms602_bases[5] + 0x29dc0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29dc0u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081050;
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
    c.lr = 0x1081050u;
    wp::call(c, c.ctr);
L_01081050:
R_01081050:
    c.r[4] = ((((g_ms602_bases[5] + 0x29e20u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29e20u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01081090;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01081090;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01081090;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081204;
L_01081090:
    c.r[3] = ((((g_ms602_bases[5] + 0x29e20u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29e20u) & 0xFFFFu);
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
    c.lr = 0x10810e4u;
    wp::call(c, c.ctr);
R_010810e4:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108112c;
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
    c.lr = 0x108112cu;
    wp::call(c, c.ctr);
L_0108112c:
R_0108112c:
    c.r[3] = ((((g_ms602_bases[5] + 0x29e20u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29e20u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081188;
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
    c.lr = 0x1081188u;
    wp::call(c, c.ctr);
L_01081188:
R_01081188:
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
    c.lr = 0x10811ccu;
    wp::call(c, c.ctr);
R_010811cc:
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
    c.lr = 0x1081204u;
    wp::call(c, c.ctr);
L_01081204:
R_01081204:
    c.r[4] = ((((g_ms602_bases[5] + 0x29e80u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29e80u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108124c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108124c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_0108124c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081388;
L_0108124c:
    c.r[4] = ((((g_ms602_bases[5] + 0x29e80u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29e80u) & 0xFFFFu);
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
    c.lr = 0x10812a0u;
    wp::call(c, c.ctr);
R_010812a0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010812e4;
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
    c.lr = 0x10812e4u;
    wp::call(c, c.ctr);
L_010812e4:
R_010812e4:
    c.r[3] = ((((g_ms602_bases[5] + 0x29e80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29e80u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081344;
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
    c.lr = 0x1081344u;
    wp::call(c, c.ctr);
L_01081344:
R_01081344:
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
    c.lr = 0x1081388u;
    wp::call(c, c.ctr);
L_01081388:
R_01081388:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010813e4;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_010813e4;
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
    c.lr = 0x10813e4u;
    wp::call(c, c.ctr);
L_010813e4:
R_010813e4:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081400u;
    wp::call(c, c.ctr);
R_01081400:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x1081408u;
    f_801c83f8(c);
R_01081408:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_ms602_01081420(wp::Cpu& c) {
    WP_ENTER(0x1081420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10814dcu: goto R_010814dc;
        case 0x10814e0u: goto R_010814e0;
        case 0x1081540u: goto R_01081540;
        case 0x1081544u: goto R_01081544;
        case 0x1081604u: goto R_01081604;
        case 0x1081608u: goto R_01081608;
        case 0x1081610u: goto R_01081610;
        case 0x1081638u: goto R_01081638;
        case 0x108163cu: goto R_0108163c;
        case 0x1081794u: goto R_01081794;
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
    if (!wp::cr_get(c, 0)) goto L_010814ac;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_0108149c;
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
L_0108149c:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_01081794;
L_010814ac:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010814e0;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x29934u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29934u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10814dcu;
    f_801cee24(c);
R_010814dc:
    c.lr = 0x10814e0u;
    f_801d3940(c);
L_010814e0:
R_010814e0:
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
    if (!wp::cr_get(c, 1)) goto L_01081544;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x29934u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29934u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081540u;
    f_801cee24(c);
R_01081540:
    c.lr = 0x1081544u;
    f_801d3940(c);
L_01081544:
R_01081544:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01081594;
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
    if (!wp::cr_get(c, 0)) goto L_01081588;
    c.r[3] = c.r[1] + 0x10u;
L_01081588:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010815d8;
L_01081594:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010815d0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010815c4;
    c.r[3] = c.r[1] + 0x10u;
L_010815c4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010815d8;
L_010815d0:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_010815d8:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01081608;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x29934u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x29934u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081604u;
    f_801cee24(c);
R_01081604:
    c.lr = 0x1081608u;
    f_801d3940(c);
L_01081608:
R_01081608:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x1081610u;
    f_801c79a4(c);
R_01081610:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108163c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aa00u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa00u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1081638u;
    f_801cee24(c);
R_01081638:
    c.lr = 0x108163cu;
    f_801d3940(c);
L_0108163c:
R_0108163c:
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
    if (wp::cr_get(c, 2)) goto L_0108169c;
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
L_0108169c:
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
    if (!wp::cr_get(c, 1)) goto L_01081748;
    c.r[0] = c.r[0] | 0x0u;
L_010816e8:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0108172c;
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
L_0108172c:
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
    goto L_010816e8;
    }
L_01081748:
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
    if (wp::cr_get(c, 2)) goto L_01081794;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081794;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1081794u;
    f_801c7a8c(c);
L_01081794:
R_01081794:
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

void f_ms602_010817c0(wp::Cpu& c) {
    WP_ENTER(0x10817c0u);
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

void f_ms602_010817e0(wp::Cpu& c) {
    WP_ENTER(0x10817e0u);
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
    if (wp::cr_get(c, 2)) goto L_01081ad4;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_01081ad4;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_01081a74;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_01081884;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_01081878;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01081878;
    c.r[9] = 0x0u;
L_01081878:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081884;
    c.r[7] = 0x1u;
L_01081884:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081a74;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01081a74;
L_010818a8:
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
    goto L_010818a8;
    }
L_01081a74:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01081ad4;
L_01081a90:
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
    goto L_01081a90;
    }
L_01081ad4:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_ms602_01081af0(wp::Cpu& c) {
    WP_ENTER(0x1081af0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_ms602_01081b00(wp::Cpu& c) {
    WP_ENTER(0x1081b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_ms602_01081b10(wp::Cpu& c) {
    WP_ENTER(0x1081b10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081c10u: goto R_01081c10;
        case 0x1081c40u: goto R_01081c40;
        case 0x1081c5cu: goto R_01081c5c;
        case 0x1081c78u: goto R_01081c78;
        case 0x1081cb8u: goto R_01081cb8;
        case 0x1081cc0u: goto R_01081cc0;
        case 0x1081cccu: goto R_01081ccc;
        case 0x1081cd0u: goto R_01081cd0;
        case 0x1081d4cu: goto R_01081d4c;
        case 0x1081d5cu: goto R_01081d5c;
        case 0x1081d78u: goto R_01081d78;
        case 0x1081d8cu: goto R_01081d8c;
        case 0x1081dd4u: goto R_01081dd4;
        case 0x1081e08u: goto R_01081e08;
        case 0x1081e1cu: goto R_01081e1c;
        case 0x1081e2cu: goto R_01081e2c;
        case 0x1081e40u: goto R_01081e40;
        case 0x1081e60u: goto R_01081e60;
        case 0x1081e90u: goto R_01081e90;
        case 0x1081ec0u: goto R_01081ec0;
        case 0x1081ee0u: goto R_01081ee0;
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
    c.r[31] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081ba4;
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
    if (!wp::cr_get(c, 1)) goto L_01081b98;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01081b98:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01081bf4;
L_01081ba4:
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
    if (!wp::cr_get(c, 0)) goto L_01081bf4;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01081bf4:
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
    c.lr = 0x1081c10u;
    f_ms602_0102b040(c);
R_01081c10:
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
    if (!wp::cr_get(c, 1)) goto L_01081e94;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01081cd8;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1081c40u;
    f_80053d40(c);
R_01081c40:
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
    c.lr = 0x1081c5cu;
    f_8006b460(c);
R_01081c5c:
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
    c.lr = 0x1081c78u;
    f_8006b460(c);
R_01081c78:
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
    c.lr = 0x1081cb8u;
    wp::call(c, c.ctr);
R_01081cb8:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1081cc0u;
    f_80071fe0(c);
R_01081cc0:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x1081cccu;
    f_80071fe0(c);
R_01081ccc:
    c.lr = 0x1081cd0u;
    f_8006b590(c);
R_01081cd0:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_01081cd8:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081e60;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01081e60;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081d04;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01081d04:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01081d38;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01081d44;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01081d7c;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01081e20;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01081e44;
    goto L_01081e60;
L_01081d38:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_01081e60;
L_01081d44:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1081d4cu;
    f_80055bb0(c);
R_01081d4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01081e60;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1081d5cu;
    f_80055d80(c);
R_01081d5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01081e60;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081d78u;
    wp::call(c, c.ctr);
R_01081d78:
    goto L_01081e60;
L_01081d7c:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081d8c;
    c.lr = 0x1081d8cu;
    f_80019fa0(c);
L_01081d8c:
R_01081d8c:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081de0;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01081de0;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_01081db8;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_01081dbc;
L_01081db8:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_01081dbc:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x1081dd4u;
    f_80055290(c);
R_01081dd4:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01081de0:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01081e08;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081e08u;
    wp::call(c, c.ctr);
L_01081e08:
R_01081e08:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081e1cu;
    wp::call(c, c.ctr);
R_01081e1c:
    goto L_01081e60;
L_01081e20:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x1081e2cu;
    f_80019f20(c);
R_01081e2c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1081e40u;
    wp::call(c, c.ctr);
R_01081e40:
    goto L_01081e60;
L_01081e44:
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
    c.lr = 0x1081e60u;
    wp::call(c, c.ctr);
L_01081e60:
R_01081e60:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01081e74;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_01081e74:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x1081e90u;
    f_ms602_0102aae0(c);
R_01081e90:
    goto L_01081ee4;
L_01081e94:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01081ee4;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01081ee4;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x1081ec0u;
    f_80055290(c);
R_01081ec0:
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
    c.lr = 0x1081ee0u;
    wp::call(c, c.ctr);
R_01081ee0:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01081ee4:
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

void f_ms602_01081f10(wp::Cpu& c) {
    WP_ENTER(0x1081f10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081f34u: goto R_01081f34;
        case 0x1081f5cu: goto R_01081f5c;
        case 0x1081f6cu: goto R_01081f6c;
        case 0x1081f84u: goto R_01081f84;
        case 0x1081f98u: goto R_01081f98;
        case 0x1081fb4u: goto R_01081fb4;
        case 0x1081fbcu: goto R_01081fbc;
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
    c.lr = 0x1081f34u;
    f_8001b910(c);
R_01081f34:
    c.r[3] = ((((g_ms602_bases[6] + 0x5044u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2a290u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[6] + 0x5044u) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2a290u) & 0xFFFFu);
    c.r[0] = c.r[4] + 0x14u;
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x1u;
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1081f5cu;
    f_8001c510(c);
R_01081f5c:
    c.r[4] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1081f6cu;
    f_8001c520(c);
R_01081f6c:
    c.r[31] = ((((g_ms602_bases[4] + 0x251cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x251cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1081f84u;
    f_8001e440(c);
R_01081f84:
    ea = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x251cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    c.f[2] = c.f[1];
    c.f[3] = c.f[1];
    c.lr = 0x1081f98u;
    f_8001eb90(c);
R_01081f98:
    c.r[3] = ((((g_ms602_bases[5] + 0x29ee0u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29ee0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = wp::round_single(c.f[1] * wp::force25(c.f[0]));
    c.ps1[1] = c.f[1];
    c.lr = 0x1081fb4u;
    f_8001fb40(c);
R_01081fb4:
    c.r[3] = 0x1000u;
    c.lr = 0x1081fbcu;
    f_8004a120(c);
R_01081fbc:
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

void f_ms602_01081fe0(wp::Cpu& c) {
    WP_ENTER(0x1081fe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1081ff4u: goto R_01081ff4;
        case 0x108201cu: goto R_0108201c;
        case 0x1082058u: goto R_01082058;
        case 0x10820a0u: goto R_010820a0;
        case 0x10820bcu: goto R_010820bc;
        case 0x1082120u: goto R_01082120;
        case 0x108213cu: goto R_0108213c;
        case 0x108216cu: goto R_0108216c;
        case 0x1082188u: goto R_01082188;
        case 0x108219cu: goto R_0108219c;
        case 0x10821bcu: goto R_010821bc;
        case 0x10821d4u: goto R_010821d4;
        case 0x10821e0u: goto R_010821e0;
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
    c.lr = 0x1081ff4u;
    f_801c83b4(c);
R_01081ff4:
    c.r[28] = ((((g_ms602_bases[5] + 0x298a0u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[5] | c.r[5];
    c.r[28] = c.r[28] + wp::sign_extend16((g_ms602_bases[5] + 0x298a0u) & 0xFFFFu);
    c.r[26] = c.r[4] | c.r[4];
    c.r[7] = c.r[6] | c.r[6];
    c.r[31] = c.r[3] | c.r[3];
    c.r[6] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] + 0x644u;
    c.r[4] = c.r[28] + 0x658u;
    c.lr = 0x108201cu;
    f_8003f8f0(c);
R_0108201c:
    c.r[4] = ((((g_ms602_bases[5] + 0x2a760u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x10000u;
    c.r[29] = 0x0u;
    ea = c.r[31] + 0x114u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2a760u) & 0xFFFFu);
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
    c.lr = 0x1082058u;
    f_80069af0(c);
R_01082058:
    c.r[3] = ((((g_ms602_bases[5] + 0x29f50u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x29f50u) & 0xFFFFu);
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
    c.lr = 0x10820a0u;
    wp::call(c, c.ctr);
R_010820a0:
    ea = c.r[31] + 0x2d8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] + 0x684u;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10820bcu;
    wp::call(c, c.ctr);
R_010820bc:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x2e6u;
    c.r[4] = wp::rd16(ea);
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    ea = c.r[31] + 0x2dcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[29] = 0xffffffffu;
    if (!wp::cr_get(c, 2)) goto L_010820dc;
    c.r[29] = 0x0u;
L_010820dc:
    c.r[0] = 0x1u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010820f0;
    c.r[29] = 0x1u;
L_010820f0:
    c.r[0] = 0x2u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01082104;
    c.r[29] = 0x2u;
L_01082104:
    c.r[0] = 0x3u;
    c.r[0] = wp::slw(c.r[30], c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01082118;
    c.r[29] = 0x3u;
L_01082118:
    c.r[3] = 0x350u;
    c.lr = 0x1082120u;
    f_801c79a4(c);
R_01082120:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108213c;
    c.r[0] = c.r[27] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x108213cu;
    f_ms602_0103b230(c);
L_0108213c:
R_0108213c:
    ea = c.r[31] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108216c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x2ecu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108216c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108216cu;
    wp::call(c, c.ctr);
L_0108216c:
R_0108216c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] + 0x6a0u;
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[31] + 0x2ecu;
    c.r[28] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082188u;
    wp::call(c, c.ctr);
R_01082188:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = 0x1u;
    c.lr = 0x108219cu;
    f_80043490(c);
R_0108219c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010821bc;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x314u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10821bcu;
    wp::call(c, c.ctr);
L_010821bc:
R_010821bc:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10821d4u;
    wp::call(c, c.ctr);
R_010821d4:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10821e0u;
    f_801c8400(c);
R_010821e0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_010821f0(wp::Cpu& c) {
    WP_ENTER(0x10821f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108223cu: goto R_0108223c;
        case 0x1082248u: goto R_01082248;
        case 0x1082280u: goto R_01082280;
        case 0x10822bcu: goto R_010822bc;
        case 0x10822c8u: goto R_010822c8;
        case 0x10822d8u: goto R_010822d8;
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
    if (wp::cr_get(c, 2)) goto L_010822d8;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108223c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108223c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108223cu;
    wp::call(c, c.ctr);
L_0108223c:
R_0108223c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1082248u;
    f_80069c40(c);
R_01082248:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010822c8;
    c.r[3] = ((((g_ms602_bases[5] + 0x2a760u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2a760u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01082280;
L_01082260:
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
    c.lr = 0x1082280u;
    wp::call(c, c.ctr);
L_01082280:
R_01082280:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01082260;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010822bc;
    if (wp::cr_get(c, 2)) goto L_010822bc;
    if (wp::cr_get(c, 2)) goto L_010822bc;
    if (wp::cr_get(c, 2)) goto L_010822bc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010822bc;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10822bcu;
    f_801c7a8c(c);
L_010822bc:
R_010822bc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10822c8u;
    f_8003fb90(c);
L_010822c8:
R_010822c8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010822d8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10822d8u;
    f_801c7a8c(c);
L_010822d8:
R_010822d8:
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

void f_ms602_01082300(wp::Cpu& c) {
    WP_ENTER(0x1082300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108232cu: goto R_0108232c;
        case 0x1082338u: goto R_01082338;
        case 0x1082344u: goto R_01082344;
        case 0x1082350u: goto R_01082350;
        case 0x1082368u: goto R_01082368;
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
    if (wp::cr_get(c, 2)) goto L_0108233c;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x108232cu;
    f_80069e30(c);
R_0108232c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1082338u;
    f_800403b0(c);
R_01082338:
    goto L_01082350;
L_0108233c:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1082344u;
    f_80069e40(c);
R_01082344:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1082350u;
    f_800403a0(c);
L_01082350:
R_01082350:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082368u;
    wp::call(c, c.ctr);
R_01082368:
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

void f_ms602_01082380(wp::Cpu& c) {
    WP_ENTER(0x1082380u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10823a0u: goto R_010823a0;
        case 0x10823c0u: goto R_010823c0;
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
    c.lr = 0x10823a0u;
    f_800402c0(c);
R_010823a0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010823c0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10823c0u;
    wp::call(c, c.ctr);
L_010823c0:
R_010823c0:
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

void f_ms602_010823e0(wp::Cpu& c) {
    WP_ENTER(0x10823e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082430u: goto R_01082430;
        case 0x108244cu: goto R_0108244c;
        case 0x108248cu: goto R_0108248c;
        case 0x10824a4u: goto R_010824a4;
        case 0x10824acu: goto R_010824ac;
        case 0x10824c4u: goto R_010824c4;
        case 0x10824ccu: goto R_010824cc;
        case 0x10824f8u: goto R_010824f8;
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
    c.r[31] = ((((g_ms602_bases[4] + 0x24e8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x24e8u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010824f8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01082434;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1082430u;
    f_80071fe0(c);
R_01082430:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_01082434:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108244cu;
    wp::call(c, c.ctr);
R_0108244c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082464;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_0108246c;
L_01082464:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_0108246c:
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
    c.lr = 0x108248cu;
    wp::call(c, c.ctr);
R_0108248c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10824a4u;
    wp::call(c, c.ctr);
R_010824a4:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10824acu;
    f_80043060(c);
R_010824ac:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10824c4u;
    wp::call(c, c.ctr);
R_010824c4:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10824ccu;
    f_80043120(c);
R_010824cc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010824f8;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010824f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10824f8u;
    wp::call(c, c.ctr);
L_010824f8:
R_010824f8:
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

void f_ms602_01082520(wp::Cpu& c) {
    WP_ENTER(0x1082520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_ms602_01082530(wp::Cpu& c) {
    WP_ENTER(0x1082530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_01082540(wp::Cpu& c) {
    WP_ENTER(0x1082540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_01082550(wp::Cpu& c) {
    WP_ENTER(0x1082550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082578u: goto R_01082578;
        case 0x1082580u: goto R_01082580;
        case 0x1082594u: goto R_01082594;
        case 0x10825a4u: goto R_010825a4;
        case 0x10825b8u: goto R_010825b8;
        case 0x10825d8u: goto R_010825d8;
        case 0x10825e0u: goto R_010825e0;
        case 0x10825f4u: goto R_010825f4;
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
    c.lr = 0x1082578u;
    wp::call(c, c.ctr);
R_01082578:
    goto L_01082580;
L_0108257c:
    c.lr = 0x1082580u;
    f_8006a940(c);
L_01082580:
R_01082580:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082594u;
    wp::call(c, c.ctr);
R_01082594:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108257c;
    }
    goto L_010825a4;
L_010825a0:
    c.lr = 0x10825a4u;
    f_8006a940(c);
L_010825a4:
R_010825a4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825b8u;
    wp::call(c, c.ctr);
R_010825b8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010825a0;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825d8u;
    wp::call(c, c.ctr);
R_010825d8:
    goto L_010825e0;
L_010825dc:
    c.lr = 0x10825e0u;
    f_8006a940(c);
L_010825e0:
R_010825e0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10825f4u;
    wp::call(c, c.ctr);
R_010825f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010825dc;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01082610(wp::Cpu& c) {
    WP_ENTER(0x1082610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082624u: goto R_01082624;
        case 0x1082644u: goto R_01082644;
        case 0x1082694u: goto R_01082694;
        case 0x10826b8u: goto R_010826b8;
        case 0x10826c4u: goto R_010826c4;
        case 0x10826d8u: goto R_010826d8;
        case 0x10826f8u: goto R_010826f8;
        case 0x1082708u: goto R_01082708;
        case 0x1082714u: goto R_01082714;
        case 0x1082724u: goto R_01082724;
        case 0x1082728u: goto R_01082728;
        case 0x1082730u: goto R_01082730;
        case 0x108275cu: goto R_0108275c;
        case 0x1082768u: goto R_01082768;
        case 0x1082774u: goto R_01082774;
        case 0x1082784u: goto R_01082784;
        case 0x1082788u: goto R_01082788;
        case 0x1082790u: goto R_01082790;
        case 0x10827c0u: goto R_010827c0;
        case 0x10827e8u: goto R_010827e8;
        case 0x10827f4u: goto R_010827f4;
        case 0x1082804u: goto R_01082804;
        case 0x1082808u: goto R_01082808;
        case 0x1082810u: goto R_01082810;
        case 0x108284cu: goto R_0108284c;
        case 0x1082868u: goto R_01082868;
        case 0x1082878u: goto R_01082878;
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
    c.lr = 0x1082624u;
    f_801c83b0(c);
R_01082624:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01082658;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082644u;
    wp::call(c, c.ctr);
R_01082644:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082870;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01082870;
L_01082658:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082870;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01082870;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082870;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082694u;
    wp::call(c, c.ctr);
R_01082694:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010826b8;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10826b8u;
    wp::call(c, c.ctr);
L_010826b8:
R_010826b8:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x10826c4u;
    f_8000e2a0(c);
R_010826c4:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_010826d0:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10826d8u;
    f_8000fc20(c);
R_010826d8:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108273c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01082700;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10826f8u;
    f_8000fc40(c);
R_010826f8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108273c;
L_01082700:
    c.r[26] = 0x0u;
    c.lr = 0x1082708u;
    f_8000dd70(c);
R_01082708:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1082714u;
    f_8000fc20(c);
R_01082714:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108273c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1082724u;
    f_8000fc20(c);
R_01082724:
    c.lr = 0x1082728u;
    f_800699d0(c);
R_01082728:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1082730u;
    f_80066cd0(c);
R_01082730:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108273c;
    c.r[27] = 0x1u;
L_0108273c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010826d0;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010827a8;
    c.r[25] = 0x0u;
L_01082754:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x108275cu;
    f_8000fc40(c);
R_0108275c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108279c;
    c.lr = 0x1082768u;
    f_8000dd70(c);
R_01082768:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1082774u;
    f_8000fc20(c);
R_01082774:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108279c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1082784u;
    f_8000fc20(c);
R_01082784:
    c.lr = 0x1082788u;
    f_800699d0(c);
R_01082788:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1082790u;
    f_80066cd0(c);
R_01082790:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108279c;
    c.r[27] = 0x1u;
L_0108279c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01082754;
    }
L_010827a8:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082828;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_010827b8:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10827c0u;
    f_8000fc40(c);
R_010827c0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010827cc;
    c.r[25] = 0x0u;
L_010827cc:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010827b8;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082828;
    c.r[25] = 0x0u;
L_010827e4:
    c.lr = 0x10827e8u;
    f_8000dd70(c);
R_010827e8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x10827f4u;
    f_8000fc20(c);
R_010827f4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0108281c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1082804u;
    f_8000fc20(c);
R_01082804:
    c.lr = 0x1082808u;
    f_800699d0(c);
R_01082808:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1082810u;
    f_80066cd0(c);
R_01082810:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108281c;
    c.r[27] = 0x1u;
L_0108281c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010827e4;
    }
L_01082828:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082870;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108284cu;
    wp::call(c, c.ctr);
R_0108284c:
    c.r[3] = ((((g_ms602_bases[4] + 0x2544u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[4] + 0x251cu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2544u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x251cu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1082868u;
    f_80018e30(c);
R_01082868:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_01082870:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1082878u;
    f_801c83fc(c);
R_01082878:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_ms602_01082890(wp::Cpu& c) {
    WP_ENTER(0x1082890u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10828b8u: goto R_010828b8;
        case 0x10828bcu: goto R_010828bc;
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
L_010828a4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10828b8u;
    wp::call(c, c.ctr);
R_010828b8:
    c.lr = 0x10828bcu;
    f_8006a940(c);
R_010828bc:
    WP_POLL(c);
    goto L_010828a4;
}

void f_ms602_010828c0(wp::Cpu& c) {
    WP_ENTER(0x10828c0u);
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

void f_ms602_010828e0(wp::Cpu& c) {
    WP_ENTER(0x10828e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082904u: goto R_01082904;
        case 0x1082928u: goto R_01082928;
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
    c.lr = 0x1082904u;
    f_80010060(c);
R_01082904:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aa74u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa74u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1082928u;
    wp::call(c, c.ctr);
R_01082928:
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

void f_ms602_01082940(wp::Cpu& c) {
    WP_ENTER(0x1082940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082954u: goto R_01082954;
        case 0x1082968u: goto R_01082968;
        case 0x108297cu: goto R_0108297c;
        case 0x10829a4u: goto R_010829a4;
        case 0x10829b4u: goto R_010829b4;
        case 0x10829d8u: goto R_010829d8;
        case 0x1082a38u: goto R_01082a38;
        case 0x1082ab8u: goto R_01082ab8;
        case 0x1082b20u: goto R_01082b20;
        case 0x1082b58u: goto R_01082b58;
        case 0x1082b6cu: goto R_01082b6c;
        case 0x1082b7cu: goto R_01082b7c;
        case 0x1082ba0u: goto R_01082ba0;
        case 0x1082ba8u: goto R_01082ba8;
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
    c.lr = 0x1082954u;
    f_801c83b4(c);
R_01082954:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1082968u;
    f_8006c450(c);
R_01082968:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01082b70;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x108297cu;
    f_8006c460(c);
R_0108297c:
    c.r[27] = ((((g_ms602_bases[5] + 0x298a8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_ms602_bases[5] + 0x298a8u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10829a4u;
    f_801c7860(c);
R_010829a4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10829b4u;
    f_ms602_01019670(c);
R_010829b4:
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
    c.lr = 0x10829d8u;
    f_ms602_010057e0(c);
R_010829d8:
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
    if (!wp::cr_get(c, 2)) goto L_01082a14;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01082a18;
L_01082a14:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01082a18:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1082a38u;
    f_ms602_010057e0(c);
R_01082a38:
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
    if (!wp::cr_get(c, 2)) goto L_01082a94;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01082a98;
L_01082a94:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01082a98:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1082ab8u;
    f_ms602_010057e0(c);
R_01082ab8:
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
    if (!wp::cr_get(c, 2)) goto L_01082afc;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01082b00;
L_01082afc:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01082b00:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1082b20u;
    f_ms602_010057e0(c);
R_01082b20:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aa80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa80u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_01082b40;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01082b44;
L_01082b40:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01082b44:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082b58u;
    wp::call(c, c.ctr);
R_01082b58:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01082ba0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1082b6cu;
    f_801c7a8c(c);
R_01082b6c:
    goto L_01082ba0;
L_01082b70:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1082b7cu;
    f_8006c4e0(c);
R_01082b7c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aa80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa80u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x1082ba0u;
    wp::call(c, c.ctr);
L_01082ba0:
R_01082ba0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1082ba8u;
    f_801c8400(c);
R_01082ba8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_ms602_01082bc0(wp::Cpu& c) {
    WP_ENTER(0x1082bc0u);
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

void f_ms602_01082be0(wp::Cpu& c) {
    WP_ENTER(0x1082be0u);
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

void f_ms602_01082c00(wp::Cpu& c) {
    WP_ENTER(0x1082c00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082c2cu: goto R_01082c2c;
        case 0x1082c44u: goto R_01082c44;
        case 0x1082c54u: goto R_01082c54;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_ms602_bases[5] + 0x2aa5cu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa5cu) & 0xFFFFu);
    c.lr = 0x1082c2cu;
    f_ms602_0107a350(c);
R_01082c2c:
    c.r[5] = ((((g_ms602_bases[5] + 0x298d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x298d8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082c44u;
    f_801d34c4(c);
R_01082c44:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1082c54u;
    f_ms602_0107d6a0(c);
R_01082c54:
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

void f_ms602_01082c70(wp::Cpu& c) {
    WP_ENTER(0x1082c70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082ca8u: goto R_01082ca8;
        case 0x1082cccu: goto R_01082ccc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_ms602_bases[5] + 0x298a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_ms602_bases[5] + 0x298a0u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1082ca8u;
    f_801d3590(c);
R_01082ca8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aa68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa68u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x1082cccu;
    wp::call(c, c.ctr);
R_01082ccc:
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

void f_ms602_01082cf0(wp::Cpu& c) {
    WP_ENTER(0x1082cf0u);
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

void f_ms602_01082d10(wp::Cpu& c) {
    WP_ENTER(0x1082d10u);
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

void f_ms602_01082d30(wp::Cpu& c) {
    WP_ENTER(0x1082d30u);
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

void f_ms602_01082d50(wp::Cpu& c) {
    WP_ENTER(0x1082d50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082d70u: goto R_01082d70;
        case 0x1082d78u: goto R_01082d78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_ms602_bases[5] + 0x2aa44u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2aa44u) & 0xFFFFu);
    c.lr = 0x1082d70u;
    f_ms602_0107a350(c);
R_01082d70:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1082d78u;
    f_ms602_0107c7a0(c);
R_01082d78:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01082d90(wp::Cpu& c) {
    WP_ENTER(0x1082d90u);
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

void f_ms602_01082db0(wp::Cpu& c) {
    WP_ENTER(0x1082db0u);
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

void f_ms602_01082dd0(wp::Cpu& c) {
    WP_ENTER(0x1082dd0u);
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

void f_ms602_01082df0(wp::Cpu& c) {
    WP_ENTER(0x1082df0u);
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

void f_ms602_01082e10(wp::Cpu& c) {
    WP_ENTER(0x1082e10u);
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

void f_ms602_01082e30(wp::Cpu& c) {
    WP_ENTER(0x1082e30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_ms602_bases[4] + 0x2688u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2688u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01082e60;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082e60;
    c.r[4] = 0x1u;
L_01082e60:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_ms602_01082e70(wp::Cpu& c) {
    WP_ENTER(0x1082e70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1082ea8u: goto R_01082ea8;
        case 0x1082ec0u: goto R_01082ec0;
        case 0x1082ec8u: goto R_01082ec8;
        case 0x1082ef4u: goto R_01082ef4;
        case 0x1082f0cu: goto R_01082f0c;
        case 0x1082f14u: goto R_01082f14;
        case 0x1082f40u: goto R_01082f40;
        case 0x1082f58u: goto R_01082f58;
        case 0x1082f60u: goto R_01082f60;
        case 0x1082f8cu: goto R_01082f8c;
        case 0x1082fa4u: goto R_01082fa4;
        case 0x1082facu: goto R_01082fac;
        case 0x1082fbcu: goto R_01082fbc;
        case 0x1082fd4u: goto R_01082fd4;
        case 0x1082fecu: goto R_01082fec;
        case 0x1083004u: goto R_01083004;
        case 0x108301cu: goto R_0108301c;
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
    if (wp::cr_get(c, 2)) goto L_01082ec8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082ea8u;
    wp::call(c, c.ctr);
R_01082ea8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082ec0u;
    wp::call(c, c.ctr);
R_01082ec0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1082ec8u;
    f_80019f20(c);
L_01082ec8:
R_01082ec8:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083008;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f14;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082ef4u;
    wp::call(c, c.ctr);
R_01082ef4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f0cu;
    wp::call(c, c.ctr);
R_01082f0c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1082f14u;
    f_80019f20(c);
L_01082f14:
R_01082f14:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082ff0;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082f60;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f40u;
    wp::call(c, c.ctr);
R_01082f40:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f58u;
    wp::call(c, c.ctr);
R_01082f58:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1082f60u;
    f_80019f20(c);
L_01082f60:
R_01082f60:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082fd8;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082fac;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082f8cu;
    wp::call(c, c.ctr);
R_01082f8c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fa4u;
    wp::call(c, c.ctr);
R_01082fa4:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1082facu;
    f_80019f20(c);
L_01082fac:
R_01082fac:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01082fc0;
    c.lr = 0x1082fbcu;
    f_ms602_01080520(c);
R_01082fbc:
    goto L_0108301c;
L_01082fc0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fd4u;
    wp::call(c, c.ctr);
R_01082fd4:
    goto L_0108301c;
L_01082fd8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1082fecu;
    wp::call(c, c.ctr);
R_01082fec:
    goto L_0108301c;
L_01082ff0:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1083004u;
    wp::call(c, c.ctr);
R_01083004:
    goto L_0108301c;
L_01083008:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108301cu;
    wp::call(c, c.ctr);
L_0108301c:
R_0108301c:
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

void f_ms602_01083040(wp::Cpu& c) {
    WP_ENTER(0x1083040u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2aaf0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aaf0u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_ms602_01083060(wp::Cpu& c) {
    WP_ENTER(0x1083060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083070u: goto R_01083070;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083070u;
    f_ms602_0107a350(c);
R_01083070:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01083090(wp::Cpu& c) {
    WP_ENTER(0x1083090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_ms602_bases[5] + 0x2aae8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aae8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_ms602_010830c0(wp::Cpu& c) {
    WP_ENTER(0x10830c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_ms602_bases[5] + 0x2aad0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aad0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_ms602_010830f0(wp::Cpu& c) {
    WP_ENTER(0x10830f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_ms602_bases[5] + 0x2aac0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2aac0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_ms602_01083120(wp::Cpu& c) {
    WP_ENTER(0x1083120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_ms602_bases[5] + 0x2aab0u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_ms602_bases[5] + 0x2aab0u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_ms602_01083140(wp::Cpu& c) {
    WP_ENTER(0x1083140u);
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

void f_ms602_01083160(wp::Cpu& c) {
    WP_ENTER(0x1083160u);
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

void f_ms602_01083170(wp::Cpu& c) {
    WP_ENTER(0x1083170u);
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

void f_ms602_01083180(wp::Cpu& c) {
    WP_ENTER(0x1083180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10831b4u: goto R_010831b4;
        case 0x10831ccu: goto R_010831cc;
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
    c.lr = 0x10831b4u;
    wp::call(c, c.ctr);
R_010831b4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x228u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10831ccu;
    wp::call(c, c.ctr);
R_010831cc:
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

void f_ms602_010831f0(wp::Cpu& c) {
    WP_ENTER(0x10831f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15eu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_01083200(wp::Cpu& c) {
    WP_ENTER(0x1083200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_01083210(wp::Cpu& c) {
    WP_ENTER(0x1083210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_ms602_01083220(wp::Cpu& c) {
    WP_ENTER(0x1083220u);
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

void f_ms602_01083240(wp::Cpu& c) {
    WP_ENTER(0x1083240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083284u: goto R_01083284;
        case 0x1083294u: goto R_01083294;
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
    if (wp::cr_get(c, 2)) goto L_01083294;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01083278;
    c.r[3] = ((((g_ms602_bases[6] + 0x5044u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[6] + 0x5044u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01083278:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1083284u;
    f_8001bfe0(c);
R_01083284:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01083294;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1083294u;
    f_801c7a8c(c);
L_01083294:
R_01083294:
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

void f_ms602_010832b0(wp::Cpu& c) {
    WP_ENTER(0x10832b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_ms602_0107ff50(c);
    return;
}

void f_ms602_010832c0(wp::Cpu& c) {
    WP_ENTER(0x10832c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_ms602_0107e190(c);
    return;
}

void f_ms602_010832d0(wp::Cpu& c) {
    WP_ENTER(0x10832d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_ms602_010832e0(wp::Cpu& c) {
    WP_ENTER(0x10832e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_ms602_01083240(c);
    return;
}

void f_ms602_010832f0(wp::Cpu& c) {
    WP_ENTER(0x10832f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_ms602_01080e20(c);
    return;
}

void f_ms602_01083300(wp::Cpu& c) {
    WP_ENTER(0x1083300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_ms602_01080e20(c);
    return;
}

void f_ms602_01083310(wp::Cpu& c) {
    WP_ENTER(0x1083310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_ms602_01080e20(c);
    return;
}

void f_ms602_01083320(wp::Cpu& c) {
    WP_ENTER(0x1083320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_ms602_01081b10(c);
    return;
}

void f_ms602_01083330(wp::Cpu& c) {
    WP_ENTER(0x1083330u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_ms602_01080e20(c);
    return;
}

void f_ms602_01083340(wp::Cpu& c) {
    WP_ENTER(0x1083340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_ms602_01082890(c);
    return;
}

void f_ms602_01083350(wp::Cpu& c) {
    WP_ENTER(0x1083350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_ms602_010821f0(c);
    return;
}

void f_ms602_01083360(wp::Cpu& c) {
    WP_ENTER(0x1083360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083380u: goto R_01083380;
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
    c.lr = 0x1083380u;
    f_8011bd40(c);
R_01083380:
    c.r[3] = ((((g_ms602_bases[4] + 0x2690u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ab88u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2690u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ab88u) & 0xFFFFu);
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

void f_ms602_010833c0(wp::Cpu& c) {
    WP_ENTER(0x10833c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10833ecu: goto R_010833ec;
        case 0x10833fcu: goto R_010833fc;
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
    if (wp::cr_get(c, 2)) goto L_010833fc;
    c.r[4] = 0x0u;
    c.lr = 0x10833ecu;
    f_8011bd50(c);
R_010833ec:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010833fc;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10833fcu;
    f_801c7a8c(c);
L_010833fc:
R_010833fc:
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

void f_ms602_01083420(wp::Cpu& c) {
    WP_ENTER(0x1083420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083454u: goto R_01083454;
        case 0x108352cu: goto R_0108352c;
        case 0x10836acu: goto R_010836ac;
        case 0x10836c0u: goto R_010836c0;
        case 0x1083720u: goto R_01083720;
        case 0x108372cu: goto R_0108372c;
        case 0x1083754u: goto R_01083754;
        case 0x108376cu: goto R_0108376c;
        case 0x108378cu: goto R_0108378c;
        case 0x1083798u: goto R_01083798;
        case 0x10837c0u: goto R_010837c0;
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
    c.lr = 0x1083454u;
    f_801c83ac(c);
R_01083454:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_ms602_bases[4] + 0x2690u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2690u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01083474;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01083540;
    goto L_01083794;
L_01083474:
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
    if (wp::cr_get(c, 2)) goto L_010834f0;
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
L_010834f0:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108352c;
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
    c.lr = 0x108352cu;
    f_8011eeb0(c);
L_0108352c:
R_0108352c:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01083798;
L_01083540:
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
    if (!wp::cr_get(c, 2)) goto L_0108356c;
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
L_0108356c:
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
    c.lr = 0x10836acu;
    f_801225e0(c);
R_010836ac:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x10836c0u;
    f_801225e0(c);
R_010836c0:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01083700;
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
L_01083700:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01083718;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_01083718:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1083720u;
    f_8011eaa0(c);
R_01083720:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108372cu;
    f_8011ea40(c);
R_0108372c:
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
    c.lr = 0x1083754u;
    f_80122d80(c);
R_01083754:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x108376cu;
    f_80122d80(c);
R_0108376c:
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
    c.lr = 0x108378cu;
    f_80121cf0(c);
R_0108378c:
    c.r[3] = 0x2u;
    goto L_01083798;
L_01083794:
    c.lr = 0x1083798u;
    f_8011bd90(c);
L_01083798:
R_01083798:
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
    c.lr = 0x10837c0u;
    f_801c83f8(c);
R_010837c0:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_ms602_010837d0(wp::Cpu& c) {
    WP_ENTER(0x10837d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10837ecu: goto R_010837ec;
        case 0x1083970u: goto R_01083970;
        case 0x10839c4u: goto R_010839c4;
        case 0x10839e8u: goto R_010839e8;
        case 0x10839f4u: goto R_010839f4;
        case 0x1083a04u: goto R_01083a04;
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
    c.lr = 0x10837ecu;
    f_801c83b0(c);
R_010837ec:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_01083808;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_0108381c;
    goto L_010839f0;
L_01083808:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_010839f4;
L_0108381c:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_ms602_bases[4] + 0x269cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_ms602_bases[4] + 0x26a0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_ms602_bases[4] + 0x269cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_ms602_bases[4] + 0x26a0u) & 0xFFFFu);
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
    c.lr = 0x1083970u;
    f_801225e0(c);
R_01083970:
    ea = c.r[26] + wp::sign_extend16((g_ms602_bases[4] + 0x26a0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01083980;
    goto L_01083984;
L_01083980:
    c.f[2] = c.f[1];
L_01083984:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083994;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0108399c;
L_01083994:
    c.r[3] = ((((g_ms602_bases[4] + 0x26a0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x26a0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0108399c:
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
    c.lr = 0x10839c4u;
    f_8011e9e0(c);
R_010839c4:
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
    c.lr = 0x10839e8u;
    f_80121cf0(c);
R_010839e8:
    c.r[3] = 0x2u;
    goto L_010839f4;
L_010839f0:
    c.lr = 0x10839f4u;
    f_8011bec0(c);
L_010839f4:
R_010839f4:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1083a04u;
    f_801c83fc(c);
R_01083a04:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_ms602_01083a20(wp::Cpu& c) {
    WP_ENTER(0x1083a20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083a34u: goto R_01083a34;
        case 0x1083a64u: goto R_01083a64;
        case 0x1083b7cu: goto R_01083b7c;
        case 0x1083c04u: goto R_01083c04;
        case 0x1083c10u: goto R_01083c10;
        case 0x1083c1cu: goto R_01083c1c;
        case 0x1083d34u: goto R_01083d34;
        case 0x1083e7cu: goto R_01083e7c;
        case 0x1083e98u: goto R_01083e98;
        case 0x1083ea0u: goto R_01083ea0;
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
    c.lr = 0x1083a34u;
    f_801c83b4(c);
R_01083a34:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_ms602_bases[4] + 0x2690u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2690u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01083a5c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01083c14;
    goto L_01083e98;
L_01083a5c:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x1083a64u;
    f_80132a30(c);
R_01083a64:
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
    if (!wp::cr_get(c, 2)) goto L_01083b7c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x1083b7cu;
    f_8014b090(c);
L_01083b7c:
R_01083b7c:
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
    c.lr = 0x1083c04u;
    f_8012be60(c);
R_01083c04:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1083c10u;
    f_80132ab0(c);
R_01083c10:
    goto L_01083e98;
L_01083c14:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x1083c1cu;
    f_80132a30(c);
R_01083c1c:
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
    if (!wp::cr_get(c, 2)) goto L_01083d34;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x1083d34u;
    f_8014b090(c);
L_01083d34:
R_01083d34:
    c.r[5] = ((((g_ms602_bases[6] + 0x5048u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[6] + 0x5048u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01083da0;
    c.r[4] = ((((g_ms602_bases[6] + 0x5050u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_ms602_bases[6] + 0x5050u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[6] + 0x5050u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[6] + 0x5048u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01083da0:
    c.r[26] = ((((g_ms602_bases[6] + 0x5050u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_ms602_bases[6] + 0x5050u) & 0xFFFFu);
L_01083dac:
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
    c.lr = 0x1083e7cu;
    f_8012be60(c);
R_01083e7c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01083dac;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1083e98u;
    f_80132ab0(c);
L_01083e98:
R_01083e98:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1083ea0u;
    f_801c8400(c);
R_01083ea0:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_ms602_01083eb0(wp::Cpu& c) {
    WP_ENTER(0x1083eb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_ms602_01083ec0(wp::Cpu& c) {
    WP_ENTER(0x1083ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_ms602_01083ed0(wp::Cpu& c) {
    WP_ENTER(0x1083ed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1083ef0u: goto R_01083ef0;
        case 0x1083f14u: goto R_01083f14;
        case 0x1083f4cu: goto R_01083f4c;
        case 0x1083f60u: goto R_01083f60;
        case 0x1083f74u: goto R_01083f74;
        case 0x1083f84u: goto R_01083f84;
        case 0x1083f90u: goto R_01083f90;
        case 0x1083fc0u: goto R_01083fc0;
        case 0x1083fe0u: goto R_01083fe0;
        case 0x1083fe8u: goto R_01083fe8;
        case 0x1083ff0u: goto R_01083ff0;
        case 0x1083ff8u: goto R_01083ff8;
        case 0x1083ffcu: goto R_01083ffc;
        case 0x1084004u: goto R_01084004;
        case 0x1084010u: goto R_01084010;
        case 0x1084040u: goto R_01084040;
        case 0x1084048u: goto R_01084048;
        case 0x108404cu: goto R_0108404c;
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
    c.lr = 0x1083ef0u;
    f_80069af0(c);
R_01083ef0:
    c.r[3] = ((((g_ms602_bases[6] + 0x18u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2abb8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[6] + 0x18u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2abb8u) & 0xFFFFu);
    c.r[30] = 0x0u;
    c.r[3] = 0x14u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x1083f14u;
    f_801c79a4(c);
R_01083f14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01083f30;
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
L_01083f30:
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    c.r[3] = 0x4u;
    ea = c.r[31] + 0x1c0u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1083f4cu;
    f_801c79a4(c);
R_01083f4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01083fc4;
    c.r[29] = 0x0u;
    c.lr = 0x1083f60u;
    f_8000dd70(c);
R_01083f60:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01083f80;
    c.r[3] = 0xffffffffu;
    c.lr = 0x1083f74u;
    f_8000e240(c);
R_01083f74:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01083f80;
    c.r[29] = 0x1u;
L_01083f80:
    c.lr = 0x1083f84u;
    f_8000dd70(c);
R_01083f84:
    c.r[0] = wp::sign_extend8(c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1083f90u;
    f_80007570(c);
R_01083f90:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    if (!wp::cr_get(c, 0)) goto L_01083fb0;
    c.r[4] = c.r[1] + 0xcu;
L_01083fb0:
    ea = c.r[4] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    c.lr = 0x1083fc0u;
    f_ms602_01033d80(c);
R_01083fc0:
    c.r[30] = c.r[3] | c.r[3];
L_01083fc4:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01083fe0;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[30]);
    c.r[4] = 0x1u;
    c.lr = 0x1083fe0u;
    f_ms602_01033f50(c);
L_01083fe0:
R_01083fe0:
    c.r[3] = 0x0u;
    c.lr = 0x1083fe8u;
    f_8006a800(c);
R_01083fe8:
    c.r[3] = 0x0u;
    c.lr = 0x1083ff0u;
    f_80065040(c);
R_01083ff0:
    c.r[3] = 0x0u;
    c.lr = 0x1083ff8u;
    f_8006c8b0(c);
R_01083ff8:
    c.lr = 0x1083ffcu;
    f_80066250(c);
R_01083ffc:
    c.r[3] = 0x128u;
    c.lr = 0x1084004u;
    f_801c79a4(c);
R_01084004:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084010;
    c.lr = 0x1084010u;
    f_ms602_01081f10(c);
L_01084010:
R_01084010:
    ea = c.r[31] + 0x1b8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084040;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1b8u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084040;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084040u;
    wp::call(c, c.ctr);
L_01084040:
R_01084040:
    c.r[3] = 0x1u;
    c.lr = 0x1084048u;
    f_8001b020(c);
R_01084048:
    c.lr = 0x108404cu;
    f_8000dd30(c);
R_0108404c:
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

void f_ms602_01084080(wp::Cpu& c) {
    WP_ENTER(0x1084080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10840bcu: goto R_010840bc;
        case 0x10840e8u: goto R_010840e8;
        case 0x10840ecu: goto R_010840ec;
        case 0x10840fcu: goto R_010840fc;
        case 0x1084100u: goto R_01084100;
        case 0x1084104u: goto R_01084104;
        case 0x1084130u: goto R_01084130;
        case 0x1084144u: goto R_01084144;
        case 0x108416cu: goto R_0108416c;
        case 0x1084194u: goto R_01084194;
        case 0x10841bcu: goto R_010841bc;
        case 0x10841c4u: goto R_010841c4;
        case 0x10841c8u: goto R_010841c8;
        case 0x10841ccu: goto R_010841cc;
        case 0x10841d4u: goto R_010841d4;
        case 0x10841d8u: goto R_010841d8;
        case 0x10841dcu: goto R_010841dc;
        case 0x1084204u: goto R_01084204;
        case 0x1084218u: goto R_01084218;
        case 0x1084240u: goto R_01084240;
        case 0x1084268u: goto R_01084268;
        case 0x1084290u: goto R_01084290;
        case 0x1084298u: goto R_01084298;
        case 0x10842c0u: goto R_010842c0;
        case 0x10842e0u: goto R_010842e0;
        case 0x10842f0u: goto R_010842f0;
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
    if (wp::cr_get(c, 2)) goto L_010842f0;
    c.r[4] = ((((g_ms602_bases[5] + 0x2abb8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2abb8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x10840bcu;
    f_ms602_01033ff0(c);
R_010840bc:
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010840e8;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010840e8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10840e8u;
    wp::call(c, c.ctr);
L_010840e8:
R_010840e8:
    c.lr = 0x10840ecu;
    f_8001aac0(c);
R_010840ec:
    ea = c.r[30] + 0x1c1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010840fc;
    c.lr = 0x10840fcu;
    f_8001b0c0(c);
L_010840fc:
R_010840fc:
    c.lr = 0x1084100u;
    f_8004abf0(c);
R_01084100:
    c.lr = 0x1084104u;
    f_80066250(c);
R_01084104:
    ea = c.r[30] + 0x1bcu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010841c4;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010841c4;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084130;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1084130u;
    f_ms602_0102efb0(c);
L_01084130:
R_01084130:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084144;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1084144u;
    f_ms602_01033f50(c);
L_01084144:
R_01084144:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108416c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108416c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108416cu;
    wp::call(c, c.ctr);
L_0108416c:
R_0108416c:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084194;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084194;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084194u;
    wp::call(c, c.ctr);
L_01084194:
R_01084194:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010841bc;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010841bc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10841bcu;
    wp::call(c, c.ctr);
L_010841bc:
R_010841bc:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10841c4u;
    f_801c7a8c(c);
L_010841c4:
R_010841c4:
    c.lr = 0x10841c8u;
    f_80041c20(c);
R_010841c8:
    c.lr = 0x10841ccu;
    f_8002d270(c);
R_010841cc:
    c.r[3] = 0x0u;
    c.lr = 0x10841d4u;
    f_80076130(c);
R_010841d4:
    c.lr = 0x10841d8u;
    f_800656f0(c);
R_010841d8:
    c.lr = 0x10841dcu;
    f_80011270(c);
R_010841dc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084298;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084298;
    c.r[3] = wp::add_carry(c, c.r[29], 0x10u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084204;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1084204u;
    f_ms602_0102efb0(c);
L_01084204:
R_01084204:
    c.r[3] = wp::add_carry(c, c.r[29], 0xcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084218;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x1084218u;
    f_ms602_01033f50(c);
L_01084218:
R_01084218:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084240;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084240;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084240u;
    wp::call(c, c.ctr);
L_01084240:
R_01084240:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084268;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084268;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084268u;
    wp::call(c, c.ctr);
L_01084268:
R_01084268:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084290;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084290;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084290u;
    wp::call(c, c.ctr);
L_01084290:
R_01084290:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1084298u;
    f_801c7a8c(c);
L_01084298:
R_01084298:
    c.r[3] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010842c0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010842c0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10842c0u;
    wp::call(c, c.ctr);
L_010842c0:
R_010842c0:
    c.r[0] = wp::add_carry(c, c.r[30], 0x1b8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010842d4;
    c.r[3] = ((((g_ms602_bases[6] + 0x18u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[6] + 0x18u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_010842d4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10842e0u;
    f_80069c40(c);
R_010842e0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010842f0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10842f0u;
    f_801c7a8c(c);
L_010842f0:
R_010842f0:
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

void f_ms602_01084310(wp::Cpu& c) {
    WP_ENTER(0x1084310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108433cu: goto R_0108433c;
        case 0x1084344u: goto R_01084344;
        case 0x108435cu: goto R_0108435c;
        case 0x1084390u: goto R_01084390;
        case 0x10843b0u: goto R_010843b0;
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
    if (!wp::cr_get(c, 2)) goto L_010843b0;
    c.r[3] = 0x0u;
    c.lr = 0x108433cu;
    f_ms602_01033fd0(c);
R_0108433c:
    c.r[3] = 0x1a8u;
    c.lr = 0x1084344u;
    f_801c79a4(c);
R_01084344:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108435c;
    c.r[4] = 0x10000u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.lr = 0x108435cu;
    f_ms602_0103d2f0(c);
L_0108435c:
R_0108435c:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084390;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084390;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084390u;
    wp::call(c, c.ctr);
L_01084390:
R_01084390:
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
    c.lr = 0x10843b0u;
    wp::call(c, c.ctr);
L_010843b0:
R_010843b0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_010843d0(wp::Cpu& c) {
    WP_ENTER(0x10843d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_ms602_010843e0(wp::Cpu& c) {
    WP_ENTER(0x10843e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_ms602_010843f0(wp::Cpu& c) {
    WP_ENTER(0x10843f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108443cu: goto R_0108443c;
        case 0x1084440u: goto R_01084440;
        case 0x1084450u: goto R_01084450;
        case 0x1084478u: goto R_01084478;
        case 0x1084480u: goto R_01084480;
        case 0x1084494u: goto R_01084494;
        case 0x10844bcu: goto R_010844bc;
        case 0x10844c4u: goto R_010844c4;
        case 0x10844ccu: goto R_010844cc;
        case 0x10844e0u: goto R_010844e0;
        case 0x10844fcu: goto R_010844fc;
        case 0x1084504u: goto R_01084504;
        case 0x1084518u: goto R_01084518;
        case 0x1084534u: goto R_01084534;
        case 0x1084548u: goto R_01084548;
        case 0x1084550u: goto R_01084550;
        case 0x108455cu: goto R_0108455c;
        case 0x1084574u: goto R_01084574;
        case 0x1084578u: goto R_01084578;
        case 0x1084580u: goto R_01084580;
        case 0x108458cu: goto R_0108458c;
        case 0x1084594u: goto R_01084594;
        case 0x1084598u: goto R_01084598;
        case 0x10845a0u: goto R_010845a0;
        case 0x10845acu: goto R_010845ac;
        case 0x10845bcu: goto R_010845bc;
        case 0x10845c4u: goto R_010845c4;
        case 0x10845e0u: goto R_010845e0;
        case 0x10845e4u: goto R_010845e4;
        case 0x10845f4u: goto R_010845f4;
        case 0x10845fcu: goto R_010845fc;
        case 0x108460cu: goto R_0108460c;
        case 0x1084628u: goto R_01084628;
        case 0x1084654u: goto R_01084654;
        case 0x1084670u: goto R_01084670;
        case 0x10846a4u: goto R_010846a4;
        case 0x10846b0u: goto R_010846b0;
        case 0x10846d0u: goto R_010846d0;
        case 0x1084704u: goto R_01084704;
        case 0x1084710u: goto R_01084710;
        case 0x108472cu: goto R_0108472c;
        case 0x1084760u: goto R_01084760;
        case 0x108477cu: goto R_0108477c;
        case 0x1084794u: goto R_01084794;
        case 0x10847a4u: goto R_010847a4;
        case 0x10847c4u: goto R_010847c4;
        case 0x10847f8u: goto R_010847f8;
        case 0x1084810u: goto R_01084810;
        case 0x108483cu: goto R_0108483c;
        case 0x1084870u: goto R_01084870;
        case 0x1084874u: goto R_01084874;
        case 0x108488cu: goto R_0108488c;
        case 0x10848c4u: goto R_010848c4;
        case 0x10848ccu: goto R_010848cc;
        case 0x10848d8u: goto R_010848d8;
        case 0x10848f8u: goto R_010848f8;
        case 0x1084904u: goto R_01084904;
        case 0x1084910u: goto R_01084910;
        case 0x108491cu: goto R_0108491c;
        case 0x1084934u: goto R_01084934;
        case 0x1084970u: goto R_01084970;
        case 0x1084974u: goto R_01084974;
        case 0x1084978u: goto R_01084978;
        case 0x108498cu: goto R_0108498c;
        case 0x10849c0u: goto R_010849c0;
        case 0x10849c4u: goto R_010849c4;
        case 0x10849d0u: goto R_010849d0;
        case 0x10849e0u: goto R_010849e0;
        case 0x10849e8u: goto R_010849e8;
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
    goto L_01084440;
L_0108441c:
    ea = c.r[31] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108443c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108443cu;
    wp::call(c, c.ctr);
L_0108443c:
R_0108443c:
    c.lr = 0x1084440u;
    f_8006a940(c);
L_01084440:
R_01084440:
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108441c;
    }
    c.lr = 0x1084450u;
    f_800760f0(c);
R_01084450:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108441c;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084478;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x1u;
    c.lr = 0x1084478u;
    f_ms602_01033f50(c);
L_01084478:
R_01084478:
    c.r[3] = 0x1u;
    c.lr = 0x1084480u;
    f_80076130(c);
R_01084480:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084494u;
    wp::call(c, c.ctr);
R_01084494:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] & 0x10u;
    wp::record(c, c.r[0]);
    c.r[3] = c.r[3] & 0xfffffffeu;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108451c;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10844bcu;
    f_800104d0(c);
R_010844bc:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10844c4u;
    f_8000a7f0(c);
R_010844c4:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10844ccu;
    f_8000e240(c);
R_010844cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108450c;
    c.r[30] = 0x0u;
    goto L_01084500;
L_010844dc:
    c.lr = 0x10844e0u;
    f_8000dd70(c);
R_010844e0:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[30], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[30]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10844fcu;
    f_8000fc60(c);
R_010844fc:
    c.r[30] = c.r[30] + 0x1u;
L_01084500:
    c.lr = 0x1084504u;
    f_80007570(c);
R_01084504:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010844dc;
    }
L_0108450c:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x1084518u;
    f_800293c0(c);
R_01084518:
    goto L_010849e0;
L_0108451c:
    c.r[0] = c.r[3] & 0x20u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084560;
    c.r[0] = 0xfffffaffu;
    c.r[0] = c.r[3] & c.r[0];
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1084534u;
    f_8000e070(c);
R_01084534:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x7u;
    if (wp::cr_get(c, 2)) goto L_01084544;
    c.r[3] = 0x6u;
L_01084544:
    c.lr = 0x1084548u;
    f_8000e080(c);
R_01084548:
    c.r[3] = 0x1u;
    c.lr = 0x1084550u;
    f_80029330(c);
R_01084550:
    c.r[3] = ((((g_ms602_bases[5] + 0x2aba8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2aba8u) & 0xFFFFu);
    c.lr = 0x108455cu;
    f_80029270(c);
R_0108455c:
    goto L_010849e0;
L_01084560:
    c.r[0] = c.r[3] & 0x400u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010845a4;
    c.r[29] = ((((g_ms602_bases[4] + 0x26c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x26c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1084574u;
    f_80071fe0(c);
R_01084574:
    c.lr = 0x1084578u;
    f_8001a890(c);
R_01084578:
    c.r[3] = 0x0u;
    c.lr = 0x1084580u;
    f_80076130(c);
R_01084580:
    ea = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x26c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x108458cu;
    f_80075f20(c);
R_0108458c:
    c.r[3] = 0x1u;
    c.lr = 0x1084594u;
    f_80076130(c);
R_01084594:
    c.lr = 0x1084598u;
    f_80076100(c);
R_01084598:
    c.r[3] = 0x1u;
    c.lr = 0x10845a0u;
    f_80029330(c);
R_010845a0:
    goto L_010849e0;
L_010845a4:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10845acu;
    f_80007f20(c);
R_010845ac:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x10845bcu;
    f_ms602_01084a10(c);
R_010845bc:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x10845c4u;
    f_80041f70(c);
R_010845c4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010845e0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.lr = 0x10845e0u;
    f_800402c0(c);
L_010845e0:
R_010845e0:
    c.lr = 0x10845e4u;
    f_80076140(c);
R_010845e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084614;
    c.r[3] = 0x0u;
    c.lr = 0x10845f4u;
    f_8004a100(c);
R_010845f4:
    c.r[3] = 0x1u;
    c.lr = 0x10845fcu;
    f_80072020(c);
R_010845fc:
    c.r[4] = ((((g_ms602_bases[4] + 0x26ccu) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x26ccu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x108460cu;
    f_80075ed0(c);
R_0108460c:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x1c0u;
    wp::wr8(ea, c.r[0]);
L_01084614:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084810;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[28] = wp::rd32(ea);
    c.lr = 0x1084628u;
    f_80007530(c);
R_01084628:
    c.r[0] = c.r[3] + 0xfffffffbu;
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_0108464c;
    wp::compare_signed(c, 0, c.r[3], 0x7u);
    if (wp::cr_get(c, 2)) goto L_010846a8;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01084708;
    goto L_0108477c;
L_0108464c:
    c.r[3] = 0x1acu;
    c.lr = 0x1084654u;
    f_801c79a4(c);
R_01084654:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084670;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x1084670u;
    f_ms602_0104d820(c);
L_01084670:
R_01084670:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108477c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108477c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10846a4u;
    wp::call(c, c.ctr);
R_010846a4:
    goto L_0108477c;
L_010846a8:
    c.r[3] = 0x1acu;
    c.lr = 0x10846b0u;
    f_801c79a4(c);
R_010846b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010846d0;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x1u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10846d0u;
    f_ms602_0104e860(c);
L_010846d0:
R_010846d0:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108477c;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108477c;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084704u;
    wp::call(c, c.ctr);
R_01084704:
    goto L_0108477c;
L_01084708:
    c.r[3] = 0x1bcu;
    c.lr = 0x1084710u;
    f_801c79a4(c);
R_01084710:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108472c;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = c.r[0] & 0xffffu;
    c.lr = 0x108472cu;
    f_ms602_0104f460(c);
L_0108472c:
R_0108472c:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084760;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084760;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084760u;
    wp::call(c, c.ctr);
L_01084760:
R_01084760:
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
    c.lr = 0x108477cu;
    wp::call(c, c.ctr);
L_0108477c:
R_0108477c:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010847f8;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1084794u;
    f_ms602_01084c50(c);
R_01084794:
    wp::compare_signed(c, 0, c.r[31], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_010847f8;
    c.r[3] = 0x1acu;
    c.lr = 0x10847a4u;
    f_801c79a4(c);
R_010847a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010847c4;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x10847c4u;
    f_ms602_0104e860(c);
L_010847c4:
R_010847c4:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010847f8;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010847f8;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10847f8u;
    wp::call(c, c.ctr);
L_010847f8:
R_010847f8:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084810;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1084810u;
    f_ms602_01084c50(c);
L_01084810:
R_01084810:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010848c4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108483cu;
    wp::call(c, c.ctr);
R_0108483c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084874;
L_01084844:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084870;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084870;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084870u;
    wp::call(c, c.ctr);
L_01084870:
R_01084870:
    c.lr = 0x1084874u;
    f_8006a940(c);
L_01084874:
R_01084874:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108488cu;
    wp::call(c, c.ctr);
R_0108488c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084844;
    }
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010848c4;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010848c4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10848c4u;
    wp::call(c, c.ctr);
L_010848c4:
R_010848c4:
    c.r[3] = 0x4u;
    c.lr = 0x10848ccu;
    f_801c79a4(c);
R_010848cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010848d8;
    c.lr = 0x10848d8u;
    f_ms602_0102ef10(c);
L_010848d8:
R_010848d8:
    ea = c.r[29] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010848f8;
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    c.lr = 0x10848f8u;
    f_ms602_0102efb0(c);
L_010848f8:
R_010848f8:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084904u;
    f_ms602_0102f050(c);
R_01084904:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1084910u;
    f_ms602_0102f040(c);
R_01084910:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108491cu;
    f_ms602_0102f030(c);
R_0108491c:
    c.r[3] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01084980;
    c.r[3] = 0x1u;
    c.lr = 0x1084934u;
    f_ms602_0102d9d0(c);
R_01084934:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084980;
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084974;
L_01084944:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084970;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084970;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084970u;
    wp::call(c, c.ctr);
L_01084970:
R_01084970:
    c.lr = 0x1084974u;
    f_8006a940(c);
L_01084974:
R_01084974:
    c.lr = 0x1084978u;
    f_8006b760(c);
R_01084978:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084944;
    }
L_01084980:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108498cu;
    f_ms602_0102f060(c);
R_0108498c:
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_010849c4;
L_01084994:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010849c0;
    ea = c.r[29] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010849c0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10849c0u;
    wp::call(c, c.ctr);
L_010849c0:
R_010849c0:
    c.lr = 0x10849c4u;
    f_8006a940(c);
L_010849c4:
R_010849c4:
    ea = c.r[29] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10849d0u;
    f_ms602_0102f080(c);
R_010849d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084994;
    }
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10849e0u;
    f_ms602_01084ea0(c);
L_010849e0:
R_010849e0:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10849e8u;
    f_8006a8f0(c);
R_010849e8:
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

void f_ms602_01084a10(wp::Cpu& c) {
    WP_ENTER(0x1084a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084a24u: goto R_01084a24;
        case 0x1084a34u: goto R_01084a34;
        case 0x1084a40u: goto R_01084a40;
        case 0x1084a5cu: goto R_01084a5c;
        case 0x1084a64u: goto R_01084a64;
        case 0x1084a6cu: goto R_01084a6c;
        case 0x1084ad0u: goto R_01084ad0;
        case 0x1084aecu: goto R_01084aec;
        case 0x1084b08u: goto R_01084b08;
        case 0x1084b40u: goto R_01084b40;
        case 0x1084b5cu: goto R_01084b5c;
        case 0x1084b78u: goto R_01084b78;
        case 0x1084b94u: goto R_01084b94;
        case 0x1084bacu: goto R_01084bac;
        case 0x1084be4u: goto R_01084be4;
        case 0x1084c00u: goto R_01084c00;
        case 0x1084c1cu: goto R_01084c1c;
        case 0x1084c38u: goto R_01084c38;
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
    c.lr = 0x1084a24u;
    f_801c83b8(c);
R_01084a24:
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = 0x0u;
    c.lr = 0x1084a34u;
    f_8000fc40(c);
R_01084a34:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = 0x1u;
    c.lr = 0x1084a40u;
    f_8000fc40(c);
R_01084a40:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084a58;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084a58;
    c.r[3] = 0x0u;
    goto L_01084c30;
L_01084a58:
    c.lr = 0x1084a5cu;
    f_80007530(c);
R_01084a5c:
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x1084a64u;
    f_800075a0(c);
R_01084a64:
    c.r[31] = c.r[3] | c.r[3];
    c.lr = 0x1084a6cu;
    f_8000dd00(c);
R_01084a6c:
    c.r[0] = 0xffffffffu;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[30], 0x5u);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084aa0;
    wp::compare_signed(c, 0, c.r[30], 0x6u);
    if (wp::cr_get(c, 2)) goto L_01084b10;
    wp::compare_signed(c, 0, c.r[30], 0x7u);
    if (wp::cr_get(c, 2)) goto L_01084b80;
    wp::compare_signed(c, 0, c.r[30], 0x16u);
    if (wp::cr_get(c, 2)) goto L_01084bb4;
    goto L_01084c24;
L_01084aa0:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084abc;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01084ad8;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01084af4;
    goto L_01084c2c;
L_01084abc:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x5u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084ad0u;
    f_8000b780(c);
R_01084ad0:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084ad8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x6u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084aecu;
    f_8000b780(c);
R_01084aec:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084af4:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x7u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084b08u;
    f_8000b780(c);
R_01084b08:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084b10:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084b2c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01084b48;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01084b64;
    goto L_01084c2c;
L_01084b2c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x2u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084b40u;
    f_8000b780(c);
R_01084b40:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084b48:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x3u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084b5cu;
    f_8000b780(c);
R_01084b5c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084b64:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x4u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084b78u;
    f_8000b780(c);
R_01084b78:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084b80:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084b94u;
    f_8000b780(c);
R_01084b94:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084bacu;
    f_8000b780(c);
R_01084bac:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084bb4:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084bd0;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01084bec;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01084c08;
    goto L_01084c2c;
L_01084bd0:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x8u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084be4u;
    f_8000b780(c);
R_01084be4:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084bec:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0x9u;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084c00u;
    f_8000b780(c);
R_01084c00:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084c08:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = 0xau;
    c.r[5] = 0x0u;
    c.r[6] = 0x1u;
    c.lr = 0x1084c1cu;
    f_8000b780(c);
R_01084c1c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01084c2c;
L_01084c24:
    c.r[3] = 0x0u;
    goto L_01084c30;
L_01084c2c:
    c.r[3] = 0x1u;
L_01084c30:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1084c38u;
    f_801c8404(c);
R_01084c38:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01084c50(wp::Cpu& c) {
    WP_ENTER(0x1084c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084c64u: goto R_01084c64;
        case 0x1084c88u: goto R_01084c88;
        case 0x1084cc0u: goto R_01084cc0;
        case 0x1084cc4u: goto R_01084cc4;
        case 0x1084cdcu: goto R_01084cdc;
        case 0x1084d14u: goto R_01084d14;
        case 0x1084d2cu: goto R_01084d2c;
        case 0x1084d30u: goto R_01084d30;
        case 0x1084d38u: goto R_01084d38;
        case 0x1084d84u: goto R_01084d84;
        case 0x1084d88u: goto R_01084d88;
        case 0x1084dc4u: goto R_01084dc4;
        case 0x1084de4u: goto R_01084de4;
        case 0x1084e1cu: goto R_01084e1c;
        case 0x1084e20u: goto R_01084e20;
        case 0x1084e38u: goto R_01084e38;
        case 0x1084e7cu: goto R_01084e7c;
        case 0x1084e84u: goto R_01084e84;
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
    c.lr = 0x1084c64u;
    f_801c83b8(c);
R_01084c64:
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
    c.lr = 0x1084c88u;
    wp::call(c, c.ctr);
R_01084c88:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084cc4;
L_01084c94:
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084cc0;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084cc0;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084cc0u;
    wp::call(c, c.ctr);
L_01084cc0:
R_01084cc0:
    c.lr = 0x1084cc4u;
    f_8006a940(c);
L_01084cc4:
R_01084cc4:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084cdcu;
    wp::call(c, c.ctr);
R_01084cdc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084cf0;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084c94;
    }
L_01084cf0:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr16(ea, c.r[0]);
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[30] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084d88;
L_01084d04:
    c.r[28] = c.r[1] + 0x8u;
    c.r[27] = 0x0u;
L_01084d0c:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1084d14u;
    f_8000fc40(c);
R_01084d14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084d24;
    c.r[0] = 0x0u;
    goto L_01084d44;
L_01084d24:
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1084d2cu;
    f_8000fc20(c);
R_01084d2c:
    c.lr = 0x1084d30u;
    f_800699d0(c);
R_01084d30:
    c.r[4] = 0x800u;
    c.lr = 0x1084d38u;
    f_80066cd0(c);
R_01084d38:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
L_01084d44:
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[28] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[27], 0x2u);
    c.r[28] = c.r[28] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01084d0c;
    }
    ea = c.r[30] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084d84;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084d84;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084d84u;
    wp::call(c, c.ctr);
L_01084d84:
R_01084d84:
    c.lr = 0x1084d88u;
    f_8006a940(c);
L_01084d88:
R_01084d88:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084dac;
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084dac;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084d04;
    }
L_01084dac:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x2c4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084dc4u;
    wp::call(c, c.ctr);
R_01084dc4:
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
    c.lr = 0x1084de4u;
    wp::call(c, c.ctr);
R_01084de4:
    c.r[30] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[29] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084e20;
L_01084df0:
    ea = c.r[29] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084e1c;
    ea = c.r[31] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084e1c;
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084e1cu;
    wp::call(c, c.ctr);
L_01084e1c:
R_01084e1c:
    c.lr = 0x1084e20u;
    f_8006a940(c);
L_01084e20:
R_01084e20:
    ea = c.r[31] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084e38u;
    wp::call(c, c.ctr);
R_01084e38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084e4c;
    ea = c.r[30] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084df0;
    }
L_01084e4c:
    ea = c.r[31] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084e7c;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01084e7c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084e7cu;
    wp::call(c, c.ctr);
L_01084e7c:
R_01084e7c:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x1084e84u;
    f_801c8404(c);
R_01084e84:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_ms602_01084ea0(wp::Cpu& c) {
    WP_ENTER(0x1084ea0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1084eb4u: goto R_01084eb4;
        case 0x1084eccu: goto R_01084ecc;
        case 0x1084ed8u: goto R_01084ed8;
        case 0x1084ee8u: goto R_01084ee8;
        case 0x1084ef4u: goto R_01084ef4;
        case 0x1084f04u: goto R_01084f04;
        case 0x1084f1cu: goto R_01084f1c;
        case 0x1084f38u: goto R_01084f38;
        case 0x1084f54u: goto R_01084f54;
        case 0x1084f84u: goto R_01084f84;
        case 0x1084fbcu: goto R_01084fbc;
        case 0x1084fc0u: goto R_01084fc0;
        case 0x1085050u: goto R_01085050;
        case 0x108507cu: goto R_0108507c;
        case 0x1085084u: goto R_01085084;
        case 0x1085090u: goto R_01085090;
        case 0x1085098u: goto R_01085098;
        case 0x108509cu: goto R_0108509c;
        case 0x10850a4u: goto R_010850a4;
        case 0x10850b8u: goto R_010850b8;
        case 0x10850d4u: goto R_010850d4;
        case 0x10850dcu: goto R_010850dc;
        case 0x10850f0u: goto R_010850f0;
        case 0x10850fcu: goto R_010850fc;
        case 0x1085104u: goto R_01085104;
        case 0x1085110u: goto R_01085110;
        case 0x1085118u: goto R_01085118;
        case 0x108511cu: goto R_0108511c;
        case 0x1085120u: goto R_01085120;
        case 0x1085134u: goto R_01085134;
        case 0x108513cu: goto R_0108513c;
        case 0x1085148u: goto R_01085148;
        case 0x108514cu: goto R_0108514c;
        case 0x1085154u: goto R_01085154;
        case 0x1085160u: goto R_01085160;
        case 0x1085168u: goto R_01085168;
        case 0x108516cu: goto R_0108516c;
        case 0x1085174u: goto R_01085174;
        case 0x108517cu: goto R_0108517c;
        case 0x1085188u: goto R_01085188;
        case 0x108518cu: goto R_0108518c;
        case 0x1085194u: goto R_01085194;
        case 0x10851a0u: goto R_010851a0;
        case 0x10851a8u: goto R_010851a8;
        case 0x10851acu: goto R_010851ac;
        case 0x10851b4u: goto R_010851b4;
        case 0x10851bcu: goto R_010851bc;
        case 0x10851c4u: goto R_010851c4;
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
    c.lr = 0x1084eb4u;
    f_801c83b4(c);
R_01084eb4:
    c.r[27] = ((((g_ms602_bases[4] + 0x26c8u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[3] | c.r[3];
    c.r[27] = c.r[27] + wp::sign_extend16((g_ms602_bases[4] + 0x26c8u) & 0xFFFFu);
    c.r[31] = 0x2u;
    c.r[3] = 0x0u;
    c.lr = 0x1084eccu;
    f_800699d0(c);
R_01084ecc:
    c.r[26] = c.r[3] | c.r[3];
    c.r[4] = 0x1u;
    c.lr = 0x1084ed8u;
    f_80066e70(c);
R_01084ed8:
    ea = c.r[27] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[27] + 0xcu;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.lr = 0x1084ee8u;
    f_80066db0(c);
R_01084ee8:
    ea = c.r[30] + 0x1bcu;
    c.r[28] = wp::rd32(ea);
    c.r[3] = 0x3a0u;
    c.lr = 0x1084ef4u;
    f_801c79a4(c);
R_01084ef4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01084f58;
    c.lr = 0x1084f04u;
    f_80007530(c);
R_01084f04:
    c.r[0] = c.r[3] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_01084f18;
    wp::compare_signed(c, 0, c.r[3], 0x16u);
    if (!wp::cr_get(c, 2)) goto L_01084f30;
L_01084f18:
    c.lr = 0x1084f1cu;
    f_8000dc30(c);
R_01084f1c:
    c.r[3] = wp::sign_extend8(c.r[3]);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[26] = wp::rotl(c.r[0], 1) & 0x1u;
    goto L_01084f34;
L_01084f30:
    c.r[26] = 0x0u;
L_01084f34:
    c.lr = 0x1084f38u;
    f_8000e070(c);
R_01084f38:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[26] | c.r[26];
    c.r[4] = 0x0u;
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x1084f54u;
    f_ms602_01065a10(c);
R_01084f54:
    c.r[29] = c.r[3] | c.r[3];
L_01084f58:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[29], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01084f84;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01084f84;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084f84u;
    wp::call(c, c.ctr);
L_01084f84:
R_01084f84:
    c.r[29] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[28] = (((0x802f5e74u + 0x8000u) >> 16) << 16);
    goto L_01084fc0;
L_01084f90:
    ea = c.r[28] + wp::sign_extend16(0x802f5e74u & 0xFFFFu);
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01084fbc;
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01084fbc;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1084fbcu;
    wp::call(c, c.ctr);
L_01084fbc:
R_01084fbc:
    c.lr = 0x1084fc0u;
    f_8006a940(c);
L_01084fc0:
R_01084fc0:
    ea = c.r[30] + 0x1bcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x39cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_01084fe0;
    ea = c.r[29] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01084f90;
    }
L_01084fe0:
    ea = c.r[3] + 0x380u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085008;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01085010;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01085018;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01085020;
    goto L_01085024;
L_01085008:
    c.r[31] = 0x0u;
    goto L_01085024;
L_01085010:
    c.r[31] = 0x1u;
    goto L_01085024;
L_01085018:
    c.r[31] = 0x2u;
    goto L_01085024;
L_01085020:
    c.r[31] = 0x3u;
L_01085024:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085050;
    c.r[0] = 0x0u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085050;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085050u;
    wp::call(c, c.ctr);
L_01085050:
R_01085050:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085074;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010850f4;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01085140;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_01085180;
    goto L_010851bc;
L_01085074:
    c.r[3] = 0x5u;
    c.lr = 0x108507cu;
    f_8001a890(c);
R_0108507c:
    c.r[3] = 0x0u;
    c.lr = 0x1085084u;
    f_80076130(c);
R_01085084:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1085090u;
    f_80075f20(c);
R_01085090:
    c.r[3] = 0x1u;
    c.lr = 0x1085098u;
    f_80076130(c);
R_01085098:
    c.lr = 0x108509cu;
    f_80076100(c);
R_0108509c:
    c.r[3] = 0xffffffffu;
    c.lr = 0x10850a4u;
    f_8000e240(c);
R_010850a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010850e4;
    c.r[26] = 0x0u;
    goto L_010850d8;
L_010850b4:
    c.lr = 0x10850b8u;
    f_8000dd70(c);
R_010850b8:
    c.r[0] = wp::sign_extend8(c.r[3]);
    c.r[5] = wp::sraw(c, c.r[26], 31);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[26] | c.r[26];
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[26]);
    c.r[4] = wp::add_extended(c, c.r[5], c.r[4]);
    c.lr = 0x10850d4u;
    f_8000fc60(c);
R_010850d4:
    c.r[26] = c.r[26] + 0x1u;
L_010850d8:
    c.lr = 0x10850dcu;
    f_80007570(c);
R_010850dc:
    wp::compare_signed(c, 0, c.r[26], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010850b4;
    }
L_010850e4:
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1c1u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x10850f0u;
    f_800293c0(c);
R_010850f0:
    goto L_010851bc;
L_010850f4:
    c.r[3] = 0x5u;
    c.lr = 0x10850fcu;
    f_8001a890(c);
R_010850fc:
    c.r[3] = 0x0u;
    c.lr = 0x1085104u;
    f_80076130(c);
R_01085104:
    ea = c.r[27] + 0x10u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1085110u;
    f_80075f20(c);
R_01085110:
    c.r[3] = 0x1u;
    c.lr = 0x1085118u;
    f_80076130(c);
R_01085118:
    c.lr = 0x108511cu;
    f_80076100(c);
R_0108511c:
    c.lr = 0x1085120u;
    f_8000e070(c);
R_01085120:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = 0x4u;
    if (wp::cr_get(c, 2)) goto L_01085130;
    c.r[3] = 0x6u;
L_01085130:
    c.lr = 0x1085134u;
    f_8000e080(c);
R_01085134:
    c.r[3] = 0x1u;
    c.lr = 0x108513cu;
    f_80029330(c);
R_0108513c:
    goto L_010851bc;
L_01085140:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1085148u;
    f_80071fe0(c);
R_01085148:
    c.lr = 0x108514cu;
    f_8001a890(c);
R_0108514c:
    c.r[3] = 0x0u;
    c.lr = 0x1085154u;
    f_80076130(c);
R_01085154:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x1085160u;
    f_80075f20(c);
R_01085160:
    c.r[3] = 0x1u;
    c.lr = 0x1085168u;
    f_80076130(c);
R_01085168:
    c.lr = 0x108516cu;
    f_80076100(c);
R_0108516c:
    c.r[3] = 0x4u;
    c.lr = 0x1085174u;
    f_8000e080(c);
R_01085174:
    c.r[3] = 0x1u;
    c.lr = 0x108517cu;
    f_80029330(c);
R_0108517c:
    goto L_010851bc;
L_01085180:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1085188u;
    f_80071fe0(c);
R_01085188:
    c.lr = 0x108518cu;
    f_8001a890(c);
R_0108518c:
    c.r[3] = 0x0u;
    c.lr = 0x1085194u;
    f_80076130(c);
R_01085194:
    ea = c.r[27] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x0u;
    c.lr = 0x10851a0u;
    f_80075f20(c);
R_010851a0:
    c.r[3] = 0x1u;
    c.lr = 0x10851a8u;
    f_80076130(c);
R_010851a8:
    c.lr = 0x10851acu;
    f_80076100(c);
R_010851ac:
    c.r[3] = 0x8u;
    c.lr = 0x10851b4u;
    f_8000e080(c);
R_010851b4:
    c.r[3] = 0x1u;
    c.lr = 0x10851bcu;
    f_80029330(c);
L_010851bc:
R_010851bc:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x10851c4u;
    f_801c8400(c);
R_010851c4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_010851e0(wp::Cpu& c) {
    WP_ENTER(0x10851e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085218u: goto R_01085218;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_ms602_bases[5] + 0x2abd0u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_ms602_bases[6] + 0x10u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2abd0u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[6] + 0x10u) & 0xFFFFu);
    wp::wr32(ea, c.r[3]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    c.lr = 0x1085218u;
    f_80030b40(c);
R_01085218:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01085230(wp::Cpu& c) {
    WP_ENTER(0x1085230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.r[5] = 0x0u;
    f_800315f0(c);
    return;
}

void f_ms602_01085240(wp::Cpu& c) {
    WP_ENTER(0x1085240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085294u: goto R_01085294;
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
    if (wp::cr_get(c, 2)) goto L_01085264;
    c.r[3] = 0x0u;
    goto L_010852d8;
L_01085264:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108527c;
    c.r[0] = c.r[4] & 0x100u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0108527c;
    c.r[3] = 0x0u;
    goto L_010852d8;
L_0108527c:
    c.r[4] = (((0x802f5d4cu + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[4] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1085294u;
    f_801c79a4(c);
R_01085294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010852d8;
    c.r[6] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[6]);
    c.r[5] = ((((g_ms602_bases[5] + 0x2abe0u) + 0x8000u) >> 16) << 16);
    c.r[4] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[6]);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2abe0u) & 0xFFFFu);
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
L_010852d8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_010852f0(wp::Cpu& c) {
    WP_ENTER(0x10852f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085334u: goto R_01085334;
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
    if (!wp::cr_get(c, 2)) goto L_01085318;
    c.r[3] = 0x0u;
    goto L_01085374;
L_01085318:
    c.r[3] = (((0x80231d68u + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[4] & 0xfffffbffu;
    c.r[3] = c.r[3] + wp::sign_extend16(0x80231d68u & 0xFFFFu);
    ea = c.r[5] + wp::sign_extend16(0x802f5d4cu & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
    c.r[31] = c.r[3] + 0x11u;
    c.r[3] = 0x24u;
    c.lr = 0x1085334u;
    f_801c79a4(c);
R_01085334:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085374;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[4] = ((((g_ms602_bases[5] + 0x2abe0u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2abe0u) & 0xFFFFu);
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
L_01085374:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01085390(wp::Cpu& c) {
    WP_ENTER(0x1085390u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_ms602_010853a0(wp::Cpu& c) {
    WP_ENTER(0x10853a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_ms602_010853b0(wp::Cpu& c) {
    WP_ENTER(0x10853b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_ms602_010853c0(wp::Cpu& c) {
    WP_ENTER(0x10853c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f6050u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f6050u & 0xFFFFu);
    return;
}

void f_ms602_010853d0(wp::Cpu& c) {
    WP_ENTER(0x10853d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085414u: goto R_01085414;
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
    if (wp::cr_get(c, 2)) goto L_01085418;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085418;
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x1085414u;
    f_80143290(c);
R_01085414:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_01085418:
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

void f_ms602_01085440(wp::Cpu& c) {
    WP_ENTER(0x1085440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085474u: goto R_01085474;
        case 0x108548cu: goto R_0108548c;
        case 0x1085498u: goto R_01085498;
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
    c.lr = 0x1085474u;
    wp::call(c, c.ctr);
R_01085474:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[3];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x108548cu;
    f_800043c4(c);
R_0108548c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x1085498u;
    f_8011c2d0(c);
R_01085498:
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

void f_ms602_010854c0(wp::Cpu& c) {
    WP_ENTER(0x10854c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_ms602_010854d0(wp::Cpu& c) {
    WP_ENTER(0x10854d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085504u: goto R_01085504;
        case 0x108551cu: goto R_0108551c;
        case 0x1085528u: goto R_01085528;
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
    c.lr = 0x1085504u;
    wp::call(c, c.ctr);
R_01085504:
    ea = c.r[29] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[0] + c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x108551cu;
    f_800043c4(c);
R_0108551c:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[29] + 0x1cu;
    c.lr = 0x1085528u;
    f_8011c260(c);
R_01085528:
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

void f_ms602_01085550(wp::Cpu& c) {
    WP_ENTER(0x1085550u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x1cu;
    f_8011c320(c);
    return;
}

void f_ms602_01085560(wp::Cpu& c) {
    WP_ENTER(0x1085560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_ms602_01085570(wp::Cpu& c) {
    WP_ENTER(0x1085570u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_ms602_01085580(wp::Cpu& c) {
    WP_ENTER(0x1085580u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_ms602_01085590(wp::Cpu& c) {
    WP_ENTER(0x1085590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x1u;
    return;
}

void f_ms602_010855a0(wp::Cpu& c) {
    WP_ENTER(0x10855a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_ms602_010855b0(wp::Cpu& c) {
    WP_ENTER(0x10855b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_010855c0(wp::Cpu& c) {
    WP_ENTER(0x10855c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10855fcu: goto R_010855fc;
        case 0x108560cu: goto R_0108560c;
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
    if (wp::cr_get(c, 2)) goto L_0108560c;
    c.r[12] = ((((g_ms602_bases[5] + 0x2abe0u) + 0x8000u) >> 16) << 16);
    c.r[12] = c.r[12] + wp::sign_extend16((g_ms602_bases[5] + 0x2abe0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10855fcu;
    wp::call(c, c.ctr);
R_010855fc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108560c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108560cu;
    f_801c7a8c(c);
L_0108560c:
R_0108560c:
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

void f_ms602_01085630(wp::Cpu& c) {
    WP_ENTER(0x1085630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085660u: goto R_01085660;
        case 0x1085668u: goto R_01085668;
        case 0x1085694u: goto R_01085694;
        case 0x10856a0u: goto R_010856a0;
        case 0x10856c4u: goto R_010856c4;
        case 0x10856ecu: goto R_010856ec;
        case 0x1085704u: goto R_01085704;
        case 0x1085720u: goto R_01085720;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_ms602_bases[4] + 0x2700u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[4] + 0x2700u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1085660u;
    f_80153530(c);
R_01085660:
    c.r[3] = 0x6u;
    c.lr = 0x1085668u;
    f_80153920(c);
R_01085668:
    c.r[31] = ((((g_ms602_bases[4] + 0x2708u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[4] + 0x2708u) & 0xFFFFu);
L_01085674:
    c.r[0] = c.r[29] + 0xfffffffbu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x1085694u;
    f_801537c0(c);
R_01085694:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x10856a0u;
    f_80153590(c);
R_010856a0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_010856b4;
    c.r[4] = 0xfu;
L_010856b4:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x10856c4u;
    f_80153320(c);
R_010856c4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_010856e0;
    c.r[6] = 0x3u;
L_010856e0:
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x10856ecu;
    f_801533a0(c);
R_010856ec:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x7u;
    c.lr = 0x1085704u;
    f_80153360(c);
R_01085704:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x1085720u;
    f_80153400(c);
R_01085720:
    c.r[29] = c.r[29] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01085674;
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

void f_ms602_01085750(wp::Cpu& c) {
    WP_ENTER(0x1085750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085784u: goto R_01085784;
        case 0x108578cu: goto R_0108578c;
        case 0x1085794u: goto R_01085794;
        case 0x108579cu: goto R_0108579c;
        case 0x10857acu: goto R_010857ac;
        case 0x10857c4u: goto R_010857c4;
        case 0x10857d8u: goto R_010857d8;
        case 0x10857dcu: goto R_010857dc;
        case 0x10857e8u: goto R_010857e8;
        case 0x10857f8u: goto R_010857f8;
        case 0x10857fcu: goto R_010857fc;
        case 0x1085800u: goto R_01085800;
        case 0x1085824u: goto R_01085824;
        case 0x108586cu: goto R_0108586c;
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
    c.lr = 0x1085784u;
    f_80150850(c);
R_01085784:
    c.r[3] = 0x1u;
    c.lr = 0x108578cu;
    f_80153e40(c);
R_0108578c:
    c.r[3] = 0x0u;
    c.lr = 0x1085794u;
    f_80153e90(c);
R_01085794:
    c.r[3] = 0x1u;
    c.lr = 0x108579cu;
    f_80153f20(c);
R_0108579c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x10857acu;
    f_80153ee0(c);
R_010857ac:
    c.r[3] = 0x7u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x10857c4u;
    f_801536f0(c);
R_010857c4:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.lr = 0x10857d8u;
    f_80153df0(c);
R_010857d8:
    c.lr = 0x10857dcu;
    f_8014f020(c);
R_010857dc:
    c.r[3] = ((((g_ms602_bases[4] + 0x2728u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2728u) & 0xFFFFu);
    c.lr = 0x10857e8u;
    f_8014e9e0(c);
R_010857e8:
    c.r[4] = ((((g_ms602_bases[4] + 0x2740u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2740u) & 0xFFFFu);
    c.lr = 0x10857f8u;
    f_8014f200(c);
R_010857f8:
    c.lr = 0x10857fcu;
    f_8004aa80(c);
R_010857fc:
    c.lr = 0x1085800u;
    f_800ee3c0(c);
R_01085800:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x1085824u;
    f_800e95b0(c);
R_01085824:
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
    c.lr = 0x108586cu;
    f_80150560(c);
R_0108586c:
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

void f_ms602_010858f0(wp::Cpu& c) {
    WP_ENTER(0x10858f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085930u: goto R_01085930;
        case 0x1085944u: goto R_01085944;
        case 0x1085954u: goto R_01085954;
        case 0x1085964u: goto R_01085964;
        case 0x1085970u: goto R_01085970;
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
    c.lr = 0x1085930u;
    f_8003d6b0(c);
R_01085930:
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac40u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x4u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac40u) & 0xFFFFu);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1085944u;
    f_801c79a4(c);
R_01085944:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01085954;
    c.lr = 0x1085954u;
    f_80034ac0(c);
L_01085954:
R_01085954:
    ea = c.r[28] + 0x144u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.lr = 0x1085964u;
    f_80052170(c);
R_01085964:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x1085970u;
    f_80052190(c);
R_01085970:
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

void f_ms602_010859a0(wp::Cpu& c) {
    WP_ENTER(0x10859a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10859e8u: goto R_010859e8;
        case 0x10859f0u: goto R_010859f0;
        case 0x1085a04u: goto R_01085a04;
        case 0x1085a14u: goto R_01085a14;
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
    if (wp::cr_get(c, 2)) goto L_01085a14;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010859f0;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010859f0;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x10859e8u;
    f_80034b10(c);
R_010859e8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10859f0u;
    f_801c7a8c(c);
L_010859f0:
R_010859f0:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085a04;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x1085a04u;
    f_80051600(c);
L_01085a04:
R_01085a04:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01085a14;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1085a14u;
    f_801c7a8c(c);
L_01085a14:
R_01085a14:
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

void f_ms602_01085a40(wp::Cpu& c) {
    WP_ENTER(0x1085a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085a84u: goto R_01085a84;
        case 0x1085ab0u: goto R_01085ab0;
        case 0x1085abcu: goto R_01085abc;
        case 0x1085ac4u: goto R_01085ac4;
        case 0x1085ad0u: goto R_01085ad0;
        case 0x1085ad8u: goto R_01085ad8;
        case 0x1085ae0u: goto R_01085ae0;
        case 0x1085b00u: goto R_01085b00;
        case 0x1085b20u: goto R_01085b20;
        case 0x1085b28u: goto R_01085b28;
        case 0x1085b34u: goto R_01085b34;
        case 0x1085b64u: goto R_01085b64;
        case 0x1085b80u: goto R_01085b80;
        case 0x1085bc8u: goto R_01085bc8;
        case 0x1085be4u: goto R_01085be4;
        case 0x1085bfcu: goto R_01085bfc;
        case 0x1085c18u: goto R_01085c18;
        case 0x1085c28u: goto R_01085c28;
        case 0x1085c2cu: goto R_01085c2c;
        case 0x1085c64u: goto R_01085c64;
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
    c.lr = 0x1085a84u;
    f_801c83b8(c);
R_01085a84:
    c.r[29] = ((((g_ms602_bases[4] + 0x26e0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x144u;
    c.r[28] = wp::rd32(ea);
    c.r[29] = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x26e0u) & 0xFFFFu);
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
    c.lr = 0x1085ab0u;
    f_8014c050(c);
R_01085ab0:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x1085abcu;
    f_80154c30(c);
R_01085abc:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1085ac4u;
    f_8014b090(c);
R_01085ac4:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x1085ad0u;
    f_80154d30(c);
R_01085ad0:
    c.r[3] = 0x0u;
    c.lr = 0x1085ad8u;
    f_80154e50(c);
R_01085ad8:
    c.r[3] = 0x0u;
    c.lr = 0x1085ae0u;
    f_80151a30(c);
R_01085ae0:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1085b00u;
    f_80151a60(c);
R_01085b00:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x1085b20u;
    f_80151a60(c);
R_01085b20:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1085b28u;
    f_80034f00(c);
R_01085b28:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x1085b34u;
    f_80034f20(c);
R_01085b34:
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
    c.lr = 0x1085b64u;
    f_8014f9d0(c);
R_01085b64:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1085b80u;
    f_8014f780(c);
R_01085b80:
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
L_01085b9c:
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
    c.lr = 0x1085bc8u;
    f_80126450(c);
R_01085bc8:
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
    c.lr = 0x1085be4u;
    f_8014b7e0(c);
R_01085be4:
    c.r[0] = wp::rotl(c.r[28], 2) & 0x3fcu;
    c.r[3] = c.r[1] + 0x80u;
    ea = c.r[31] + c.r[0];
    c.r[27] = wp::rd32(ea);
    c.r[5] = 0x1u;
    c.r[4] = c.r[27] | c.r[27];
    c.lr = 0x1085bfcu;
    f_80154e70(c);
R_01085bfc:
    c.r[6] = c.r[27] | c.r[27];
    c.r[3] = c.r[28] & 0xffu;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x1085c18u;
    f_8014f780(c);
R_01085c18:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[28], 0x6u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01085b9c;
    }
    c.lr = 0x1085c28u;
    f_ms602_01085630(c);
R_01085c28:
    c.lr = 0x1085c2cu;
    f_ms602_01085750(c);
R_01085c2c:
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
    c.lr = 0x1085c64u;
    f_801c8404(c);
R_01085c64:
    ea = c.r[1] + 0x134u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x130u;
    return;
}

void f_ms602_01085c80(wp::Cpu& c) {
    WP_ENTER(0x1085c80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085ce0u: goto R_01085ce0;
        case 0x1085d08u: goto R_01085d08;
        case 0x1085d18u: goto R_01085d18;
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
    if (wp::cr_get(c, 2)) goto L_01085d18;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_ms602_bases[5] + 0x2ace8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ace8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085ce0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085ce0;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085ce0u;
    wp::call(c, c.ctr);
L_01085ce0:
R_01085ce0:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01085d08;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085d08;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085d08u;
    wp::call(c, c.ctr);
L_01085d08:
R_01085d08:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01085d18;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1085d18u;
    f_801c7a8c(c);
L_01085d18:
R_01085d18:
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

void f_ms602_01085d40(wp::Cpu& c) {
    WP_ENTER(0x1085d40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085d88u: goto R_01085d88;
        case 0x1085dc4u: goto R_01085dc4;
        case 0x1085dccu: goto R_01085dcc;
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
    if (wp::cr_get(c, 2)) goto L_01085d70;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085d70:
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085d88u;
    wp::call(c, c.ctr);
R_01085d88:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085dcc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085dcc;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085dc4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085dc4u;
    wp::call(c, c.ctr);
L_01085dc4:
R_01085dc4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085dccu;
    f_801c7a8c(c);
L_01085dcc:
R_01085dcc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01085de0(wp::Cpu& c) {
    WP_ENTER(0x1085de0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = ((((g_ms602_bases[5] + 0x2ad94u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0xffffffffu;
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad94u) & 0xFFFFu);
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

void f_ms602_01085e10(wp::Cpu& c) {
    WP_ENTER(0x1085e10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085e38u: goto R_01085e38;
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
    if (wp::cr_get(c, 2)) goto L_01085e38;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01085e38;
    c.lr = 0x1085e38u;
    f_801c7a8c(c);
L_01085e38:
R_01085e38:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01085e50(wp::Cpu& c) {
    WP_ENTER(0x1085e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_ms602_01085e60(wp::Cpu& c) {
    WP_ENTER(0x1085e60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = ((((g_ms602_bases[5] + 0x2ad80u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad80u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01085e90;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01085e90:
    c.r[4] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
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

void f_ms602_01085ec0(wp::Cpu& c) {
    WP_ENTER(0x1085ec0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1085f44u: goto R_01085f44;
        case 0x1085f4cu: goto R_01085f4c;
        case 0x1085f90u: goto R_01085f90;
        case 0x1085f98u: goto R_01085f98;
        case 0x1085fa8u: goto R_01085fa8;
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
    if (wp::cr_get(c, 2)) goto L_01085fa8;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = ((((g_ms602_bases[5] + 0x2ad80u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x0u;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[6] = c.r[6] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad80u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01085f4c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085f4c;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085f44;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085f44u;
    wp::call(c, c.ctr);
L_01085f44:
R_01085f44:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085f4cu;
    f_801c7a8c(c);
L_01085f4c:
R_01085f4c:
    c.r[0] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01085f98;
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085f98;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01085f98;
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01085f90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1085f90u;
    wp::call(c, c.ctr);
L_01085f90:
R_01085f90:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1085f98u;
    f_801c7a8c(c);
L_01085f98:
R_01085f98:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01085fa8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1085fa8u;
    f_801c7a8c(c);
L_01085fa8:
R_01085fa8:
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

void f_ms602_01085fd0(wp::Cpu& c) {
    WP_ENTER(0x1085fd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086050u: goto R_01086050;
        case 0x1086054u: goto R_01086054;
        case 0x108605cu: goto R_0108605c;
        case 0x1086084u: goto R_01086084;
        case 0x1086088u: goto R_01086088;
        case 0x108619cu: goto R_0108619c;
        case 0x10861a4u: goto R_010861a4;
        case 0x10861b8u: goto R_010861b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x0u;
    c.r[6] = ((((g_ms602_bases[5] + 0x2ad6cu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[5]);
    c.r[6] = c.r[6] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad6cu) & 0xFFFFu);
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
    if (!wp::cr_get(c, 1)) goto L_010861b8;
    c.r[3] = 0x20000000u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    if (!wp::cr_get(c, 1)) goto L_01086054;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086050u;
    f_801cee24(c);
R_01086050:
    c.lr = 0x1086054u;
    f_801d3940(c);
L_01086054:
R_01086054:
    c.r[3] = wp::rotl(c.r[30], 3) & 0xfffffff8u;
    c.lr = 0x108605cu;
    f_801c79a4(c);
R_0108605c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01086088;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2adf0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2adf0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086084u;
    f_801cee24(c);
R_01086084:
    c.lr = 0x1086088u;
    f_801d3940(c);
L_01086088:
R_01086088:
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
    if (!wp::cr_get(c, 0)) goto L_0108610c;
    c.r[0] = c.r[0] | 0x0u;
L_010860c8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010860f4;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010860f4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010860f4:
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
    goto L_010860c8;
    }
L_0108610c:
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
    if (wp::cr_get(c, 2)) goto L_010861b8;
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[5] + c.r[3];
    goto L_010861a8;
L_01086158:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_010861a4;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010861a4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010861a4;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108619c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108619cu;
    wp::call(c, c.ctr);
L_0108619c:
R_0108619c:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10861a4u;
    f_801c7a8c(c);
L_010861a4:
R_010861a4:
    c.r[29] = c.r[29] + 0xffffffffu;
L_010861a8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086158;
    }
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10861b8u;
    f_801c7a8c(c);
L_010861b8:
R_010861b8:
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

void f_ms602_010861e0(wp::Cpu& c) {
    WP_ENTER(0x10861e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10861f4u: goto R_010861f4;
        case 0x108627cu: goto R_0108627c;
        case 0x1086284u: goto R_01086284;
        case 0x1086298u: goto R_01086298;
        case 0x10862a8u: goto R_010862a8;
        case 0x10862b4u: goto R_010862b4;
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
    c.lr = 0x10861f4u;
    f_801c83b8(c);
R_010861f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_010862a8;
    c.r[31] = wp::add_carry(c, c.r[3], 0x8u, 0);
    wp::record(c, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01086298;
    if (wp::cr_get(c, 2)) goto L_01086298;
    if (wp::cr_get(c, 2)) goto L_01086298;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086298;
    ea = c.r[31] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] + c.r[3];
    goto L_01086288;
L_01086238:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01086284;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086284;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086284;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108627c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108627cu;
    wp::call(c, c.ctr);
L_0108627c:
R_0108627c:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086284u;
    f_801c7a8c(c);
L_01086284:
R_01086284:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01086288:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086238;
    }
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086298u;
    f_801c7a8c(c);
L_01086298:
R_01086298:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010862a8;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10862a8u;
    f_801c7a8c(c);
L_010862a8:
R_010862a8:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x10862b4u;
    f_801c8404(c);
R_010862b4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_010862d0(wp::Cpu& c) {
    WP_ENTER(0x10862d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086320u: goto R_01086320;
        case 0x1086398u: goto R_01086398;
        case 0x10863a0u: goto R_010863a0;
        case 0x10863dcu: goto R_010863dc;
        case 0x10863e4u: goto R_010863e4;
        case 0x1086414u: goto R_01086414;
        case 0x1086450u: goto R_01086450;
        case 0x1086458u: goto R_01086458;
        case 0x1086490u: goto R_01086490;
        case 0x1086494u: goto R_01086494;
        case 0x1086518u: goto R_01086518;
        case 0x1086520u: goto R_01086520;
        case 0x1086560u: goto R_01086560;
        case 0x108659cu: goto R_0108659c;
        case 0x10865a4u: goto R_010865a4;
        case 0x10865e0u: goto R_010865e0;
        case 0x10865e8u: goto R_010865e8;
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
    if (!wp::cr_get(c, 0)) goto L_0108645c;
    ea = c.r[4] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086320u;
    wp::call(c, c.ctr);
R_01086320:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01086344;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086344:
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
    if (wp::cr_get(c, 2)) goto L_010863a0;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010863a0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086398;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086398u;
    wp::call(c, c.ctr);
L_01086398:
R_01086398:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10863a0u;
    f_801c7a8c(c);
L_010863a0:
R_010863a0:
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010863e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010863e4;
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010863dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10863dcu;
    wp::call(c, c.ctr);
L_010863dc:
R_010863dc:
    ea = c.r[1] + 0x2cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10863e4u;
    f_801c7a8c(c);
L_010863e4:
R_010863e4:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01086408;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086408:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x20u;
    c.lr = 0x1086414u;
    f_ms602_01086610(c);
R_01086414:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086520;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086520;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086450;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086450u;
    wp::call(c, c.ctr);
L_01086450:
R_01086450:
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086458u;
    f_801c7a8c(c);
R_01086458:
    goto L_01086520;
L_0108645c:
    c.r[3] = wp::divw(c.r[5], c.r[7]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] * c.r[7];
    c.r[29] = c.r[5] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01086494;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac7cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac7cu) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086490u;
    f_801cee24(c);
R_01086490:
    c.lr = 0x1086494u;
    f_801d3940(c);
L_01086494:
R_01086494:
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
    if (wp::cr_get(c, 2)) goto L_010864c4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010864c4:
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
    if (wp::cr_get(c, 2)) goto L_01086520;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086520;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086518;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086518u;
    wp::call(c, c.ctr);
L_01086518:
R_01086518:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086520u;
    f_801c7a8c(c);
L_01086520:
R_01086520:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01086544;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086544:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086560u;
    wp::call(c, c.ctr);
R_01086560:
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010865a4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010865a4;
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108659c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108659cu;
    wp::call(c, c.ctr);
L_0108659c:
R_0108659c:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10865a4u;
    f_801c7a8c(c);
L_010865a4:
R_010865a4:
    ea = c.r[1] + 0x34u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010865e8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010865e8;
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010865e0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10865e0u;
    wp::call(c, c.ctr);
L_010865e0:
R_010865e0:
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10865e8u;
    f_801c7a8c(c);
L_010865e8:
R_010865e8:
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

void f_ms602_01086610(wp::Cpu& c) {
    WP_ENTER(0x1086610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10866b8u: goto R_010866b8;
        case 0x10866bcu: goto R_010866bc;
        case 0x108671cu: goto R_0108671c;
        case 0x1086720u: goto R_01086720;
        case 0x10867e0u: goto R_010867e0;
        case 0x10867e4u: goto R_010867e4;
        case 0x10867ecu: goto R_010867ec;
        case 0x1086814u: goto R_01086814;
        case 0x1086818u: goto R_01086818;
        case 0x1086988u: goto R_01086988;
        case 0x1086990u: goto R_01086990;
        case 0x1086a04u: goto R_01086a04;
        case 0x1086a0cu: goto R_01086a0c;
        case 0x1086a20u: goto R_01086a20;
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
    if (!wp::cr_get(c, 0)) goto L_01086688;
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01086678;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086678;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086678:
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_01086a20;
L_01086688:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010866bc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10866b8u;
    f_801cee24(c);
R_010866b8:
    c.lr = 0x10866bcu;
    f_801d3940(c);
L_010866bc:
R_010866bc:
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
    if (!wp::cr_get(c, 1)) goto L_01086720;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108671cu;
    f_801cee24(c);
R_0108671c:
    c.lr = 0x1086720u;
    f_801d3940(c);
L_01086720:
R_01086720:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01086770;
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
    if (!wp::cr_get(c, 0)) goto L_01086764;
    c.r[3] = c.r[1] + 0x10u;
L_01086764:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010867b4;
L_01086770:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010867ac;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010867a0;
    c.r[3] = c.r[1] + 0x10u;
L_010867a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010867b4;
L_010867ac:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010867b4:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010867e4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10867e0u;
    f_801cee24(c);
R_010867e0:
    c.lr = 0x10867e4u;
    f_801d3940(c);
L_010867e4:
R_010867e4:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x10867ecu;
    f_801c79a4(c);
R_010867ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01086818;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2adf0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2adf0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086814u;
    f_801cee24(c);
R_01086814:
    c.lr = 0x1086818u;
    f_801d3940(c);
L_01086818:
R_01086818:
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
    if (wp::cr_get(c, 2)) goto L_01086864;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086864;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086864:
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
    if (!wp::cr_get(c, 1)) goto L_010868f4;
L_010868a8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010868d8;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010868d8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010868d8:
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
    goto L_010868a8;
    }
L_010868f4:
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
    goto L_01086990;
L_01086944:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01086990;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086990;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086990;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086988;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086988u;
    wp::call(c, c.ctr);
L_01086988:
R_01086988:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086990u;
    f_801c7a8c(c);
L_01086990:
R_01086990:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01086944;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01086a20;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a20;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_01086a10;
L_010869c0:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01086a0c;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a0c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086a0c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a04;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086a04u;
    wp::call(c, c.ctr);
L_01086a04:
R_01086a04:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086a0cu;
    f_801c7a8c(c);
L_01086a0c:
R_01086a0c:
    c.r[28] = c.r[28] + 0xffffffffu;
L_01086a10:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010869c0;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086a20u;
    f_801c7a8c(c);
L_01086a20:
R_01086a20:
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

void f_ms602_01086a40(wp::Cpu& c) {
    WP_ENTER(0x1086a40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086b6cu: goto R_01086b6c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    ea = c.r[7] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01086a80;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x40u;
    wp::wr8(ea, c.r[4]);
L_01086a80:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086a90;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x41u;
    wp::wr8(ea, c.r[4]);
L_01086a90:
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x38u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    if (wp::cr_get(c, 2)) goto L_01086ab4;
    ea = c.r[3] + 0x30u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01086b80;
L_01086ab4:
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
    if (!wp::cr_get(c, 2)) goto L_01086adc;
    ea = c.r[3] + 0x41u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086b80;
L_01086adc:
    ea = c.r[3] + 0x40u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    if (wp::cr_get(c, 2)) goto L_01086b30;
    ea = c.r[3] + 0x20u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01086b30;
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
    goto L_01086b58;
L_01086b30:
    ea = c.r[3] + 0x41u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086b58;
    ea = c.r[3] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[5] + c.r[4];
    wp::compare_signed(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_01086b58;
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x30u;
    wp::wr32(ea, c.r[4]);
L_01086b58:
    ea = c.r[3] + 0x30u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086b74;
    ea = c.r[3] + 0x3cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1086b6cu;
    f_80071fe0(c);
R_01086b6c:
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[0] = 0x1u;
L_01086b74:
    c.r[3] = 0x0u;
    ea = c.r[31] + 0x41u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[31] + 0x40u;
    wp::wr8(ea, c.r[3]);
L_01086b80:
    ea = c.r[31] + 0x28u;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ca0;
    ea = c.r[31] + 0x30u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ca0;
    ea = c.r[31] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.r[6] = 0x43300000u;
    c.r[5] = c.r[8] ^ 0x80000000u;
    c.r[3] = ((((g_ms602_bases[4] + 0x27b8u) + 0x8000u) >> 16) << 16);
    c.r[7] = c.r[4] + 0x1u;
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x27b8u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_01086c44;
    c.f[1] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[1] = c.f[1];
    c.f[0] = wp::round_single(c.f[2] - c.f[3]);
    c.ps1[0] = c.f[0];
    ea = c.r[31] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[31] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    goto L_01086c70;
L_01086c44:
    c.r[3] = ((((g_ms602_bases[4] + 0x27b0u) + 0x8000u) >> 16) << 16);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x27b0u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01086c70;
    ea = c.r[31] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[3]);
L_01086c70:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086ca0;
    c.r[4] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
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
L_01086ca0:
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[1] + 0x3cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_ms602_01086cc0(wp::Cpu& c) {
    WP_ENTER(0x1086cc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1086d20u: goto R_01086d20;
        case 0x1086d34u: goto R_01086d34;
        case 0x1086d54u: goto R_01086d54;
        case 0x1086d68u: goto R_01086d68;
        case 0x1086dc0u: goto R_01086dc0;
        case 0x1086e7cu: goto R_01086e7c;
        case 0x1086ea4u: goto R_01086ea4;
        case 0x1086ea8u: goto R_01086ea8;
        case 0x1086fbcu: goto R_01086fbc;
        case 0x1086fc4u: goto R_01086fc4;
        case 0x1086fd8u: goto R_01086fd8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_ms602_bases[5] + 0x2ad50u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad50u) & 0xFFFFu);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
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
    c.lr = 0x1086d20u;
    f_801c79a4(c);
R_01086d20:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01086db4;
    c.r[3] = 0x1cu;
    c.lr = 0x1086d34u;
    f_801c79a4(c);
R_01086d34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01086d94;
    c.r[4] = ((((g_ms602_bases[5] + 0x2ad10u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad10u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x180u;
    c.lr = 0x1086d54u;
    f_801c79a4(c);
R_01086d54:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086d68;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.lr = 0x1086d68u;
    f_ms602_010125a0(c);
L_01086d68:
R_01086d68:
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
L_01086d94:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = ((((g_ms602_bases[5] + 0x2acc0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2acc0u) & 0xFFFFu);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x8u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x9u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0xau;
    wp::wr8(ea, c.r[0]);
L_01086db4:
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = 0x44u;
    c.lr = 0x1086dc0u;
    f_801c79a4(c);
R_01086dc0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086e54;
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
L_01086e54:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[0], 0x80u);
    if (!wp::cr_get(c, 0)) goto L_01086fd8;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x400u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1086e7cu;
    f_801c79a4(c);
R_01086e7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01086ea8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ae0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1086ea4u;
    f_801cee24(c);
R_01086ea4:
    c.lr = 0x1086ea8u;
    f_801d3940(c);
L_01086ea8:
R_01086ea8:
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
    if (!wp::cr_get(c, 0)) goto L_01086f2c;
L_01086ee8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086f14;
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[7] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086f14;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01086f14:
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
    goto L_01086ee8;
    }
L_01086f2c:
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
    if (wp::cr_get(c, 2)) goto L_01086fd8;
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[5] + c.r[3];
    goto L_01086fc8;
L_01086f78:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01086fc4;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086fc4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01086fc4;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01086fbc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1086fbcu;
    wp::call(c, c.ctr);
L_01086fbc:
R_01086fbc:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086fc4u;
    f_801c7a8c(c);
L_01086fc4:
R_01086fc4:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01086fc8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01086f78;
    }
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1086fd8u;
    f_801c7a8c(c);
L_01086fd8:
R_01086fd8:
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

void f_ms602_01087000(wp::Cpu& c) {
    WP_ENTER(0x1087000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087014u: goto R_01087014;
        case 0x108703cu: goto R_0108703c;
        case 0x1087064u: goto R_01087064;
        case 0x10870dcu: goto R_010870dc;
        case 0x10870e4u: goto R_010870e4;
        case 0x10870f8u: goto R_010870f8;
        case 0x1087170u: goto R_01087170;
        case 0x1087178u: goto R_01087178;
        case 0x108718cu: goto R_0108718c;
        case 0x10871d0u: goto R_010871d0;
        case 0x10871d8u: goto R_010871d8;
        case 0x10871e8u: goto R_010871e8;
        case 0x10871f4u: goto R_010871f4;
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
    c.lr = 0x1087014u;
    f_801c83b8(c);
R_01087014:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    c.r[31] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_010871e8;
    c.r[3] = wp::add_carry(c, c.r[3], 0x28u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108703c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108703c;
    c.lr = 0x108703cu;
    f_801c7a8c(c);
L_0108703c:
R_0108703c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x24u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01087064;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087064;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087064u;
    wp::call(c, c.ctr);
L_01087064:
R_01087064:
    c.r[29] = wp::add_carry(c, c.r[30], 0x18u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010870f8;
    if (wp::cr_get(c, 2)) goto L_010870f8;
    if (wp::cr_get(c, 2)) goto L_010870f8;
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010870f8;
    ea = c.r[29] + 0x4u;
    c.r[27] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[27], 3) & 0xfffffff8u;
    c.r[0] = c.r[27] - c.r[27];
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[4] + c.r[3];
    goto L_010870e8;
L_01087098:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_010870e4;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010870e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010870e4;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010870dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10870dcu;
    wp::call(c, c.ctr);
L_010870dc:
R_010870dc:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10870e4u;
    f_801c7a8c(c);
L_010870e4:
R_010870e4:
    c.r[27] = c.r[27] + 0xffffffffu;
L_010870e8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087098;
    }
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10870f8u;
    f_801c7a8c(c);
L_010870f8:
R_010870f8:
    c.r[27] = wp::add_carry(c, c.r[30], 0xcu, 0);
    wp::record(c, c.r[27]);
    if (wp::cr_get(c, 2)) goto L_0108718c;
    if (wp::cr_get(c, 2)) goto L_0108718c;
    if (wp::cr_get(c, 2)) goto L_0108718c;
    ea = c.r[27] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108718c;
    ea = c.r[27] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[28] = c.r[4] + c.r[3];
    goto L_0108717c;
L_0108712c:
    c.r[28] = wp::add_carry(c, c.r[28], 0xfffffff8u, 0);
    wp::record(c, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01087178;
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087178;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087178;
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087170;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087170u;
    wp::call(c, c.ctr);
L_01087170:
R_01087170:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087178u;
    f_801c7a8c(c);
L_01087178:
R_01087178:
    c.r[29] = c.r[29] + 0xffffffffu;
L_0108717c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0108712c;
    }
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108718cu;
    f_801c7a8c(c);
L_0108718c:
R_0108718c:
    c.r[0] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010871d8;
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010871d8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010871d8;
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010871d0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10871d0u;
    wp::call(c, c.ctr);
L_010871d0:
R_010871d0:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10871d8u;
    f_801c7a8c(c);
L_010871d8:
R_010871d8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010871e8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10871e8u;
    f_801c7a8c(c);
L_010871e8:
R_010871e8:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10871f4u;
    f_801c8404(c);
R_010871f4:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01087210(wp::Cpu& c) {
    WP_ENTER(0x1087210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10872b8u: goto R_010872b8;
        case 0x10872bcu: goto R_010872bc;
        case 0x108731cu: goto R_0108731c;
        case 0x1087320u: goto R_01087320;
        case 0x10873e0u: goto R_010873e0;
        case 0x10873e4u: goto R_010873e4;
        case 0x10873ecu: goto R_010873ec;
        case 0x1087414u: goto R_01087414;
        case 0x1087418u: goto R_01087418;
        case 0x1087588u: goto R_01087588;
        case 0x1087590u: goto R_01087590;
        case 0x1087604u: goto R_01087604;
        case 0x108760cu: goto R_0108760c;
        case 0x1087620u: goto R_01087620;
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
    if (!wp::cr_get(c, 0)) goto L_01087288;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_01087278;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087278;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087278:
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    goto L_01087620;
L_01087288:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010872bc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10872b8u;
    f_801cee24(c);
R_010872b8:
    c.lr = 0x10872bcu;
    f_801d3940(c);
L_010872bc:
R_010872bc:
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
    if (!wp::cr_get(c, 1)) goto L_01087320;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108731cu;
    f_801cee24(c);
R_0108731c:
    c.lr = 0x1087320u;
    f_801d3940(c);
L_01087320:
R_01087320:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01087370;
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
    if (!wp::cr_get(c, 0)) goto L_01087364;
    c.r[3] = c.r[1] + 0x10u;
L_01087364:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010873b4;
L_01087370:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010873ac;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010873a0;
    c.r[3] = c.r[1] + 0x10u;
L_010873a0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010873b4;
L_010873ac:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010873b4:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_010873e4;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10873e0u;
    f_801cee24(c);
R_010873e0:
    c.lr = 0x10873e4u;
    f_801d3940(c);
L_010873e4:
R_010873e4:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x10873ecu;
    f_801c79a4(c);
R_010873ec:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01087418;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ae0cu) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae0cu) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1087414u;
    f_801cee24(c);
R_01087414:
    c.lr = 0x1087418u;
    f_801d3940(c);
L_01087418:
R_01087418:
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
    if (wp::cr_get(c, 2)) goto L_01087464;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087464;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087464:
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
    if (!wp::cr_get(c, 1)) goto L_010874f4;
L_010874a8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_010874d8;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010874d8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010874d8:
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
    goto L_010874a8;
    }
L_010874f4:
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
    goto L_01087590;
L_01087544:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01087590;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087590;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087590;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087588;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087588u;
    wp::call(c, c.ctr);
L_01087588:
R_01087588:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087590u;
    f_801c7a8c(c);
L_01087590:
R_01087590:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01087544;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087620;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087620;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_01087610;
L_010875c0:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_0108760c;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108760c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108760c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087604;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087604u;
    wp::call(c, c.ctr);
L_01087604:
R_01087604:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108760cu;
    f_801c7a8c(c);
L_0108760c:
R_0108760c:
    c.r[28] = c.r[28] + 0xffffffffu;
L_01087610:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010875c0;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087620u;
    f_801c7a8c(c);
L_01087620:
R_01087620:
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

void f_ms602_01087640(wp::Cpu& c) {
    WP_ENTER(0x1087640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10876e8u: goto R_010876e8;
        case 0x10876ecu: goto R_010876ec;
        case 0x108774cu: goto R_0108774c;
        case 0x1087750u: goto R_01087750;
        case 0x1087810u: goto R_01087810;
        case 0x1087814u: goto R_01087814;
        case 0x108781cu: goto R_0108781c;
        case 0x1087844u: goto R_01087844;
        case 0x1087848u: goto R_01087848;
        case 0x10879b8u: goto R_010879b8;
        case 0x10879c0u: goto R_010879c0;
        case 0x1087a34u: goto R_01087a34;
        case 0x1087a3cu: goto R_01087a3c;
        case 0x1087a50u: goto R_01087a50;
        case 0x1087a68u: goto R_01087a68;
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
    if (!wp::cr_get(c, 0)) goto L_010876b8;
    ea = c.r[3] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[5] + c.r[0];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_010876a8;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010876a8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010876a8:
    ea = c.r[3] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    goto L_01087a50;
L_010876b8:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_010876ec;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10876e8u;
    f_801cee24(c);
R_010876e8:
    c.lr = 0x10876ecu;
    f_801d3940(c);
L_010876ec:
R_010876ec:
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
    if (!wp::cr_get(c, 1)) goto L_01087750;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108774cu;
    f_801cee24(c);
R_0108774c:
    c.lr = 0x1087750u;
    f_801d3940(c);
L_01087750:
R_01087750:
    c.r[3] = 0xaab0000u;
    c.r[0] = c.r[3] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010877a0;
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
    if (!wp::cr_get(c, 0)) goto L_01087794;
    c.r[3] = c.r[1] + 0x10u;
L_01087794:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010877e4;
L_010877a0:
    c.r[3] = 0x15550000u;
    c.r[0] = c.r[3] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010877dc;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010877d0;
    c.r[3] = c.r[1] + 0x10u;
L_010877d0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010877e4;
L_010877dc:
    c.r[3] = 0x20000000u;
    c.r[31] = c.r[3] + 0xffffffffu;
L_010877e4:
    c.r[3] = 0x20000000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01087814;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1087810u;
    f_801cee24(c);
R_01087810:
    c.lr = 0x1087814u;
    f_801d3940(c);
L_01087814:
R_01087814:
    c.r[3] = wp::rotl(c.r[31], 3) & 0xfffffff8u;
    c.lr = 0x108781cu;
    f_801c79a4(c);
R_0108781c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_01087848;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2adb8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2adb8u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1087844u;
    f_801cee24(c);
R_01087844:
    c.lr = 0x1087848u;
    f_801d3940(c);
L_01087848:
R_01087848:
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
    if (wp::cr_get(c, 2)) goto L_01087894;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087894;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087894:
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
    if (!wp::cr_get(c, 1)) goto L_01087924;
L_010878d8:
    c.r[5] = wp::add_carry(c, c.r[5], 0xfffffff8u, 0);
    wp::record(c, c.r[5]);
    c.r[6] = c.r[6] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01087908;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087908;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087908:
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
    goto L_010878d8;
    }
L_01087924:
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
    goto L_010879c0;
L_01087974:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_010879c0;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010879c0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010879c0;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010879b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10879b8u;
    wp::call(c, c.ctr);
L_010879b8:
R_010879b8:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10879c0u;
    f_801c7a8c(c);
L_010879c0:
R_010879c0:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01087974;
    }
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01087a50;
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a50;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[28]);
    goto L_01087a40;
L_010879f0:
    c.r[29] = wp::add_carry(c, c.r[29], 0xfffffff8u, 0);
    wp::record(c, c.r[29]);
    if (wp::cr_get(c, 2)) goto L_01087a3c;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a3c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087a3c;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087a34;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087a34u;
    wp::call(c, c.ctr);
L_01087a34:
R_01087a34:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087a3cu;
    f_801c7a8c(c);
L_01087a3c:
R_01087a3c:
    c.r[28] = c.r[28] + 0xffffffffu;
L_01087a40:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010879f0;
    }
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087a50u;
    f_801c7a8c(c);
L_01087a50:
R_01087a50:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087a68u;
    wp::call(c, c.ctr);
R_01087a68:
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

void f_ms602_01087a90(wp::Cpu& c) {
    WP_ENTER(0x1087a90u);
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

void f_ms602_01087ab0(wp::Cpu& c) {
    WP_ENTER(0x1087ab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087b58u: goto R_01087b58;
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
    goto L_01087ae4;
L_01087ad8:
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + 0x8u;
    ea = c.r[4] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
L_01087ae4:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[4] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087ad8;
    }
    c.r[4] = ((((g_ms602_bases[4] + 0x27c0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x27c0u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[0] * wp::force25(c.f[1]));
    c.ps1[0] = c.f[0];
    c.f[31] = wp::convert_to_int(c.f[0], true);
    goto L_01087b5c;
L_01087b14:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x14u;
    goto L_01087b38;
L_01087b28:
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0xb4u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_01087b38:
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087b28;
    }
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087b58u;
    wp::call(c, c.ctr);
R_01087b58:
    c.r[30] = c.r[30] + 0x8u;
L_01087b5c:
    ea = c.r[31] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087b14;
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

void f_ms602_01087ba0(wp::Cpu& c) {
    WP_ENTER(0x1087ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[7] = ((((g_ms602_bases[4] + 0x27c4u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + 0x4u;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    ea = c.r[5] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    ea = c.r[6] + 0x4u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[7] + wp::sign_extend16((g_ms602_bases[4] + 0x27c4u) & 0xFFFFu);
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

void f_ms602_01087c10(wp::Cpu& c) {
    WP_ENTER(0x1087c10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087ca0u: goto R_01087ca0;
        case 0x1087ca8u: goto R_01087ca8;
        case 0x1087cd8u: goto R_01087cd8;
        case 0x1087d14u: goto R_01087d14;
        case 0x1087d1cu: goto R_01087d1c;
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
    if (wp::cr_get(c, 2)) goto L_01087c48;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087c48:
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
    if (wp::cr_get(c, 2)) goto L_01087ca8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087ca8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087ca0;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ca0u;
    wp::call(c, c.ctr);
L_01087ca0:
R_01087ca0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087ca8u;
    f_801c7a8c(c);
L_01087ca8:
R_01087ca8:
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087ccc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01087ccc:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x1087cd8u;
    f_ms602_01085d40(c);
R_01087cd8:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087d1c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01087d1c;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087d14;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087d14u;
    wp::call(c, c.ctr);
L_01087d14:
R_01087d14:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1087d1cu;
    f_801c7a8c(c);
L_01087d1c:
R_01087d1c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01087d30(wp::Cpu& c) {
    WP_ENTER(0x1087d30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1087d44u: goto R_01087d44;
        case 0x1087da8u: goto R_01087da8;
        case 0x1087e2cu: goto R_01087e2c;
        case 0x1087e44u: goto R_01087e44;
        case 0x1087e58u: goto R_01087e58;
        case 0x1087e74u: goto R_01087e74;
        case 0x1087e8cu: goto R_01087e8c;
        case 0x1087ea0u: goto R_01087ea0;
        case 0x1087eacu: goto R_01087eac;
        case 0x1087ef4u: goto R_01087ef4;
        case 0x1087f1cu: goto R_01087f1c;
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
    c.lr = 0x1087d44u;
    f_801c83b8(c);
R_01087d44:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[29] = 0x0u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[4] = c.r[5] + c.r[0];
    goto L_01087db4;
L_01087d60:
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087d78;
    c.r[0] = 0x0u;
    goto L_01087d90;
L_01087d78:
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01087d8c;
    ea = c.r[3] + 0xdu;
    c.r[0] = wp::rd8(ea);
    goto L_01087d90;
L_01087d8c:
    c.r[0] = 0x0u;
L_01087d90:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01087dac;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087da8u;
    wp::call(c, c.ctr);
R_01087da8:
    goto L_01087dbc;
L_01087dac:
    c.r[5] = c.r[5] + 0x8u;
    c.r[29] = c.r[29] + 0x1u;
L_01087db4:
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087d60;
    }
L_01087dbc:
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
    if (wp::cr_get(c, 1)) goto L_01087de8;
    ea = c.r[3] + 0x30u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01087de8;
    c.r[4] = 0x0u;
L_01087de8:
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
    if (wp::cr_get(c, 0)) goto L_01087e14;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01087e18;
L_01087e14:
    c.r[29] = 0x1u;
L_01087e18:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e2cu;
    wp::call(c, c.ctr);
R_01087e2c:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e44u;
    wp::call(c, c.ctr);
R_01087e44:
    ea = c.r[31] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e58u;
    wp::call(c, c.ctr);
R_01087e58:
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
    c.lr = 0x1087e74u;
    wp::call(c, c.ctr);
R_01087e74:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087e8cu;
    wp::call(c, c.ctr);
R_01087e8c:
    ea = c.r[31] + 0x10u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.lr = 0x1087ea0u;
    f_ms602_01086a40(c);
R_01087ea0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1087eacu;
    f_ms602_01087f30(c);
R_01087eac:
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
    goto L_01087efc;
L_01087ed0:
    wp::compare_signed(c, 0, c.r[28], c.r[29]);
    if (wp::cr_get(c, 0)) goto L_01087ef4;
    wp::compare_signed(c, 0, c.r[28], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01087ef4;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1087ef4u;
    wp::call(c, c.ctr);
L_01087ef4:
R_01087ef4:
    c.r[27] = c.r[27] + 0x8u;
    c.r[28] = c.r[28] + 0x1u;
L_01087efc:
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01087ed0;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1087f1cu;
    f_801c8404(c);
R_01087f1c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01087f30(wp::Cpu& c) {
    WP_ENTER(0x1087f30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[7] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[7] = c.r[7] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_01087fb4;
    c.r[31] = c.r[31] + 0x1u;
L_01087fb4:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01087fc4;
    c.r[31] = c.r[0] | c.r[0];
L_01087fc4:
    ea = c.r[6] + 0x30u;
    c.r[0] = wp::rd32(ea);
    c.r[10] = c.r[31] + 0xffffffffu;
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01087fdc;
    c.r[10] = c.r[12] | c.r[12];
L_01087fdc:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[9] = c.r[12] | c.r[12];
    if (!wp::cr_get(c, 1)) goto L_01087fec;
    c.r[9] = c.r[31] + 0xffffffffu;
L_01087fec:
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
    goto L_010880c8;
    c.r[0] = c.r[0] | 0x0u;
L_01088008:
    wp::compare_signed(c, 0, c.r[30], c.r[12]);
    if (wp::cr_get(c, 0)) goto L_010880b0;
    wp::compare_signed(c, 0, c.r[30], c.r[31]);
    if (!wp::cr_get(c, 0)) goto L_010880b0;
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
    if (wp::cr_get(c, 2)) goto L_010880a4;
    wp::compare_signed(c, 0, c.r[30], c.r[9]);
    if (!wp::cr_get(c, 2)) goto L_01088078;
    ea = c.r[3] + 0x28u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[7] + 0x38u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[2]));
    goto L_010880c0;
L_01088078:
    wp::compare_signed(c, 0, c.r[30], c.r[10]);
    if (!wp::cr_get(c, 2)) goto L_01088098;
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
    goto L_010880c0;
L_01088098:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_010880c0;
L_010880a4:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    goto L_010880c0;
L_010880b0:
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[11] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010880c0:
    c.r[11] = c.r[11] + 0x8u;
    c.r[30] = c.r[30] + 0x1u;
L_010880c8:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[5] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[11], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088008;
    }
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_010880f0(wp::Cpu& c) {
    WP_ENTER(0x10880f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088104u: goto R_01088104;
        case 0x108812cu: goto R_0108812c;
        case 0x108815cu: goto R_0108815c;
        case 0x10881a4u: goto R_010881a4;
        case 0x10881a8u: goto R_010881a8;
        case 0x10881b0u: goto R_010881b0;
        case 0x10881d8u: goto R_010881d8;
        case 0x10881dcu: goto R_010881dc;
        case 0x10882ecu: goto R_010882ec;
        case 0x10882f4u: goto R_010882f4;
        case 0x1088308u: goto R_01088308;
        case 0x1088344u: goto R_01088344;
        case 0x1088350u: goto R_01088350;
        case 0x1088360u: goto R_01088360;
        case 0x1088370u: goto R_01088370;
        case 0x1088384u: goto R_01088384;
        case 0x1088398u: goto R_01088398;
        case 0x10883b8u: goto R_010883b8;
        case 0x108843cu: goto R_0108843c;
        case 0x1088440u: goto R_01088440;
        case 0x108848cu: goto R_0108848c;
        case 0x1088490u: goto R_01088490;
        case 0x1088530u: goto R_01088530;
        case 0x1088534u: goto R_01088534;
        case 0x108853cu: goto R_0108853c;
        case 0x1088558u: goto R_01088558;
        case 0x108855cu: goto R_0108855c;
        case 0x10886c8u: goto R_010886c8;
        case 0x10886d0u: goto R_010886d0;
        case 0x1088740u: goto R_01088740;
        case 0x1088748u: goto R_01088748;
        case 0x108875cu: goto R_0108875c;
        case 0x1088774u: goto R_01088774;
        case 0x108878cu: goto R_0108878c;
        case 0x10887a8u: goto R_010887a8;
        case 0x10887b0u: goto R_010887b0;
        case 0x10887b4u: goto R_010887b4;
        case 0x10887bcu: goto R_010887bc;
        case 0x10887f8u: goto R_010887f8;
        case 0x1088800u: goto R_01088800;
        case 0x1088808u: goto R_01088808;
        case 0x1088844u: goto R_01088844;
        case 0x1088880u: goto R_01088880;
        case 0x1088888u: goto R_01088888;
        case 0x1088894u: goto R_01088894;
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
    c.lr = 0x1088104u;
    f_801c8390(c);
R_01088104:
    c.r[6] = 0x10000u;
    c.r[17] = c.r[5] | c.r[5];
    c.r[0] = c.r[6] + 0xffff8000u;
    c.r[19] = c.r[4] | c.r[4];
    c.r[30] = c.r[3] | c.r[3];
    c.r[5] = 0x10000u;
    c.r[4] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x108812cu;
    f_80069af0(c);
R_0108812c:
    c.r[3] = ((((g_ms602_bases[5] + 0x2ad40u) + 0x8000u) >> 16) << 16);
    c.r[18] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad40u) & 0xFFFFu);
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
    c.lr = 0x108815cu;
    f_80007570(c);
R_0108815c:
    ea = c.r[30] + 0x1c0u;
    c.r[0] = wp::rd32(ea);
    c.r[17] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01088308;
    c.r[4] = 0x20000000u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[18]);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[18]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[18]);
    if (!wp::cr_get(c, 1)) goto L_010881a8;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10881a4u;
    f_801cee24(c);
R_010881a4:
    c.lr = 0x10881a8u;
    f_801d3940(c);
L_010881a8:
R_010881a8:
    c.r[3] = wp::rotl(c.r[17], 3) & 0xfffffff8u;
    c.lr = 0x10881b0u;
    f_801c79a4(c);
R_010881b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_010881dc;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[5] + 0x2add4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2add4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10881d8u;
    f_801cee24(c);
R_010881d8:
    c.lr = 0x10881dcu;
    f_801d3940(c);
L_010881dc:
R_010881dc:
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
    if (!wp::cr_get(c, 0)) goto L_0108825c;
L_01088218:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088244;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088244;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088244:
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
    goto L_01088218;
    }
L_0108825c:
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
    if (wp::cr_get(c, 2)) goto L_01088308;
    c.r[3] = wp::rotl(c.r[18], 3) & 0xfffffff8u;
    c.r[0] = c.r[18] - c.r[18];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.r[17] = c.r[5] + c.r[3];
    goto L_010882f8;
L_010882a8:
    c.r[17] = wp::add_carry(c, c.r[17], 0xfffffff8u, 0);
    wp::record(c, c.r[17]);
    if (wp::cr_get(c, 2)) goto L_010882f4;
    ea = c.r[17] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010882f4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010882f4;
    ea = c.r[17] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010882ec;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10882ecu;
    wp::call(c, c.ctr);
L_010882ec:
R_010882ec:
    ea = c.r[17] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10882f4u;
    f_801c7a8c(c);
L_010882f4:
R_010882f4:
    c.r[18] = c.r[18] + 0xffffffffu;
L_010882f8:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010882a8;
    }
    ea = c.r[1] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088308u;
    f_801c7a8c(c);
L_01088308:
R_01088308:
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[17] = c.r[1] + 0x34u;
    c.r[31] = 0x0u;
    c.r[27] = 0xcccd0000u;
    c.r[24] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[19] = 0x10000u;
    c.r[21] = 0x1u;
    c.r[20] = 0x0u;
    c.r[23] = ((((g_ms602_bases[5] + 0x2ac68u) + 0x8000u) >> 16) << 16);
    c.r[22] = 0x20000000u;
    c.r[26] = 0xaab0000u;
    c.r[28] = 0x15550000u;
    c.r[29] = ((((g_ms602_bases[5] + 0x2add4u) + 0x8000u) >> 16) << 16);
    goto L_01088804;
L_01088340:
    c.lr = 0x1088344u;
    f_8000dd70(c);
R_01088344:
    c.r[18] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088350u;
    f_8000fc20(c);
R_01088350:
    wp::compare_signed(c, 0, c.r[3], c.r[18]);
    if (!wp::cr_get(c, 0)) goto L_01088800;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088360u;
    f_8000fc40(c);
R_01088360:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088800;
    c.r[3] = 0x214u;
    c.lr = 0x1088370u;
    f_801c79a4(c);
R_01088370:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108839c;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1088384u;
    f_8000fc20(c);
R_01088384:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[18] | c.r[18];
    c.r[6] = c.r[19] + 0xffff8000u;
    c.r[5] = 0x28u;
    c.lr = 0x1088398u;
    f_ms602_01013f50(c);
R_01088398:
    c.r[18] = c.r[3] | c.r[3];
L_0108839c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[20]);
    if (wp::cr_get(c, 2)) goto L_010883c8;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[18]);
    c.r[3] = 0x4u;
    c.lr = 0x10883b8u;
    f_801c79a4(c);
R_010883b8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010883c4;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[21]);
L_010883c4:
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[3]);
L_010883c8:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1c0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0108841c;
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + c.r[0];
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108840c;
    ea = c.r[1] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0108840c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108840c:
    ea = c.r[30] + 0x1bcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    goto L_0108875c;
L_0108841c:
    c.r[0] = c.r[22] + 0xffffffffu;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01088440;
    c.r[4] = c.r[23] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108843cu;
    f_801cee24(c);
R_0108843c:
    c.lr = 0x1088440u;
    f_801d3940(c);
L_01088440:
R_01088440:
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
    if (!wp::cr_get(c, 1)) goto L_01088490;
    c.r[4] = c.r[23] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108848cu;
    f_801cee24(c);
R_0108848c:
    c.lr = 0x1088490u;
    f_801d3940(c);
L_01088490:
R_01088490:
    c.r[0] = c.r[26] + 0xffffaaaau;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010884d8;
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
    if (!wp::cr_get(c, 0)) goto L_010884cc;
    c.r[3] = c.r[1] + 0x10u;
L_010884cc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[25] + c.r[0];
    goto L_01088514;
L_010884d8:
    c.r[0] = c.r[28] + 0x5554u;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_01088510;
    c.r[3] = c.r[25] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_01088504;
    c.r[3] = c.r[1] + 0x10u;
L_01088504:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[25] = c.r[25] + c.r[0];
    goto L_01088514;
L_01088510:
    c.r[25] = c.r[22] + 0xffffffffu;
L_01088514:
    c.r[0] = c.r[22] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01088534;
    c.r[4] = c.r[23] + wp::sign_extend16((g_ms602_bases[5] + 0x2ac68u) & 0xFFFFu);
    c.r[3] = c.r[24] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1088530u;
    f_801cee24(c);
R_01088530:
    c.lr = 0x1088534u;
    f_801d3940(c);
L_01088534:
R_01088534:
    c.r[3] = wp::rotl(c.r[25], 3) & 0xfffffff8u;
    c.lr = 0x108853cu;
    f_801c79a4(c);
R_0108853c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0108855c;
    c.r[3] = c.r[24] + 0xa0u;
    c.r[4] = c.r[29] + wp::sign_extend16((g_ms602_bases[5] + 0x2add4u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1088558u;
    f_801cee24(c);
R_01088558:
    c.lr = 0x108855cu;
    f_801d3940(c);
L_0108855c:
R_0108855c:
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
    if (wp::cr_get(c, 2)) goto L_010885a8;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_010885a8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010885a8:
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
    if (!wp::cr_get(c, 1)) goto L_0108863c;
    c.r[0] = c.r[0] | 0x0u;
L_010885f0:
    c.r[6] = wp::add_carry(c, c.r[6], 0xfffffff8u, 0);
    wp::record(c, c.r[6]);
    c.r[3] = c.r[3] + 0xfffffff8u;
    if (wp::cr_get(c, 2)) goto L_01088620;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088620;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088620:
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
    goto L_010885f0;
    }
L_0108863c:
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
    goto L_010886d0;
L_01088684:
    c.r[18] = wp::add_carry(c, c.r[18], 0xfffffff8u, 0);
    wp::record(c, c.r[18]);
    if (wp::cr_get(c, 2)) goto L_010886d0;
    ea = c.r[18] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886d0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010886d0;
    ea = c.r[18] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010886c8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10886c8u;
    wp::call(c, c.ctr);
L_010886c8:
R_010886c8:
    ea = c.r[18] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10886d0u;
    f_801c7a8c(c);
L_010886d0:
R_010886d0:
    wp::compare_unsigned(c, 0, c.r[18], c.r[25]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_01088684;
    }
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[20]);
    if (wp::cr_get(c, 2)) goto L_0108875c;
    ea = c.r[1] + 0x34u;
    c.r[25] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108875c;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[20]);
    c.r[18] = 0x0u;
    goto L_0108874c;
L_010886fc:
    c.r[25] = wp::add_carry(c, c.r[25], 0xfffffff8u, 0);
    wp::record(c, c.r[25]);
    if (wp::cr_get(c, 2)) goto L_01088748;
    ea = c.r[25] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088748;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088748;
    ea = c.r[25] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088740;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088740u;
    wp::call(c, c.ctr);
L_01088740:
R_01088740:
    ea = c.r[25] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088748u;
    f_801c7a8c(c);
L_01088748:
R_01088748:
    c.r[18] = c.r[18] + 0xffffffffu;
L_0108874c:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010886fc;
    }
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108875cu;
    f_801c7a8c(c);
L_0108875c:
R_0108875c:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088774u;
    wp::call(c, c.ctr);
R_01088774:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108878cu;
    wp::call(c, c.ctr);
R_0108878c:
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[31]);
    c.r[4] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10887a8u;
    wp::call(c, c.ctr);
R_010887a8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10887b0u;
    f_8000fc20(c);
R_010887b0:
    c.lr = 0x10887b4u;
    f_800699d0(c);
R_010887b4:
    c.r[4] = 0x1u;
    c.lr = 0x10887bcu;
    f_80066e70(c);
R_010887bc:
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088800;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088800;
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010887f8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10887f8u;
    wp::call(c, c.ctr);
L_010887f8:
R_010887f8:
    ea = c.r[1] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088800u;
    f_801c7a8c(c);
L_01088800:
R_01088800:
    c.r[31] = c.r[31] + 0x1u;
L_01088804:
    c.lr = 0x1088808u;
    f_80007570(c);
R_01088808:
    wp::compare_signed(c, 0, c.r[31], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01088340;
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
    if (wp::cr_get(c, 2)) goto L_01088838;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088838:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.lr = 0x1088844u;
    f_ms602_01087c10(c);
R_01088844:
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088888;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088888;
    ea = c.r[1] + 0x18u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088880;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088880u;
    wp::call(c, c.ctr);
L_01088880:
R_01088880:
    ea = c.r[1] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088888u;
    f_801c7a8c(c);
L_01088888:
R_01088888:
    c.r[11] = c.r[1] + 0x90u;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1088894u;
    f_801c83dc(c);
R_01088894:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_ms602_010888b0(wp::Cpu& c) {
    WP_ENTER(0x10888b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10888d8u: goto R_010888d8;
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
    if (wp::cr_get(c, 2)) goto L_010888d8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010888d8;
    c.lr = 0x10888d8u;
    f_801c7a8c(c);
L_010888d8:
R_010888d8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_010888f0(wp::Cpu& c) {
    WP_ENTER(0x10888f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088904u: goto R_01088904;
        case 0x1088928u: goto R_01088928;
        case 0x1088950u: goto R_01088950;
        case 0x1088978u: goto R_01088978;
        case 0x10889a0u: goto R_010889a0;
        case 0x1088a18u: goto R_01088a18;
        case 0x1088a20u: goto R_01088a20;
        case 0x1088a34u: goto R_01088a34;
        case 0x1088a40u: goto R_01088a40;
        case 0x1088a50u: goto R_01088a50;
        case 0x1088a5cu: goto R_01088a5c;
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
    c.lr = 0x1088904u;
    f_801c83b8(c);
R_01088904:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 2)) goto L_01088a50;
    c.r[4] = ((((g_ms602_bases[5] + 0x2ad40u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ad40u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = 0x0u;
    c.lr = 0x1088928u;
    f_80066dd0(c);
R_01088928:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1ccu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088950;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088950;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088950u;
    wp::call(c, c.ctr);
L_01088950:
R_01088950:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1c8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088978;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088978;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088978u;
    wp::call(c, c.ctr);
L_01088978:
R_01088978:
    c.r[3] = wp::add_carry(c, c.r[27], 0x1c4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010889a0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
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
    c.r[31] = wp::add_carry(c, c.r[27], 0x1b8u, 0);
    wp::record(c, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_01088a34;
    if (wp::cr_get(c, 2)) goto L_01088a34;
    if (wp::cr_get(c, 2)) goto L_01088a34;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088a34;
    ea = c.r[31] + 0x4u;
    c.r[29] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[29], 3) & 0xfffffff8u;
    c.r[0] = c.r[29] - c.r[29];
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] + c.r[3];
    goto L_01088a24;
L_010889d4:
    c.r[30] = wp::add_carry(c, c.r[30], 0xfffffff8u, 0);
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_01088a20;
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088a20;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088a20;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088a18;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088a18u;
    wp::call(c, c.ctr);
L_01088a18:
R_01088a18:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088a20u;
    f_801c7a8c(c);
L_01088a20:
R_01088a20:
    c.r[29] = c.r[29] + 0xffffffffu;
L_01088a24:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010889d4;
    }
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088a34u;
    f_801c7a8c(c);
L_01088a34:
R_01088a34:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x0u;
    c.lr = 0x1088a40u;
    f_80069c40(c);
R_01088a40:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01088a50;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1088a50u;
    f_801c7a8c(c);
L_01088a50:
R_01088a50:
    c.r[11] = c.r[1] + 0x20u;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1088a5cu;
    f_801c8404(c);
R_01088a5c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01088a70(wp::Cpu& c) {
    WP_ENTER(0x1088a70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    return;
}

void f_ms602_01088a80(wp::Cpu& c) {
    WP_ENTER(0x1088a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088aa4u: goto R_01088aa4;
        case 0x1088ac8u: goto R_01088ac8;
        case 0x1088af4u: goto R_01088af4;
        case 0x1088b24u: goto R_01088b24;
        case 0x1088b44u: goto R_01088b44;
        case 0x1088be0u: goto R_01088be0;
        case 0x1088be8u: goto R_01088be8;
        case 0x1088becu: goto R_01088bec;
        case 0x1088c30u: goto R_01088c30;
        case 0x1088c68u: goto R_01088c68;
        case 0x1088c9cu: goto R_01088c9c;
        case 0x1088cb4u: goto R_01088cb4;
        case 0x1088d00u: goto R_01088d00;
        case 0x1088d30u: goto R_01088d30;
        case 0x1088d50u: goto R_01088d50;
        case 0x1088decu: goto R_01088dec;
        case 0x1088df4u: goto R_01088df4;
        case 0x1088df8u: goto R_01088df8;
        case 0x1088e20u: goto R_01088e20;
        case 0x1088e3cu: goto R_01088e3c;
        case 0x1088e5cu: goto R_01088e5c;
        case 0x1088e94u: goto R_01088e94;
        case 0x1088eacu: goto R_01088eac;
        case 0x1088ed0u: goto R_01088ed0;
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
    c.lr = 0x1088aa4u;
    f_801c83a8(c);
R_01088aa4:
    c.r[4] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x43300000u;
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = 0x1u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1088ac8u;
    f_ms602_01087ab0(c);
R_01088ac8:
    c.r[3] = ((((g_ms602_bases[4] + 0x27b8u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x1u;
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x27b8u) & 0xFFFFu);
    c.f[30] = wp::rdf64(ea);
    goto L_01088bec;
L_01088ad8:
    ea = c.r[30] + 0x1b8u;
    c.r[24] = wp::rd32(ea);
    goto L_01088af8;
L_01088ae0:
    ea = c.r[24] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088af4u;
    wp::call(c, c.ctr);
R_01088af4:
    c.r[24] = c.r[24] + 0x8u;
L_01088af8:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088ae0;
    }
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b24u;
    wp::call(c, c.ctr);
R_01088b24:
    ea = c.r[30] + 0x1c4u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[26] = wp::rd32(ea);
    goto L_01088b48;
L_01088b30:
    ea = c.r[26] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088b44u;
    wp::call(c, c.ctr);
R_01088b44:
    c.r[26] = c.r[26] + 0x8u;
L_01088b48:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[26], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088b30;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088be8;
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088bc8;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01088b98;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01088b98:
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
L_01088bc8:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x1c8u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088be0u;
    wp::call(c, c.ctr);
R_01088be0:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1088be8u;
    f_ms602_01087ab0(c);
L_01088be8:
R_01088be8:
    c.lr = 0x1088becu;
    f_8006a940(c);
L_01088bec:
R_01088bec:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x28u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x34u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[4] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_01088c0c;
    c.r[0] = 0x1u;
    goto L_01088c20;
L_01088c0c:
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = wp::sraw(c, c.r[5], 31);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = wp::sub_carry(c, c.r[0], c.r[5]);
    c.r[0] = wp::add_extended(c, c.r[4], c.r[3]);
L_01088c20:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088ad8;
    }
    c.r[3] = 0x14u;
    c.lr = 0x1088c30u;
    f_801c79a4(c);
R_01088c30:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[24] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01088c70;
    c.r[5] = ((((g_ms602_bases[5] + 0x2acb0u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2acb0u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = ((((g_ms602_bases[4] + 0x27d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
    c.r[25] = 0x0u;
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x27d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[25]);
    c.lr = 0x1088c68u;
    f_80071fe0(c);
R_01088c68:
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[24] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01088c70:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088c9c;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[30] + 0x1ccu;
    wp::wr32(ea, c.r[24]);
    if (wp::cr_get(c, 2)) goto L_01088c9c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088c9cu;
    wp::call(c, c.ctr);
L_01088c9c:
R_01088c9c:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088cb4u;
    wp::call(c, c.ctr);
R_01088cb4:
    c.r[4] = ((((g_ms602_bases[4] + 0x27b8u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_ms602_bases[4] + 0x2798u) + 0x8000u) >> 16) << 16);
    c.r[26] = ((((g_ms602_bases[5] + 0x2acb0u) + 0x8000u) >> 16) << 16);
    c.r[29] = ((((g_ms602_bases[5] + 0x2aca0u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x27b8u) & 0xFFFFu);
    c.f[30] = wp::rdf64(ea);
    c.r[26] = c.r[26] + wp::sign_extend16((g_ms602_bases[5] + 0x2acb0u) & 0xFFFFu);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2798u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
    c.r[29] = c.r[29] + wp::sign_extend16((g_ms602_bases[5] + 0x2aca0u) & 0xFFFFu);
    c.r[25] = 0x1u;
    c.r[27] = 0x0u;
    c.r[28] = ((((g_ms602_bases[4] + 0x27d0u) + 0x8000u) >> 16) << 16);
    goto L_01088eac;
L_01088ce4:
    ea = c.r[30] + 0x1b8u;
    c.r[24] = wp::rd32(ea);
    goto L_01088d04;
L_01088cec:
    ea = c.r[24] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d00u;
    wp::call(c, c.ctr);
R_01088d00:
    c.r[24] = c.r[24] + 0x8u;
L_01088d04:
    ea = c.r[30] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1b8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088cec;
    }
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d30u;
    wp::call(c, c.ctr);
R_01088d30:
    ea = c.r[30] + 0x1c4u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[23] = wp::rd32(ea);
    goto L_01088d54;
L_01088d3c:
    ea = c.r[23] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088d50u;
    wp::call(c, c.ctr);
R_01088d50:
    c.r[23] = c.r[23] + 0x8u;
L_01088d54:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[24] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[23], c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088d3c;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088df4;
    ea = c.r[4] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01088dd4;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_01088da4;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x10u;
    wp::wr8(ea, c.r[25]);
L_01088da4:
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
L_01088dd4:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x1c8u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088decu;
    wp::call(c, c.ctr);
R_01088dec:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1088df4u;
    f_ms602_01087ab0(c);
L_01088df4:
R_01088df4:
    c.lr = 0x1088df8u;
    f_8006a940(c);
R_01088df8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088eac;
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088e24;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088e20u;
    wp::call(c, c.ctr);
R_01088e20:
    goto L_01088e28;
L_01088e24:
    c.r[3] = 0x0u;
L_01088e28:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088eac;
    c.r[31] = 0x0u;
    c.r[3] = 0x14u;
    c.lr = 0x1088e3cu;
    f_801c79a4(c);
R_01088e3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[24] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01088e68;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[28] + wp::sign_extend16((g_ms602_bases[4] + 0x27d0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + 0x4u;
    wp::wrf32(ea, static_cast<float>(c.f[31]));
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[27]);
    c.lr = 0x1088e5cu;
    f_80071fe0(c);
R_01088e5c:
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[24] + 0x10u;
    wp::wr8(ea, c.r[27]);
    ea = c.r[24] + 0x0u;
    wp::wr32(ea, c.r[29]);
L_01088e68:
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[24], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01088e94;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[30] + 0x1ccu;
    wp::wr32(ea, c.r[24]);
    if (wp::cr_get(c, 2)) goto L_01088e94;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088e94u;
    wp::call(c, c.ctr);
L_01088e94:
R_01088e94:
    ea = c.r[30] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088eacu;
    wp::call(c, c.ctr);
L_01088eac:
R_01088eac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088ce4;
    }
    ea = c.r[30] + 0x1ccu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01088ce4;
    }
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x1d0u;
    wp::wr8(ea, c.r[0]);
L_01088ecc:
    c.lr = 0x1088ed0u;
    f_8006a940(c);
R_01088ed0:
    WP_POLL(c);
    goto L_01088ecc;
}

void f_ms602_01088ee0(wp::Cpu& c) {
    WP_ENTER(0x1088ee0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1d0u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_01088ef0(wp::Cpu& c) {
    WP_ENTER(0x1088ef0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1088f18u: goto R_01088f18;
        case 0x1088f54u: goto R_01088f54;
        case 0x1088f90u: goto R_01088f90;
        case 0x1088f98u: goto R_01088f98;
        case 0x1088fd8u: goto R_01088fd8;
        case 0x1088fe0u: goto R_01088fe0;
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
    c.lr = 0x1088f18u;
    f_ms602_010862d0(c);
R_01088f18:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01088f3c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01088f3c:
    ea = c.r[31] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f54u;
    wp::call(c, c.ctr);
R_01088f54:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f98;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088f98;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088f90;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088f90u;
    wp::call(c, c.ctr);
L_01088f90:
R_01088f90:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088f98u;
    f_801c7a8c(c);
L_01088f98:
R_01088f98:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088fe0;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01088fe0;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01088fd8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1088fd8u;
    wp::call(c, c.ctr);
L_01088fd8:
R_01088fd8:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1088fe0u;
    f_801c7a8c(c);
L_01088fe0:
R_01088fe0:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_01089000(wp::Cpu& c) {
    WP_ENTER(0x1089000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_ms602_01089010(wp::Cpu& c) {
    WP_ENTER(0x1089010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089058u: goto R_01089058;
        case 0x1089094u: goto R_01089094;
        case 0x108909cu: goto R_0108909c;
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
    if (wp::cr_get(c, 2)) goto L_01089040;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089040:
    ea = c.r[3] + 0x1c8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089058u;
    wp::call(c, c.ctr);
R_01089058:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108909c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108909c;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089094;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089094u;
    wp::call(c, c.ctr);
L_01089094:
R_01089094:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108909cu;
    f_801c7a8c(c);
L_0108909c:
R_0108909c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_010890b0(wp::Cpu& c) {
    WP_ENTER(0x10890b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_ms602_bases[4] + 0x27c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x27c8u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.f[1] = wp::round_single(c.f[1] - c.f[0]);
    c.ps1[1] = c.f[1];
    return;
}

void f_ms602_010890d0(wp::Cpu& c) {
    WP_ENTER(0x10890d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10890f8u: goto R_010890f8;
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
    if (wp::cr_get(c, 2)) goto L_010890f8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010890f8;
    c.lr = 0x10890f8u;
    f_801c7a8c(c);
L_010890f8:
R_010890f8:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_01089110(wp::Cpu& c) {
    WP_ENTER(0x1089110u);
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

void f_ms602_01089130(wp::Cpu& c) {
    WP_ENTER(0x1089130u);
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

void f_ms602_01089160(wp::Cpu& c) {
    WP_ENTER(0x1089160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089180;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01089180:
    c.r[3] = 0x0u;
    return;
}

void f_ms602_01089190(wp::Cpu& c) {
    WP_ENTER(0x1089190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x9u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891b0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010891b0:
    c.r[3] = 0x0u;
    return;
}

void f_ms602_010891c0(wp::Cpu& c) {
    WP_ENTER(0x10891c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010891e0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010891e0:
    c.r[3] = 0x0u;
    return;
}

void f_ms602_010891f0(wp::Cpu& c) {
    WP_ENTER(0x10891f0u);
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

void f_ms602_01089220(wp::Cpu& c) {
    WP_ENTER(0x1089220u);
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

void f_ms602_01089250(wp::Cpu& c) {
    WP_ENTER(0x1089250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10892b4u: goto R_010892b4;
        case 0x10892dcu: goto R_010892dc;
        case 0x10892ecu: goto R_010892ec;
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
    if (wp::cr_get(c, 2)) goto L_010892ec;
    if (wp::cr_get(c, 2)) goto L_010892dc;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = ((((g_ms602_bases[5] + 0x2ace8u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ace8u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010892b4;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010892b4;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10892b4u;
    wp::call(c, c.ctr);
L_010892b4:
R_010892b4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010892dc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010892dc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10892dcu;
    wp::call(c, c.ctr);
L_010892dc:
R_010892dc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010892ec;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10892ecu;
    f_801c7a8c(c);
L_010892ec:
R_010892ec:
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

void f_ms602_01089310(wp::Cpu& c) {
    WP_ENTER(0x1089310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089374u: goto R_01089374;
        case 0x1089394u: goto R_01089394;
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
    if (wp::cr_get(c, 2)) goto L_01089398;
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089364;
    ea = c.r[3] + 0x13u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01089364;
    ea = c.r[3] + 0x14u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[3] + 0x12u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108938c;
L_01089364:
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[31] + 0x13u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[31] + 0x14u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x1089374u;
    f_ms602_01012e90(c);
R_01089374:
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
L_0108938c:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089394u;
    f_ms602_010132d0(c);
R_01089394:
    ea = c.r[31] + 0x18u;
    wp::wr32(ea, c.r[3]);
L_01089398:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_010893b0(wp::Cpu& c) {
    WP_ENTER(0x10893b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x174u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_ms602_010893c0(wp::Cpu& c) {
    WP_ENTER(0x10893c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_ms602_01012d70(c);
    return;
}

void f_ms602_010893d0(wp::Cpu& c) {
    WP_ENTER(0x10893d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_ms602_010893f0(wp::Cpu& c) {
    WP_ENTER(0x10893f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
}

void f_ms602_01089400(wp::Cpu& c) {
    WP_ENTER(0x1089400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_01089410(wp::Cpu& c) {
    WP_ENTER(0x1089410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x13u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_01089420(wp::Cpu& c) {
    WP_ENTER(0x1089420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10894b0u: goto R_010894b0;
        case 0x10894b8u: goto R_010894b8;
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
    if (wp::cr_get(c, 2)) goto L_01089458;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089458:
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
    if (wp::cr_get(c, 2)) goto L_010894b8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010894b8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010894b0;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10894b0u;
    wp::call(c, c.ctr);
L_010894b0:
R_010894b0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10894b8u;
    f_801c7a8c(c);
L_010894b8:
R_010894b8:
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

void f_ms602_010894e0(wp::Cpu& c) {
    WP_ENTER(0x10894e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089548u: goto R_01089548;
        case 0x1089550u: goto R_01089550;
        case 0x1089578u: goto R_01089578;
        case 0x1089588u: goto R_01089588;
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
    if (wp::cr_get(c, 2)) goto L_01089588;
    c.r[0] = wp::add_carry(c, c.r[3], 0x8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089550;
    ea = c.r[3] + 0xcu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089550;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089550;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089548;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089548u;
    wp::call(c, c.ctr);
L_01089548:
R_01089548:
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089550u;
    f_801c7a8c(c);
L_01089550:
R_01089550:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089578;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089578;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089578u;
    wp::call(c, c.ctr);
L_01089578:
R_01089578:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01089588;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1089588u;
    f_801c7a8c(c);
L_01089588:
R_01089588:
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

void f_ms602_010895b0(wp::Cpu& c) {
    WP_ENTER(0x10895b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10895d0u: goto R_010895d0;
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
    c.lr = 0x10895d0u;
    f_ms602_01085de0(c);
R_010895d0:
    c.r[4] = ((((g_ms602_bases[4] + 0x2824u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_ms602_bases[4] + 0x2828u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2824u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = ((((g_ms602_bases[5] + 0x2b1ccu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2828u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2b1ccu) & 0xFFFFu);
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

void f_ms602_01089650(wp::Cpu& c) {
    WP_ENTER(0x1089650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10896c0u: goto R_010896c0;
        case 0x10896d0u: goto R_010896d0;
        case 0x10896e8u: goto R_010896e8;
        case 0x10896f0u: goto R_010896f0;
        case 0x10896f8u: goto R_010896f8;
        case 0x1089720u: goto R_01089720;
        case 0x108972cu: goto R_0108972c;
        case 0x108973cu: goto R_0108973c;
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
    if (wp::cr_get(c, 2)) goto L_0108973c;
    c.r[0] = wp::add_carry(c, c.r[3], 0x40u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010896f8;
    ea = c.r[3] + 0x44u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010896f8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010896f8;
    ea = c.r[3] + 0x40u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010896f0;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010896c0;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10896c0u;
    f_801c7a8c(c);
L_010896c0:
R_010896c0:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010896d8;
    c.lr = 0x10896d0u;
    f_80038a00(c);
R_010896d0:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_010896d8:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010896e8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10896e8u;
    f_801c7a8c(c);
L_010896e8:
R_010896e8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x10896f0u;
    f_801c7a8c(c);
L_010896f0:
R_010896f0:
    ea = c.r[29] + 0x44u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10896f8u;
    f_801c7a8c(c);
L_010896f8:
R_010896f8:
    c.r[3] = wp::add_carry(c, c.r[29], 0x3cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089720;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089720;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089720u;
    wp::call(c, c.ctr);
L_01089720:
R_01089720:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108972cu;
    f_ms602_01085e10(c);
R_0108972c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108973c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108973cu;
    f_801c7a8c(c);
L_0108973c:
R_0108973c:
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

void f_ms602_01089760(wp::Cpu& c) {
    WP_ENTER(0x1089760u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_01089770(wp::Cpu& c) {
    WP_ENTER(0x1089770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_ms602_01089780(wp::Cpu& c) {
    WP_ENTER(0x1089780u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x1cu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_ms602_01089790(wp::Cpu& c) {
    WP_ENTER(0x1089790u);
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

void f_ms602_010897b0(wp::Cpu& c) {
    WP_ENTER(0x10897b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089850u: goto R_01089850;
        case 0x1089860u: goto R_01089860;
        case 0x1089878u: goto R_01089878;
        case 0x1089880u: goto R_01089880;
        case 0x1089888u: goto R_01089888;
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
    if (wp::cr_get(c, 2)) goto L_010897f8;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_010897f8:
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
    if (wp::cr_get(c, 2)) goto L_01089888;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089888;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089880;
    ea = c.r[29] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089850;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1089850u;
    f_801c7a8c(c);
L_01089850:
R_01089850:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089868;
    c.lr = 0x1089860u;
    f_80038a00(c);
R_01089860:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_01089868:
    c.r[3] = wp::add_carry(c, c.r[29], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089878;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089878u;
    f_801c7a8c(c);
L_01089878:
R_01089878:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1089880u;
    f_801c7a8c(c);
L_01089880:
R_01089880:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089888u;
    f_801c7a8c(c);
L_01089888:
R_01089888:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    goto L_010898ac;
    c.r[0] = c.r[0] | 0x0u;
L_01089898:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[3] + 0x4u;
    c.r[31] = c.r[31] + 0x4u;
L_010898ac:
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01089898;
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

void f_ms602_010898e0(wp::Cpu& c) {
    WP_ENTER(0x10898e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108991cu: goto R_0108991c;
        case 0x1089950u: goto R_01089950;
        case 0x1089980u: goto R_01089980;
        case 0x10899a8u: goto R_010899a8;
        case 0x10899c4u: goto R_010899c4;
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
    c.r[31] = ((((g_ms602_bases[5] + 0x2ae28u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae28u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010899c4;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x120u;
    c.lr = 0x108991cu;
    f_801c79a4(c);
R_0108991c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089950;
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[31] + 0xd8u;
    c.r[5] = c.r[31] + 0x108u;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_0108993c;
    c.r[5] = c.r[31] + 0xf4u;
L_0108993c:
    c.r[6] = 0x10000u;
    c.r[7] = 0x1u;
    c.r[0] = c.r[6] + 0xffff9000u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1089950u;
    f_ms602_01078db0(c);
L_01089950:
R_01089950:
    ea = c.r[30] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089980;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[30] + 0x3cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089980;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089980u;
    wp::call(c, c.ctr);
L_01089980:
R_01089980:
    ea = c.r[30] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[4] + 0x27d8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x27d8u) & 0xFFFFu);
    c.r[5] = c.r[31] + 0x11cu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x10899a8u;
    wp::call(c, c.ctr);
R_010899a8:
    ea = c.r[30] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    c.r[5] = 0x2u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10899c4u;
    wp::call(c, c.ctr);
L_010899c4:
R_010899c4:
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

void f_ms602_010899e0(wp::Cpu& c) {
    WP_ENTER(0x10899e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089a54u: goto R_01089a54;
        case 0x1089a90u: goto R_01089a90;
        case 0x1089ac8u: goto R_01089ac8;
        case 0x1089af8u: goto R_01089af8;
        case 0x1089b20u: goto R_01089b20;
        case 0x1089b30u: goto R_01089b30;
        case 0x1089b34u: goto R_01089b34;
        case 0x1089bb4u: goto R_01089bb4;
        case 0x1089bd0u: goto R_01089bd0;
        case 0x1089c20u: goto R_01089c20;
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
    c.r[29] = ((((g_ms602_bases[4] + 0x27d8u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x27d8u) & 0xFFFFu);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[3] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089c28;
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089bfc;
    ea = c.r[3] + 0x1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[29] + 0x50u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (!wp::cr_get(c, 1)) goto L_01089bfc;
    ea = c.r[3] + 0x18u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (!wp::cr_get(c, 1)) goto L_01089bfc;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089a54u;
    wp::call(c, c.ctr);
R_01089a54:
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
    c.lr = 0x1089a90u;
    wp::call(c, c.ctr);
R_01089a90:
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
    c.lr = 0x1089ac8u;
    f_80043290(c);
R_01089ac8:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089bf0;
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
    c.lr = 0x1089af8u;
    wp::call(c, c.ctr);
R_01089af8:
    ea = c.r[31] + 0x40u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089b7c;
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
    c.lr = 0x1089b20u;
    wp::call(c, c.ctr);
R_01089b20:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x68u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089b30u;
    wp::call(c, c.ctr);
R_01089b30:
    c.lr = 0x1089b34u;
    f_80130cf0(c);
R_01089b34:
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
L_01089b7c:
    c.r[28] = c.r[31] | c.r[31];
    c.r[29] = c.r[29] + 0x0u;
    c.r[30] = 0x0u;
    goto L_01089bdc;
L_01089b8c:
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
    c.lr = 0x1089bb4u;
    wp::call(c, c.ctr);
R_01089bb4:
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
    c.lr = 0x1089bd0u;
    wp::call(c, c.ctr);
R_01089bd0:
    c.r[28] = c.r[28] + 0x4u;
    c.r[29] = c.r[29] + 0x4u;
    c.r[30] = c.r[30] + 0x1u;
L_01089bdc:
    ea = c.r[31] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01089b8c;
    }
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_01089bf0:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x15u;
    wp::wr8(ea, c.r[0]);
    goto L_01089c28;
L_01089bfc:
    ea = c.r[3] + 0x15u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089c20;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089c20u;
    wp::call(c, c.ctr);
L_01089c20:
R_01089c20:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x15u;
    wp::wr8(ea, c.r[0]);
L_01089c28:
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

void f_ms602_01089c50(wp::Cpu& c) {
    WP_ENTER(0x1089c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089c64u: goto R_01089c64;
        case 0x1089ce8u: goto R_01089ce8;
        case 0x1089cf8u: goto R_01089cf8;
        case 0x1089d10u: goto R_01089d10;
        case 0x1089d18u: goto R_01089d18;
        case 0x1089d2cu: goto R_01089d2c;
        case 0x1089d44u: goto R_01089d44;
        case 0x1089d64u: goto R_01089d64;
        case 0x1089d94u: goto R_01089d94;
        case 0x1089d9cu: goto R_01089d9c;
        case 0x1089dd0u: goto R_01089dd0;
        case 0x1089e04u: goto R_01089e04;
        case 0x1089e6cu: goto R_01089e6c;
        case 0x1089e74u: goto R_01089e74;
        case 0x1089e8cu: goto R_01089e8c;
        case 0x1089ebcu: goto R_01089ebc;
        case 0x1089ed8u: goto R_01089ed8;
        case 0x1089f1cu: goto R_01089f1c;
        case 0x1089f58u: goto R_01089f58;
        case 0x1089f60u: goto R_01089f60;
        case 0x1089f6cu: goto R_01089f6c;
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
    c.lr = 0x1089c64u;
    f_801c83b0(c);
R_01089c64:
    c.r[29] = ((((g_ms602_bases[4] + 0x27d8u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[29] = c.r[29] + wp::sign_extend16((g_ms602_bases[4] + 0x27d8u) & 0xFFFFu);
    c.r[6] = (((0x802f5678u + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x60u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[30] = ((((g_ms602_bases[5] + 0x2ae28u) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + wp::sign_extend16(0x802f5678u & 0xFFFFu);
    c.f[6] = wp::rdf32(ea);
    c.ps1[6] = c.f[6];
    c.r[5] = (((0x802f567cu + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x68u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[31] = c.r[3] | c.r[3];
    c.f[5] = wp::round_single(c.f[2] * wp::force25(c.f[6]));
    c.ps1[5] = c.f[5];
    ea = c.r[29] + 0x58u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[3] = wp::round_single(c.f[1] * wp::force25(c.f[6]));
    c.ps1[3] = c.f[3];
    ea = c.r[29] + 0x64u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[5] + wp::sign_extend16(0x802f567cu & 0xFFFFu);
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
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae28u) & 0xFFFFu);
    c.f[2] = wp::round_single(c.f[0] * wp::force25(c.f[2]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x70u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
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
    c.lr = 0x1089ce8u;
    f_801c79a4(c);
R_01089ce8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089cfc;
    c.lr = 0x1089cf8u;
    f_ms602_01086cc0(c);
R_01089cf8:
    c.r[25] = c.r[3] | c.r[3];
L_01089cfc:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[1] + 0x28u;
    c.r[5] = c.r[1] + 0x20u;
    c.r[6] = c.r[1] + 0x18u;
    c.lr = 0x1089d10u;
    f_ms602_01087ba0(c);
R_01089d10:
    c.r[3] = 0x1d8u;
    c.lr = 0x1089d18u;
    f_801c79a4(c);
R_01089d18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089d68;
    c.r[3] = 0x18u;
    c.lr = 0x1089d2cu;
    f_801c79a4(c);
R_01089d2c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[27] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01089d54;
    ea = c.r[31] + 0x0u;
    c.r[26] = wp::rd32(ea);
    c.r[4] = 0xau;
    c.lr = 0x1089d44u;
    f_ms602_01085fd0(c);
R_01089d44:
    c.r[3] = ((((g_ms602_bases[5] + 0x2b1a4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2b1a4u) & 0xFFFFu);
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[27] + 0x14u;
    wp::wr32(ea, c.r[26]);
L_01089d54:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[25] | c.r[25];
    c.lr = 0x1089d64u;
    f_ms602_010880f0(c);
R_01089d64:
    c.r[28] = c.r[3] | c.r[3];
L_01089d68:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01089d94;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[28]);
    if (wp::cr_get(c, 2)) goto L_01089d94;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089d94u;
    wp::call(c, c.ctr);
L_01089d94:
R_01089d94:
    c.r[3] = 0x120u;
    c.lr = 0x1089d9cu;
    f_801c79a4(c);
R_01089d9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089dd0;
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[30] + 0xd8u;
    c.r[5] = c.r[30] + 0x140u;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_01089dbc;
    c.r[5] = c.r[30] + 0x12cu;
L_01089dbc:
    c.r[6] = 0x10000u;
    c.r[7] = 0x1u;
    c.r[0] = c.r[6] + 0xffff8000u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1089dd0u;
    f_ms602_01078db0(c);
L_01089dd0:
R_01089dd0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089de4;
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089e74;
L_01089de4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01089e18;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x1089e04u;
    f_801c79a4(c);
R_01089e04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089e14;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089e14:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_01089e18:
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
    if (wp::cr_get(c, 2)) goto L_01089e74;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089e74;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089e6c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089e6cu;
    wp::call(c, c.ctr);
L_01089e6c:
R_01089e6c:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089e74u;
    f_801c7a8c(c);
L_01089e74:
R_01089e74:
    c.r[26] = c.r[29] + 0x0u;
    c.r[27] = 0x0u;
    goto L_01089ee0;
L_01089e80:
    ea = c.r[31] + 0x8u;
    c.r[25] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x1089e8cu;
    f_80010060(c);
R_01089e8c:
    ea = c.r[25] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[25] | c.r[25];
    c.r[6] = 0x40u;
    ea = c.r[12] + 0x128u;
    c.r[12] = wp::rd32(ea);
    c.r[7] = 0x40u;
    ea = c.r[26] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[8] = 0x0u;
    ea = c.r[29] + 0x4cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[9] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x1089ebcu;
    wp::call(c, c.ctr);
R_01089ebc:
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[26] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089ed8u;
    wp::call(c, c.ctr);
R_01089ed8:
    c.r[26] = c.r[26] + 0x4u;
    c.r[27] = c.r[27] + 0x1u;
L_01089ee0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[27], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01089e80;
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
    if (wp::cr_get(c, 2)) goto L_01089f10;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_01089f10:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x1089f1cu;
    f_ms602_01089010(c);
R_01089f1c:
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089f60;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_01089f60;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089f58;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089f58u;
    wp::call(c, c.ctr);
L_01089f58:
R_01089f58:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1089f60u;
    f_801c7a8c(c);
L_01089f60:
R_01089f60:
    c.r[11] = c.r[1] + 0x50u;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x1089f6cu;
    f_801c83fc(c);
R_01089f6c:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_ms602_01089f80(wp::Cpu& c) {
    WP_ENTER(0x1089f80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1089ff8u: goto R_01089ff8;
        case 0x108a000u: goto R_0108a000;
        case 0x108a02cu: goto R_0108a02c;
        case 0x108a070u: goto R_0108a070;
        case 0x108a078u: goto R_0108a078;
        case 0x108a0a0u: goto R_0108a0a0;
        case 0x108a0b0u: goto R_0108a0b0;
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
    if (wp::cr_get(c, 2)) goto L_0108a0b0;
    ea = c.r[3] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a000;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108a000;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01089ff8;
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1089ff8u;
    wp::call(c, c.ctr);
L_01089ff8:
R_01089ff8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a000u;
    f_801c7a8c(c);
L_0108a000:
R_0108a000:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a02c;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a02c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a02cu;
    wp::call(c, c.ctr);
L_0108a02c:
R_0108a02c:
    c.r[0] = wp::add_carry(c, c.r[30], 0x8u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a078;
    ea = c.r[30] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a078;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108a078;
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a070;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a070u;
    wp::call(c, c.ctr);
L_0108a070:
R_0108a070:
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a078u;
    f_801c7a8c(c);
L_0108a078:
R_0108a078:
    c.r[3] = wp::add_carry(c, c.r[30], 0x4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108a0a0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a0a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a0a0u;
    wp::call(c, c.ctr);
L_0108a0a0:
R_0108a0a0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108a0b0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108a0b0u;
    f_801c7a8c(c);
L_0108a0b0:
R_0108a0b0:
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

void f_ms602_0108a0d0(wp::Cpu& c) {
    WP_ENTER(0x108a0d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    f_ms602_01088ee0(c);
    return;
}

void f_ms602_0108a0e0(wp::Cpu& c) {
    WP_ENTER(0x108a0e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a0f4u: goto R_0108a0f4;
        case 0x108a108u: goto R_0108a108;
        case 0x108a114u: goto R_0108a114;
        case 0x108a174u: goto R_0108a174;
        case 0x108a194u: goto R_0108a194;
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
    c.lr = 0x108a0f4u;
    f_801c83b8(c);
R_0108a0f4:
    c.r[27] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[29] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.lr = 0x108a108u;
    f_ms602_01088ef0(c);
R_0108a108:
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[27] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a114u;
    f_ms602_01089000(c);
R_0108a114:
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[30] = ((((g_ms602_bases[4] + 0x27d8u) + 0x8000u) >> 16) << 16);
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[30] = c.r[30] + wp::sign_extend16((g_ms602_bases[4] + 0x27d8u) & 0xFFFFu);
    ea = c.r[31] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = 0x0u;
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[28] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x30u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x34u;
    wp::wr32(ea, c.r[0]);
    goto L_0108a180;
L_0108a14c:
    ea = c.r[28] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 0)) goto L_0108a174;
    ea = c.r[27] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[30] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a174u;
    wp::call(c, c.ctr);
L_0108a174:
R_0108a174:
    c.r[28] = c.r[28] + 0x4u;
    c.r[30] = c.r[30] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_0108a180:
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a14c;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x108a194u;
    f_801c8404(c);
R_0108a194:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_ms602_0108a1b0(wp::Cpu& c) {
    WP_ENTER(0x108a1b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a1c8u: goto R_0108a1c8;
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
    c.lr = 0x108a1c8u;
    f_ms602_01085de0(c);
R_0108a1c8:
    c.r[4] = ((((g_ms602_bases[4] + 0x2824u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_ms602_bases[4] + 0x2828u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_ms602_bases[4] + 0x2824u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[5] = ((((g_ms602_bases[5] + 0x2b180u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_ms602_bases[4] + 0x2828u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2b180u) & 0xFFFFu);
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

void f_ms602_0108a250(wp::Cpu& c) {
    WP_ENTER(0x108a250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a2c0u: goto R_0108a2c0;
        case 0x108a2d0u: goto R_0108a2d0;
        case 0x108a2e8u: goto R_0108a2e8;
        case 0x108a2f0u: goto R_0108a2f0;
        case 0x108a2f8u: goto R_0108a2f8;
        case 0x108a320u: goto R_0108a320;
        case 0x108a32cu: goto R_0108a32c;
        case 0x108a33cu: goto R_0108a33c;
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
    if (wp::cr_get(c, 2)) goto L_0108a33c;
    c.r[0] = wp::add_carry(c, c.r[3], 0x50u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a2f8;
    ea = c.r[3] + 0x54u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2f8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108a2f8;
    ea = c.r[3] + 0x50u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2f0;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2c0;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108a2c0u;
    f_801c7a8c(c);
L_0108a2c0:
R_0108a2c0:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a2d8;
    c.lr = 0x108a2d0u;
    f_80038a00(c);
R_0108a2d0:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108a2d8:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108a2e8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a2e8u;
    f_801c7a8c(c);
L_0108a2e8:
R_0108a2e8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108a2f0u;
    f_801c7a8c(c);
L_0108a2f0:
R_0108a2f0:
    ea = c.r[29] + 0x54u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a2f8u;
    f_801c7a8c(c);
L_0108a2f8:
R_0108a2f8:
    c.r[3] = wp::add_carry(c, c.r[29], 0x4cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108a320;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a320;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a320u;
    wp::call(c, c.ctr);
L_0108a320:
R_0108a320:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108a32cu;
    f_ms602_01085e10(c);
R_0108a32c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108a33c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108a33cu;
    f_801c7a8c(c);
L_0108a33c:
R_0108a33c:
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

void f_ms602_0108a360(wp::Cpu& c) {
    WP_ENTER(0x108a360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a3a4u: goto R_0108a3a4;
        case 0x108a3c8u: goto R_0108a3c8;
        case 0x108a3f8u: goto R_0108a3f8;
        case 0x108a420u: goto R_0108a420;
        case 0x108a43cu: goto R_0108a43c;
        case 0x108a45cu: goto R_0108a45c;
        case 0x108a478u: goto R_0108a478;
        case 0x108a494u: goto R_0108a494;
        case 0x108a4b0u: goto R_0108a4b0;
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
    c.r[31] = ((((g_ms602_bases[5] + 0x2ae28u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae28u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0108a4c0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x120u;
    c.lr = 0x108a3a4u;
    f_801c79a4(c);
R_0108a3a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a3c8;
    c.r[5] = 0x10000u;
    c.r[4] = c.r[31] + 0x2b0u;
    c.r[0] = c.r[5] + 0xffff9000u;
    c.r[7] = 0x1u;
    c.r[5] = c.r[31] + 0x2ccu;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x108a3c8u;
    f_ms602_01078db0(c);
L_0108a3c8:
R_0108a3c8:
    ea = c.r[28] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a3f8;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[28] + 0x4cu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108a3f8;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a3f8u;
    wp::call(c, c.ctr);
L_0108a3f8:
R_0108a3f8:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[30] = ((((g_ms602_bases[4] + 0x284cu) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_ms602_bases[4] + 0x284cu) & 0xFFFFu);
    c.r[5] = c.r[31] + 0x11cu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[30] + 0x24u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.ctr = c.r[12];
    c.lr = 0x108a420u;
    wp::call(c, c.ctr);
R_0108a420:
    ea = c.r[28] + 0x4cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = 0x2u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a43cu;
    wp::call(c, c.ctr);
R_0108a43c:
    c.r[29] = 0x0u;
L_0108a440:
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
    c.lr = 0x108a45cu;
    wp::call(c, c.ctr);
R_0108a45c:
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
    c.lr = 0x108a478u;
    wp::call(c, c.ctr);
R_0108a478:
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
    c.lr = 0x108a494u;
    wp::call(c, c.ctr);
R_0108a494:
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
    c.lr = 0x108a4b0u;
    wp::call(c, c.ctr);
R_0108a4b0:
    c.r[29] = c.r[29] + 0x1u;
    c.r[30] = c.r[30] + 0x4u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a440;
    }
L_0108a4c0:
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

void f_ms602_0108a4e0(wp::Cpu& c) {
    WP_ENTER(0x108a4e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x10u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_ms602_0108a4f0(wp::Cpu& c) {
    WP_ENTER(0x108a4f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x14u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_ms602_0108a500(wp::Cpu& c) {
    WP_ENTER(0x108a500u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_ms602_0108a510(wp::Cpu& c) {
    WP_ENTER(0x108a510u);
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

void f_ms602_0108a530(wp::Cpu& c) {
    WP_ENTER(0x108a530u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a608u: goto R_0108a608;
        case 0x108a618u: goto R_0108a618;
        case 0x108a630u: goto R_0108a630;
        case 0x108a638u: goto R_0108a638;
        case 0x108a640u: goto R_0108a640;
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
    if (wp::cr_get(c, 2)) goto L_0108a5b0;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108a5b0:
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
    if (wp::cr_get(c, 2)) goto L_0108a640;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108a640;
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a638;
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a608;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108a608u;
    f_801c7a8c(c);
L_0108a608:
R_0108a608:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a620;
    c.lr = 0x108a618u;
    f_80038a00(c);
R_0108a618:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108a620:
    c.r[3] = wp::add_carry(c, c.r[30], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108a630;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a630u;
    f_801c7a8c(c);
L_0108a630:
R_0108a630:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108a638u;
    f_801c7a8c(c);
L_0108a638:
R_0108a638:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108a640u;
    f_801c7a8c(c);
L_0108a640:
R_0108a640:
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

void f_ms602_0108a660(wp::Cpu& c) {
    WP_ENTER(0x108a660u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a674u: goto R_0108a674;
        case 0x108a6b0u: goto R_0108a6b0;
        case 0x108a6ecu: goto R_0108a6ec;
        case 0x108a724u: goto R_0108a724;
        case 0x108a754u: goto R_0108a754;
        case 0x108a77cu: goto R_0108a77c;
        case 0x108a78cu: goto R_0108a78c;
        case 0x108a790u: goto R_0108a790;
        case 0x108a804u: goto R_0108a804;
        case 0x108a824u: goto R_0108a824;
        case 0x108a848u: goto R_0108a848;
        case 0x108a868u: goto R_0108a868;
        case 0x108a890u: goto R_0108a890;
        case 0x108a8b8u: goto R_0108a8b8;
        case 0x108a8e0u: goto R_0108a8e0;
        case 0x108a92cu: goto R_0108a92c;
        case 0x108a93cu: goto R_0108a93c;
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
    c.lr = 0x108a674u;
    f_801c83b4(c);
R_0108a674:
    ea = c.r[3] + 0x4cu;
    c.r[4] = wp::rd32(ea);
    c.r[30] = ((((g_ms602_bases[4] + 0x27d8u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[30] = c.r[30] + wp::sign_extend16((g_ms602_bases[4] + 0x27d8u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_0108a934;
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a908;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a6b0u;
    wp::call(c, c.ctr);
R_0108a6b0:
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
    c.lr = 0x108a6ecu;
    wp::call(c, c.ctr);
R_0108a6ec:
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
    c.lr = 0x108a724u;
    f_80043290(c);
R_0108a724:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a8fc;
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
    c.lr = 0x108a754u;
    wp::call(c, c.ctr);
R_0108a754:
    ea = c.r[31] + 0x50u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a7d8;
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
    c.lr = 0x108a77cu;
    wp::call(c, c.ctr);
R_0108a77c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x68u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a78cu;
    wp::call(c, c.ctr);
R_0108a78c:
    c.lr = 0x108a790u;
    f_80130cf0(c);
R_0108a790:
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
L_0108a7d8:
    c.r[27] = c.r[30] + 0x74u;
    c.r[28] = c.r[31] | c.r[31];
    c.r[26] = 0x0u;
    c.r[29] = ((((g_ms602_bases[5] + 0x2b128u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_ms602_bases[5] + 0x2b130u) + 0x8000u) >> 16) << 16);
L_0108a7ec:
    ea = c.r[28] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = c.r[29] + wp::sign_extend16((g_ms602_bases[5] + 0x2b128u) & 0xFFFFu);
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108a804u;
    f_801d3590(c);
R_0108a804:
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
    c.lr = 0x108a824u;
    wp::call(c, c.ctr);
R_0108a824:
    ea = c.r[28] + 0x34u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = c.r[30] + wp::sign_extend16((g_ms602_bases[5] + 0x2b130u) & 0xFFFFu);
    c.r[4] = 0x3fu;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0108a840;
    c.r[5] = c.r[29] + wp::sign_extend16((g_ms602_bases[5] + 0x2b128u) & 0xFFFFu);
L_0108a840:
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108a848u;
    f_801d3590(c);
R_0108a848:
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
    c.lr = 0x108a868u;
    wp::call(c, c.ctr);
R_0108a868:
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
    c.lr = 0x108a890u;
    wp::call(c, c.ctr);
R_0108a890:
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
    c.lr = 0x108a8b8u;
    wp::call(c, c.ctr);
R_0108a8b8:
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
    c.lr = 0x108a8e0u;
    wp::call(c, c.ctr);
R_0108a8e0:
    c.r[26] = c.r[26] + 0x1u;
    c.r[27] = c.r[27] + 0x4u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    c.r[28] = c.r[28] + 0x4u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0108a7ec;
    }
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_0108a8fc:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[0]);
    goto L_0108a934;
L_0108a908:
    ea = c.r[3] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a92c;
    c.r[3] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108a92cu;
    wp::call(c, c.ctr);
L_0108a92c:
R_0108a92c:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x11u;
    wp::wr8(ea, c.r[0]);
L_0108a934:
    c.r[11] = c.r[1] + 0xb0u;
    c.lr = 0x108a93cu;
    f_801c8400(c);
R_0108a93c:
    ea = c.r[1] + 0xb4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xb0u;
    return;
}

void f_ms602_0108a950(wp::Cpu& c) {
    WP_ENTER(0x108a950u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108a97cu: goto R_0108a97c;
        case 0x108a9b4u: goto R_0108a9b4;
        case 0x108a9d4u: goto R_0108a9d4;
        case 0x108aa2cu: goto R_0108aa2c;
        case 0x108aa34u: goto R_0108aa34;
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
    c.lr = 0x108a97cu;
    f_801c79a4(c);
R_0108a97c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a9b4;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a9a8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108a9a8:
    c.r[4] = c.r[1] + 0x8u;
    c.r[31] = 0x1u;
    c.lr = 0x108a9b4u;
    f_ms602_0108aa50(c);
L_0108a9b4:
R_0108a9b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108a9e8;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x108a9d4u;
    f_801c79a4(c);
R_0108a9d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108a9e4;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108a9e4:
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_0108a9e8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa34;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa34;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108aa34;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aa2c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108aa2cu;
    wp::call(c, c.ctr);
L_0108aa2c:
R_0108aa2c:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108aa34u;
    f_801c7a8c(c);
L_0108aa34:
R_0108aa34:
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

void f_ms602_0108aa50(wp::Cpu& c) {
    WP_ENTER(0x108aa50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108aa94u: goto R_0108aa94;
        case 0x108aad0u: goto R_0108aad0;
        case 0x108aad8u: goto R_0108aad8;
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
    if (wp::cr_get(c, 2)) goto L_0108aa88;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108aa88:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x108aa94u;
    f_ms602_01085e60(c);
R_0108aa94:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aad8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108aad8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aad0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108aad0u;
    wp::call(c, c.ctr);
L_0108aad0:
R_0108aad0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108aad8u;
    f_801c7a8c(c);
L_0108aad8:
R_0108aad8:
    c.r[3] = ((((g_ms602_bases[5] + 0x2b16cu) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[4] = 0xffffffffu;
    ea = c.r[31] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2b16cu) & 0xFFFFu);
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

void f_ms602_0108ab40(wp::Cpu& c) {
    WP_ENTER(0x108ab40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ab5cu: goto R_0108ab5c;
        case 0x108ab68u: goto R_0108ab68;
        case 0x108ab88u: goto R_0108ab88;
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
    c.lr = 0x108ab5cu;
    f_801c79a4(c);
R_0108ab5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ab68;
    c.lr = 0x108ab68u;
    f_ms602_0108a1b0(c);
L_0108ab68:
R_0108ab68:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108ab9c;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x108ab88u;
    f_801c79a4(c);
R_0108ab88:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ab98;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108ab98:
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_0108ab9c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_ms602_0108abb0(wp::Cpu& c) {
    WP_ENTER(0x108abb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108abdcu: goto R_0108abdc;
        case 0x108abecu: goto R_0108abec;
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
    if (wp::cr_get(c, 2)) goto L_0108abec;
    c.r[4] = 0x0u;
    c.lr = 0x108abdcu;
    f_ms602_010861e0(c);
R_0108abdc:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108abec;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108abecu;
    f_801c7a8c(c);
L_0108abec:
R_0108abec:
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

void f_ms602_0108ac10(wp::Cpu& c) {
    WP_ENTER(0x108ac10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108ac44u: goto R_0108ac44;
        case 0x108ac5cu: goto R_0108ac5c;
        case 0x108ac74u: goto R_0108ac74;
        case 0x108ac8cu: goto R_0108ac8c;
        case 0x108acd0u: goto R_0108acd0;
        case 0x108ad10u: goto R_0108ad10;
        case 0x108ad20u: goto R_0108ad20;
        case 0x108ad38u: goto R_0108ad38;
        case 0x108ad40u: goto R_0108ad40;
        case 0x108ad48u: goto R_0108ad48;
        case 0x108ad54u: goto R_0108ad54;
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
    c.lr = 0x108ac44u;
    wp::call(c, c.ctr);
R_0108ac44:
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
    c.lr = 0x108ac5cu;
    wp::call(c, c.ctr);
R_0108ac5c:
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
    c.lr = 0x108ac74u;
    wp::call(c, c.ctr);
R_0108ac74:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] + 0x18u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108ac8cu;
    wp::call(c, c.ctr);
R_0108ac8c:
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
    if (wp::cr_get(c, 2)) goto L_0108acb4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108acb4:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[29] + 0x28u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.r[7] = c.r[29] + 0x2cu;
    c.r[8] = c.r[29] + 0x3cu;
    c.lr = 0x108acd0u;
    f_ms602_0108a530(c);
R_0108acd0:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ad48;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108ad48;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ad40;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ad10;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108ad10u;
    f_801c7a8c(c);
L_0108ad10:
R_0108ad10:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ad28;
    c.lr = 0x108ad20u;
    f_80038a00(c);
R_0108ad20:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108ad28:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ad38;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108ad38u;
    f_801c7a8c(c);
L_0108ad38:
R_0108ad38:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108ad40u;
    f_801c7a8c(c);
L_0108ad40:
R_0108ad40:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108ad48u;
    f_801c7a8c(c);
L_0108ad48:
R_0108ad48:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108ad54u;
    f_ms602_01085e50(c);
R_0108ad54:
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

void f_ms602_0108ad70(wp::Cpu& c) {
    WP_ENTER(0x108ad70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108adb8u: goto R_0108adb8;
        case 0x108adf8u: goto R_0108adf8;
        case 0x108ae04u: goto R_0108ae04;
        case 0x108ae30u: goto R_0108ae30;
        case 0x108ae40u: goto R_0108ae40;
        case 0x108ae48u: goto R_0108ae48;
        case 0x108ae5cu: goto R_0108ae5c;
        case 0x108ae84u: goto R_0108ae84;
        case 0x108aeb8u: goto R_0108aeb8;
        case 0x108af24u: goto R_0108af24;
        case 0x108af34u: goto R_0108af34;
        case 0x108af4cu: goto R_0108af4c;
        case 0x108af54u: goto R_0108af54;
        case 0x108af5cu: goto R_0108af5c;
        case 0x108af70u: goto R_0108af70;
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
    if (!wp::cr_get(c, 2)) goto L_0108af70;
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108af5c;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xdu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = 0xcu;
    c.lr = 0x108adb8u;
    f_801c79a4(c);
R_0108adb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108ae84;
    ea = c.r[31] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ae28u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    c.r[29] = 0x0u;
    c.r[5] = ((((g_ms602_bases[5] + 0x2ae38u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_ms602_bases[6] + 0x5090u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae28u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae38u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[30] + wp::sign_extend16((g_ms602_bases[6] + 0x5090u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108adf8u;
    f_801cf168(c);
R_0108adf8:
    c.r[3] = c.r[30] + wp::sign_extend16((g_ms602_bases[6] + 0x5090u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.lr = 0x108ae04u;
    f_800374b0(c);
R_0108ae04:
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
    c.lr = 0x108ae30u;
    f_80151d00(c);
R_0108ae30:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x108ae40u;
    f_801520a0(c);
R_0108ae40:
    c.r[3] = 0x1cu;
    c.lr = 0x108ae48u;
    f_801c79a4(c);
R_0108ae48:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108ae70;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x108ae5cu;
    f_80132670(c);
R_0108ae5c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffff9fffu;
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x16u;
    wp::wr16(ea, c.r[29]);
L_0108ae70:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108ae84;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x108ae84u;
    f_801c7a8c(c);
L_0108ae84:
R_0108ae84:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108ae98;
    ea = c.r[31] + 0x4cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108af5c;
L_0108ae98:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108aecc;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = 0x4u;
    c.lr = 0x108aeb8u;
    f_801c79a4(c);
R_0108aeb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108aec8;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108aec8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_0108aecc:
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
    if (wp::cr_get(c, 2)) goto L_0108af5c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108af5c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108af54;
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108af24;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108af24u;
    f_801c7a8c(c);
L_0108af24:
R_0108af24:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108af3c;
    c.lr = 0x108af34u;
    f_80038a00(c);
R_0108af34:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108af3c:
    c.r[3] = wp::add_carry(c, c.r[28], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108af4c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108af4cu;
    f_801c7a8c(c);
L_0108af4c:
R_0108af4c:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x108af54u;
    f_801c7a8c(c);
L_0108af54:
R_0108af54:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108af5cu;
    f_801c7a8c(c);
L_0108af5c:
R_0108af5c:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108af70u;
    wp::call(c, c.ctr);
L_0108af70:
R_0108af70:
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

void f_ms602_0108af90(wp::Cpu& c) {
    WP_ENTER(0x108af90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b000u: goto R_0108b000;
        case 0x108b010u: goto R_0108b010;
        case 0x108b028u: goto R_0108b028;
        case 0x108b030u: goto R_0108b030;
        case 0x108b038u: goto R_0108b038;
        case 0x108b044u: goto R_0108b044;
        case 0x108b054u: goto R_0108b054;
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
    if (wp::cr_get(c, 2)) goto L_0108b054;
    c.r[0] = wp::add_carry(c, c.r[3], 0x4cu, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b038;
    ea = c.r[3] + 0x50u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b038;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b038;
    ea = c.r[3] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b030;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b000;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108b000u;
    f_801c7a8c(c);
L_0108b000:
R_0108b000:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b018;
    c.lr = 0x108b010u;
    f_80038a00(c);
R_0108b010:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108b018:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108b028;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b028u;
    f_801c7a8c(c);
L_0108b028:
R_0108b028:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108b030u;
    f_801c7a8c(c);
L_0108b030:
R_0108b030:
    ea = c.r[29] + 0x50u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b038u;
    f_801c7a8c(c);
L_0108b038:
R_0108b038:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108b044u;
    f_ms602_01085ec0(c);
R_0108b044:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108b054;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108b054u;
    f_801c7a8c(c);
L_0108b054:
R_0108b054:
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

void f_ms602_0108b080(wp::Cpu& c) {
    WP_ENTER(0x108b080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b0acu: goto R_0108b0ac;
        case 0x108b0e4u: goto R_0108b0e4;
        case 0x108b104u: goto R_0108b104;
        case 0x108b15cu: goto R_0108b15c;
        case 0x108b164u: goto R_0108b164;
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
    c.lr = 0x108b0acu;
    f_801c79a4(c);
R_0108b0ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b0e4;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b0d8;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b0d8:
    c.r[4] = c.r[1] + 0x8u;
    c.r[31] = 0x1u;
    c.lr = 0x108b0e4u;
    f_ms602_0108b180(c);
L_0108b0e4:
R_0108b0e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b118;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x108b104u;
    f_801c79a4(c);
R_0108b104:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b114;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b114:
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_0108b118:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b164;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b164;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b164;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b15c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108b15cu;
    wp::call(c, c.ctr);
L_0108b15c:
R_0108b15c:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b164u;
    f_801c7a8c(c);
L_0108b164:
R_0108b164:
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

void f_ms602_0108b180(wp::Cpu& c) {
    WP_ENTER(0x108b180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b1c4u: goto R_0108b1c4;
        case 0x108b200u: goto R_0108b200;
        case 0x108b208u: goto R_0108b208;
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
    if (wp::cr_get(c, 2)) goto L_0108b1b8;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b1b8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x108b1c4u;
    f_ms602_01085e60(c);
R_0108b1c4:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b208;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b208;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b200;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108b200u;
    wp::call(c, c.ctr);
L_0108b200:
R_0108b200:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b208u;
    f_801c7a8c(c);
L_0108b208:
R_0108b208:
    c.r[3] = ((((g_ms602_bases[5] + 0x2b1b8u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0xffffffffu;
    c.r[3] = c.r[3] + wp::sign_extend16((g_ms602_bases[5] + 0x2b1b8u) & 0xFFFFu);
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

void f_ms602_0108b260(wp::Cpu& c) {
    WP_ENTER(0x108b260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b284u: goto R_0108b284;
        case 0x108b294u: goto R_0108b294;
        case 0x108b2b4u: goto R_0108b2b4;
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
    c.lr = 0x108b284u;
    f_801c79a4(c);
R_0108b284:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b294;
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x108b294u;
    f_ms602_010895b0(c);
L_0108b294:
R_0108b294:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b2c8;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x4u;
    c.lr = 0x108b2b4u;
    f_801c79a4(c);
R_0108b2b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b2c4;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b2c4:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[3]);
L_0108b2c8:
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

void f_ms602_0108b2e0(wp::Cpu& c) {
    WP_ENTER(0x108b2e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b30cu: goto R_0108b30c;
        case 0x108b31cu: goto R_0108b31c;
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
    if (wp::cr_get(c, 2)) goto L_0108b31c;
    c.r[4] = 0x0u;
    c.lr = 0x108b30cu;
    f_ms602_010861e0(c);
R_0108b30c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108b31c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108b31cu;
    f_801c7a8c(c);
L_0108b31c:
R_0108b31c:
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

void f_ms602_0108b340(wp::Cpu& c) {
    WP_ENTER(0x108b340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b374u: goto R_0108b374;
        case 0x108b38cu: goto R_0108b38c;
        case 0x108b3a4u: goto R_0108b3a4;
        case 0x108b3bcu: goto R_0108b3bc;
        case 0x108b3f8u: goto R_0108b3f8;
        case 0x108b438u: goto R_0108b438;
        case 0x108b448u: goto R_0108b448;
        case 0x108b460u: goto R_0108b460;
        case 0x108b468u: goto R_0108b468;
        case 0x108b470u: goto R_0108b470;
        case 0x108b47cu: goto R_0108b47c;
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
    c.lr = 0x108b374u;
    wp::call(c, c.ctr);
R_0108b374:
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
    c.lr = 0x108b38cu;
    wp::call(c, c.ctr);
R_0108b38c:
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
    c.lr = 0x108b3a4u;
    wp::call(c, c.ctr);
R_0108b3a4:
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[29] + 0x18u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108b3bcu;
    wp::call(c, c.ctr);
R_0108b3bc:
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
    if (wp::cr_get(c, 2)) goto L_0108b3e4;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b3e4:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = c.r[29] + 0x28u;
    c.lr = 0x108b3f8u;
    f_ms602_010897b0(c);
R_0108b3f8:
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b470;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b470;
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b468;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b438;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108b438u;
    f_801c7a8c(c);
L_0108b438:
R_0108b438:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b450;
    c.lr = 0x108b448u;
    f_80038a00(c);
R_0108b448:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108b450:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108b460;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b460u;
    f_801c7a8c(c);
L_0108b460:
R_0108b460:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108b468u;
    f_801c7a8c(c);
L_0108b468:
R_0108b468:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b470u;
    f_801c7a8c(c);
L_0108b470:
R_0108b470:
    ea = c.r[29] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x108b47cu;
    f_ms602_01085e50(c);
R_0108b47c:
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

void f_ms602_0108b4a0(wp::Cpu& c) {
    WP_ENTER(0x108b4a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b4e8u: goto R_0108b4e8;
        case 0x108b528u: goto R_0108b528;
        case 0x108b534u: goto R_0108b534;
        case 0x108b560u: goto R_0108b560;
        case 0x108b570u: goto R_0108b570;
        case 0x108b578u: goto R_0108b578;
        case 0x108b58cu: goto R_0108b58c;
        case 0x108b5b4u: goto R_0108b5b4;
        case 0x108b5e8u: goto R_0108b5e8;
        case 0x108b654u: goto R_0108b654;
        case 0x108b664u: goto R_0108b664;
        case 0x108b67cu: goto R_0108b67c;
        case 0x108b684u: goto R_0108b684;
        case 0x108b68cu: goto R_0108b68c;
        case 0x108b6a0u: goto R_0108b6a0;
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
    if (!wp::cr_get(c, 2)) goto L_0108b6a0;
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0108b68c;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0xdu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = 0xcu;
    c.lr = 0x108b4e8u;
    f_801c79a4(c);
R_0108b4e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108b5b4;
    ea = c.r[31] + 0x24u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = ((((g_ms602_bases[5] + 0x2ae28u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    c.r[29] = 0x0u;
    c.r[5] = ((((g_ms602_bases[5] + 0x2ae38u) + 0x8000u) >> 16) << 16);
    c.r[30] = ((((g_ms602_bases[6] + 0x5090u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae28u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_ms602_bases[5] + 0x2ae38u) & 0xFFFFu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[29]);
    c.r[3] = c.r[30] + wp::sign_extend16((g_ms602_bases[6] + 0x5090u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x108b528u;
    f_801cf168(c);
R_0108b528:
    c.r[3] = c.r[30] + wp::sign_extend16((g_ms602_bases[6] + 0x5090u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.lr = 0x108b534u;
    f_800374b0(c);
R_0108b534:
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
    c.lr = 0x108b560u;
    f_80151d00(c);
R_0108b560:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.lr = 0x108b570u;
    f_801520a0(c);
R_0108b570:
    c.r[3] = 0x1cu;
    c.lr = 0x108b578u;
    f_801c79a4(c);
R_0108b578:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_0108b5a0;
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x108b58cu;
    f_80132670(c);
R_0108b58c:
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[30] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffff9fffu;
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x16u;
    wp::wr16(ea, c.r[29]);
L_0108b5a0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[30], c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108b5b4;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x108b5b4u;
    f_801c7a8c(c);
L_0108b5b4:
R_0108b5b4:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b5c8;
    ea = c.r[31] + 0x38u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b68c;
L_0108b5c8:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b5fc;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[28]);
    c.r[3] = 0x4u;
    c.lr = 0x108b5e8u;
    f_801c79a4(c);
R_0108b5e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b5f8;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_0108b5f8:
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_0108b5fc:
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
    if (wp::cr_get(c, 2)) goto L_0108b68c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b68c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b684;
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b654;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108b654u;
    f_801c7a8c(c);
L_0108b654:
R_0108b654:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b66c;
    c.lr = 0x108b664u;
    f_80038a00(c);
R_0108b664:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108b66c:
    c.r[3] = wp::add_carry(c, c.r[28], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108b67c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b67cu;
    f_801c7a8c(c);
L_0108b67c:
R_0108b67c:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x108b684u;
    f_801c7a8c(c);
L_0108b684:
R_0108b684:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b68cu;
    f_801c7a8c(c);
L_0108b68c:
R_0108b68c:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x108b6a0u;
    wp::call(c, c.ctr);
L_0108b6a0:
R_0108b6a0:
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

void f_ms602_0108b6c0(wp::Cpu& c) {
    WP_ENTER(0x108b6c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x108b730u: goto R_0108b730;
        case 0x108b740u: goto R_0108b740;
        case 0x108b758u: goto R_0108b758;
        case 0x108b760u: goto R_0108b760;
        case 0x108b768u: goto R_0108b768;
        case 0x108b774u: goto R_0108b774;
        case 0x108b784u: goto R_0108b784;
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
    if (wp::cr_get(c, 2)) goto L_0108b784;
    c.r[0] = wp::add_carry(c, c.r[3], 0x38u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0108b768;
    ea = c.r[3] + 0x3cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b768;
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0108b768;
    ea = c.r[3] + 0x38u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b760;
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b730;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x108b730u;
    f_801c7a8c(c);
L_0108b730:
R_0108b730:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0108b748;
    c.lr = 0x108b740u;
    f_80038a00(c);
R_0108b740:
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_0108b748:
    c.r[3] = wp::add_carry(c, c.r[31], 0x8u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0108b758;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b758u;
    f_801c7a8c(c);
L_0108b758:
R_0108b758:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x108b760u;
    f_801c7a8c(c);
L_0108b760:
R_0108b760:
    ea = c.r[29] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x108b768u;
    f_801c7a8c(c);
L_0108b768:
R_0108b768:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x108b774u;
    f_ms602_01085ec0(c);
R_0108b774:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0108b784;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x108b784u;
    f_801c7a8c(c);
L_0108b784:
R_0108b784:
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

