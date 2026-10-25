#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_boot_bases[14];
void f_80029330(wp::Cpu& c);
void f_8003e000(wp::Cpu& c);
void f_8003f8f0(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_80066dd0(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069af0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_8006a800(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_8006b710(wp::Cpu& c);
void f_8006b720(wp::Cpu& c);
void f_80071fe0(wp::Cpu& c);
void f_80072020(wp::Cpu& c);
void f_80075f20(wp::Cpu& c);
void f_80075f70(wp::Cpu& c);
void f_801383f0(wp::Cpu& c);
void f_80138880(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_boot_01000000(wp::Cpu& c);
void f_boot_01000150(wp::Cpu& c);
void f_boot_010001e0(wp::Cpu& c);
void f_boot_01000300(wp::Cpu& c);
void f_boot_01000370(wp::Cpu& c);

void f_boot_01000000(wp::Cpu& c) {
    WP_ENTER(0x1000000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1000014u: goto R_01000014;
        case 0x100002cu: goto R_0100002c;
        case 0x1000054u: goto R_01000054;
        case 0x100005cu: goto R_0100005c;
        case 0x1000078u: goto R_01000078;
        case 0x1000084u: goto R_01000084;
        case 0x1000090u: goto R_01000090;
        case 0x1000098u: goto R_01000098;
        case 0x10000acu: goto R_010000ac;
        case 0x10000b8u: goto R_010000b8;
        case 0x10000e0u: goto R_010000e0;
        case 0x10000e8u: goto R_010000e8;
        case 0x1000118u: goto R_01000118;
        case 0x1000124u: goto R_01000124;
        case 0x100012cu: goto R_0100012c;
        case 0x1000134u: goto R_01000134;
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
    c.lr = 0x1000014u;
    f_801c83b4(c);
R_01000014:
    c.r[29] = ((((g_boot_bases[4] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[26] = c.r[3] | c.r[3];
    c.r[29] = c.r[29] + wp::sign_extend16((g_boot_bases[4] + 0x0u) & 0xFFFFu);
    c.r[3] = 0x1u;
    ea = c.r[29] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x100002cu;
    f_80075f70(c);
R_0100002c:
    c.r[27] = 0x0u;
    c.r[31] = 0xffff0000u;
    c.r[30] = 0x1u;
    goto L_0100007c;
L_0100003c:
    ea = c.r[26] + 0x1b8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01000074;
    c.r[28] = 0x0u;
L_0100004c:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x1000054u;
    f_800699d0(c);
R_01000054:
    c.r[4] = c.r[31] + 0x1fffu;
    c.lr = 0x100005cu;
    f_80066cd0(c);
R_0100005c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01000068;
    ea = c.r[26] + 0x1b8u;
    wp::wr8(ea, c.r[30]);
L_01000068:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_signed(c, 0, c.r[28], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0100004c;
    }
L_01000074:
    c.lr = 0x1000078u;
    f_8006a940(c);
R_01000078:
    c.r[27] = c.r[27] + 0x1u;
L_0100007c:
    ea = c.r[29] + 0x4u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1000084u;
    f_80071fe0(c);
R_01000084:
    wp::compare_signed(c, 0, c.r[27], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0100003c;
    }
    c.lr = 0x1000090u;
    f_8006b720(c);
R_01000090:
    c.r[3] = c.r[3] | 0x10000000u;
    c.lr = 0x1000098u;
    f_8006b710(c);
R_01000098:
    c.r[27] = 0x0u;
    c.r[30] = 0xffff0000u;
    c.r[31] = 0x1u;
    goto L_010000b0;
L_010000a8:
    c.lr = 0x10000acu;
    f_8006a940(c);
R_010000ac:
    c.r[27] = c.r[27] + 0x1u;
L_010000b0:
    ea = c.r[29] + 0x8u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10000b8u;
    f_80071fe0(c);
R_010000b8:
    wp::compare_signed(c, 0, c.r[27], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0100010c;
    ea = c.r[26] + 0x1b8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010000d4;
    c.r[0] = 0x1u;
    goto L_01000104;
L_010000d4:
    c.r[28] = 0x0u;
L_010000d8:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x10000e0u;
    f_800699d0(c);
R_010000e0:
    c.r[4] = c.r[30] + 0x1fffu;
    c.lr = 0x10000e8u;
    f_80066cd0(c);
R_010000e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010000f4;
    ea = c.r[26] + 0x1b8u;
    wp::wr8(ea, c.r[31]);
L_010000f4:
    c.r[28] = c.r[28] + 0x1u;
    wp::compare_signed(c, 0, c.r[28], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010000d8;
    }
    ea = c.r[26] + 0x1b8u;
    c.r[0] = wp::rd8(ea);
L_01000104:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010000a8;
    }
L_0100010c:
    ea = c.r[29] + 0x0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x1u;
    c.lr = 0x1000118u;
    f_80075f20(c);
R_01000118:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.lr = 0x1000124u;
    f_8003e000(c);
R_01000124:
    c.r[3] = 0x1u;
    c.lr = 0x100012cu;
    f_80029330(c);
R_0100012c:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x1000134u;
    f_801c8400(c);
R_01000134:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_boot_01000150(wp::Cpu& c) {
    WP_ENTER(0x1000150u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x100019cu: goto R_0100019c;
        case 0x10001a8u: goto R_010001a8;
        case 0x10001b8u: goto R_010001b8;
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
    if (wp::cr_get(c, 2)) goto L_010001b8;
    c.r[3] = wp::add_carry(c, c.r[3], 0x1bcu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0100019c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0100019c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x100019cu;
    wp::call(c, c.ctr);
L_0100019c:
R_0100019c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10001a8u;
    f_80069c40(c);
R_010001a8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010001b8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10001b8u;
    f_801c7a8c(c);
L_010001b8:
R_010001b8:
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

void f_boot_010001e0(wp::Cpu& c) {
    WP_ENTER(0x10001e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1000204u: goto R_01000204;
        case 0x100021cu: goto R_0100021c;
        case 0x100023cu: goto R_0100023c;
        case 0x100025cu: goto R_0100025c;
        case 0x1000288u: goto R_01000288;
        case 0x10002b8u: goto R_010002b8;
        case 0x10002c0u: goto R_010002c0;
        case 0x10002c8u: goto R_010002c8;
        case 0x10002d0u: goto R_010002d0;
        case 0x10002dcu: goto R_010002dc;
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
    c.r[31] = ((((g_boot_bases[2] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_boot_bases[2] + 0x0u) & 0xFFFFu);
    goto L_01000208;
L_010001fc:
    c.ctr = c.r[12];
    c.lr = 0x1000204u;
    wp::call(c, c.ctr);
R_01000204:
    c.r[31] = c.r[31] + 0x4u;
L_01000208:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010001fc;
    }
    c.r[3] = 0x1c0u;
    c.lr = 0x100021cu;
    f_801c79a4(c);
R_0100021c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_010002dc;
    c.r[4] = 0x4000u;
    c.r[5] = 0x10000u;
    c.r[6] = 0x0u;
    c.r[7] = 0x1u;
    c.lr = 0x100023cu;
    f_80069af0(c);
R_0100023c:
    c.r[3] = ((((g_boot_bases[5] + 0x88u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_boot_bases[5] + 0x88u) & 0xFFFFu);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x114u;
    ea = c.r[31] + 0x1b8u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x100025cu;
    f_801c79a4(c);
R_0100025c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01000288;
    c.r[5] = 0x10000u;
    c.r[4] = ((((g_boot_bases[5] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[0] = c.r[5] + 0xffff8000u;
    c.r[7] = 0x4u;
    c.r[5] = ((((g_boot_bases[5] + 0x10u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_boot_bases[5] + 0x0u) & 0xFFFFu);
    c.r[5] = c.r[5] + wp::sign_extend16((g_boot_bases[5] + 0x10u) & 0xFFFFu);
    c.r[6] = c.r[0] & 0xffffu;
    c.lr = 0x1000288u;
    f_8003f8f0(c);
L_01000288:
R_01000288:
    ea = c.r[31] + 0x1bcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010002b8;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[31] + 0x1bcu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010002b8;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10002b8u;
    wp::call(c, c.ctr);
L_010002b8:
R_010002b8:
    c.r[3] = 0x0u;
    c.lr = 0x10002c0u;
    f_80066dd0(c);
R_010002c0:
    c.r[3] = 0x1u;
    c.lr = 0x10002c8u;
    f_80072020(c);
R_010002c8:
    c.r[3] = 0x0u;
    c.lr = 0x10002d0u;
    f_8006a800(c);
R_010002d0:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.lr = 0x10002dcu;
    f_8003e000(c);
L_010002dc:
R_010002dc:
    c.r[3] = ((((g_boot_bases[6] + 0x0u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_boot_bases[6] + 0x0u) & 0xFFFFu);
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_boot_01000300(wp::Cpu& c) {
    WP_ENTER(0x1000300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1000334u: goto R_01000334;
        case 0x1000348u: goto R_01000348;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = ((((g_boot_bases[6] + 0x0u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + wp::sign_extend16((g_boot_bases[6] + 0x0u) & 0xFFFFu);
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01000334;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1000334u;
    wp::call(c, c.ctr);
L_01000334:
R_01000334:
    c.r[31] = ((((g_boot_bases[3] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_boot_bases[3] + 0x0u) & 0xFFFFu);
    goto L_0100034c;
L_01000340:
    c.ctr = c.r[12];
    c.lr = 0x1000348u;
    wp::call(c, c.ctr);
R_01000348:
    c.r[31] = c.r[31] + 0x4u;
L_0100034c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01000340;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_boot_01000370(wp::Cpu& c) {
    WP_ENTER(0x1000370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x100039cu: goto R_0100039c;
        case 0x10003a8u: goto R_010003a8;
        case 0x10003b0u: goto R_010003b0;
        case 0x10003d0u: goto R_010003d0;
        case 0x1000400u: goto R_01000400;
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
    c.r[31] = ((((g_boot_bases[5] + 0x0u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_boot_bases[5] + 0x0u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = c.r[31] + 0x20u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x100039cu;
    f_80138880(c);
R_0100039c:
    c.r[3] = c.r[31] + 0x48u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10003a8u;
    f_80138880(c);
R_010003a8:
    c.r[30] = 0x0u;
    c.lr = 0x10003b0u;
    f_801383f0(c);
R_010003b0:
    c.r[29] = c.r[3] | c.r[3];
    goto L_010003d4;
L_010003b8:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0x68u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10003d0u;
    f_80138880(c);
R_010003d0:
    ea = c.r[29] + 0x0u;
    c.r[29] = wp::rd32(ea);
L_010003d4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010003f4;
    c.r[0] = c.r[29] + 0x10000u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffffu);
    if (wp::cr_get(c, 2)) goto L_010003f4;
    wp::compare_unsigned(c, 0, c.r[30], 0x10u);
    c.r[30] = c.r[30] + 0x1u;
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010003b8;
    }
L_010003f4:
    c.r[3] = c.r[31] + 0x84u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1000400u;
    f_80138880(c);
L_01000400:
R_01000400:
    WP_POLL(c);
    goto L_01000400;
}

