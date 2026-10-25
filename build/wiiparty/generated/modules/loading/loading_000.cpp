#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_loading_bases[14];
void f_80011970(wp::Cpu& c);
void f_80013c80(wp::Cpu& c);
void f_80013d10(wp::Cpu& c);
void f_80013dd0(wp::Cpu& c);
void f_800144a0(wp::Cpu& c);
void f_80029330(wp::Cpu& c);
void f_8003df30(wp::Cpu& c);
void f_8003ee20(wp::Cpu& c);
void f_8003eee0(wp::Cpu& c);
void f_8003ef20(wp::Cpu& c);
void f_8003ef40(wp::Cpu& c);
void f_8003ef50(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_80042510(wp::Cpu& c);
void f_800431a0(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069af0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_8006a800(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_80075ed0(wp::Cpu& c);
void f_80075f20(wp::Cpu& c);
void f_801383f0(wp::Cpu& c);
void f_80138880(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_loading_01000000(wp::Cpu& c);
void f_loading_01000080(wp::Cpu& c);
void f_loading_01000180(wp::Cpu& c);
void f_loading_01000190(wp::Cpu& c);
void f_loading_01000290(wp::Cpu& c);
void f_loading_01000300(wp::Cpu& c);
void f_loading_010003a0(wp::Cpu& c);
void f_loading_010003b0(wp::Cpu& c);
void f_loading_010003c0(wp::Cpu& c);
void f_loading_010003d0(wp::Cpu& c);
void f_loading_010003f0(wp::Cpu& c);
void f_loading_01000410(wp::Cpu& c);
void f_loading_01000430(wp::Cpu& c);
void f_loading_01000450(wp::Cpu& c);
void f_loading_01000460(wp::Cpu& c);
void f_loading_01000470(wp::Cpu& c);

void f_loading_01000000(wp::Cpu& c) {
    WP_ENTER(0x1000000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1000030u: goto R_01000030;
        case 0x100003cu: goto R_0100003c;
        case 0x1000048u: goto R_01000048;
        case 0x1000058u: goto R_01000058;
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
    if (wp::cr_get(c, 2)) goto L_01000058;
    c.r[4] = 0xffffffffu;
    c.r[3] = c.r[3] + 0x2ccu;
    c.lr = 0x1000030u;
    f_8003eee0(c);
R_01000030:
    c.r[3] = c.r[30] + 0x1b8u;
    c.r[4] = 0x0u;
    c.lr = 0x100003cu;
    f_8003fb90(c);
R_0100003c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1000048u;
    f_80069c40(c);
R_01000048:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01000058;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1000058u;
    f_801c7a8c(c);
L_01000058:
R_01000058:
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

void f_loading_01000080(wp::Cpu& c) {
    WP_ENTER(0x1000080u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10000a0u: goto R_010000a0;
        case 0x10000b0u: goto R_010000b0;
        case 0x10000c4u: goto R_010000c4;
        case 0x10000ccu: goto R_010000cc;
        case 0x10000fcu: goto R_010000fc;
        case 0x1000100u: goto R_01000100;
        case 0x1000104u: goto R_01000104;
        case 0x1000114u: goto R_01000114;
        case 0x100011cu: goto R_0100011c;
        case 0x1000134u: goto R_01000134;
        case 0x100013cu: goto R_0100013c;
        case 0x1000150u: goto R_01000150;
        case 0x1000154u: goto R_01000154;
        case 0x1000158u: goto R_01000158;
        case 0x1000160u: goto R_01000160;
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
    c.lr = 0x10000a0u;
    f_80013c80(c);
R_010000a0:
    c.r[4] = ((((g_loading_bases[4] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_loading_bases[4] + 0x0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10000b0u;
    f_80075ed0(c);
R_010000b0:
    c.r[31] = 0x10000u;
    goto L_01000100;
L_010000b8:
    c.r[30] = 0x0u;
L_010000bc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10000c4u;
    f_800699d0(c);
R_010000c4:
    c.r[4] = c.r[31] + 0xffff8000u;
    c.lr = 0x10000ccu;
    f_80066cd0(c);
R_010000cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010000dc;
    c.r[0] = 0x1u;
    goto L_010000ec;
L_010000dc:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010000bc;
    }
    c.r[0] = 0x0u;
L_010000ec:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010000fc;
    c.r[3] = c.r[29] + 0x2ccu;
    c.lr = 0x10000fcu;
    f_8003ef20(c);
L_010000fc:
R_010000fc:
    c.lr = 0x1000100u;
    f_8006a940(c);
L_01000100:
R_01000100:
    c.lr = 0x1000104u;
    f_80013d10(c);
R_01000104:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010000b8;
    }
    goto L_01000114;
L_01000110:
    c.lr = 0x1000114u;
    f_8006a940(c);
L_01000114:
R_01000114:
    c.r[3] = c.r[29] + 0x2ccu;
    c.lr = 0x100011cu;
    f_8003ef40(c);
R_0100011c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01000110;
    }
    c.r[4] = ((((g_loading_bases[4] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_loading_bases[4] + 0x0u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1000134u;
    f_80075f20(c);
R_01000134:
    c.r[3] = 0xe70u;
    c.lr = 0x100013cu;
    f_80013dd0(c);
R_0100013c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01000150;
    c.r[4] = ((((g_loading_bases[5] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_loading_bases[5] + 0x0u) & 0xFFFFu);
    c.lr = 0x1000150u;
    f_800144a0(c);
L_01000150:
R_01000150:
    c.lr = 0x1000154u;
    f_8003df30(c);
R_01000154:
    c.lr = 0x1000158u;
    f_80011970(c);
R_01000158:
    c.r[3] = 0x1u;
    c.lr = 0x1000160u;
    f_80029330(c);
R_01000160:
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

void f_loading_01000180(wp::Cpu& c) {
    WP_ENTER(0x1000180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0x2ccu;
    f_8003ef50(c);
    return;
}

void f_loading_01000190(wp::Cpu& c) {
    WP_ENTER(0x1000190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10001c0u: goto R_010001c0;
        case 0x10001d8u: goto R_010001d8;
        case 0x10001f8u: goto R_010001f8;
        case 0x1000218u: goto R_01000218;
        case 0x1000234u: goto R_01000234;
        case 0x100024cu: goto R_0100024c;
        case 0x1000258u: goto R_01000258;
        case 0x1000260u: goto R_01000260;
        case 0x1000268u: goto R_01000268;
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
    c.r[31] = ((((g_loading_bases[5] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_loading_bases[5] + 0x0u) & 0xFFFFu);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = ((((g_loading_bases[2] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[30] = c.r[30] + wp::sign_extend16((g_loading_bases[2] + 0x0u) & 0xFFFFu);
    goto L_010001c4;
L_010001b8:
    c.ctr = c.r[12];
    c.lr = 0x10001c0u;
    wp::call(c, c.ctr);
R_010001c0:
    c.r[30] = c.r[30] + 0x4u;
L_010001c4:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010001b8;
    }
    c.r[3] = 0x2d0u;
    c.lr = 0x10001d8u;
    f_801c79a4(c);
R_010001d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_01000268;
    c.r[4] = 0x4000u;
    c.r[5] = 0x10000u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.lr = 0x10001f8u;
    f_80069af0(c);
R_010001f8:
    c.r[4] = 0x10000u;
    c.r[3] = c.r[30] + 0x1b8u;
    c.r[0] = c.r[4] + 0xffff8000u;
    c.r[5] = c.r[31] + 0x2cu;
    c.r[4] = c.r[31] + 0x18u;
    c.r[7] = 0x4u;
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1000218u;
    f_8003f8f0(c);
R_01000218:
    c.r[4] = ((((g_loading_bases[5] + 0xc8u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] + 0x2ccu;
    c.r[4] = c.r[4] + wp::sign_extend16((g_loading_bases[5] + 0xc8u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[30] + 0x1b8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1000234u;
    f_8003ee20(c);
R_01000234:
    ea = c.r[30] + 0x1b8u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0x1b8u;
    c.r[4] = c.r[31] + 0x40u;
    ea = c.r[12] + 0x54u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x100024cu;
    wp::call(c, c.ctr);
R_0100024c:
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] + 0x1b8u;
    c.lr = 0x1000258u;
    f_80042510(c);
R_01000258:
    c.r[4] = 0x1u;
    c.lr = 0x1000260u;
    f_800431a0(c);
R_01000260:
    c.r[3] = 0x0u;
    c.lr = 0x1000268u;
    f_8006a800(c);
L_01000268:
R_01000268:
    c.r[3] = ((((g_loading_bases[6] + 0x0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_loading_bases[6] + 0x0u) & 0xFFFFu);
    wp::wr32(ea, c.r[30]);
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

void f_loading_01000290(wp::Cpu& c) {
    WP_ENTER(0x1000290u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10002c4u: goto R_010002c4;
        case 0x10002d8u: goto R_010002d8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = ((((g_loading_bases[6] + 0x0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + wp::sign_extend16((g_loading_bases[6] + 0x0u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010002c4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10002c4u;
    wp::call(c, c.ctr);
L_010002c4:
R_010002c4:
    c.r[31] = ((((g_loading_bases[3] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_loading_bases[3] + 0x0u) & 0xFFFFu);
    goto L_010002dc;
L_010002d0:
    c.ctr = c.r[12];
    c.lr = 0x10002d8u;
    wp::call(c, c.ctr);
R_010002d8:
    c.r[31] = c.r[31] + 0x4u;
L_010002dc:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010002d0;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_loading_01000300(wp::Cpu& c) {
    WP_ENTER(0x1000300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x100032cu: goto R_0100032c;
        case 0x1000338u: goto R_01000338;
        case 0x1000340u: goto R_01000340;
        case 0x1000360u: goto R_01000360;
        case 0x1000390u: goto R_01000390;
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
    c.r[31] = ((((g_loading_bases[5] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_loading_bases[5] + 0x0u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[31] + 0x60u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x100032cu;
    f_80138880(c);
R_0100032c:
    c.r[3] = c.r[31] + 0x88u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1000338u;
    f_80138880(c);
R_01000338:
    c.r[30] = 0x0u;
    c.lr = 0x1000340u;
    f_801383f0(c);
R_01000340:
    c.r[29] = c.r[3] | c.r[3];
    goto L_01000364;
L_01000348:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0xa8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1000360u;
    f_80138880(c);
R_01000360:
    ea = c.r[29] + 0x0u;
    c.r[29] = wp::rd32(ea);
L_01000364:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01000384;
    c.r[0] = c.r[29] + 0x10000u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffffu);
    if (wp::cr_get(c, 2)) goto L_01000384;
    wp::compare_unsigned(c, 0, c.r[30], 0x10u);
    c.r[30] = c.r[30] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01000348;
    }
L_01000384:
    c.r[3] = c.r[31] + 0xc4u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1000390u;
    f_80138880(c);
L_01000390:
R_01000390:
    WP_POLL(c);
    goto L_01000390;
}

void f_loading_010003a0(wp::Cpu& c) {
    WP_ENTER(0x10003a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_loading_010003b0(wp::Cpu& c) {
    WP_ENTER(0x10003b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_loading_010003c0(wp::Cpu& c) {
    WP_ENTER(0x10003c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_loading_010003d0(wp::Cpu& c) {
    WP_ENTER(0x10003d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0xd4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_loading_010003f0(wp::Cpu& c) {
    WP_ENTER(0x10003f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x2u;
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_loading_01000410(wp::Cpu& c) {
    WP_ENTER(0x1000410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x2u;
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_loading_01000430(wp::Cpu& c) {
    WP_ENTER(0x1000430u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_loading_01000450(wp::Cpu& c) {
    WP_ENTER(0x1000450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2cu;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_loading_01000460(wp::Cpu& c) {
    WP_ENTER(0x1000460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe48u;
    f_loading_01000180(c);
    return;
}

void f_loading_01000470(wp::Cpu& c) {
    WP_ENTER(0x1000470u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe48u;
    f_loading_01000000(c);
    return;
}

