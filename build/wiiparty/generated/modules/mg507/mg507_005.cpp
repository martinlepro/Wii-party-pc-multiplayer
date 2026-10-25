#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mg507_bases[17];
void f_80004714(wp::Cpu& c);
void f_8000dd70(wp::Cpu& c);
void f_8000e2a0(wp::Cpu& c);
void f_8000fc20(wp::Cpu& c);
void f_8000fc40(wp::Cpu& c);
void f_8000ffd0(wp::Cpu& c);
void f_80010060(wp::Cpu& c);
void f_80018e30(wp::Cpu& c);
void f_80019f20(wp::Cpu& c);
void f_80019fa0(wp::Cpu& c);
void f_8001a010(wp::Cpu& c);
void f_8001bfe0(wp::Cpu& c);
void f_80022df0(wp::Cpu& c);
void f_8003b480(wp::Cpu& c);
void f_8003cc90(wp::Cpu& c);
void f_8003cfb0(wp::Cpu& c);
void f_8003d2d0(wp::Cpu& c);
void f_8003fb90(wp::Cpu& c);
void f_800402c0(wp::Cpu& c);
void f_800402f0(wp::Cpu& c);
void f_800403a0(wp::Cpu& c);
void f_800403b0(wp::Cpu& c);
void f_80043060(wp::Cpu& c);
void f_80043120(wp::Cpu& c);
void f_80043140(wp::Cpu& c);
void f_80043290(wp::Cpu& c);
void f_80043490(wp::Cpu& c);
void f_80048ec0(wp::Cpu& c);
void f_80048f30(wp::Cpu& c);
void f_8004a100(wp::Cpu& c);
void f_8004a110(wp::Cpu& c);
void f_80052250(wp::Cpu& c);
void f_80053d40(wp::Cpu& c);
void f_80055290(wp::Cpu& c);
void f_80055bb0(wp::Cpu& c);
void f_80055d80(wp::Cpu& c);
void f_80063bb0(wp::Cpu& c);
void f_80066cd0(wp::Cpu& c);
void f_800699d0(wp::Cpu& c);
void f_80069c40(wp::Cpu& c);
void f_80069e30(wp::Cpu& c);
void f_80069e40(wp::Cpu& c);
void f_8006a940(wp::Cpu& c);
void f_8006b460(wp::Cpu& c);
void f_8006b590(wp::Cpu& c);
void f_8006c450(wp::Cpu& c);
void f_8006c460(wp::Cpu& c);
void f_8006c4e0(wp::Cpu& c);
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
void f_8012bbc0(wp::Cpu& c);
void f_8012be00(wp::Cpu& c);
void f_8012be60(wp::Cpu& c);
void f_80132a30(wp::Cpu& c);
void f_80132ab0(wp::Cpu& c);
void f_8014b090(wp::Cpu& c);
void f_801c7860(wp::Cpu& c);
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c8244(wp::Cpu& c);
void f_801c8384(wp::Cpu& c);
void f_801c8390(wp::Cpu& c);
void f_801c83ac(wp::Cpu& c);
void f_801c83b0(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c83b8(wp::Cpu& c);
void f_801c83d0(wp::Cpu& c);
void f_801c83dc(wp::Cpu& c);
void f_801c83f8(wp::Cpu& c);
void f_801c83fc(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_801c8404(wp::Cpu& c);
void f_801cee24(wp::Cpu& c);
void f_801cf394(wp::Cpu& c);
void f_801cf510(wp::Cpu& c);
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_mg507_0101a6f0(wp::Cpu& c);
void f_mg507_0101a8b0(wp::Cpu& c);
void f_mg507_01024d90(wp::Cpu& c);
void f_mg507_010252f0(wp::Cpu& c);
void f_mg507_01028a20(wp::Cpu& c);
void f_mg507_0102f320(wp::Cpu& c);
void f_mg507_0106b660(wp::Cpu& c);
void f_mg507_0106bd90(wp::Cpu& c);
void f_mg507_0106bda0(wp::Cpu& c);
void f_mg507_0106bdb0(wp::Cpu& c);
void f_mg507_0106bed0(wp::Cpu& c);
void f_mg507_0106bf10(wp::Cpu& c);
void f_mg507_0106bf30(wp::Cpu& c);
void f_mg507_0106bfc0(wp::Cpu& c);
void f_mg507_0106c0b0(wp::Cpu& c);
void f_mg507_0106c1a0(wp::Cpu& c);
void f_mg507_0106c2e0(wp::Cpu& c);
void f_mg507_0106c420(wp::Cpu& c);
void f_mg507_0106c520(wp::Cpu& c);
void f_mg507_0106c560(wp::Cpu& c);
void f_mg507_0106c750(wp::Cpu& c);
void f_mg507_0106c7d0(wp::Cpu& c);
void f_mg507_0106c850(wp::Cpu& c);
void f_mg507_0106c8d0(wp::Cpu& c);
void f_mg507_0106cbc0(wp::Cpu& c);
void f_mg507_0106cd60(wp::Cpu& c);
void f_mg507_0106cf00(wp::Cpu& c);
void f_mg507_0106d010(wp::Cpu& c);
void f_mg507_0106d110(wp::Cpu& c);
void f_mg507_0106d240(wp::Cpu& c);
void f_mg507_0106d340(wp::Cpu& c);
void f_mg507_0106d350(wp::Cpu& c);
void f_mg507_0106d450(wp::Cpu& c);
void f_mg507_0106d460(wp::Cpu& c);
void f_mg507_0106d4b0(wp::Cpu& c);
void f_mg507_0106d650(wp::Cpu& c);
void f_mg507_0106d770(wp::Cpu& c);
void f_mg507_0106d800(wp::Cpu& c);
void f_mg507_0106d940(wp::Cpu& c);
void f_mg507_0106da50(wp::Cpu& c);
void f_mg507_0106dab0(wp::Cpu& c);
void f_mg507_0106dd00(wp::Cpu& c);
void f_mg507_0106e9b0(wp::Cpu& c);
void f_mg507_0106ed40(wp::Cpu& c);
void f_mg507_0106ed70(wp::Cpu& c);
void f_mg507_0106ee40(wp::Cpu& c);
void f_mg507_0106efe0(wp::Cpu& c);
void f_mg507_0106eff0(wp::Cpu& c);
void f_mg507_0106f000(wp::Cpu& c);
void f_mg507_0106f090(wp::Cpu& c);
void f_mg507_0106f160(wp::Cpu& c);
void f_mg507_0106f1f0(wp::Cpu& c);
void f_mg507_0106f200(wp::Cpu& c);
void f_mg507_0106f250(wp::Cpu& c);
void f_mg507_0106f410(wp::Cpu& c);
void f_mg507_0106f5d0(wp::Cpu& c);
void f_mg507_0106f650(wp::Cpu& c);
void f_mg507_0106f6c0(wp::Cpu& c);
void f_mg507_0106fa80(wp::Cpu& c);
void f_mg507_0106fbb0(wp::Cpu& c);
void f_mg507_0106fbc0(wp::Cpu& c);
void f_mg507_0106fcb0(wp::Cpu& c);
void f_mg507_0106fd90(wp::Cpu& c);
void f_mg507_0106fe60(wp::Cpu& c);
void f_mg507_0106ff50(wp::Cpu& c);
void f_mg507_01070030(wp::Cpu& c);
void f_mg507_01070310(wp::Cpu& c);
void f_mg507_010703e0(wp::Cpu& c);
void f_mg507_010706b0(wp::Cpu& c);
void f_mg507_01070790(wp::Cpu& c);
void f_mg507_010707b0(wp::Cpu& c);
void f_mg507_010708d0(wp::Cpu& c);
void f_mg507_01070960(wp::Cpu& c);
void f_mg507_010709e0(wp::Cpu& c);
void f_mg507_01070b00(wp::Cpu& c);
void f_mg507_01070c00(wp::Cpu& c);
void f_mg507_01071180(wp::Cpu& c);
void f_mg507_01071190(wp::Cpu& c);
void f_mg507_010711c0(wp::Cpu& c);
void f_mg507_010711d0(wp::Cpu& c);
void f_mg507_010713a0(wp::Cpu& c);
void f_mg507_010714e0(wp::Cpu& c);
void f_mg507_010714f0(wp::Cpu& c);
void f_mg507_01071640(wp::Cpu& c);
void f_mg507_01071700(wp::Cpu& c);
void f_mg507_010717d0(wp::Cpu& c);
void f_mg507_01071840(wp::Cpu& c);
void f_mg507_010718b0(wp::Cpu& c);
void f_mg507_010718d0(wp::Cpu& c);
void f_mg507_01071940(wp::Cpu& c);
void f_mg507_01071a00(wp::Cpu& c);
void f_mg507_01071f40(wp::Cpu& c);
void f_mg507_010722e0(wp::Cpu& c);
void f_mg507_01072300(wp::Cpu& c);
void f_mg507_01072610(wp::Cpu& c);
void f_mg507_01072620(wp::Cpu& c);
void f_mg507_01072630(wp::Cpu& c);
void f_mg507_01072a30(wp::Cpu& c);
void f_mg507_01072b40(wp::Cpu& c);
void f_mg507_01072bc0(wp::Cpu& c);
void f_mg507_01072c20(wp::Cpu& c);
void f_mg507_01072d60(wp::Cpu& c);
void f_mg507_01072d70(wp::Cpu& c);
void f_mg507_01072d80(wp::Cpu& c);
void f_mg507_01072d90(wp::Cpu& c);
void f_mg507_01072e50(wp::Cpu& c);
void f_mg507_010730d0(wp::Cpu& c);
void f_mg507_01073100(wp::Cpu& c);
void f_mg507_01073120(wp::Cpu& c);
void f_mg507_01073180(wp::Cpu& c);
void f_mg507_01073400(wp::Cpu& c);
void f_mg507_01073420(wp::Cpu& c);
void f_mg507_01073440(wp::Cpu& c);
void f_mg507_010734b0(wp::Cpu& c);
void f_mg507_01073530(wp::Cpu& c);
void f_mg507_01073550(wp::Cpu& c);
void f_mg507_01073570(wp::Cpu& c);
void f_mg507_01073590(wp::Cpu& c);
void f_mg507_010735d0(wp::Cpu& c);
void f_mg507_010735f0(wp::Cpu& c);
void f_mg507_01073610(wp::Cpu& c);
void f_mg507_01073630(wp::Cpu& c);
void f_mg507_01073650(wp::Cpu& c);
void f_mg507_01073670(wp::Cpu& c);
void f_mg507_010736b0(wp::Cpu& c);
void f_mg507_01073880(wp::Cpu& c);
void f_mg507_010738a0(wp::Cpu& c);
void f_mg507_010738d0(wp::Cpu& c);
void f_mg507_01073900(wp::Cpu& c);
void f_mg507_01073930(wp::Cpu& c);
void f_mg507_01073960(wp::Cpu& c);
void f_mg507_01073980(wp::Cpu& c);
void f_mg507_010739b0(wp::Cpu& c);
void f_mg507_010739d0(wp::Cpu& c);
void f_mg507_010739f0(wp::Cpu& c);
void f_mg507_01073a00(wp::Cpu& c);
void f_mg507_01073a10(wp::Cpu& c);
void f_mg507_01073a80(wp::Cpu& c);
void f_mg507_01073a90(wp::Cpu& c);
void f_mg507_01073aa0(wp::Cpu& c);
void f_mg507_01073ab0(wp::Cpu& c);
void f_mg507_01073ad0(wp::Cpu& c);
void f_mg507_01073b40(wp::Cpu& c);
void f_mg507_01073b50(wp::Cpu& c);
void f_mg507_01073b60(wp::Cpu& c);
void f_mg507_01073b70(wp::Cpu& c);
void f_mg507_01073b80(wp::Cpu& c);
void f_mg507_01073b90(wp::Cpu& c);
void f_mg507_01073ba0(wp::Cpu& c);
void f_mg507_01073bb0(wp::Cpu& c);
void f_mg507_01073bc0(wp::Cpu& c);
void f_mg507_01073bd0(wp::Cpu& c);
void f_mg507_01073be0(wp::Cpu& c);
void f_mg507_01073bf0(wp::Cpu& c);
void f_mg507_01073c50(wp::Cpu& c);
void f_mg507_01073cb0(wp::Cpu& c);
void f_mg507_01074060(wp::Cpu& c);
void f_mg507_010742b0(wp::Cpu& c);
void f_mg507_01074740(wp::Cpu& c);
void f_mg507_01074750(wp::Cpu& c);

void f_mg507_0106bd90(wp::Cpu& c) {
    WP_ENTER(0x106bd90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg507_0106bda0(wp::Cpu& c) {
    WP_ENTER(0x106bda0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg507_0106bdb0(wp::Cpu& c) {
    WP_ENTER(0x106bdb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106be34u: goto R_0106be34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x27714u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x27714u) & 0xFFFFu);
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
    goto L_0106be1c;
L_0106be18:
    c.r[30] = c.r[30] + 0x4u;
L_0106be1c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106be40;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106be34u;
    f_801c8244(c);
R_0106be34:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106be18;
    }
L_0106be40:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106be60;
    c.r[3] = 0x0u;
    goto L_0106be64;
L_0106be60:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0106be64:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106bea4;
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
L_0106bea4:
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

void f_mg507_0106bed0(wp::Cpu& c) {
    WP_ENTER(0x106bed0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106bef8u: goto R_0106bef8;
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
    c.lr = 0x106bef8u;
    wp::call(c, c.ctr);
R_0106bef8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_0106bf10(wp::Cpu& c) {
    WP_ENTER(0x106bf10u);
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

void f_mg507_0106bf30(wp::Cpu& c) {
    WP_ENTER(0x106bf30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = ((((g_mg507_bases[6] + 0x1490u) + 0x8000u) >> 16) << 16);
    c.r[9] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[6] + 0x1490u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[9] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106bfa0;
    c.r[7] = ((((g_mg507_bases[6] + 0x1498u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x38u;
    c.f[7] = wp::rdf32(ea);
    c.ps1[7] = c.f[7];
    c.r[6] = c.r[7] + wp::sign_extend16((g_mg507_bases[6] + 0x1498u) & 0xFFFFu);
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
    ea = c.r[7] + wp::sign_extend16((g_mg507_bases[6] + 0x1498u) & 0xFFFFu);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[6] + 0x1490u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_0106bfa0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg507_bases[6] + 0x1498u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    ea = c.r[12] + 0x190u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg507_bases[6] + 0x1498u) & 0xFFFFu);
    c.r[5] = c.r[6] + c.r[0];
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_0106bfc0(wp::Cpu& c) {
    WP_ENTER(0x106bfc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c044u: goto R_0106c044;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x27720u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27720u) & 0xFFFFu);
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
    goto L_0106c02c;
L_0106c028:
    c.r[30] = c.r[30] + 0x4u;
L_0106c02c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106c050;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c044u;
    f_801c8244(c);
R_0106c044:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c028;
    }
L_0106c050:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c070;
    c.r[4] = 0x0u;
    goto L_0106c074;
L_0106c070:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0106c074:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c090;
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
L_0106c090:
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

void f_mg507_0106c0b0(wp::Cpu& c) {
    WP_ENTER(0x106c0b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c134u: goto R_0106c134;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x2772cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x2772cu) & 0xFFFFu);
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
    goto L_0106c11c;
L_0106c118:
    c.r[30] = c.r[30] + 0x4u;
L_0106c11c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106c140;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c134u;
    f_801c8244(c);
R_0106c134:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c118;
    }
L_0106c140:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c160;
    c.r[4] = 0x0u;
    goto L_0106c164;
L_0106c160:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0106c164:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c180;
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
L_0106c180:
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

void f_mg507_0106c1a0(wp::Cpu& c) {
    WP_ENTER(0x106c1a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c224u: goto R_0106c224;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x27738u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x27738u) & 0xFFFFu);
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
    goto L_0106c20c;
L_0106c208:
    c.r[29] = c.r[29] + 0x4u;
L_0106c20c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0106c230;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c224u;
    f_801c8244(c);
R_0106c224:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c208;
    }
L_0106c230:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c250;
    c.r[5] = 0x0u;
    goto L_0106c254;
L_0106c250:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0106c254:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c2b4;
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
L_0106c2b4:
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

void f_mg507_0106c2e0(wp::Cpu& c) {
    WP_ENTER(0x106c2e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c364u: goto R_0106c364;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x27744u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x27744u) & 0xFFFFu);
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
    goto L_0106c34c;
L_0106c348:
    c.r[29] = c.r[29] + 0x4u;
L_0106c34c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0106c370;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c364u;
    f_801c8244(c);
R_0106c364:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c348;
    }
L_0106c370:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c390;
    c.r[6] = 0x0u;
    goto L_0106c394;
L_0106c390:
    ea = c.r[29] + 0x0u;
    c.r[6] = wp::rd32(ea);
L_0106c394:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c3fc;
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
L_0106c3fc:
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

void f_mg507_0106c420(wp::Cpu& c) {
    WP_ENTER(0x106c420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c460u: goto R_0106c460;
        case 0x106c47cu: goto R_0106c47c;
        case 0x106c494u: goto R_0106c494;
        case 0x106c4b8u: goto R_0106c4b8;
        case 0x106c4dcu: goto R_0106c4dc;
        case 0x106c4fcu: goto R_0106c4fc;
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
    if (!wp::cr_get(c, 0)) goto L_0106c464;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c460u;
    wp::call(c, c.ctr);
R_0106c460:
    goto L_0106c494;
L_0106c464:
    if (!wp::cr_get(c, 2)) goto L_0106c480;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c47cu;
    wp::call(c, c.ctr);
R_0106c47c:
    goto L_0106c494;
L_0106c480:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c494u;
    wp::call(c, c.ctr);
L_0106c494:
R_0106c494:
    c.r[0] = wp::sign_extend8(c.r[31]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_0106c4bc;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c4b8u;
    wp::call(c, c.ctr);
R_0106c4b8:
    goto L_0106c4fc;
L_0106c4bc:
    if (!wp::cr_get(c, 2)) goto L_0106c4e0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c4dcu;
    wp::call(c, c.ctr);
R_0106c4dc:
    goto L_0106c4fc;
L_0106c4e0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x2u;
    ea = c.r[12] + 0x1a8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c4fcu;
    wp::call(c, c.ctr);
L_0106c4fc:
R_0106c4fc:
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

void f_mg507_0106c520(wp::Cpu& c) {
    WP_ENTER(0x106c520u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c550u: goto R_0106c550;
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
    c.lr = 0x106c550u;
    wp::call(c, c.ctr);
R_0106c550:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_0106c560(wp::Cpu& c) {
    WP_ENTER(0x106c560u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c574u: goto R_0106c574;
        case 0x106c5e0u: goto R_0106c5e0;
        case 0x106c73cu: goto R_0106c73c;
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
    c.lr = 0x106c574u;
    f_801c83b8(c);
R_0106c574:
    c.r[9] = ((((g_mg507_bases[5] + 0x27750u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg507_bases[5] + 0x27750u) & 0xFFFFu);
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
    goto L_0106c5c8;
L_0106c5c4:
    c.r[29] = c.r[29] + 0x4u;
L_0106c5c8:
    wp::compare_unsigned(c, 0, c.r[29], c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0106c5ec;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x2cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c5e0u;
    f_801c8244(c);
R_0106c5e0:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c5c4;
    }
L_0106c5ec:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c60c;
    c.r[5] = 0x0u;
    goto L_0106c610;
L_0106c60c:
    ea = c.r[29] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0106c610:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c734;
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
    if (wp::cr_get(c, 0)) goto L_0106c6e4;
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0106c6e4;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 0)) goto L_0106c6e4;
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
    goto L_0106c734;
L_0106c6e4:
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
L_0106c734:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x106c73cu;
    f_801c8404(c);
R_0106c73c:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg507_0106c750(wp::Cpu& c) {
    WP_ENTER(0x106c750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c790u: goto R_0106c790;
        case 0x106c7b4u: goto R_0106c7b4;
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
    c.lr = 0x106c790u;
    wp::call(c, c.ctr);
R_0106c790:
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
    c.lr = 0x106c7b4u;
    wp::call(c, c.ctr);
R_0106c7b4:
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

void f_mg507_0106c7d0(wp::Cpu& c) {
    WP_ENTER(0x106c7d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c804u: goto R_0106c804;
        case 0x106c828u: goto R_0106c828;
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
    c.lr = 0x106c804u;
    wp::call(c, c.ctr);
R_0106c804:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106c828;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1c0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106c828u;
    wp::call(c, c.ctr);
L_0106c828:
R_0106c828:
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

void f_mg507_0106c850(wp::Cpu& c) {
    WP_ENTER(0x106c850u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c884u: goto R_0106c884;
        case 0x106c8acu: goto R_0106c8ac;
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
    c.lr = 0x106c884u;
    wp::call(c, c.ctr);
R_0106c884:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg507_bases[4] + 0x23acu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg507_bases[4] + 0x23b0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x194u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[6] + wp::sign_extend16((g_mg507_bases[4] + 0x23acu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[4] + 0x23b0u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.ctr = c.r[12];
    c.lr = 0x106c8acu;
    wp::call(c, c.ctr);
R_0106c8ac:
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

void f_mg507_0106c8d0(wp::Cpu& c) {
    WP_ENTER(0x106c8d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106c8fcu: goto R_0106c8fc;
        case 0x106c968u: goto R_0106c968;
        case 0x106c9f0u: goto R_0106c9f0;
        case 0x106ca58u: goto R_0106ca58;
        case 0x106cafcu: goto R_0106cafc;
        case 0x106cb40u: goto R_0106cb40;
        case 0x106cb80u: goto R_0106cb80;
        case 0x106cbacu: goto R_0106cbac;
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
    c.lr = 0x106c8fcu;
    f_801c83b8(c);
R_0106c8fc:
    c.r[8] = ((((g_mg507_bases[5] + 0x2775cu) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x2775cu) & 0xFFFFu);
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
    goto L_0106c950;
L_0106c94c:
    c.r[27] = c.r[27] + 0x4u;
L_0106c950:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0106c974;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x3cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106c968u;
    f_801c8244(c);
R_0106c968:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106c94c;
    }
L_0106c974:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106c994;
    c.r[28] = 0x0u;
    goto L_0106c998;
L_0106c994:
    ea = c.r[27] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_0106c998:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    c.r[27] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0106c9ac;
    c.r[3] = 0x0u;
    goto L_0106cb8c;
L_0106c9ac:
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
    c.lr = 0x106c9f0u;
    wp::call(c, c.ctr);
R_0106c9f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf32(ea);
    c.ps1[4] = c.f[4];
    ea = c.r[1] + 0x1cu;
    c.f[5] = wp::rdf32(ea);
    c.ps1[5] = c.f[5];
    if (!wp::cr_get(c, 2)) goto L_0106ca5c;
    c.r[3] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x28u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0106ca30;
    c.f[2] = wp::round_single(c.f[0] / c.f[5]);
    c.ps1[2] = c.f[2];
L_0106ca30:
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
    c.lr = 0x106ca58u;
    wp::call(c, c.ctr);
R_0106ca58:
    goto L_0106cafc;
L_0106ca5c:
    c.r[3] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x2cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 2)) goto L_0106ca8c;
    goto L_0106ca90;
L_0106ca8c:
    c.f[3] = c.f[2];
L_0106ca90:
    c.r[3] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[0], c.f[2]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_0106caa8;
    goto L_0106caac;
L_0106caa8:
    c.f[2] = c.f[0];
L_0106caac:
    wp::compare_float(c, 0, c.f[2], c.f[3]);
    if (!wp::cr_get(c, 1)) goto L_0106cab8;
    c.f[2] = c.f[3];
L_0106cab8:
    c.r[3] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (wp::cr_get(c, 0)) goto L_0106cad0;
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_0106cad4;
L_0106cad0:
    c.r[27] = 0x1u;
L_0106cad4:
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
    c.lr = 0x106cafcu;
    wp::call(c, c.ctr);
L_0106cafc:
R_0106cafc:
    c.r[4] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    c.r[3] = ((((g_mg507_bases[4] + 0x23e8u) + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[29] = wp::rdf32(ea);
    c.ps1[29] = c.f[29];
    ea = c.r[1] + 0x28u;
    c.f[30] = wp::rdf32(ea);
    c.ps1[30] = c.f[30];
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e8u) & 0xFFFFu);
    c.f[31] = wp::rdf32(ea);
    c.ps1[31] = c.f[31];
L_0106cb10:
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
    c.lr = 0x106cb40u;
    wp::call(c, c.ctr);
R_0106cb40:
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[0], c.f[30]);
    c.r[0] = wp::mfcr(c);
    c.r[0] = wp::rotl(c.r[0], 2) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106cb88;
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
    c.lr = 0x106cb80u;
    wp::call(c, c.ctr);
R_0106cb80:
    c.r[27] = 0x1u;
    WP_POLL(c);
    goto L_0106cb10;
L_0106cb88:
    c.r[3] = c.r[27] | c.r[27];
L_0106cb8c:
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
    c.lr = 0x106cbacu;
    f_801c8404(c);
R_0106cbac:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg507_0106cbc0(wp::Cpu& c) {
    WP_ENTER(0x106cbc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106cbd4u: goto R_0106cbd4;
        case 0x106cc44u: goto R_0106cc44;
        case 0x106cd50u: goto R_0106cd50;
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
    c.lr = 0x106cbd4u;
    f_801c83b4(c);
R_0106cbd4:
    c.r[10] = ((((g_mg507_bases[5] + 0x27768u) + 0x8000u) >> 16) << 16);
    ea = c.r[10] + wp::sign_extend16((g_mg507_bases[5] + 0x27768u) & 0xFFFFu);
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
    goto L_0106cc2c;
L_0106cc28:
    c.r[27] = c.r[27] + 0x4u;
L_0106cc2c:
    wp::compare_unsigned(c, 0, c.r[27], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_0106cc50;
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106cc44u;
    f_801c8244(c);
R_0106cc44:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106cc28;
    }
L_0106cc50:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[27], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106cc70;
    c.r[5] = 0x0u;
    goto L_0106cc74;
L_0106cc70:
    ea = c.r[27] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0106cc74:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106cd48;
    ea = c.r[5] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106cc9c;
    goto L_0106cd48;
L_0106cc9c:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_0106cd24;
L_0106ccb8:
    wp::compare_unsigned(c, 0, c.r[0], 0xbu);
    if (!wp::cr_get(c, 2)) goto L_0106ccc8;
    c.r[7] = c.r[7] + 0x3u;
    goto L_0106cd24;
L_0106ccc8:
    wp::compare_unsigned(c, 0, c.r[0], 0xcu);
    if (!wp::cr_get(c, 2)) goto L_0106ccf0;
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
    goto L_0106cd20;
L_0106ccf0:
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_0106cd1c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0106cd14;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_0106cd14:
    c.r[8] = 0x0u;
    goto L_0106cd20;
L_0106cd1c:
    c.r[8] = c.r[8] + 0x1u;
L_0106cd20:
    c.r[7] = c.r[7] + 0x1u;
L_0106cd24:
    ea = c.r[5] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[6];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ccb8;
    }
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0106cd48;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[8]);
L_0106cd48:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x106cd50u;
    f_801c8400(c);
R_0106cd50:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg507_0106cd60(wp::Cpu& c) {
    WP_ENTER(0x106cd60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106cd74u: goto R_0106cd74;
        case 0x106cde8u: goto R_0106cde8;
        case 0x106ce2cu: goto R_0106ce2c;
        case 0x106ce98u: goto R_0106ce98;
        case 0x106cee4u: goto R_0106cee4;
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
    c.lr = 0x106cd74u;
    f_801c83b4(c);
R_0106cd74:
    c.r[9] = ((((g_mg507_bases[5] + 0x27774u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + wp::sign_extend16((g_mg507_bases[5] + 0x27774u) & 0xFFFFu);
    c.r[8] = wp::rd32(ea);
    c.r[9] = ea;
    c.r[27] = c.r[5] | c.r[5];
    c.r[30] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    ea = c.r[9] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[4]);
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
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
    goto L_0106cdd0;
L_0106cdcc:
    c.r[29] = c.r[29] + 0x4u;
L_0106cdd0:
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106cdf4;
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106cde8u;
    f_801c8244(c);
R_0106cde8:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106cdcc;
    }
L_0106cdf4:
    ea = c.r[26] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[26] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106ce14;
    c.r[31] = 0x0u;
    goto L_0106ce18;
L_0106ce14:
    ea = c.r[29] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0106ce18:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ce60;
    ea = c.r[31] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x48u;
    c.lr = 0x106ce2cu;
    f_8012be00(c);
R_0106ce2c:
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
    goto L_0106cedc;
L_0106ce60:
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
    c.lr = 0x106ce98u;
    f_8012be00(c);
R_0106ce98:
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
L_0106cedc:
    c.r[11] = c.r[1] + 0x70u;
    c.lr = 0x106cee4u;
    f_801c8400(c);
R_0106cee4:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_mg507_0106cf00(wp::Cpu& c) {
    WP_ENTER(0x106cf00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106cf14u: goto R_0106cf14;
        case 0x106cf80u: goto R_0106cf80;
        case 0x106cfc8u: goto R_0106cfc8;
        case 0x106cff8u: goto R_0106cff8;
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
    c.lr = 0x106cf14u;
    f_801c83b8(c);
R_0106cf14:
    c.r[8] = ((((g_mg507_bases[5] + 0x27780u) + 0x8000u) >> 16) << 16);
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x27780u) & 0xFFFFu);
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
    goto L_0106cf68;
L_0106cf64:
    c.r[30] = c.r[30] + 0x4u;
L_0106cf68:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106cf8c;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106cf80u;
    f_801c8244(c);
R_0106cf80:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106cf64;
    }
L_0106cf8c:
    ea = c.r[27] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106cfac;
    c.r[31] = 0x0u;
    goto L_0106cfb0;
L_0106cfac:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0106cfb0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106cfc8u;
    wp::call(c, c.ctr);
R_0106cfc8:
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
    c.lr = 0x106cff8u;
    f_801c8404(c);
R_0106cff8:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg507_0106d010(wp::Cpu& c) {
    WP_ENTER(0x106d010u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d094u: goto R_0106d094;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x2778cu) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x2778cu) & 0xFFFFu);
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
    goto L_0106d07c;
L_0106d078:
    c.r[30] = c.r[30] + 0x4u;
L_0106d07c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d0a0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d094u;
    f_801c8244(c);
R_0106d094:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d078;
    }
L_0106d0a0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d0c0;
    c.r[3] = 0x0u;
    goto L_0106d0c4;
L_0106d0c0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0106d0c4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d0e4;
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[29] & 0xffu;
    ea = c.r[4] + 0xbbu;
    c.r[3] = wp::rd8(ea);
    c.r[3] = c.r[3] & 0xfeu;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0xbbu;
    wp::wr8(ea, c.r[0]);
L_0106d0e4:
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

void f_mg507_0106d110(wp::Cpu& c) {
    WP_ENTER(0x106d110u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d194u: goto R_0106d194;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x27798u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x27798u) & 0xFFFFu);
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
    goto L_0106d17c;
L_0106d178:
    c.r[30] = c.r[30] + 0x4u;
L_0106d17c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d1a0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d194u;
    f_801c8244(c);
R_0106d194:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d178;
    }
L_0106d1a0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d1c0;
    c.r[4] = 0x0u;
    goto L_0106d1c4;
L_0106d1c0:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
L_0106d1c4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d21c;
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
L_0106d21c:
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

void f_mg507_0106d240(wp::Cpu& c) {
    WP_ENTER(0x106d240u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d2c4u: goto R_0106d2c4;
        case 0x106d314u: goto R_0106d314;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x277a4u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x277a4u) & 0xFFFFu);
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
    goto L_0106d2ac;
L_0106d2a8:
    c.r[30] = c.r[30] + 0x4u;
L_0106d2ac:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d2d0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d2c4u;
    f_801c8244(c);
R_0106d2c4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d2a8;
    }
L_0106d2d0:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d2f0;
    c.r[3] = 0x0u;
    goto L_0106d2f4;
L_0106d2f0:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0106d2f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d314;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.f[1] = c.f[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x84u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d314u;
    wp::call(c, c.ctr);
L_0106d314:
R_0106d314:
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

void f_mg507_0106d340(wp::Cpu& c) {
    WP_ENTER(0x106d340u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x104u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mg507_0106d350(wp::Cpu& c) {
    WP_ENTER(0x106d350u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d3d4u: goto R_0106d3d4;
        case 0x106d42cu: goto R_0106d42c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = ((((g_mg507_bases[5] + 0x277b0u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[8] + wp::sign_extend16((g_mg507_bases[5] + 0x277b0u) & 0xFFFFu);
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
    goto L_0106d3bc;
L_0106d3b8:
    c.r[30] = c.r[30] + 0x4u;
L_0106d3bc:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d3e0;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d3d4u;
    f_801c8244(c);
R_0106d3d4:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d3b8;
    }
L_0106d3e0:
    ea = c.r[28] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d400;
    c.r[3] = 0x0u;
    goto L_0106d404;
L_0106d400:
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
L_0106d404:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d42c;
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
    c.lr = 0x106d42cu;
    wp::call(c, c.ctr);
L_0106d42c:
R_0106d42c:
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

void f_mg507_0106d450(wp::Cpu& c) {
    WP_ENTER(0x106d450u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x108u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg507_0106d460(wp::Cpu& c) {
    WP_ENTER(0x106d460u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d49cu: goto R_0106d49c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = c.r[4] ^ 0x80000000u;
    c.r[4] = ((((g_mg507_bases[4] + 0x23f8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x43300000u;
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x23f8u) & 0xFFFFu);
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    c.r[3] = ((((g_mg507_bases[4] + 0x23f4u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23f4u) & 0xFFFFu);
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
    c.lr = 0x106d49cu;
    f_80071fe0(c);
R_0106d49c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_0106d4b0(wp::Cpu& c) {
    WP_ENTER(0x106d4b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d52cu: goto R_0106d52c;
        case 0x106d584u: goto R_0106d584;
        case 0x106d5a8u: goto R_0106d5a8;
        case 0x106d5b8u: goto R_0106d5b8;
        case 0x106d5ccu: goto R_0106d5cc;
        case 0x106d5dcu: goto R_0106d5dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x277bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x277bcu) & 0xFFFFu);
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
    goto L_0106d514;
L_0106d510:
    c.r[30] = c.r[30] + 0x4u;
L_0106d514:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d538;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d52cu;
    f_801c8244(c);
R_0106d52c:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d510;
    }
L_0106d538:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d558;
    c.r[31] = 0x0u;
    goto L_0106d55c;
L_0106d558:
    ea = c.r[30] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_0106d55c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106d56c;
    c.r[3] = 0x0u;
    goto L_0106d628;
L_0106d56c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x64u;
    ea = c.r[12] + 0x1e8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d584u;
    wp::call(c, c.ctr);
R_0106d584:
    ea = c.r[31] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    c.r[4] = 0x51ec0000u;
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[0] = c.r[0] * c.r[3];
    c.r[3] = c.r[4] + 0xffff851fu;
    c.r[0] = wp::mulhwu(c.r[3], c.r[0]);
    c.r[30] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x106d5a8u;
    f_80071fe0(c);
R_0106d5a8:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_0106d5c0;
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106d5b8u;
    f_80071fe0(c);
R_0106d5b8:
    c.r[30] = c.r[3] | c.r[3];
    goto L_0106d5e0;
L_0106d5c0:
    c.r[31] = ((((g_mg507_bases[4] + 0x2404u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2404u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106d5ccu;
    f_80071fe0(c);
R_0106d5cc:
    wp::compare_signed(c, 0, c.r[30], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_0106d5e0;
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2404u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106d5dcu;
    f_80071fe0(c);
R_0106d5dc:
    c.r[30] = c.r[3] | c.r[3];
L_0106d5e0:
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
    if (!wp::cr_get(c, 0)) goto L_0106d618;
    c.r[30] = c.r[0] | c.r[0];
    goto L_0106d624;
L_0106d618:
    wp::compare_signed(c, 0, c.r[30], 0x190u);
    if (!wp::cr_get(c, 1)) goto L_0106d624;
    c.r[30] = 0x190u;
L_0106d624:
    c.r[3] = c.r[30] | c.r[30];
L_0106d628:
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

void f_mg507_0106d650(wp::Cpu& c) {
    WP_ENTER(0x106d650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d6ccu: goto R_0106d6cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x277c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x277c8u) & 0xFFFFu);
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
    goto L_0106d6b4;
L_0106d6b0:
    c.r[30] = c.r[30] + 0x4u;
L_0106d6b4:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106d6d8;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106d6ccu;
    f_801c8244(c);
R_0106d6cc:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d6b0;
    }
L_0106d6d8:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106d6f8;
    c.r[5] = 0x0u;
    goto L_0106d6fc;
L_0106d6f8:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0106d6fc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106d70c;
    c.r[3] = 0x0u;
    goto L_0106d754;
L_0106d70c:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[9] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = c.r[3] | c.r[3];
    goto L_0106d73c;
L_0106d720:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[6] = c.r[6] + 0x2u;
    c.r[0] = c.r[8] + c.r[0];
    c.r[9] = c.r[9] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_0106d73c:
    wp::compare_unsigned(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_0106d754;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[6];
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106d720;
    }
L_0106d754:
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

void f_mg507_0106d770(wp::Cpu& c) {
    WP_ENTER(0x106d770u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d7a0u: goto R_0106d7a0;
        case 0x106d7bcu: goto R_0106d7bc;
        case 0x106d7c4u: goto R_0106d7c4;
        case 0x106d7dcu: goto R_0106d7dc;
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
    c.lr = 0x106d7a0u;
    wp::call(c, c.ctr);
R_0106d7a0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1f0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d7bcu;
    wp::call(c, c.ctr);
R_0106d7bc:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x106d7c4u;
    f_80019f20(c);
R_0106d7c4:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x1ecu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d7dcu;
    wp::call(c, c.ctr);
R_0106d7dc:
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

void f_mg507_0106d800(wp::Cpu& c) {
    WP_ENTER(0x106d800u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d814u: goto R_0106d814;
        case 0x106d834u: goto R_0106d834;
        case 0x106d840u: goto R_0106d840;
        case 0x106d85cu: goto R_0106d85c;
        case 0x106d924u: goto R_0106d924;
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
    c.lr = 0x106d814u;
    f_801c83b8(c);
R_0106d814:
    c.r[30] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[30] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0xd0u;
    c.lr = 0x106d834u;
    f_mg507_01073bf0(c);
R_0106d834:
    c.r[3] = c.r[27] + 0xe0u;
    c.r[4] = 0x0u;
    c.lr = 0x106d840u;
    f_mg507_01073bf0(c);
R_0106d840:
    c.r[31] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + 0xcu;
    ea = c.r[27] + 0x4u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x106d85cu;
    f_801cf394(c);
R_0106d85c:
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
    c.lr = 0x106d924u;
    f_801c8404(c);
R_0106d924:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg507_0106d940(wp::Cpu& c) {
    WP_ENTER(0x106d940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106d97cu: goto R_0106d97c;
        case 0x106d98cu: goto R_0106d98c;
        case 0x106d9b0u: goto R_0106d9b0;
        case 0x106d9d4u: goto R_0106d9d4;
        case 0x106d9f0u: goto R_0106d9f0;
        case 0x106da0cu: goto R_0106da0c;
        case 0x106da18u: goto R_0106da18;
        case 0x106da28u: goto R_0106da28;
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
    if (wp::cr_get(c, 2)) goto L_0106da28;
    ea = c.r[3] + 0x20u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d97c;
    c.lr = 0x106d97cu;
    f_80048f30(c);
L_0106d97c:
R_0106d97c:
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d98c;
    c.lr = 0x106d98cu;
    f_80048f30(c);
L_0106d98c:
R_0106d98c:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d9b0;
    if (wp::cr_get(c, 2)) goto L_0106d9b0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d9b0u;
    wp::call(c, c.ctr);
L_0106d9b0:
R_0106d9b0:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d9d4;
    if (wp::cr_get(c, 2)) goto L_0106d9d4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106d9d4u;
    wp::call(c, c.ctr);
L_0106d9d4:
R_0106d9d4:
    c.r[30] = 0x0u;
    c.r[31] = 0x0u;
L_0106d9dc:
    c.r[3] = c.r[28] + c.r[31];
    ea = c.r[3] + 0x28u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106d9f0;
    c.lr = 0x106d9f0u;
    f_80048f30(c);
L_0106d9f0:
R_0106d9f0:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xau);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106d9dc;
    }
    c.r[3] = c.r[28] + 0xe0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x106da0cu;
    f_mg507_01073c50(c);
R_0106da0c:
    c.r[3] = c.r[28] + 0xd0u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x106da18u;
    f_mg507_01073c50(c);
R_0106da18:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106da28;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x106da28u;
    f_801c7a8c(c);
L_0106da28:
R_0106da28:
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

void f_mg507_0106da50(wp::Cpu& c) {
    WP_ENTER(0x106da50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106da7cu: goto R_0106da7c;
        case 0x106da8cu: goto R_0106da8c;
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
    if (wp::cr_get(c, 2)) goto L_0106da8c;
    c.r[4] = 0x0u;
    c.lr = 0x106da7cu;
    f_8012bbc0(c);
R_0106da7c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106da8c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106da8cu;
    f_801c7a8c(c);
L_0106da8c:
R_0106da8c:
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

void f_mg507_0106dab0(wp::Cpu& c) {
    WP_ENTER(0x106dab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106dae8u: goto R_0106dae8;
        case 0x106db20u: goto R_0106db20;
        case 0x106dcd4u: goto R_0106dcd4;
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
    if (wp::cr_get(c, 2)) goto L_0106dae8;
    c.r[3] = c.r[0] | c.r[0];
    c.lr = 0x106dae8u;
    f_80048f30(c);
L_0106dae8:
R_0106dae8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[31] = 0x0u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106dcd4;
    c.r[30] = 0x0u;
    goto L_0106db08;
L_0106db00:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x2u;
L_0106db08:
    ea = c.r[29] + c.r[31];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106db00;
    }
    c.r[0] = c.r[30] + 0x1u;
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x106db20u;
    f_80048ec0(c);
R_0106db20:
    wp::compare_signed(c, 1, c.r[30], 0x0u);
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_0106dc38;
    wp::compare_signed(c, 0, c.r[30], 0x8u);
    c.r[6] = c.r[30] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_0106dc08;
    c.r[4] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_0106db58;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_0106db58;
    c.r[4] = 0x1u;
L_0106db58:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dc08;
    c.r[0] = c.r[6] + 0x7u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = 0x0u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106dc08;
L_0106db7c:
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
    goto L_0106db7c;
    }
L_0106dc08:
    c.r[6] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    c.r[0] = c.r[30] - c.r[5];
    c.r[4] = c.r[29] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0106dc38;
L_0106dc20:
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
    goto L_0106dc20;
    }
L_0106dc38:
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
    if (!wp::cr_get(c, 1)) goto L_0106dcc8;
    c.r[0] = c.r[0] | 0x0u;
L_0106dc70:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[6];
    ea = c.r[6] + c.r[0];
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5bu);
    if (!wp::cr_get(c, 2)) goto L_0106dcbc;
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x77u);
    if (!wp::cr_get(c, 2)) goto L_0106dcbc;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5du);
    if (!wp::cr_get(c, 2)) goto L_0106dcbc;
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
L_0106dcbc:
    c.r[6] = c.r[6] + 0x2u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_0106dc70;
    }
L_0106dcc8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x106dcd4u;
    f_mg507_0106dd00(c);
L_0106dcd4:
R_0106dcd4:
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

void f_mg507_0106dd00(wp::Cpu& c) {
    WP_ENTER(0x106dd00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106dd14u: goto R_0106dd14;
        case 0x106dde0u: goto R_0106dde0;
        case 0x106dde8u: goto R_0106dde8;
        case 0x106ddf8u: goto R_0106ddf8;
        case 0x106de10u: goto R_0106de10;
        case 0x106de28u: goto R_0106de28;
        case 0x106e974u: goto R_0106e974;
        case 0x106e990u: goto R_0106e990;
        case 0x106e998u: goto R_0106e998;
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
    c.lr = 0x106dd14u;
    f_801c8384(c);
R_0106dd14:
    c.r[31] = 0x0u;
    ea = c.r[3] + 0xbdu;
    wp::wr8(ea, c.r[31]);
    ea = c.r[3] + 0xa0u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = ((((g_mg507_bases[5] + 0x27660u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0xbcu;
    wp::wr8(ea, c.r[31]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[0] = c.r[5] + 0x1u;
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0xa4u;
    wp::wr32(ea, c.r[31]);
    c.r[14] = c.r[0] & 0xffffu;
    c.r[16] = c.r[16] + wp::sign_extend16((g_mg507_bases[5] + 0x27660u) & 0xFFFFu);
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
    if (!wp::cr_get(c, 0)) goto L_0106ddcc;
    c.r[14] = 0x40u;
L_0106ddcc:
    ea = c.r[3] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[15] = wp::rotl(c.r[14], 1) & 0x1fffeu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dde0;
    c.lr = 0x106dde0u;
    f_80048f30(c);
L_0106dde0:
R_0106dde0:
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x106dde8u;
    f_80048ec0(c);
R_0106dde8:
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[15] | c.r[15];
    c.r[4] = 0x0u;
    c.lr = 0x106ddf8u;
    f_80004714(c);
R_0106ddf8:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106de10u;
    wp::call(c, c.ctr);
R_0106de10:
    ea = c.r[28] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[14] & 0xffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x74u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106de28u;
    wp::call(c, c.ctr);
R_0106de28:
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
    if (!wp::cr_get(c, 2)) goto L_0106de50;
    c.r[30] = 0x1u;
L_0106de50:
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
    goto L_0106e938;
L_0106de80:
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
    if (!wp::cr_get(c, 2)) goto L_0106dfb8;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[14] | c.r[14];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_0106df44;
L_0106ded0:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106deec;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106df44;
L_0106deec:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106df1c;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106df1c;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106df44;
L_0106df1c:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0106df38;
    c.r[5] = 0x0u;
    goto L_0106df54;
L_0106df38:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_0106df44:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ded0;
    }
    c.r[5] = 0x1u;
L_0106df54:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dfb8;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x4u;
    c.r[5] = wp::rd16(ea);
    c.r[5] = c.r[5] + 0xffffffd0u;
    c.r[5] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[6] = c.r[28] + c.r[5];
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106dfac;
    c.r[17] = 0x0u;
    goto L_0106df9c;
    c.r[0] = c.r[0] | 0x0u;
L_0106df88:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[17] + 0x2u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[18]);
    c.r[16] = c.r[16] + 0x2u;
L_0106df9c:
    ea = c.r[6] + 0x28u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[17];
    c.r[18] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106df88;
    }
L_0106dfac:
    c.r[31] = c.r[31] + 0xffffffffu;
    c.r[21] = c.r[21] + 0x4u;
    goto L_0106e324;
L_0106dfb8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e1a4;
    ea = c.r[28] + 0x20u;
    c.r[17] = wp::rd32(ea);
    c.r[20] = c.r[15] | c.r[15];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    c.r[5] = c.r[17] + c.r[4];
    goto L_0106e04c;
L_0106dfd8:
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::compare_signed(c, 0, c.r[22], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106dff4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106e04c;
L_0106dff4:
    wp::compare_signed(c, 0, c.r[22], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e024;
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[22] = c.r[22] + 0x10000u;
    c.r[22] = c.r[22] + 0xffffffd0u;
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e024;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    goto L_0106e04c;
L_0106e024:
    c.r[18] = wp::sign_extend8(c.r[18]);
    ea = c.r[5] + c.r[19];
    c.r[22] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0106e040;
    c.r[5] = 0x0u;
    goto L_0106e05c;
L_0106e040:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
L_0106e04c:
    ea = c.r[20] + 0x0u;
    c.r[18] = wp::rd8(ea);
    c.r[22] = wp::sign_extend8(c.r[18]);
    wp::record(c, c.r[22]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106dfd8;
    }
    c.r[5] = 0x1u;
L_0106e05c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e1a4;
    c.r[5] = c.r[17] + c.r[4];
    ea = c.r[5] + 0x6u;
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x63u);
    if (wp::cr_get(c, 2)) goto L_0106e180;
    if (!wp::cr_get(c, 0)) goto L_0106e0c0;
    wp::compare_signed(c, 0, c.r[5], 0x31u);
    if (wp::cr_get(c, 2)) goto L_0106e160;
    if (!wp::cr_get(c, 0)) goto L_0106e0a8;
    wp::compare_signed(c, 0, c.r[5], 0x2cu);
    if (wp::cr_get(c, 2)) goto L_0106e19c;
    if (!wp::cr_get(c, 0)) goto L_0106e09c;
    wp::compare_signed(c, 0, c.r[5], 0x2bu);
    if (!wp::cr_get(c, 0)) goto L_0106e140;
    goto L_0106e19c;
L_0106e09c:
    wp::compare_signed(c, 0, c.r[5], 0x2eu);
    if (!wp::cr_get(c, 0)) goto L_0106e19c;
    goto L_0106e150;
L_0106e0a8:
    wp::compare_signed(c, 0, c.r[5], 0x61u);
    if (wp::cr_get(c, 2)) goto L_0106e110;
    if (!wp::cr_get(c, 0)) goto L_0106e120;
    wp::compare_signed(c, 0, c.r[5], 0x33u);
    if (!wp::cr_get(c, 0)) goto L_0106e19c;
    goto L_0106e170;
L_0106e0c0:
    wp::compare_signed(c, 0, c.r[5], 0x78u);
    if (wp::cr_get(c, 2)) goto L_0106e100;
    if (!wp::cr_get(c, 0)) goto L_0106e0e4;
    wp::compare_signed(c, 0, c.r[5], 0x70u);
    if (wp::cr_get(c, 2)) goto L_0106e0f0;
    if (!wp::cr_get(c, 0)) goto L_0106e19c;
    wp::compare_signed(c, 0, c.r[5], 0x68u);
    if (wp::cr_get(c, 2)) goto L_0106e130;
    goto L_0106e19c;
L_0106e0e4:
    wp::compare_signed(c, 0, c.r[5], 0x7au);
    if (wp::cr_get(c, 2)) goto L_0106e190;
    goto L_0106e19c;
L_0106e0f0:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe040u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e100:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe041u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e110:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe042u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e120:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe043u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e130:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe044u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e140:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe045u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e150:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe046u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e160:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe047u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e170:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe048u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e180:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04au;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e19c;
L_0106e190:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe04bu;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
L_0106e19c:
    c.r[21] = c.r[21] + 0x5u;
    goto L_0106e324;
L_0106e1a4:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e268;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[19] = c.r[9] | c.r[9];
    c.r[6] = 0x0u;
    c.r[18] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106e23c;
    c.r[0] = c.r[0] | 0x0u;
L_0106e1c8:
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::compare_signed(c, 0, c.r[20], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106e1e4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0106e23c;
L_0106e1e4:
    wp::compare_signed(c, 0, c.r[20], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e214;
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[20] = c.r[20] + 0x10000u;
    c.r[20] = c.r[20] + 0xffffffd0u;
    c.r[20] = c.r[20] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e214;
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
    goto L_0106e23c;
L_0106e214:
    c.r[17] = wp::sign_extend8(c.r[17]);
    ea = c.r[5] + c.r[18];
    c.r[20] = wp::rd16(ea);
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[20], c.r[17]);
    if (wp::cr_get(c, 2)) goto L_0106e230;
    c.r[5] = 0x0u;
    goto L_0106e24c;
L_0106e230:
    c.r[6] = c.r[6] + 0x1u;
    c.r[18] = c.r[18] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_0106e23c:
    ea = c.r[19] + 0x0u;
    c.r[17] = wp::rd8(ea);
    c.r[20] = wp::sign_extend8(c.r[17]);
    wp::record(c, c.r[20]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106e1c8;
    }
    c.r[5] = 0x1u;
L_0106e24c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e268;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[8] + 0xffffe049u;
    c.r[21] = c.r[21] + 0x5u;
    ea = c.r[5] + c.r[16];
    wp::wr16(ea, c.r[6]);
    goto L_0106e324;
L_0106e268:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e324;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[10] | c.r[10];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106e2fc;
L_0106e288:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106e2a4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e2fc;
L_0106e2a4:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e2d4;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e2d4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e2fc;
L_0106e2d4:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0106e2f0;
    c.r[5] = 0x0u;
    goto L_0106e30c;
L_0106e2f0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0106e2fc:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106e288;
    }
    c.r[5] = 0x1u;
L_0106e30c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e324;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbcu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
    goto L_0106e944;
L_0106e324:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e6a8;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[11] | c.r[11];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106e3bc;
    c.r[0] = c.r[0] | 0x0u;
L_0106e348:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106e364;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e3bc;
L_0106e364:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e394;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e394;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e3bc;
L_0106e394:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0106e3b0;
    c.r[5] = 0x0u;
    goto L_0106e3cc;
L_0106e3b0:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0106e3bc:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106e348;
    }
    c.r[5] = 0x1u;
L_0106e3cc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e6a8;
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
    if (wp::cr_get(c, 1)) goto L_0106e408;
    goto L_0106e434;
L_0106e408:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e41c;
    c.r[17] = c.r[6] + 0xau;
    goto L_0106e434;
L_0106e41c:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0106e434:
    ea = c.r[16] + 0x8u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e448;
    goto L_0106e474;
L_0106e448:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e45c;
    c.r[6] = c.r[6] + 0xau;
    goto L_0106e474;
L_0106e45c:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0106e474:
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
    if (wp::cr_get(c, 1)) goto L_0106e49c;
    goto L_0106e4c8;
L_0106e49c:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e4b0;
    c.r[17] = c.r[6] + 0xau;
    goto L_0106e4c8;
L_0106e4b0:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0106e4c8:
    ea = c.r[16] + 0xcu;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e4dc;
    goto L_0106e508;
L_0106e4dc:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e4f0;
    c.r[6] = c.r[6] + 0xau;
    goto L_0106e508;
L_0106e4f0:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0106e508:
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
    if (wp::cr_get(c, 1)) goto L_0106e530;
    goto L_0106e55c;
L_0106e530:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e544;
    c.r[17] = c.r[6] + 0xau;
    goto L_0106e55c;
L_0106e544:
    c.r[17] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[17], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[17], 0);
    c.r[5] = c.r[17] + 0xau;
    c.r[6] = c.r[17] - c.r[6];
    c.r[17] = c.r[5] & c.r[6];
L_0106e55c:
    ea = c.r[16] + 0x10u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e570;
    goto L_0106e59c;
L_0106e570:
    c.r[6] = c.r[5] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[6], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e584;
    c.r[6] = c.r[6] + 0xau;
    goto L_0106e59c;
L_0106e584:
    c.r[16] = c.r[5] + 0xffffff9fu;
    c.r[5] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[6] = wp::add_extended(c, c.r[16], 0);
    c.r[5] = c.r[16] + 0xau;
    c.r[6] = c.r[16] - c.r[6];
    c.r[6] = c.r[5] & c.r[6];
L_0106e59c:
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
    if (wp::cr_get(c, 1)) goto L_0106e5c4;
    goto L_0106e5f0;
L_0106e5c4:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e5d8;
    c.r[16] = c.r[5] + 0xau;
    goto L_0106e5f0;
L_0106e5d8:
    c.r[16] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[16], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[16], 0);
    c.r[4] = c.r[16] + 0xau;
    c.r[5] = c.r[16] - c.r[5];
    c.r[16] = c.r[4] & c.r[5];
L_0106e5f0:
    ea = c.r[6] + 0x14u;
    c.r[4] = wp::rd16(ea);
    c.r[5] = c.r[4] + 0xffffffd0u;
    wp::compare_unsigned(c, 0, c.r[5], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e604;
    goto L_0106e630;
L_0106e604:
    c.r[5] = c.r[4] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[5], 0x5u);
    if (wp::cr_get(c, 1)) goto L_0106e618;
    c.r[5] = c.r[5] + 0xau;
    goto L_0106e630;
L_0106e618:
    c.r[6] = c.r[4] + 0xffffff9fu;
    c.r[4] = wp::sub_carry(c, c.r[6], c.r[7]);
    c.r[5] = wp::add_extended(c, c.r[6], 0);
    c.r[4] = c.r[6] + 0xau;
    c.r[5] = c.r[6] - c.r[5];
    c.r[5] = c.r[4] & c.r[5];
L_0106e630:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    c.r[5] = wp::rotl(c.r[5], 4) & 0xfffffff0u;
    c.r[5] = c.r[16] + c.r[5];
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e64c;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
L_0106e64c:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e65c;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
L_0106e65c:
    ea = c.r[1] + 0xau;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e66c;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_0106e66c:
    ea = c.r[1] + 0xbu;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e67c;
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_0106e67c:
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
    goto L_0106e930;
L_0106e6a8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e914;
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[17] = c.r[12] | c.r[12];
    c.r[6] = 0x0u;
    c.r[16] = 0x0u;
    c.r[5] = c.r[5] + c.r[4];
    goto L_0106e73c;
L_0106e6c8:
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::compare_signed(c, 0, c.r[18], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106e6e4;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e73c;
L_0106e6e4:
    wp::compare_signed(c, 0, c.r[18], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e714;
    ea = c.r[5] + c.r[16];
    c.r[18] = wp::rd16(ea);
    c.r[18] = c.r[18] + 0x10000u;
    c.r[18] = c.r[18] + 0xffffffd0u;
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[18], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e714;
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
    goto L_0106e73c;
L_0106e714:
    c.r[18] = wp::sign_extend8(c.r[19]);
    ea = c.r[5] + c.r[16];
    c.r[19] = wp::rd16(ea);
    c.r[18] = c.r[18] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[19], c.r[18]);
    if (wp::cr_get(c, 2)) goto L_0106e730;
    c.r[5] = 0x0u;
    goto L_0106e74c;
L_0106e730:
    c.r[6] = c.r[6] + 0x1u;
    c.r[16] = c.r[16] + 0x2u;
    c.r[17] = c.r[17] + 0x1u;
L_0106e73c:
    ea = c.r[17] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = wp::sign_extend8(c.r[19]);
    wp::record(c, c.r[18]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106e6c8;
    }
    c.r[5] = 0x1u;
L_0106e74c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e914;
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
    goto L_0106e7b4;
L_0106e788:
    wp::compare_signed(c, 0, c.r[20], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e798;
    c.r[16] = 0x1u;
    goto L_0106e7cc;
L_0106e798:
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x1u;
    c.r[6] = c.r[6] + 0x2u;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[20]);
    c.r[4] = c.r[4] + 0x2u;
    c.r[19] = c.r[19] + 0x1u;
L_0106e7b4:
    ea = c.r[28] + 0x20u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[6];
    c.r[20] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[20], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0106e7cc;
    wp::compare_signed(c, 0, c.r[19], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106e788;
    }
L_0106e7cc:
    c.r[4] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e7e0;
    c.r[3] = c.r[3] + 0x1u;
L_0106e7e0:
    c.r[24] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[31], 1) & 0xfffffffeu;
    c.r[20] = 0x0u;
    goto L_0106e81c;
L_0106e7f0:
    ea = c.r[23] + c.r[24];
    c.r[5] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e804;
    c.r[16] = 0x1u;
    goto L_0106e8cc;
L_0106e804:
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[24] = c.r[24] + 0x2u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
    ea = c.r[4] + c.r[3];
    wp::wr16(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x2u;
L_0106e81c:
    ea = c.r[28] + 0x20u;
    c.r[23] = wp::rd32(ea);
    c.r[5] = c.r[26] | c.r[26];
    c.r[25] = 0x0u;
    c.r[4] = 0x0u;
    c.r[27] = c.r[23] + c.r[24];
    goto L_0106e8ac;
    c.r[0] = c.r[0] | 0x0u;
L_0106e838:
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106e854;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0106e8ac;
L_0106e854:
    wp::compare_signed(c, 0, c.r[6], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106e884;
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[6] = c.r[6] + 0x10000u;
    c.r[6] = c.r[6] + 0xffffffd0u;
    c.r[6] = c.r[6] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106e884;
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
    goto L_0106e8ac;
L_0106e884:
    c.r[22] = wp::sign_extend8(c.r[22]);
    ea = c.r[27] + c.r[4];
    c.r[6] = wp::rd16(ea);
    c.r[22] = c.r[22] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[6], c.r[22]);
    if (wp::cr_get(c, 2)) goto L_0106e8a0;
    c.r[4] = 0x0u;
    goto L_0106e8bc;
L_0106e8a0:
    c.r[25] = c.r[25] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
    c.r[5] = c.r[5] + 0x1u;
L_0106e8ac:
    ea = c.r[5] + 0x0u;
    c.r[22] = wp::rd8(ea);
    c.r[6] = wp::sign_extend8(c.r[22]);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106e838;
    }
    c.r[4] = 0x1u;
L_0106e8bc:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e8cc;
    wp::compare_signed(c, 0, c.r[20], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106e7f0;
    }
L_0106e8cc:
    wp::compare_signed(c, 0, c.r[16], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e8ec;
    ea = c.r[28] + 0x24u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[17], 1) & 0xfffffffeu;
    c.r[3] = 0x0u;
    c.r[31] = c.r[17] + 0x1u;
    ea = c.r[5] + c.r[4];
    wp::wr16(ea, c.r[3]);
    goto L_0106e930;
L_0106e8ec:
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
    goto L_0106e930;
L_0106e914:
    ea = c.r[28] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106e930;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0xbdu;
    wp::wr8(ea, c.r[0]);
    goto L_0106e944;
L_0106e930:
    c.r[21] = c.r[21] + 0x1u;
    c.r[31] = c.r[31] + 0x1u;
L_0106e938:
    ea = c.r[28] + 0xa0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[21], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106de80;
    }
L_0106e944:
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
    c.lr = 0x106e974u;
    wp::call(c, c.ctr);
R_0106e974:
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
    c.lr = 0x106e990u;
    wp::call(c, c.ctr);
R_0106e990:
    c.r[11] = c.r[1] + 0x60u;
    c.lr = 0x106e998u;
    f_801c83d0(c);
R_0106e998:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_mg507_0106e9b0(wp::Cpu& c) {
    WP_ENTER(0x106e9b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106e9c4u: goto R_0106e9c4;
        case 0x106e9e8u: goto R_0106e9e8;
        case 0x106ea30u: goto R_0106ea30;
        case 0x106ed1cu: goto R_0106ed1c;
        case 0x106ed24u: goto R_0106ed24;
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
    c.lr = 0x106e9c4u;
    f_801c8390(c);
R_0106e9c4:
    c.r[18] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[29] = c.r[3] | c.r[3];
    c.r[17] = c.r[3] + c.r[18];
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[17] + 0x28u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = c.r[5] | c.r[5];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106e9e8;
    c.lr = 0x106e9e8u;
    f_80048f30(c);
L_0106e9e8:
R_0106e9e8:
    c.r[4] = 0x0u;
    ea = c.r[17] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[29] + c.r[18];
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[3] + 0x50u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106ed1c;
    c.r[3] = 0x0u;
    goto L_0106ea10;
L_0106ea08:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x2u;
L_0106ea10:
    ea = c.r[30] + c.r[4];
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ea08;
    }
    c.r[17] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + 0x10u;
    c.r[28] = c.r[29] + c.r[17];
    c.r[3] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.lr = 0x106ea30u;
    f_80048ec0(c);
R_0106ea30:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[12] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[3]);
    c.r[27] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ecf0;
    c.r[4] = ((((g_mg507_bases[5] + 0x277fcu) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg507_bases[5] + 0x27800u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x277fcu) & 0xFFFFu);
    c.r[7] = c.r[28] | c.r[28];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27800u) & 0xFFFFu);
    c.r[3] = 0xcu;
    c.r[0] = 0x5bu;
    goto L_0106ece0;
L_0106ea68:
    c.r[18] = c.r[30] + c.r[8];
    c.r[9] = c.r[4] | c.r[4];
    c.r[17] = 0x0u;
    c.r[8] = 0x0u;
    goto L_0106eaf4;
    c.r[0] = c.r[0] | 0x0u;
L_0106ea80:
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[10], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106ea9c;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_0106eaf4;
L_0106ea9c:
    wp::compare_signed(c, 0, c.r[10], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106eacc;
    ea = c.r[18] + c.r[8];
    c.r[10] = wp::rd16(ea);
    c.r[10] = c.r[10] + 0x10000u;
    c.r[10] = c.r[10] + 0xffffffd0u;
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[10], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106eacc;
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
    goto L_0106eaf4;
L_0106eacc:
    c.r[10] = wp::sign_extend8(c.r[11]);
    ea = c.r[18] + c.r[8];
    c.r[11] = wp::rd16(ea);
    c.r[10] = c.r[10] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[11], c.r[10]);
    if (wp::cr_get(c, 2)) goto L_0106eae8;
    c.r[8] = 0x0u;
    goto L_0106eb04;
L_0106eae8:
    c.r[17] = c.r[17] + 0x1u;
    c.r[8] = c.r[8] + 0x2u;
    c.r[9] = c.r[9] + 0x1u;
L_0106eaf4:
    ea = c.r[9] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[10] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[10]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ea80;
    }
    c.r[8] = 0x1u;
L_0106eb04:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106eccc;
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
    goto L_0106eb74;
    c.r[0] = c.r[0] | 0x0u;
L_0106eb48:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106eb58;
    c.r[21] = 0x1u;
    goto L_0106eb88;
L_0106eb58:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[12] = c.r[12] + 0x1u;
    c.r[9] = c.r[9] + 0x2u;
    c.r[27] = c.r[27] + 0x1u;
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[10]);
    c.r[6] = c.r[6] + 0x2u;
    c.r[25] = c.r[25] + 0x1u;
L_0106eb74:
    ea = c.r[9] + 0x0u;
    c.r[10] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[10], 0x5du);
    if (wp::cr_get(c, 2)) goto L_0106eb88;
    wp::compare_signed(c, 0, c.r[25], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106eb48;
    }
L_0106eb88:
    c.r[6] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[6];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106eb9c;
    c.r[27] = c.r[27] + 0x1u;
L_0106eb9c:
    c.r[10] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    c.r[20] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    c.r[26] = 0x0u;
    c.r[9] = c.r[30] + c.r[10];
    goto L_0106ebe4;
L_0106ebb0:
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ebc4;
    c.r[21] = 0x1u;
    goto L_0106ec8c;
L_0106ebc4:
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
L_0106ebe4:
    c.r[18] = c.r[5] | c.r[5];
    c.r[8] = c.r[30] + c.r[10];
    c.r[6] = 0x0u;
    c.r[19] = 0x0u;
    goto L_0106ec6c;
L_0106ebf8:
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::compare_signed(c, 0, c.r[17], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_0106ec14;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0106ec6c;
L_0106ec14:
    wp::compare_signed(c, 0, c.r[17], 0x3fu);
    if (!wp::cr_get(c, 2)) goto L_0106ec44;
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[17] = c.r[17] + 0x10000u;
    c.r[17] = c.r[17] + 0xffffffd0u;
    c.r[17] = c.r[17] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], 0x9u);
    if (wp::cr_get(c, 1)) goto L_0106ec44;
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
    goto L_0106ec6c;
L_0106ec44:
    c.r[11] = wp::sign_extend8(c.r[11]);
    ea = c.r[8] + c.r[19];
    c.r[17] = wp::rd16(ea);
    c.r[11] = c.r[11] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[17], c.r[11]);
    if (wp::cr_get(c, 2)) goto L_0106ec60;
    c.r[6] = 0x0u;
    goto L_0106ec7c;
L_0106ec60:
    c.r[6] = c.r[6] + 0x1u;
    c.r[19] = c.r[19] + 0x2u;
    c.r[18] = c.r[18] + 0x1u;
L_0106ec6c:
    ea = c.r[18] + 0x0u;
    c.r[11] = wp::rd8(ea);
    c.r[17] = wp::sign_extend8(c.r[11]);
    wp::record(c, c.r[17]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ebf8;
    }
    c.r[6] = 0x1u;
L_0106ec7c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106ec8c;
    wp::compare_signed(c, 0, c.r[26], 0xffu);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106ebb0;
    }
L_0106ec8c:
    wp::compare_signed(c, 0, c.r[21], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ecac;
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[23], 1) & 0xfffffffeu;
    c.r[12] = c.r[23] | c.r[23];
    c.r[27] = c.r[22] | c.r[22];
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[0]);
    goto L_0106ecd8;
L_0106ecac:
    ea = c.r[7] + 0x28u;
    c.r[8] = wp::rd32(ea);
    c.r[9] = c.r[26] & 0xffu;
    c.r[6] = wp::rotl(c.r[24], 1) & 0xfffffffeu;
    c.r[27] = c.r[27] + 0x3u;
    c.r[9] = (wp::rotl(c.r[25], 8) & 0xff00u) | (c.r[9] & 0xffff00ffu);
    ea = c.r[8] + c.r[6];
    wp::wr16(ea, c.r[9]);
    c.r[12] = c.r[12] + 0xffffffffu;
    goto L_0106ecd8;
L_0106eccc:
    ea = c.r[7] + 0x28u;
    c.r[9] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
    ea = c.r[9] + c.r[8];
    wp::wr16(ea, c.r[6]);
L_0106ecd8:
    c.r[27] = c.r[27] + 0x1u;
    c.r[12] = c.r[12] + 0x1u;
L_0106ece0:
    c.r[8] = wp::rotl(c.r[27], 1) & 0xfffffffeu;
    ea = c.r[30] + c.r[8];
    c.r[6] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ea68;
    }
L_0106ecf0:
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
    c.lr = 0x106ed1cu;
    f_mg507_0106dd00(c);
L_0106ed1c:
R_0106ed1c:
    c.r[11] = c.r[1] + 0x50u;
    c.lr = 0x106ed24u;
    f_801c83dc(c);
R_0106ed24:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_mg507_0106ed40(wp::Cpu& c) {
    WP_ENTER(0x106ed40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ed54u: goto R_0106ed54;
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
    c.lr = 0x106ed54u;
    f_801cf510(c);
R_0106ed54:
    c.r[0] = wp::cntlzw(c.r[3]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_0106ed70(wp::Cpu& c) {
    WP_ENTER(0x106ed70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106edc8u: goto R_0106edc8;
        case 0x106ee04u: goto R_0106ee04;
        case 0x106ee10u: goto R_0106ee10;
        case 0x106ee20u: goto R_0106ee20;
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
    if (wp::cr_get(c, 2)) goto L_0106ee20;
    if (wp::cr_get(c, 2)) goto L_0106ee10;
    c.r[4] = ((((g_mg507_bases[5] + 0x28520u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28520u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    goto L_0106edc8;
L_0106eda8:
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
    c.lr = 0x106edc8u;
    wp::call(c, c.ctr);
L_0106edc8:
R_0106edc8:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106eda8;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106ee04;
    if (wp::cr_get(c, 2)) goto L_0106ee04;
    if (wp::cr_get(c, 2)) goto L_0106ee04;
    if (wp::cr_get(c, 2)) goto L_0106ee04;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ee04;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106ee04u;
    f_801c7a8c(c);
L_0106ee04:
R_0106ee04:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106ee10u;
    f_8003fb90(c);
L_0106ee10:
R_0106ee10:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106ee20;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106ee20u;
    f_801c7a8c(c);
L_0106ee20:
R_0106ee20:
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

void f_mg507_0106ee40(wp::Cpu& c) {
    WP_ENTER(0x106ee40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ee7cu: goto R_0106ee7c;
        case 0x106eea4u: goto R_0106eea4;
        case 0x106eeccu: goto R_0106eecc;
        case 0x106eef4u: goto R_0106eef4;
        case 0x106ef1cu: goto R_0106ef1c;
        case 0x106ef28u: goto R_0106ef28;
        case 0x106ef60u: goto R_0106ef60;
        case 0x106ef9cu: goto R_0106ef9c;
        case 0x106efa8u: goto R_0106efa8;
        case 0x106efb8u: goto R_0106efb8;
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
    if (wp::cr_get(c, 2)) goto L_0106efb8;
    c.r[4] = ((((g_mg507_bases[5] + 0x28078u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28078u) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[4] + 0x1f8u;
    ea = c.r[3] + 0x120u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106ee7cu;
    f_8001a010(c);
R_0106ee7c:
    c.r[3] = wp::add_carry(c, c.r[30], 0x198u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106eea4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106eea4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106eea4u;
    wp::call(c, c.ctr);
L_0106eea4:
R_0106eea4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x194u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106eecc;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106eecc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106eeccu;
    wp::call(c, c.ctr);
L_0106eecc:
R_0106eecc:
    c.r[3] = wp::add_carry(c, c.r[30], 0x190u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106eef4;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106eef4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106eef4u;
    wp::call(c, c.ctr);
L_0106eef4:
R_0106eef4:
    c.r[3] = wp::add_carry(c, c.r[30], 0x18cu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106ef1c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ef1c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ef1cu;
    wp::call(c, c.ctr);
L_0106ef1c:
R_0106ef1c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x106ef28u;
    f_80063bb0(c);
R_0106ef28:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106efa8;
    c.r[3] = ((((g_mg507_bases[5] + 0x28520u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x28520u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_0106ef60;
L_0106ef40:
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
    c.lr = 0x106ef60u;
    wp::call(c, c.ctr);
L_0106ef60:
R_0106ef60:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106ef40;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_0106ef9c;
    if (wp::cr_get(c, 2)) goto L_0106ef9c;
    if (wp::cr_get(c, 2)) goto L_0106ef9c;
    if (wp::cr_get(c, 2)) goto L_0106ef9c;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ef9c;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106ef9cu;
    f_801c7a8c(c);
L_0106ef9c:
R_0106ef9c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106efa8u;
    f_8003fb90(c);
L_0106efa8:
R_0106efa8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106efb8;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106efb8u;
    f_801c7a8c(c);
L_0106efb8:
R_0106efb8:
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

void f_mg507_0106efe0(wp::Cpu& c) {
    WP_ENTER(0x106efe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    wp::wr16(ea, c.r[4]);
    return;
}

void f_mg507_0106eff0(wp::Cpu& c) {
    WP_ENTER(0x106eff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x132u;
    c.r[3] = wp::rd16(ea);
    return;
}

void f_mg507_0106f000(wp::Cpu& c) {
    WP_ENTER(0x106f000u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f038u: goto R_0106f038;
        case 0x106f040u: goto R_0106f040;
        case 0x106f05cu: goto R_0106f05c;
        case 0x106f078u: goto R_0106f078;
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
    if (wp::cr_get(c, 2)) goto L_0106f038;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f038u;
    wp::call(c, c.ctr);
L_0106f038:
R_0106f038:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106f040u;
    f_8000fc20(c);
R_0106f040:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = 0x1u;
    c.r[31] = wp::slw(c.r[0], c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f05cu;
    wp::call(c, c.ctr);
R_0106f05c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x106f078u;
    wp::call(c, c.ctr);
R_0106f078:
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

void f_mg507_0106f090(wp::Cpu& c) {
    WP_ENTER(0x106f090u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f0a4u: goto R_0106f0a4;
        case 0x106f0ccu: goto R_0106f0cc;
        case 0x106f0e4u: goto R_0106f0e4;
        case 0x106f100u: goto R_0106f100;
        case 0x106f118u: goto R_0106f118;
        case 0x106f134u: goto R_0106f134;
        case 0x106f148u: goto R_0106f148;
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
    c.lr = 0x106f0a4u;
    f_801c83b4(c);
R_0106f0a4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_0106f0cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f0ccu;
    wp::call(c, c.ctr);
L_0106f0cc:
R_0106f0cc:
    c.r[29] = 0x0u;
    c.r[30] = 0x1u;
L_0106f0d4:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f0ec;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x106f0e4u;
    f_8000fc40(c);
R_0106f0e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f134;
L_0106f0ec:
    c.r[0] = wp::slw(c.r[30], c.r[29]);
    c.r[0] = c.r[27] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106f134;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x106f100u;
    f_8000fc20(c);
R_0106f100:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = wp::slw(c.r[30], c.r[3]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f118u;
    wp::call(c, c.ctr);
R_0106f118:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[3] | c.r[31];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[12] + 0x208u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffffu;
    c.ctr = c.r[12];
    c.lr = 0x106f134u;
    wp::call(c, c.ctr);
L_0106f134:
R_0106f134:
    c.r[29] = c.r[29] + 0x1u;
    wp::compare_signed(c, 0, c.r[29], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106f0d4;
    }
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x106f148u;
    f_801c8400(c);
R_0106f148:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg507_0106f160(wp::Cpu& c) {
    WP_ENTER(0x106f160u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f190u: goto R_0106f190;
        case 0x106f1a8u: goto R_0106f1a8;
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
L_0106f188:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x106f190u;
    f_8000fc20(c);
R_0106f190:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[29] = wp::slw(c.r[31], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f1a8u;
    wp::call(c, c.ctr);
R_0106f1a8:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0106f1bc;
    c.r[3] = c.r[30] | c.r[30];
    goto L_0106f1cc;
L_0106f1bc:
    c.r[30] = c.r[30] + 0x1u;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106f188;
    }
    c.r[3] = 0xffffffffu;
L_0106f1cc:
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

void f_mg507_0106f1f0(wp::Cpu& c) {
    WP_ENTER(0x106f1f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x169u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg507_0106f200(wp::Cpu& c) {
    WP_ENTER(0x106f200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f21cu: goto R_0106f21c;
        case 0x106f230u: goto R_0106f230;
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
    goto L_0106f21c;
L_0106f218:
    c.lr = 0x106f21cu;
    f_8006a940(c);
L_0106f21c:
R_0106f21c:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f230u;
    wp::call(c, c.ctr);
R_0106f230:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106f218;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_0106f250(wp::Cpu& c) {
    WP_ENTER(0x106f250u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f27cu: goto R_0106f27c;
        case 0x106f294u: goto R_0106f294;
        case 0x106f2b4u: goto R_0106f2b4;
        case 0x106f2d4u: goto R_0106f2d4;
        case 0x106f2f8u: goto R_0106f2f8;
        case 0x106f310u: goto R_0106f310;
        case 0x106f328u: goto R_0106f328;
        case 0x106f340u: goto R_0106f340;
        case 0x106f36cu: goto R_0106f36c;
        case 0x106f384u: goto R_0106f384;
        case 0x106f3a0u: goto R_0106f3a0;
        case 0x106f3bcu: goto R_0106f3bc;
        case 0x106f3ccu: goto R_0106f3cc;
        case 0x106f3e4u: goto R_0106f3e4;
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
    if (!wp::cr_get(c, 2)) goto L_0106f2d8;
    c.r[4] = 0x0u;
    c.lr = 0x106f27cu;
    f_800402c0(c);
R_0106f27c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f294;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x106f294u;
    f_80052250(c);
L_0106f294:
R_0106f294:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f2b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f2b4u;
    wp::call(c, c.ctr);
L_0106f2b4:
R_0106f2b4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f3e4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f2d4u;
    wp::call(c, c.ctr);
R_0106f2d4:
    goto L_0106f3e4;
L_0106f2d8:
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f3c0;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f3c0;
    c.r[4] = 0x0u;
    c.lr = 0x106f2f8u;
    f_800402c0(c);
R_0106f2f8:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f310;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x0u;
    c.lr = 0x106f310u;
    f_80052250(c);
L_0106f310:
R_0106f310:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f328u;
    wp::call(c, c.ctr);
R_0106f328:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f340u;
    wp::call(c, c.ctr);
R_0106f340:
    ea = c.r[30] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f360;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_0106f388;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_0106f3a4;
    goto L_0106f3e4;
L_0106f360:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x106f36cu;
    f_800402c0(c);
R_0106f36c:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f3e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x106f384u;
    f_80052250(c);
R_0106f384:
    goto L_0106f3e4;
L_0106f388:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f3a0u;
    wp::call(c, c.ctr);
R_0106f3a0:
    goto L_0106f3e4;
L_0106f3a4:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f3bcu;
    wp::call(c, c.ctr);
R_0106f3bc:
    goto L_0106f3e4;
L_0106f3c0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x1u;
    c.lr = 0x106f3ccu;
    f_800402c0(c);
R_0106f3cc:
    ea = c.r[30] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f3e4;
    c.r[3] = c.r[3] + 0x54u;
    c.r[4] = 0x1u;
    c.lr = 0x106f3e4u;
    f_80052250(c);
L_0106f3e4:
R_0106f3e4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x185u;
    wp::wr8(ea, c.r[31]);
    if (!wp::cr_get(c, 2)) goto L_0106f3f4;
    ea = c.r[30] + 0x154u;
    wp::wr8(ea, c.r[31]);
L_0106f3f4:
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

void f_mg507_0106f410(wp::Cpu& c) {
    WP_ENTER(0x106f410u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f444u: goto R_0106f444;
        case 0x106f4c8u: goto R_0106f4c8;
        case 0x106f4f4u: goto R_0106f4f4;
        case 0x106f524u: goto R_0106f524;
        case 0x106f548u: goto R_0106f548;
        case 0x106f554u: goto R_0106f554;
        case 0x106f574u: goto R_0106f574;
        case 0x106f588u: goto R_0106f588;
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
    c.lr = 0x106f444u;
    wp::call(c, c.ctr);
R_0106f444:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f454;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f5b4;
L_0106f454:
    ea = c.r[29] + 0x154u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_0106f468;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f5b4;
L_0106f468:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f484;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f484;
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f5b4;
L_0106f484:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[29] + 0x154u;
    wp::wr8(ea, c.r[30]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f498;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_0106f498:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f4a8;
    ea = c.r[3] + 0x154u;
    wp::wr8(ea, c.r[30]);
L_0106f4a8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f4c8;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f4c8u;
    wp::call(c, c.ctr);
L_0106f4c8:
R_0106f4c8:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f500;
    ea = c.r[29] + 0x144u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106f554;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f4f4u;
    wp::call(c, c.ctr);
R_0106f4f4:
    ea = c.r[29] + 0x144u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_0106f554;
L_0106f500:
    ea = c.r[29] + 0x148u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_0106f530;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f524u;
    wp::call(c, c.ctr);
R_0106f524:
    ea = c.r[29] + 0x148u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_0106f548;
L_0106f530:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f548u;
    wp::call(c, c.ctr);
L_0106f548:
R_0106f548:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x106f554u;
    f_8001a010(c);
L_0106f554:
R_0106f554:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f574;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f574u;
    wp::call(c, c.ctr);
L_0106f574:
R_0106f574:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x290u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f588u;
    wp::call(c, c.ctr);
R_0106f588:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x158u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x186u;
    wp::wr8(ea, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_0106f5a4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_0106f5a4:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f5b4;
    ea = c.r[3] + 0x186u;
    wp::wr8(ea, c.r[30]);
L_0106f5b4:
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

void f_mg507_0106f5d0(wp::Cpu& c) {
    WP_ENTER(0x106f5d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f610u: goto R_0106f610;
        case 0x106f630u: goto R_0106f630;
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
    if (wp::cr_get(c, 2)) goto L_0106f610;
    c.r[3] = c.r[0] | c.r[0];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f610u;
    wp::call(c, c.ctr);
L_0106f610:
R_0106f610:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f630;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x248u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f630u;
    wp::call(c, c.ctr);
L_0106f630:
R_0106f630:
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

void f_mg507_0106f650(wp::Cpu& c) {
    WP_ENTER(0x106f650u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f678u: goto R_0106f678;
        case 0x106f67cu: goto R_0106f67c;
        case 0x106f6a0u: goto R_0106f6a0;
        case 0x106f6a4u: goto R_0106f6a4;
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
    if (wp::cr_get(c, 2)) goto L_0106f68c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x144u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f678u;
    wp::call(c, c.ctr);
R_0106f678:
    c.lr = 0x106f67cu;
    f_80043140(c);
R_0106f67c:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    goto L_0106f6b0;
L_0106f68c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[3] + 0x148u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f6a0u;
    wp::call(c, c.ctr);
R_0106f6a0:
    c.lr = 0x106f6a4u;
    f_80043140(c);
R_0106f6a4:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
L_0106f6b0:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg507_0106f6c0(wp::Cpu& c) {
    WP_ENTER(0x106f6c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106f6d4u: goto R_0106f6d4;
        case 0x106f6fcu: goto R_0106f6fc;
        case 0x106f718u: goto R_0106f718;
        case 0x106f720u: goto R_0106f720;
        case 0x106f748u: goto R_0106f748;
        case 0x106f7a0u: goto R_0106f7a0;
        case 0x106f7bcu: goto R_0106f7bc;
        case 0x106f7e8u: goto R_0106f7e8;
        case 0x106f814u: goto R_0106f814;
        case 0x106f83cu: goto R_0106f83c;
        case 0x106f858u: goto R_0106f858;
        case 0x106f87cu: goto R_0106f87c;
        case 0x106f898u: goto R_0106f898;
        case 0x106f8b0u: goto R_0106f8b0;
        case 0x106f8d8u: goto R_0106f8d8;
        case 0x106f8f0u: goto R_0106f8f0;
        case 0x106f920u: goto R_0106f920;
        case 0x106f968u: goto R_0106f968;
        case 0x106f978u: goto R_0106f978;
        case 0x106f9a0u: goto R_0106f9a0;
        case 0x106f9bcu: goto R_0106f9bc;
        case 0x106f9d4u: goto R_0106f9d4;
        case 0x106f9f4u: goto R_0106f9f4;
        case 0x106fa18u: goto R_0106fa18;
        case 0x106fa3cu: goto R_0106fa3c;
        case 0x106fa60u: goto R_0106fa60;
        case 0x106fa68u: goto R_0106fa68;
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
    c.lr = 0x106f6d4u;
    f_801c83ac(c);
R_0106f6d4:
    c.r[0] = 0x43300000u;
    c.r[28] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[5] | c.r[5];
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106f6fcu;
    f_8003cc90(c);
R_0106f6fc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f718u;
    wp::call(c, c.ctr);
R_0106f718:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106f720u;
    f_8003d2d0(c);
R_0106f720:
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
    c.lr = 0x106f748u;
    wp::call(c, c.ctr);
R_0106f748:
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
    c.lr = 0x106f7a0u;
    wp::call(c, c.ctr);
R_0106f7a0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f7bcu;
    wp::call(c, c.ctr);
R_0106f7bc:
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
    c.lr = 0x106f7e8u;
    wp::call(c, c.ctr);
R_0106f7e8:
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
    c.lr = 0x106f814u;
    wp::call(c, c.ctr);
R_0106f814:
    ea = c.r[27] + 0x7u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f87c;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1d8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f83cu;
    wp::call(c, c.ctr);
R_0106f83c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1e4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f858u;
    wp::call(c, c.ctr);
R_0106f858:
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
    c.lr = 0x106f87cu;
    wp::call(c, c.ctr);
L_0106f87c:
R_0106f87c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f898u;
    wp::call(c, c.ctr);
R_0106f898:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f8b0u;
    wp::call(c, c.ctr);
R_0106f8b0:
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
    c.lr = 0x106f8d8u;
    f_801cf394(c);
R_0106f8d8:
    ea = c.r[29] + 0x188u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f8e8;
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_0106f8e8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106f8f0u;
    f_8003cfb0(c);
R_0106f8f0:
    c.r[0] = 0x0u;
    c.r[26] = ((((g_mg507_bases[4] + 0x2430u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x138u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg507_bases[4] + 0x2430u) & 0xFFFFu);
    c.r[24] = 0x0u;
    ea = c.r[29] + 0x188u;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ((((g_mg507_bases[5] + 0x27988u) + 0x8000u) >> 16) << 16);
    goto L_0106f980;
L_0106f914:
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.lr = 0x106f920u;
    f_801cf510(c);
R_0106f920:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106f96c;
    c.r[0] = c.r[24] * 0xcu;
    c.r[4] = ((((g_mg507_bases[4] + 0x2430u) + 0x8000u) >> 16) << 16);
    ea = c.r[29] + 0x194u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x2430u) & 0xFFFFu);
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
    if (wp::cr_get(c, 2)) goto L_0106f98c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[5] + 0xau;
    c.r[4] = wp::rd16(ea);
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f968u;
    wp::call(c, c.ctr);
R_0106f968:
    goto L_0106f98c;
L_0106f96c:
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[27] + wp::sign_extend16((g_mg507_bases[5] + 0x27988u) & 0xFFFFu);
    c.lr = 0x106f978u;
    f_801cf510(c);
R_0106f978:
    c.r[26] = c.r[26] + 0xcu;
    c.r[24] = c.r[24] + 0x1u;
L_0106f980:
    ea = c.r[26] + 0x0u;
    c.r[28] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106f914;
    }
L_0106f98c:
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106f9f4;
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106f9a0u;
    f_8003d2d0(c);
R_0106f9a0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x194u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f9bcu;
    wp::call(c, c.ctr);
R_0106f9bc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106f9d4u;
    wp::call(c, c.ctr);
R_0106f9d4:
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
    c.lr = 0x106f9f4u;
    wp::call(c, c.ctr);
L_0106f9f4:
R_0106f9f4:
    ea = c.r[29] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fa18;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fa18u;
    wp::call(c, c.ctr);
L_0106fa18:
R_0106fa18:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fa3c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fa3cu;
    wp::call(c, c.ctr);
L_0106fa3c:
R_0106fa3c:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fa60;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x134u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fa60u;
    wp::call(c, c.ctr);
L_0106fa60:
R_0106fa60:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x106fa68u;
    f_801c83f8(c);
R_0106fa68:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg507_0106fa80(wp::Cpu& c) {
    WP_ENTER(0x106fa80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fb04u: goto R_0106fb04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = ((((g_mg507_bases[5] + 0x28860u) + 0x8000u) >> 16) << 16);
    c.r[5] = ((((g_mg507_bases[5] + 0x27994u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28860u) & 0xFFFFu);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27994u) & 0xFFFFu);
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
    goto L_0106faec;
L_0106fae8:
    c.r[30] = c.r[30] + 0x4u;
L_0106faec:
    wp::compare_unsigned(c, 0, c.r[30], c.r[31]);
    if (wp::cr_get(c, 2)) goto L_0106fb10;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[12] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x106fb04u;
    f_801c8244(c);
R_0106fb04:
    c.r[0] = c.r[0] | 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106fae8;
    }
L_0106fb10:
    ea = c.r[29] + 0x118u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x114u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_0106fb30;
    c.r[5] = 0x0u;
    goto L_0106fb34;
L_0106fb30:
    ea = c.r[30] + 0x0u;
    c.r[5] = wp::rd32(ea);
L_0106fb34:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106fb44;
    c.r[3] = 0x0u;
    goto L_0106fb8c;
L_0106fb44:
    ea = c.r[5] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = c.r[3] | c.r[3];
    goto L_0106fb74;
L_0106fb58:
    c.r[4] = wp::rotl(c.r[3], 5) & 0xffffffe0u;
    c.r[0] = wp::rotl(c.r[3], 30) & 0x3fffffffu;
    c.r[0] = c.r[4] + c.r[0];
    c.r[7] = c.r[7] + 0x2u;
    c.r[0] = c.r[9] + c.r[0];
    c.r[6] = c.r[6] + 0x1u;
    c.r[3] = c.r[3] ^ c.r[0];
L_0106fb74:
    wp::compare_unsigned(c, 0, c.r[6], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_0106fb8c;
    ea = c.r[5] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + c.r[7];
    c.r[9] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_0106fb58;
    }
L_0106fb8c:
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

void f_mg507_0106fbb0(wp::Cpu& c) {
    WP_ENTER(0x106fbb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg507_bases[5] + 0x28858u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28858u) & 0xFFFFu);
    f_mg507_0106d4b0(c);
    return;
}

void f_mg507_0106fbc0(wp::Cpu& c) {
    WP_ENTER(0x106fbc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fbe8u: goto R_0106fbe8;
        case 0x106fbf0u: goto R_0106fbf0;
        case 0x106fc0cu: goto R_0106fc0c;
        case 0x106fc24u: goto R_0106fc24;
        case 0x106fc4cu: goto R_0106fc4c;
        case 0x106fc70u: goto R_0106fc70;
        case 0x106fc94u: goto R_0106fc94;
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
    c.lr = 0x106fbe8u;
    f_mg507_0106b660(c);
R_0106fbe8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x106fbf0u;
    f_mg507_0106dab0(c);
R_0106fbf0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0x1u;
    ea = c.r[12] + 0x1acu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fc0cu;
    wp::call(c, c.ctr);
R_0106fc0c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fc24u;
    wp::call(c, c.ctr);
R_0106fc24:
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
    c.lr = 0x106fc4cu;
    f_801cf394(c);
R_0106fc4c:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fc70;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fc70u;
    wp::call(c, c.ctr);
L_0106fc70:
R_0106fc70:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fc94;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fc94u;
    wp::call(c, c.ctr);
L_0106fc94:
R_0106fc94:
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

void f_mg507_0106fcb0(wp::Cpu& c) {
    WP_ENTER(0x106fcb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fce4u: goto R_0106fce4;
        case 0x106fd04u: goto R_0106fd04;
        case 0x106fd1cu: goto R_0106fd1c;
        case 0x106fd44u: goto R_0106fd44;
        case 0x106fd6cu: goto R_0106fd6c;
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
    c.lr = 0x106fce4u;
    f_8003cc90(c);
R_0106fce4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x106fd04u;
    wp::call(c, c.ctr);
R_0106fd04:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fd1cu;
    wp::call(c, c.ctr);
R_0106fd1c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fd44;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fd44u;
    wp::call(c, c.ctr);
L_0106fd44:
R_0106fd44:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fd6c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fd6cu;
    wp::call(c, c.ctr);
L_0106fd6c:
R_0106fd6c:
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

void f_mg507_0106fd90(wp::Cpu& c) {
    WP_ENTER(0x106fd90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fda4u: goto R_0106fda4;
        case 0x106fdb8u: goto R_0106fdb8;
        case 0x106fdd0u: goto R_0106fdd0;
        case 0x106fde0u: goto R_0106fde0;
        case 0x106fdf8u: goto R_0106fdf8;
        case 0x106fe20u: goto R_0106fe20;
        case 0x106fe48u: goto R_0106fe48;
        case 0x106fe50u: goto R_0106fe50;
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
    c.lr = 0x106fda4u;
    f_801c83b8(c);
R_0106fda4:
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[29] = c.r[5] | c.r[5];
    c.r[30] = c.r[6] | c.r[6];
    c.lr = 0x106fdb8u;
    f_mg507_0106b660(c);
R_0106fdb8:
    c.r[5] = ((((g_mg507_bases[5] + 0x27698u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27698u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106fdd0u;
    f_801d34c4(c);
R_0106fdd0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x106fde0u;
    f_mg507_0106e9b0(c);
R_0106fde0:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fdf8u;
    wp::call(c, c.ctr);
R_0106fdf8:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fe20;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fe20u;
    wp::call(c, c.ctr);
L_0106fe20:
R_0106fe20:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106fe48;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fe48u;
    wp::call(c, c.ctr);
L_0106fe48:
R_0106fe48:
    c.r[11] = c.r[1] + 0x20u;
    c.lr = 0x106fe50u;
    f_801c8404(c);
R_0106fe50:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_mg507_0106fe60(wp::Cpu& c) {
    WP_ENTER(0x106fe60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106fea8u: goto R_0106fea8;
        case 0x106fec8u: goto R_0106fec8;
        case 0x106fee0u: goto R_0106fee0;
        case 0x106ff08u: goto R_0106ff08;
        case 0x106ff30u: goto R_0106ff30;
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
    c.r[5] = ((((g_mg507_bases[5] + 0x27660u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[6] = c.r[30] | c.r[30];
    c.r[5] = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27660u) & 0xFFFFu);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x3fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x106fea8u;
    f_801d3590(c);
R_0106fea8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x106fec8u;
    wp::call(c, c.ctr);
R_0106fec8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106fee0u;
    wp::call(c, c.ctr);
R_0106fee0:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ff08;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ff08u;
    wp::call(c, c.ctr);
L_0106ff08:
R_0106ff08:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ff30;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ff30u;
    wp::call(c, c.ctr);
L_0106ff30:
R_0106ff30:
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

void f_mg507_0106ff50(wp::Cpu& c) {
    WP_ENTER(0x106ff50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106ff84u: goto R_0106ff84;
        case 0x106ffa4u: goto R_0106ffa4;
        case 0x106ffbcu: goto R_0106ffbc;
        case 0x106ffe4u: goto R_0106ffe4;
        case 0x107000cu: goto R_0107000c;
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
    c.lr = 0x106ff84u;
    f_80010060(c);
R_0106ff84:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.ctr = c.r[12];
    c.lr = 0x106ffa4u;
    wp::call(c, c.ctr);
R_0106ffa4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ffbcu;
    wp::call(c, c.ctr);
R_0106ffbc:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ffe4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x106ffe4u;
    wp::call(c, c.ctr);
L_0106ffe4:
R_0106ffe4:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107000c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x170u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107000cu;
    wp::call(c, c.ctr);
L_0107000c:
R_0107000c:
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

void f_mg507_01070030(wp::Cpu& c) {
    WP_ENTER(0x1070030u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070044u: goto R_01070044;
        case 0x107005cu: goto R_0107005c;
        case 0x1070070u: goto R_01070070;
        case 0x1070098u: goto R_01070098;
        case 0x10700a8u: goto R_010700a8;
        case 0x10700ccu: goto R_010700cc;
        case 0x107012cu: goto R_0107012c;
        case 0x10701acu: goto R_010701ac;
        case 0x1070214u: goto R_01070214;
        case 0x1070248u: goto R_01070248;
        case 0x107025cu: goto R_0107025c;
        case 0x107026cu: goto R_0107026c;
        case 0x107028cu: goto R_0107028c;
        case 0x10702a4u: goto R_010702a4;
        case 0x10702ccu: goto R_010702cc;
        case 0x10702f4u: goto R_010702f4;
        case 0x10702fcu: goto R_010702fc;
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
    c.lr = 0x1070044u;
    f_801c83ac(c);
R_01070044:
    c.r[29] = c.r[5] | c.r[5];
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = c.r[6] | c.r[6];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x107005cu;
    f_8006c450(c);
R_0107005c:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01070260;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1070070u;
    f_8006c460(c);
R_01070070:
    c.r[25] = ((((g_mg507_bases[5] + 0x27668u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[25] = c.r[25] + wp::sign_extend16((g_mg507_bases[5] + 0x27668u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[26] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1070098u;
    f_801c7860(c);
R_01070098:
    c.r[24] = c.r[3] | c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[24] | c.r[24];
    c.lr = 0x10700a8u;
    f_mg507_0101a6f0(c);
R_010700a8:
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
    c.lr = 0x10700ccu;
    f_mg507_0101a8b0(c);
R_010700cc:
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
    if (!wp::cr_get(c, 2)) goto L_01070108;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0107010c;
L_01070108:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0107010c:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x107012cu;
    f_mg507_0101a8b0(c);
R_0107012c:
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
    if (!wp::cr_get(c, 2)) goto L_01070188;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_0107018c;
L_01070188:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_0107018c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10701acu;
    f_mg507_0101a8b0(c);
R_010701ac:
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
    if (!wp::cr_get(c, 2)) goto L_010701f0;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010701f4;
L_010701f0:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010701f4:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1070214u;
    f_mg507_0101a8b0(c);
R_01070214:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070230;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01070234;
L_01070230:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01070234:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070248u;
    wp::call(c, c.ctr);
R_01070248:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107028c;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x107025cu;
    f_801c7a8c(c);
R_0107025c:
    goto L_0107028c;
L_01070260:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x107026cu;
    f_8006c4e0(c);
R_0107026c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x107028cu;
    wp::call(c, c.ctr);
L_0107028c:
R_0107028c:
    ea = c.r[27] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10702a4u;
    wp::call(c, c.ctr);
R_010702a4:
    ea = c.r[27] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010702cc;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10702ccu;
    wp::call(c, c.ctr);
L_010702cc:
R_010702cc:
    ea = c.r[27] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010702f4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10702f4u;
    wp::call(c, c.ctr);
L_010702f4:
R_010702f4:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10702fcu;
    f_801c83f8(c);
R_010702fc:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg507_01070310(wp::Cpu& c) {
    WP_ENTER(0x1070310u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107033cu: goto R_0107033c;
        case 0x1070358u: goto R_01070358;
        case 0x1070370u: goto R_01070370;
        case 0x1070394u: goto R_01070394;
        case 0x10703b8u: goto R_010703b8;
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
    c.lr = 0x107033cu;
    f_80010060(c);
R_0107033c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070358u;
    wp::call(c, c.ctr);
R_01070358:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070370u;
    wp::call(c, c.ctr);
R_01070370:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070394;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070394u;
    wp::call(c, c.ctr);
L_01070394:
R_01070394:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010703b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x140u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10703b8u;
    wp::call(c, c.ctr);
L_010703b8:
R_010703b8:
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

void f_mg507_010703e0(wp::Cpu& c) {
    WP_ENTER(0x10703e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10703f4u: goto R_010703f4;
        case 0x1070408u: goto R_01070408;
        case 0x107041cu: goto R_0107041c;
        case 0x1070444u: goto R_01070444;
        case 0x1070454u: goto R_01070454;
        case 0x1070478u: goto R_01070478;
        case 0x10704d8u: goto R_010704d8;
        case 0x1070558u: goto R_01070558;
        case 0x10705c0u: goto R_010705c0;
        case 0x10705f0u: goto R_010705f0;
        case 0x1070604u: goto R_01070604;
        case 0x1070614u: goto R_01070614;
        case 0x1070630u: goto R_01070630;
        case 0x1070648u: goto R_01070648;
        case 0x107066cu: goto R_0107066c;
        case 0x1070690u: goto R_01070690;
        case 0x1070698u: goto R_01070698;
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
    c.lr = 0x10703f4u;
    f_801c83b0(c);
R_010703f4:
    c.r[30] = c.r[5] | c.r[5];
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1070408u;
    f_8006c450(c);
R_01070408:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_01070608;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x107041cu;
    f_8006c460(c);
R_0107041c:
    c.r[26] = ((((g_mg507_bases[5] + 0x27668u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg507_bases[5] + 0x27668u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[27] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1070444u;
    f_801c7860(c);
R_01070444:
    c.r[25] = c.r[3] | c.r[3];
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = c.r[25] | c.r[25];
    c.lr = 0x1070454u;
    f_mg507_0101a6f0(c);
R_01070454:
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
    c.lr = 0x1070478u;
    f_mg507_0101a8b0(c);
R_01070478:
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
    if (!wp::cr_get(c, 2)) goto L_010704b4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010704b8;
L_010704b4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010704b8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x10704d8u;
    f_mg507_0101a8b0(c);
R_010704d8:
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
    if (!wp::cr_get(c, 2)) goto L_01070534;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01070538;
L_01070534:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01070538:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x1070558u;
    f_mg507_0101a8b0(c);
R_01070558:
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
    if (!wp::cr_get(c, 2)) goto L_0107059c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010705a0;
L_0107059c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010705a0:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x10705c0u;
    f_mg507_0101a8b0(c);
R_010705c0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_010705dc;
    c.r[5] = c.r[1] + 0x35u;
    goto L_010705e0;
L_010705dc:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_010705e0:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x148u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10705f0u;
    wp::call(c, c.ctr);
R_010705f0:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070630;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1070604u;
    f_801c7a8c(c);
R_01070604:
    goto L_01070630;
L_01070608:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x1070614u;
    f_8006c4e0(c);
R_01070614:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x40u;
    ea = c.r[12] + 0x14cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070630u;
    wp::call(c, c.ctr);
L_01070630:
R_01070630:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x2a0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070648u;
    wp::call(c, c.ctr);
R_01070648:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107066c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107066cu;
    wp::call(c, c.ctr);
L_0107066c:
R_0107066c:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070690;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x144u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070690u;
    wp::call(c, c.ctr);
L_01070690:
R_01070690:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x1070698u;
    f_801c83fc(c);
R_01070698:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg507_010706b0(wp::Cpu& c) {
    WP_ENTER(0x10706b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10706f8u: goto R_010706f8;
        case 0x107071cu: goto R_0107071c;
        case 0x1070744u: goto R_01070744;
        case 0x107076cu: goto R_0107076c;
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
    c.lr = 0x10706f8u;
    wp::call(c, c.ctr);
R_010706f8:
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
    c.lr = 0x107071cu;
    wp::call(c, c.ctr);
R_0107071c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070744;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070744u;
    wp::call(c, c.ctr);
L_01070744:
R_01070744:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107076c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x1bcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107076cu;
    wp::call(c, c.ctr);
L_0107076c:
R_0107076c:
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

void f_mg507_01070790(wp::Cpu& c) {
    WP_ENTER(0x1070790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg507_bases[6] + 0x14c0u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[6] + wp::sign_extend16((g_mg507_bases[6] + 0x14c0u) & 0xFFFFu);
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_010707b0(wp::Cpu& c) {
    WP_ENTER(0x10707b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10707e0u: goto R_010707e0;
        case 0x1070800u: goto R_01070800;
        case 0x1070830u: goto R_01070830;
        case 0x1070838u: goto R_01070838;
        case 0x107084cu: goto R_0107084c;
        case 0x107085cu: goto R_0107085c;
        case 0x1070870u: goto R_01070870;
        case 0x107088cu: goto R_0107088c;
        case 0x1070894u: goto R_01070894;
        case 0x10708a8u: goto R_010708a8;
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
    c.lr = 0x10707e0u;
    wp::call(c, c.ctr);
R_010707e0:
    c.r[31] = 0x0u;
    goto L_01070808;
L_010707e8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x270u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070800u;
    wp::call(c, c.ctr);
R_01070800:
    c.r[30] = c.r[30] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
L_01070808:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_010707e8;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070830u;
    wp::call(c, c.ctr);
R_01070830:
    goto L_01070838;
L_01070834:
    c.lr = 0x1070838u;
    f_8006a940(c);
L_01070838:
R_01070838:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107084cu;
    wp::call(c, c.ctr);
R_0107084c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070834;
    }
    goto L_0107085c;
L_01070858:
    c.lr = 0x107085cu;
    f_8006a940(c);
L_0107085c:
R_0107085c:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x238u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070870u;
    wp::call(c, c.ctr);
R_01070870:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070858;
    }
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0xa4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107088cu;
    wp::call(c, c.ctr);
R_0107088c:
    goto L_01070894;
L_01070890:
    c.lr = 0x1070894u;
    f_8006a940(c);
L_01070894:
R_01070894:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x244u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10708a8u;
    wp::call(c, c.ctr);
R_010708a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01070890;
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

void f_mg507_010708d0(wp::Cpu& c) {
    WP_ENTER(0x10708d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10708f8u: goto R_010708f8;
        case 0x107091cu: goto R_0107091c;
        case 0x1070940u: goto R_01070940;
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
    c.lr = 0x10708f8u;
    f_80043290(c);
R_010708f8:
    ea = c.r[31] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107091c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107091cu;
    wp::call(c, c.ctr);
L_0107091c:
R_0107091c:
    ea = c.r[31] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070940;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.f[1] = c.f[30];
    c.f[2] = c.f[31];
    ea = c.r[12] + 0x288u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070940u;
    wp::call(c, c.ctr);
L_01070940:
R_01070940:
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

void f_mg507_01070960(wp::Cpu& c) {
    WP_ENTER(0x1070960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070980u: goto R_01070980;
        case 0x10709a0u: goto R_010709a0;
        case 0x10709c0u: goto R_010709c0;
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
    c.lr = 0x1070980u;
    f_800402f0(c);
R_01070980:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010709a0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10709a0u;
    wp::call(c, c.ctr);
L_010709a0:
R_010709a0:
    ea = c.r[30] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010709c0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xa8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10709c0u;
    wp::call(c, c.ctr);
L_010709c0:
R_010709c0:
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

void f_mg507_010709e0(wp::Cpu& c) {
    WP_ENTER(0x10709e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070a08u: goto R_01070a08;
        case 0x1070a24u: goto R_01070a24;
        case 0x1070a54u: goto R_01070a54;
        case 0x1070a74u: goto R_01070a74;
        case 0x1070a88u: goto R_01070a88;
        case 0x1070ab8u: goto R_01070ab8;
        case 0x1070ad8u: goto R_01070ad8;
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
    c.lr = 0x1070a08u;
    f_801c79a4(c);
R_01070a08:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070a24;
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[4] = 0x1u;
    c.r[5] = c.r[0] & 0xffffu;
    c.r[6] = 0x0u;
    c.lr = 0x1070a24u;
    f_mg507_0102f320(c);
L_01070a24:
R_01070a24:
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070a54;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[29] + 0x198u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01070a54;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0x1u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070a54u;
    wp::call(c, c.ctr);
L_01070a54:
R_01070a54:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x279a0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x198u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x279a0u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1070a74u;
    wp::call(c, c.ctr);
R_01070a74:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.r[6] = 0x1u;
    c.lr = 0x1070a88u;
    f_80043490(c);
R_01070a88:
    ea = c.r[29] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[29] + 0x15du;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070ab8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070ab8u;
    wp::call(c, c.ctr);
L_01070ab8:
R_01070ab8:
    ea = c.r[29] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070ad8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x2a4u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070ad8u;
    wp::call(c, c.ctr);
L_01070ad8:
R_01070ad8:
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

void f_mg507_01070b00(wp::Cpu& c) {
    WP_ENTER(0x1070b00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070b20u: goto R_01070b20;
        case 0x1070b3cu: goto R_01070b3c;
        case 0x1070b50u: goto R_01070b50;
        case 0x1070b64u: goto R_01070b64;
        case 0x1070b78u: goto R_01070b78;
        case 0x1070b8cu: goto R_01070b8c;
        case 0x1070bb0u: goto R_01070bb0;
        case 0x1070bc8u: goto R_01070bc8;
        case 0x1070be4u: goto R_01070be4;
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
    c.lr = 0x1070b20u;
    f_mg507_0106b660(c);
R_01070b20:
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x160u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070b3cu;
    wp::call(c, c.ctr);
R_01070b3c:
    c.r[31] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1070b50u;
    f_80071fe0(c);
R_01070b50:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01070b6c;
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1070b64u;
    f_80071fe0(c);
R_01070b64:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
    goto L_01070b90;
L_01070b6c:
    c.r[31] = ((((g_mg507_bases[4] + 0x2404u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2404u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1070b78u;
    f_80071fe0(c);
R_01070b78:
    ea = c.r[29] + 0x164u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_01070b90;
    ea = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2404u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1070b8cu;
    f_80071fe0(c);
R_01070b8c:
    ea = c.r[29] + 0x164u;
    wp::wr32(ea, c.r[3]);
L_01070b90:
    ea = c.r[29] + 0x194u;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070be4;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070bb0u;
    wp::call(c, c.ctr);
R_01070bb0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070bc8u;
    wp::call(c, c.ctr);
R_01070bc8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070be4u;
    wp::call(c, c.ctr);
L_01070be4:
R_01070be4:
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

void f_mg507_01070c00(wp::Cpu& c) {
    WP_ENTER(0x1070c00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1070c14u: goto R_01070c14;
        case 0x1070c34u: goto R_01070c34;
        case 0x1070c5cu: goto R_01070c5c;
        case 0x1070ca0u: goto R_01070ca0;
        case 0x1070cb8u: goto R_01070cb8;
        case 0x1070cccu: goto R_01070ccc;
        case 0x1070cd8u: goto R_01070cd8;
        case 0x1070ce0u: goto R_01070ce0;
        case 0x1070d0cu: goto R_01070d0c;
        case 0x1070d54u: goto R_01070d54;
        case 0x1070da0u: goto R_01070da0;
        case 0x1070db4u: goto R_01070db4;
        case 0x1070dccu: goto R_01070dcc;
        case 0x1070de8u: goto R_01070de8;
        case 0x1070df8u: goto R_01070df8;
        case 0x1070e04u: goto R_01070e04;
        case 0x1070e14u: goto R_01070e14;
        case 0x1070e18u: goto R_01070e18;
        case 0x1070e20u: goto R_01070e20;
        case 0x1070e4cu: goto R_01070e4c;
        case 0x1070e58u: goto R_01070e58;
        case 0x1070e64u: goto R_01070e64;
        case 0x1070e74u: goto R_01070e74;
        case 0x1070e78u: goto R_01070e78;
        case 0x1070e80u: goto R_01070e80;
        case 0x1070eb0u: goto R_01070eb0;
        case 0x1070ed8u: goto R_01070ed8;
        case 0x1070ee4u: goto R_01070ee4;
        case 0x1070ef4u: goto R_01070ef4;
        case 0x1070ef8u: goto R_01070ef8;
        case 0x1070f00u: goto R_01070f00;
        case 0x1070f70u: goto R_01070f70;
        case 0x1070fa4u: goto R_01070fa4;
        case 0x1070fc0u: goto R_01070fc0;
        case 0x1070fe8u: goto R_01070fe8;
        case 0x1071004u: goto R_01071004;
        case 0x1071024u: goto R_01071024;
        case 0x107104cu: goto R_0107104c;
        case 0x1071088u: goto R_01071088;
        case 0x10710b0u: goto R_010710b0;
        case 0x10710f0u: goto R_010710f0;
        case 0x107110cu: goto R_0107110c;
        case 0x1071160u: goto R_01071160;
        case 0x1071168u: goto R_01071168;
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
    c.lr = 0x1070c14u;
    f_801c83ac(c);
R_01070c14:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[28] = c.r[3] | c.r[3];
    c.r[29] = 0x0u;
    ea = c.r[12] + 0xa0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1070c34u;
    wp::call(c, c.ctr);
R_01070c34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070c5c;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070c5c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070c5cu;
    wp::call(c, c.ctr);
L_01070c5c:
R_01070c5c:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070ce0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070c80;
    ea = c.r[28] + 0x186u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070c8c;
L_01070c80:
    ea = c.r[28] + 0x187u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070ca4;
L_01070c8c:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070ca0u;
    wp::call(c, c.ctr);
R_01070ca0:
    goto L_01070cb8;
L_01070ca4:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[12] + 0xccu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070cb8u;
    wp::call(c, c.ctr);
L_01070cb8:
R_01070cb8:
    ea = c.r[28] + 0x194u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0xd0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070cccu;
    wp::call(c, c.ctr);
R_01070ccc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070ce0;
    c.lr = 0x1070cd8u;
    f_8004a110(c);
R_01070cd8:
    c.r[3] = c.r[3] | 0x1000u;
    c.lr = 0x1070ce0u;
    f_8004a100(c);
L_01070ce0:
R_01070ce0:
    ea = c.r[28] + 0x140u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01071160;
    ea = c.r[28] + 0x150u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01070d64;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070d0cu;
    wp::call(c, c.ctr);
R_01070d0c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071160;
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070d2c;
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[0]);
L_01070d2c:
    ea = c.r[28] + 0x150u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01070d54;
    ea = c.r[28] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070d54u;
    wp::call(c, c.ctr);
L_01070d54:
R_01070d54:
    c.r[0] = 0xffffffffu;
    ea = c.r[28] + 0x150u;
    wp::wr32(ea, c.r[0]);
    goto L_01070d64;
    goto L_01071160;
L_01070d64:
    ea = c.r[28] + 0x16au;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107104c;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107104c;
    ea = c.r[28] + 0x16cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01070d94;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[28] + 0x16cu;
    wp::wr32(ea, c.r[0]);
    goto L_01071160;
L_01070d94:
    c.r[30] = 0x0u;
    c.r[29] = 0x1u;
    c.lr = 0x1070da0u;
    f_8000e2a0(c);
R_01070da0:
    c.r[25] = c.r[3] | c.r[3];
    c.r[24] = 0x0u;
    c.r[26] = 0x1u;
L_01070dac:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070db4u;
    f_8000fc20(c);
R_01070db4:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[27] = wp::slw(c.r[26], c.r[3]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070dccu;
    wp::call(c, c.ctr);
R_01070dcc:
    c.r[0] = c.r[3] & 0xffffu;
    c.r[0] = c.r[0] & c.r[27];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070e2c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070df0;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070de8u;
    f_8000fc40(c);
R_01070de8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070e2c;
L_01070df0:
    c.r[29] = 0x0u;
    c.lr = 0x1070df8u;
    f_8000dd70(c);
R_01070df8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070e04u;
    f_8000fc20(c);
R_01070e04:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_01070e2c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070e14u;
    f_8000fc20(c);
R_01070e14:
    c.lr = 0x1070e18u;
    f_800699d0(c);
R_01070e18:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1070e20u;
    f_80066cd0(c);
R_01070e20:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070e2c;
    c.r[30] = 0x1u;
L_01070e2c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01070dac;
    }
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070e98;
    c.r[24] = 0x0u;
L_01070e44:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070e4cu;
    f_8000fc40(c);
R_01070e4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070e8c;
    c.lr = 0x1070e58u;
    f_8000dd70(c);
R_01070e58:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070e64u;
    f_8000fc20(c);
R_01070e64:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_01070e8c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070e74u;
    f_8000fc20(c);
R_01070e74:
    c.lr = 0x1070e78u;
    f_800699d0(c);
R_01070e78:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1070e80u;
    f_80066cd0(c);
R_01070e80:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070e8c;
    c.r[30] = 0x1u;
L_01070e8c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01070e44;
    }
L_01070e98:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070f18;
    c.r[24] = 0x1u;
    c.r[25] = 0x0u;
L_01070ea8:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1070eb0u;
    f_8000fc40(c);
R_01070eb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01070ebc;
    c.r[24] = 0x0u;
L_01070ebc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01070ea8;
    }
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070f18;
    c.r[24] = 0x0u;
L_01070ed4:
    c.lr = 0x1070ed8u;
    f_8000dd70(c);
R_01070ed8:
    c.r[27] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070ee4u;
    f_8000fc20(c);
R_01070ee4:
    wp::compare_signed(c, 0, c.r[3], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_01070f0c;
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x1070ef4u;
    f_8000fc20(c);
R_01070ef4:
    c.lr = 0x1070ef8u;
    f_800699d0(c);
R_01070ef8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1070f00u;
    f_80066cd0(c);
R_01070f00:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070f0c;
    c.r[30] = 0x1u;
L_01070f0c:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01070ed4;
    }
L_01070f18:
    ea = c.r[28] + 0x15eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070f48;
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070f48;
    ea = c.r[28] + 0x160u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x164u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[28] + 0x160u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_01070f48;
    c.r[30] = 0x1u;
L_01070f48:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107104c;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107104c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070f70u;
    wp::call(c, c.ctr);
R_01070f70:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01070fc0;
    ea = c.r[28] + 0x168u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070fc0;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070fc0;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1070fa4u;
    wp::call(c, c.ctr);
R_01070fa4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01070fc0;
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[31] + 0x34u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x1070fc0u;
    f_80018e30(c);
L_01070fc0:
R_01070fc0:
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
    c.lr = 0x1070fe8u;
    wp::call(c, c.ctr);
R_01070fe8:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x180u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071004u;
    wp::call(c, c.ctr);
R_01071004:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01071028;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[28] + 0x174u;
    ea = c.r[12] + 0x17cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071024u;
    wp::call(c, c.ctr);
R_01071024:
    goto L_01071034;
L_01071028:
    c.r[0] = 0x1u;
    ea = c.r[28] + 0x169u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[28] + 0x15du;
    wp::wr8(ea, c.r[27]);
L_01071034:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107104cu;
    wp::call(c, c.ctr);
L_0107104c:
R_0107104c:
    ea = c.r[28] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    c.r[30] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010710bc;
    ea = c.r[28] + 0x15du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010710bc;
    ea = c.r[28] + 0x169u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010710bc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071088u;
    wp::call(c, c.ctr);
R_01071088:
    c.r[0] = c.r[3] & 0xffffu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010710bc;
    ea = c.r[28] + 0x185u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010710bc;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x24cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10710b0u;
    wp::call(c, c.ctr);
R_010710b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010710bc;
    c.r[30] = 0x1u;
L_010710bc:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071160;
    ea = c.r[31] + 0x168u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071140;
    c.r[24] = 0x0u;
    c.r[29] = 0x1u;
L_010710dc:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10710f0u;
    wp::call(c, c.ctr);
R_010710f0:
    c.r[3] = c.r[3] & 0xffffu;
    c.r[0] = wp::slw(c.r[29], c.r[24]);
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_01071134;
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.lr = 0x107110cu;
    f_8000ffd0(c);
R_0107110c:
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
    goto L_01071140;
L_01071134:
    c.r[24] = c.r[24] + 0x1u;
    wp::compare_signed(c, 0, c.r[24], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_010710dc;
    }
L_01071140:
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
    c.lr = 0x1071160u;
    wp::call(c, c.ctr);
L_01071160:
R_01071160:
    c.r[11] = c.r[1] + 0x40u;
    c.lr = 0x1071168u;
    f_801c83f8(c);
R_01071168:
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_mg507_01071180(wp::Cpu& c) {
    WP_ENTER(0x1071180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg507_01071190(wp::Cpu& c) {
    WP_ENTER(0x1071190u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg507_bases[4] + 0x23bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2e0u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x23bcu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = 0x0u;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010711b8;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010711b8;
    c.r[4] = 0x1u;
L_010711b8:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg507_010711c0(wp::Cpu& c) {
    WP_ENTER(0x10711c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x154u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg507_010711d0(wp::Cpu& c) {
    WP_ENTER(0x10711d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071208u: goto R_01071208;
        case 0x1071220u: goto R_01071220;
        case 0x1071228u: goto R_01071228;
        case 0x1071254u: goto R_01071254;
        case 0x107126cu: goto R_0107126c;
        case 0x1071274u: goto R_01071274;
        case 0x10712a0u: goto R_010712a0;
        case 0x10712b8u: goto R_010712b8;
        case 0x10712c0u: goto R_010712c0;
        case 0x10712ecu: goto R_010712ec;
        case 0x1071304u: goto R_01071304;
        case 0x107130cu: goto R_0107130c;
        case 0x107131cu: goto R_0107131c;
        case 0x1071334u: goto R_01071334;
        case 0x107134cu: goto R_0107134c;
        case 0x1071364u: goto R_01071364;
        case 0x107137cu: goto R_0107137c;
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
    if (wp::cr_get(c, 2)) goto L_01071228;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071208u;
    wp::call(c, c.ctr);
R_01071208:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071220u;
    wp::call(c, c.ctr);
R_01071220:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1071228u;
    f_80019f20(c);
L_01071228:
R_01071228:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071368;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071274;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071254u;
    wp::call(c, c.ctr);
R_01071254:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107126cu;
    wp::call(c, c.ctr);
R_0107126c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1071274u;
    f_80019f20(c);
L_01071274:
R_01071274:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071350;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010712c0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10712a0u;
    wp::call(c, c.ctr);
R_010712a0:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10712b8u;
    wp::call(c, c.ctr);
R_010712b8:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10712c0u;
    f_80019f20(c);
L_010712c0:
R_010712c0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071338;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107130c;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10712ecu;
    wp::call(c, c.ctr);
R_010712ec:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071304u;
    wp::call(c, c.ctr);
R_01071304:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x107130cu;
    f_80019f20(c);
L_0107130c:
R_0107130c:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071320;
    c.lr = 0x107131cu;
    f_mg507_010711d0(c);
R_0107131c:
    goto L_0107137c;
L_01071320:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071334u;
    wp::call(c, c.ctr);
R_01071334:
    goto L_0107137c;
L_01071338:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107134cu;
    wp::call(c, c.ctr);
R_0107134c:
    goto L_0107137c;
L_01071350:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071364u;
    wp::call(c, c.ctr);
R_01071364:
    goto L_0107137c;
L_01071368:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107137cu;
    wp::call(c, c.ctr);
L_0107137c:
R_0107137c:
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

void f_mg507_010713a0(wp::Cpu& c) {
    WP_ENTER(0x10713a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10713e8u: goto R_010713e8;
        case 0x1071418u: goto R_01071418;
        case 0x1071420u: goto R_01071420;
        case 0x107143cu: goto R_0107143c;
        case 0x1071444u: goto R_01071444;
        case 0x1071464u: goto R_01071464;
        case 0x107146cu: goto R_0107146c;
        case 0x1071490u: goto R_01071490;
        case 0x10714b4u: goto R_010714b4;
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
    c.r[31] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
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
    c.lr = 0x10713e8u;
    wp::call(c, c.ctr);
R_010713e8:
    ea = c.r[28] + 0x144u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01071400;
    ea = c.r[28] + 0x148u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01071424;
L_01071400:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071418u;
    wp::call(c, c.ctr);
R_01071418:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1071420u;
    f_80043120(c);
R_01071420:
    goto L_01071444;
L_01071424:
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107143cu;
    wp::call(c, c.ctr);
R_0107143c:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1071444u;
    f_80043120(c);
L_01071444:
R_01071444:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107146c;
    ea = c.r[28] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071464u;
    wp::call(c, c.ctr);
R_01071464:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x107146cu;
    f_80043060(c);
L_0107146c:
R_0107146c:
    ea = c.r[28] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071490;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071490u;
    wp::call(c, c.ctr);
L_01071490:
R_01071490:
    ea = c.r[28] + 0x190u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010714b4;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x28cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10714b4u;
    wp::call(c, c.ctr);
L_010714b4:
R_010714b4:
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

void f_mg507_010714e0(wp::Cpu& c) {
    WP_ENTER(0x10714e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_mg507_010714f0(wp::Cpu& c) {
    WP_ENTER(0x10714f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071580u: goto R_01071580;
        case 0x10715a4u: goto R_010715a4;
        case 0x10715e0u: goto R_010715e0;
        case 0x10715f4u: goto R_010715f4;
        case 0x1071618u: goto R_01071618;
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
    if (wp::cr_get(c, 2)) goto L_01071618;
    ea = c.r[3] + 0x18cu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010715a8;
    ea = c.r[3] + 0x190u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010715a8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071558;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01071560;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01071584;
    goto L_010715ac;
L_01071558:
    c.r[31] = 0x1u;
    goto L_010715ac;
L_01071560:
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
    c.lr = 0x1071580u;
    wp::call(c, c.ctr);
R_01071580:
    goto L_010715ac;
L_01071584:
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
    c.lr = 0x10715a4u;
    wp::call(c, c.ctr);
R_010715a4:
    goto L_010715ac;
L_010715a8:
    c.r[31] = 0x1u;
L_010715ac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071618;
    ea = c.r[29] + 0x198u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071618;
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
    c.lr = 0x10715e0u;
    wp::call(c, c.ctr);
R_010715e0:
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10715f4u;
    wp::call(c, c.ctr);
R_010715f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01071618;
    ea = c.r[29] + 0x198u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071618u;
    wp::call(c, c.ctr);
L_01071618:
R_01071618:
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

void f_mg507_01071640(wp::Cpu& c) {
    WP_ENTER(0x1071640u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071654;
    ea = c.r[3] + 0x15cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_01071654:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010716d4;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010716d4;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0107168c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010716ac;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_010716c0;
    return;
L_0107168c:
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
L_010716ac:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010716c0:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x298u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010716d4:
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

void f_mg507_01071700(wp::Cpu& c) {
    WP_ENTER(0x1071700u);
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
    if (!wp::cr_get(c, 2)) goto L_01071728;
    return;
L_01071728:
    ea = c.r[3] + 0x18cu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010717a8;
    ea = c.r[3] + 0x190u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010717a8;
    ea = c.r[3] + 0x138u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071760;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01071780;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01071794;
    return;
L_01071760:
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
L_01071780:
    ea = c.r[5] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_01071794:
    ea = c.r[6] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[6] | c.r[6];
    ea = c.r[12] + 0x29cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
L_010717a8:
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

void f_mg507_010717d0(wp::Cpu& c) {
    WP_ENTER(0x10717d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071808u: goto R_01071808;
        case 0x1071818u: goto R_01071818;
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
    if (wp::cr_get(c, 2)) goto L_01071818;
    c.r[4] = ((((g_mg507_bases[5] + 0x2872cu) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x2872cu) & 0xFFFFu);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x1071808u;
    f_8003b480(c);
R_01071808:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01071818;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1071818u;
    f_801c7a8c(c);
L_01071818:
R_01071818:
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

void f_mg507_01071840(wp::Cpu& c) {
    WP_ENTER(0x1071840u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071880u: goto R_01071880;
        case 0x1071890u: goto R_01071890;
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
    if (wp::cr_get(c, 2)) goto L_01071890;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01071880;
    c.r[4] = ((((g_mg507_bases[5] + 0x2872cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x2872cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1071880u;
    f_8003b480(c);
L_01071880:
R_01071880:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01071890;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1071890u;
    f_801c7a8c(c);
L_01071890:
R_01071890:
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

void f_mg507_010718b0(wp::Cpu& c) {
    WP_ENTER(0x10718b0u);
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

void f_mg507_010718d0(wp::Cpu& c) {
    WP_ENTER(0x10718d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071914u: goto R_01071914;
        case 0x1071924u: goto R_01071924;
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
    if (wp::cr_get(c, 2)) goto L_01071924;
    if (wp::cr_get(c, 2)) goto L_01071914;
    c.r[5] = wp::add_carry(c, c.r[3], 0x4u, 0);
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01071914;
    c.r[4] = ((((g_mg507_bases[5] + 0x2872cu) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x2872cu) & 0xFFFFu);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x1071914u;
    f_8003b480(c);
L_01071914:
R_01071914:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01071924;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1071924u;
    f_801c7a8c(c);
L_01071924:
R_01071924:
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

void f_mg507_01071940(wp::Cpu& c) {
    WP_ENTER(0x1071940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071990u: goto R_01071990;
        case 0x10719b8u: goto R_010719b8;
        case 0x10719c4u: goto R_010719c4;
        case 0x10719d0u: goto R_010719d0;
        case 0x10719e0u: goto R_010719e0;
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
    if (wp::cr_get(c, 2)) goto L_010719e0;
    c.r[4] = wp::add_carry(c, c.r[3], 0x300u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01071990;
    if (wp::cr_get(c, 2)) goto L_01071990;
    if (wp::cr_get(c, 2)) goto L_01071990;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01071990;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1071990u;
    f_801c7a8c(c);
L_01071990:
R_01071990:
    c.r[3] = wp::add_carry(c, c.r[30], 0x2d4u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_010719b8;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010719b8;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10719b8u;
    wp::call(c, c.ctr);
L_010719b8:
R_010719b8:
    c.r[3] = c.r[30] + 0x2bcu;
    c.r[4] = 0x0u;
    c.lr = 0x10719c4u;
    f_80063bb0(c);
R_010719c4:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x10719d0u;
    f_mg507_01028a20(c);
R_010719d0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_010719e0;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x10719e0u;
    f_801c7a8c(c);
L_010719e0:
R_010719e0:
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

void f_mg507_01071a00(wp::Cpu& c) {
    WP_ENTER(0x1071a00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071a14u: goto R_01071a14;
        case 0x1071a34u: goto R_01071a34;
        case 0x1071accu: goto R_01071acc;
        case 0x1071b14u: goto R_01071b14;
        case 0x1071b70u: goto R_01071b70;
        case 0x1071c04u: goto R_01071c04;
        case 0x1071c4cu: goto R_01071c4c;
        case 0x1071ca8u: goto R_01071ca8;
        case 0x1071cecu: goto R_01071cec;
        case 0x1071d24u: goto R_01071d24;
        case 0x1071dc0u: goto R_01071dc0;
        case 0x1071e04u: goto R_01071e04;
        case 0x1071e64u: goto R_01071e64;
        case 0x1071ea8u: goto R_01071ea8;
        case 0x1071f04u: goto R_01071f04;
        case 0x1071f20u: goto R_01071f20;
        case 0x1071f28u: goto R_01071f28;
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
    c.lr = 0x1071a14u;
    f_801c83ac(c);
R_01071a14:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[26] = c.r[3] | c.r[3];
    c.r[24] = c.r[4] | c.r[4];
    c.r[27] = c.r[5] | c.r[5];
    ea = c.r[12] + 0xbcu;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[6] | c.r[6];
    c.ctr = c.r[12];
    c.lr = 0x1071a34u;
    wp::call(c, c.ctr);
R_01071a34:
    c.r[4] = ((((g_mg507_bases[5] + 0x27b80u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[24], 20) & 0xff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x27b80u) & 0xFFFFu);
    c.r[29] = wp::rotl(c.r[24], 24) & 0xffu;
    c.r[3] = c.r[4] + c.r[30];
    c.r[31] = c.r[24] & 0xffu;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071a7c;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071a7c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071a7c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071b70;
L_01071a7c:
    c.r[3] = ((((g_mg507_bases[5] + 0x27b80u) + 0x8000u) >> 16) << 16);
    c.r[24] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x27b80u) & 0xFFFFu);
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
    c.lr = 0x1071accu;
    wp::call(c, c.ctr);
R_01071acc:
    ea = c.r[25] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071b14;
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
    c.lr = 0x1071b14u;
    wp::call(c, c.ctr);
L_01071b14:
R_01071b14:
    c.r[3] = ((((g_mg507_bases[5] + 0x27b80u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x27b80u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071b70;
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
    c.lr = 0x1071b70u;
    wp::call(c, c.ctr);
L_01071b70:
R_01071b70:
    c.r[4] = ((((g_mg507_bases[5] + 0x27be0u) + 0x8000u) >> 16) << 16);
    c.r[30] = wp::rotl(c.r[29], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x27be0u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[30];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071bb0;
    ea = c.r[4] + c.r[30];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071bb0;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071bb0;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071d24;
L_01071bb0:
    c.r[3] = ((((g_mg507_bases[5] + 0x27be0u) + 0x8000u) >> 16) << 16);
    c.r[25] = 0x0u;
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x27be0u) & 0xFFFFu);
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
    c.lr = 0x1071c04u;
    wp::call(c, c.ctr);
R_01071c04:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071c4c;
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
    c.lr = 0x1071c4cu;
    wp::call(c, c.ctr);
L_01071c4c:
R_01071c4c:
    c.r[3] = ((((g_mg507_bases[5] + 0x27be0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x27be0u) & 0xFFFFu);
    c.r[3] = c.r[3] + c.r[30];
    ea = c.r[3] + 0xcu;
    c.r[8] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071ca8;
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
    c.lr = 0x1071ca8u;
    wp::call(c, c.ctr);
L_01071ca8:
R_01071ca8:
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
    c.lr = 0x1071cecu;
    wp::call(c, c.ctr);
R_01071cec:
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
    c.lr = 0x1071d24u;
    wp::call(c, c.ctr);
L_01071d24:
R_01071d24:
    c.r[4] = ((((g_mg507_bases[5] + 0x27c40u) + 0x8000u) >> 16) << 16);
    c.r[29] = wp::rotl(c.r[31], 4) & 0xfffffff0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x27c40u) & 0xFFFFu);
    c.r[3] = c.r[4] + c.r[29];
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071d6c;
    ea = c.r[4] + c.r[29];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071d6c;
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] + 0x8u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071d6c;
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[30] = c.r[3] + 0xcu;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071ea8;
L_01071d6c:
    c.r[4] = ((((g_mg507_bases[5] + 0x27c40u) + 0x8000u) >> 16) << 16);
    c.r[30] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x27c40u) & 0xFFFFu);
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
    c.lr = 0x1071dc0u;
    wp::call(c, c.ctr);
R_01071dc0:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071e04;
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
    c.lr = 0x1071e04u;
    wp::call(c, c.ctr);
L_01071e04:
R_01071e04:
    c.r[3] = ((((g_mg507_bases[5] + 0x27c40u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x27c40u) & 0xFFFFu);
    c.r[30] = c.r[3] + c.r[29];
    ea = c.r[30] + 0xcu;
    c.r[8] = wp::rd32(ea);
    c.r[30] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01071e64;
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
    c.lr = 0x1071e64u;
    wp::call(c, c.ctr);
L_01071e64:
R_01071e64:
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
    c.lr = 0x1071ea8u;
    wp::call(c, c.ctr);
L_01071ea8:
R_01071ea8:
    ea = c.r[31] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071f04;
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01071f04;
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
    c.lr = 0x1071f04u;
    wp::call(c, c.ctr);
L_01071f04:
R_01071f04:
    ea = c.r[26] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    ea = c.r[12] + 0xc8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1071f20u;
    wp::call(c, c.ctr);
R_01071f20:
    c.r[11] = c.r[1] + 0x1a0u;
    c.lr = 0x1071f28u;
    f_801c83f8(c);
R_01071f28:
    ea = c.r[1] + 0x1a4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x1a0u;
    return;
}

void f_mg507_01071f40(wp::Cpu& c) {
    WP_ENTER(0x1071f40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1071ffcu: goto R_01071ffc;
        case 0x1072000u: goto R_01072000;
        case 0x1072060u: goto R_01072060;
        case 0x1072064u: goto R_01072064;
        case 0x1072124u: goto R_01072124;
        case 0x1072128u: goto R_01072128;
        case 0x1072130u: goto R_01072130;
        case 0x1072158u: goto R_01072158;
        case 0x107215cu: goto R_0107215c;
        case 0x10722b4u: goto R_010722b4;
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
    if (!wp::cr_get(c, 0)) goto L_01071fcc;
    c.r[0] = c.r[0] * 0x1cu;
    ea = c.r[3] + 0x300u;
    c.r[5] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_01071fbc;
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
L_01071fbc:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    goto L_010722b4;
L_01071fcc:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    c.r[0] = c.r[0] - c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_01072000;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[5] + 0x276f4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x276f4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1071ffcu;
    f_801cee24(c);
R_01071ffc:
    c.lr = 0x1072000u;
    f_801d3940(c);
L_01072000:
R_01072000:
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
    if (!wp::cr_get(c, 1)) goto L_01072064;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[5] + 0x276f4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x276f4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1072060u;
    f_801cee24(c);
R_01072060:
    c.lr = 0x1072064u;
    f_801d3940(c);
L_01072064:
R_01072064:
    c.r[3] = 0x30c0000u;
    c.r[0] = c.r[3] + 0x30c3u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010720b4;
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
    if (!wp::cr_get(c, 0)) goto L_010720a8;
    c.r[3] = c.r[1] + 0x10u;
L_010720a8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010720f8;
L_010720b4:
    c.r[3] = 0x6180000u;
    c.r[0] = c.r[3] + 0x6186u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010720f0;
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 31) & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    if (!wp::cr_get(c, 0)) goto L_010720e4;
    c.r[3] = c.r[1] + 0x10u;
L_010720e4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[31] + c.r[0];
    goto L_010720f8;
L_010720f0:
    c.r[3] = 0x9250000u;
    c.r[31] = c.r[3] + 0xffff9249u;
L_010720f8:
    c.r[3] = 0x9250000u;
    c.r[0] = c.r[3] + 0xffff9249u;
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_01072128;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[5] + 0x276f4u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x276f4u) & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1072124u;
    f_801cee24(c);
R_01072124:
    c.lr = 0x1072128u;
    f_801d3940(c);
L_01072128:
R_01072128:
    c.r[3] = c.r[31] * 0x1cu;
    c.lr = 0x1072130u;
    f_801c79a4(c);
R_01072130:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_0107215c;
    c.r[3] = (((0x80230cd0u + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[5] + 0x287c0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x80230cd0u & 0xFFFFu);
    c.r[3] = c.r[3] + 0xa0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x287c0u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1072158u;
    f_801cee24(c);
R_01072158:
    c.lr = 0x107215cu;
    f_801d3940(c);
L_0107215c:
R_0107215c:
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
    if (wp::cr_get(c, 2)) goto L_010721bc;
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
L_010721bc:
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
    if (!wp::cr_get(c, 1)) goto L_01072268;
    c.r[0] = c.r[0] | 0x0u;
L_01072208:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffe4u, 0);
    wp::record(c, c.r[6]);
    c.r[5] = c.r[5] + 0xffffffe4u;
    if (wp::cr_get(c, 2)) goto L_0107224c;
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
L_0107224c:
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
    goto L_01072208;
    }
L_01072268:
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
    if (wp::cr_get(c, 2)) goto L_010722b4;
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010722b4;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x10722b4u;
    f_801c7a8c(c);
L_010722b4:
R_010722b4:
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

void f_mg507_010722e0(wp::Cpu& c) {
    WP_ENTER(0x10722e0u);
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

void f_mg507_01072300(wp::Cpu& c) {
    WP_ENTER(0x1072300u);
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
    if (wp::cr_get(c, 2)) goto L_010725f4;
    c.r[4] = c.r[5] + 0x1cu;
    wp::compare_unsigned(c, 1, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 4)) goto L_010725f4;
    c.r[9] = c.r[6] - c.r[4];
    c.r[8] = c.r[6] + 0xffffff20u;
    c.r[10] = c.r[9] + 0x1bu;
    c.r[0] = wp::mulhw(c.r[7], c.r[10]);
    c.r[0] = c.r[0] + c.r[10];
    c.r[0] = wp::sraw(c, c.r[0], 4);
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[7];
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_01072594;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 5)) goto L_010723a4;
    c.r[0] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[9] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_01072398;
    c.r[0] = c.r[10] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01072398;
    c.r[9] = 0x0u;
L_01072398:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010723a4;
    c.r[7] = 0x1u;
L_010723a4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072594;
    c.r[7] = c.r[8] + 0xdfu;
    c.r[0] = 0xe0u;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_01072594;
L_010723c8:
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
    goto L_010723c8;
    }
L_01072594:
    c.r[7] = c.r[6] + 0x1bu;
    c.r[0] = 0x1cu;
    c.r[7] = c.r[7] - c.r[4];
    c.r[7] = wp::divwu(c.r[7], c.r[0]);
    c.ctr = c.r[7];
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_010725f4;
L_010725b0:
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
    goto L_010725b0;
    }
L_010725f4:
    ea = c.r[3] + 0x304u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[3] + 0x304u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_mg507_01072610(wp::Cpu& c) {
    WP_ENTER(0x1072610u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e8u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_mg507_01072620(wp::Cpu& c) {
    WP_ENTER(0x1072620u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2f8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x2fcu;
    wp::wr32(ea, c.r[5]);
    return;
}

void f_mg507_01072630(wp::Cpu& c) {
    WP_ENTER(0x1072630u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072730u: goto R_01072730;
        case 0x1072760u: goto R_01072760;
        case 0x107277cu: goto R_0107277c;
        case 0x1072798u: goto R_01072798;
        case 0x10727d8u: goto R_010727d8;
        case 0x10727e0u: goto R_010727e0;
        case 0x10727ecu: goto R_010727ec;
        case 0x10727f0u: goto R_010727f0;
        case 0x107286cu: goto R_0107286c;
        case 0x107287cu: goto R_0107287c;
        case 0x1072898u: goto R_01072898;
        case 0x10728acu: goto R_010728ac;
        case 0x10728f4u: goto R_010728f4;
        case 0x1072928u: goto R_01072928;
        case 0x107293cu: goto R_0107293c;
        case 0x107294cu: goto R_0107294c;
        case 0x1072960u: goto R_01072960;
        case 0x1072980u: goto R_01072980;
        case 0x10729b0u: goto R_010729b0;
        case 0x10729e0u: goto R_010729e0;
        case 0x1072a00u: goto R_01072a00;
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
    c.r[31] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010726c4;
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
    if (!wp::cr_get(c, 1)) goto L_010726b8;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_010726b8:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2f4u;
    wp::wr8(ea, c.r[0]);
    goto L_01072714;
L_010726c4:
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
    if (!wp::cr_get(c, 0)) goto L_01072714;
    ea = c.r[3] + 0x2e0u;
    wp::wrf32(ea, static_cast<float>(c.f[0]));
L_01072714:
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
    c.lr = 0x1072730u;
    f_mg507_010252f0(c);
R_01072730:
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
    if (!wp::cr_get(c, 1)) goto L_010729b4;
    ea = c.r[30] + 0x2d8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_010727f8;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x1072760u;
    f_80053d40(c);
R_01072760:
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
    c.lr = 0x107277cu;
    f_8006b460(c);
R_0107277c:
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
    c.lr = 0x1072798u;
    f_8006b460(c);
R_01072798:
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
    c.lr = 0x10727d8u;
    wp::call(c, c.ctr);
R_010727d8:
    ea = c.r[31] + 0x18cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x10727e0u;
    f_80071fe0(c);
R_010727e0:
    ea = c.r[31] + 0x16cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[29] = c.r[3] | c.r[3];
    c.lr = 0x10727ecu;
    f_80071fe0(c);
R_010727ec:
    c.lr = 0x10727f0u;
    f_8006b590(c);
R_010727f0:
    c.r[0] = c.r[3] + c.r[29];
    ea = c.r[30] + 0x2d8u;
    wp::wr32(ea, c.r[0]);
L_010727f8:
    ea = c.r[30] + 0x304u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072980;
    ea = c.r[30] + 0x2f0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 1)) goto L_01072980;
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01072824;
    ea = c.r[30] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
L_01072824:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_01072858;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_01072864;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_0107289c;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_01072940;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 2)) goto L_01072964;
    goto L_01072980;
L_01072858:
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
    goto L_01072980;
L_01072864:
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x107286cu;
    f_80055bb0(c);
R_0107286c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072980;
    c.r[3] = c.r[30] + 0x54u;
    c.lr = 0x107287cu;
    f_80055d80(c);
R_0107287c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_01072980;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072898u;
    wp::call(c, c.ctr);
R_01072898:
    goto L_01072980;
L_0107289c:
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_010728ac;
    c.lr = 0x10728acu;
    f_80019fa0(c);
L_010728ac:
R_010728ac:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01072900;
    ea = c.r[30] + 0x2ecu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01072900;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_010728d8;
    ea = c.r[31] + 0x190u;
    c.f[0] = wp::rdf64(ea);
    goto L_010728dc;
L_010728d8:
    ea = c.r[31] + 0x198u;
    c.f[0] = wp::rdf64(ea);
L_010728dc:
    c.f[2] = wp::round_single(c.f[0]);
    c.ps1[2] = c.f[2];
    ea = c.r[3] + 0x14u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[6] = 0x0u;
    c.lr = 0x10728f4u;
    f_80055290(c);
R_010728f4:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x2ecu;
    wp::wr32(ea, c.r[0]);
L_01072900:
    ea = c.r[30] + 0x300u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01072928;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] & 0xffffu;
    ea = c.r[12] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072928u;
    wp::call(c, c.ctr);
L_01072928:
R_01072928:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107293cu;
    wp::call(c, c.ctr);
R_0107293c:
    goto L_01072980;
L_01072940:
    ea = c.r[30] + 0x2f8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x2fcu;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x107294cu;
    f_80019f20(c);
R_0107294c:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0xc0u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072960u;
    wp::call(c, c.ctr);
R_01072960:
    goto L_01072980;
L_01072964:
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
    c.lr = 0x1072980u;
    wp::call(c, c.ctr);
L_01072980:
R_01072980:
    ea = c.r[30] + 0x2f0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01072994;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2f0u;
    wp::wr32(ea, c.r[0]);
L_01072994:
    ea = c.r[30] + 0x2ecu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = wp::sub_carry(c, c.r[5], 0x9u);
    c.r[0] = c.r[5] + 0xfffffff7u;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.lr = 0x10729b0u;
    f_mg507_01024d90(c);
R_010729b0:
    goto L_01072a04;
L_010729b4:
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01072a04;
    ea = c.r[30] + 0x2f4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072a04;
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[30] + 0x54u;
    c.r[4] = 0x1u;
    c.r[5] = 0x1u;
    c.r[6] = 0x0u;
    c.lr = 0x10729e0u;
    f_80055290(c);
R_010729e0:
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
    c.lr = 0x1072a00u;
    wp::call(c, c.ctr);
R_01072a00:
    ea = c.r[30] + 0x2f4u;
    wp::wr8(ea, c.r[31]);
L_01072a04:
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

void f_mg507_01072a30(wp::Cpu& c) {
    WP_ENTER(0x1072a30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072a7cu: goto R_01072a7c;
        case 0x1072a88u: goto R_01072a88;
        case 0x1072ac0u: goto R_01072ac0;
        case 0x1072afcu: goto R_01072afc;
        case 0x1072b08u: goto R_01072b08;
        case 0x1072b18u: goto R_01072b18;
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
    if (wp::cr_get(c, 2)) goto L_01072b18;
    c.r[3] = wp::add_carry(c, c.r[3], 0x2ecu, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_01072a7c;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072a7c;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072a7cu;
    wp::call(c, c.ctr);
L_01072a7c:
R_01072a7c:
    c.r[3] = c.r[30] + 0x120u;
    c.r[4] = 0x0u;
    c.lr = 0x1072a88u;
    f_80069c40(c);
R_01072a88:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072b08;
    c.r[3] = ((((g_mg507_bases[5] + 0x28520u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg507_bases[5] + 0x28520u) & 0xFFFFu);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    goto L_01072ac0;
L_01072aa0:
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
    c.lr = 0x1072ac0u;
    wp::call(c, c.ctr);
L_01072ac0:
R_01072ac0:
    ea = c.r[30] + 0x118u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072aa0;
    }
    c.r[4] = wp::add_carry(c, c.r[30], 0x114u, 0);
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01072afc;
    if (wp::cr_get(c, 2)) goto L_01072afc;
    if (wp::cr_get(c, 2)) goto L_01072afc;
    if (wp::cr_get(c, 2)) goto L_01072afc;
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072afc;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x1072afcu;
    f_801c7a8c(c);
L_01072afc:
R_01072afc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1072b08u;
    f_8003fb90(c);
L_01072b08:
R_01072b08:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01072b18;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1072b18u;
    f_801c7a8c(c);
L_01072b18:
R_01072b18:
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

void f_mg507_01072b40(wp::Cpu& c) {
    WP_ENTER(0x1072b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072b6cu: goto R_01072b6c;
        case 0x1072b78u: goto R_01072b78;
        case 0x1072b84u: goto R_01072b84;
        case 0x1072b90u: goto R_01072b90;
        case 0x1072ba8u: goto R_01072ba8;
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
    if (wp::cr_get(c, 2)) goto L_01072b7c;
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1072b6cu;
    f_80069e30(c);
R_01072b6c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1072b78u;
    f_800403b0(c);
R_01072b78:
    goto L_01072b90;
L_01072b7c:
    c.r[3] = c.r[3] + 0x120u;
    c.lr = 0x1072b84u;
    f_80069e40(c);
R_01072b84:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x4u;
    c.lr = 0x1072b90u;
    f_800403a0(c);
L_01072b90:
R_01072b90:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x308u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072ba8u;
    wp::call(c, c.ctr);
R_01072ba8:
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

void f_mg507_01072bc0(wp::Cpu& c) {
    WP_ENTER(0x1072bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072be0u: goto R_01072be0;
        case 0x1072c00u: goto R_01072c00;
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
    c.lr = 0x1072be0u;
    f_800402c0(c);
R_01072be0:
    ea = c.r[30] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072c00;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072c00u;
    wp::call(c, c.ctr);
L_01072c00:
R_01072c00:
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

void f_mg507_01072c20(wp::Cpu& c) {
    WP_ENTER(0x1072c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072c70u: goto R_01072c70;
        case 0x1072c8cu: goto R_01072c8c;
        case 0x1072cccu: goto R_01072ccc;
        case 0x1072ce4u: goto R_01072ce4;
        case 0x1072cecu: goto R_01072cec;
        case 0x1072d04u: goto R_01072d04;
        case 0x1072d0cu: goto R_01072d0c;
        case 0x1072d38u: goto R_01072d38;
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
    c.r[31] = ((((g_mg507_bases[4] + 0x2388u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2388u) & 0xFFFFu);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01072d38;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[3] + 0x2e4u;
    wp::wr8(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_01072c74;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[31] + 0x9cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1072c70u;
    f_80071fe0(c);
R_01072c70:
    ea = c.r[29] + 0x2e8u;
    wp::wr32(ea, c.r[3]);
L_01072c74:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    ea = c.r[12] + 0x9cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072c8cu;
    wp::call(c, c.ctr);
R_01072c8c:
    ea = c.r[29] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072ca4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_01072cac;
L_01072ca4:
    c.r[0] = 0x1u;
    ea = c.r[29] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
L_01072cac:
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
    c.lr = 0x1072cccu;
    wp::call(c, c.ctr);
R_01072ccc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072ce4u;
    wp::call(c, c.ctr);
R_01072ce4:
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1072cecu;
    f_80043060(c);
R_01072cec:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x58u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072d04u;
    wp::call(c, c.ctr);
R_01072d04:
    ea = c.r[31] + 0x5cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x1072d0cu;
    f_80043120(c);
R_01072d0c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072d38;
    ea = c.r[29] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072d38;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = 0xffffffffu;
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072d38u;
    wp::call(c, c.ctr);
L_01072d38:
R_01072d38:
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

void f_mg507_01072d60(wp::Cpu& c) {
    WP_ENTER(0x1072d60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[3] = c.r[0] ^ 0x1u;
    return;
}

void f_mg507_01072d70(wp::Cpu& c) {
    WP_ENTER(0x1072d70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e4u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg507_01072d80(wp::Cpu& c) {
    WP_ENTER(0x1072d80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x2e5u;
    c.r[3] = wp::rd8(ea);
    return;
}

void f_mg507_01072d90(wp::Cpu& c) {
    WP_ENTER(0x1072d90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072db8u: goto R_01072db8;
        case 0x1072dc0u: goto R_01072dc0;
        case 0x1072dd4u: goto R_01072dd4;
        case 0x1072de4u: goto R_01072de4;
        case 0x1072df8u: goto R_01072df8;
        case 0x1072e18u: goto R_01072e18;
        case 0x1072e20u: goto R_01072e20;
        case 0x1072e34u: goto R_01072e34;
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
    c.lr = 0x1072db8u;
    wp::call(c, c.ctr);
R_01072db8:
    goto L_01072dc0;
L_01072dbc:
    c.lr = 0x1072dc0u;
    f_8006a940(c);
L_01072dc0:
R_01072dc0:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072dd4u;
    wp::call(c, c.ctr);
R_01072dd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072dbc;
    }
    goto L_01072de4;
L_01072de0:
    c.lr = 0x1072de4u;
    f_8006a940(c);
L_01072de4:
R_01072de4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x218u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072df8u;
    wp::call(c, c.ctr);
R_01072df8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072de0;
    }
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    ea = c.r[12] + 0x20cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072e18u;
    wp::call(c, c.ctr);
R_01072e18:
    goto L_01072e20;
L_01072e1c:
    c.lr = 0x1072e20u;
    f_8006a940(c);
L_01072e20:
R_01072e20:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x210u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072e34u;
    wp::call(c, c.ctr);
R_01072e34:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_01072e1c;
    }
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_01072e50(wp::Cpu& c) {
    WP_ENTER(0x1072e50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1072e64u: goto R_01072e64;
        case 0x1072e84u: goto R_01072e84;
        case 0x1072ed4u: goto R_01072ed4;
        case 0x1072ef8u: goto R_01072ef8;
        case 0x1072f04u: goto R_01072f04;
        case 0x1072f18u: goto R_01072f18;
        case 0x1072f38u: goto R_01072f38;
        case 0x1072f48u: goto R_01072f48;
        case 0x1072f54u: goto R_01072f54;
        case 0x1072f64u: goto R_01072f64;
        case 0x1072f68u: goto R_01072f68;
        case 0x1072f70u: goto R_01072f70;
        case 0x1072f9cu: goto R_01072f9c;
        case 0x1072fa8u: goto R_01072fa8;
        case 0x1072fb4u: goto R_01072fb4;
        case 0x1072fc4u: goto R_01072fc4;
        case 0x1072fc8u: goto R_01072fc8;
        case 0x1072fd0u: goto R_01072fd0;
        case 0x1073000u: goto R_01073000;
        case 0x1073028u: goto R_01073028;
        case 0x1073034u: goto R_01073034;
        case 0x1073044u: goto R_01073044;
        case 0x1073048u: goto R_01073048;
        case 0x1073050u: goto R_01073050;
        case 0x107308cu: goto R_0107308c;
        case 0x10730a8u: goto R_010730a8;
        case 0x10730b8u: goto R_010730b8;
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
    c.lr = 0x1072e64u;
    f_801c83b0(c);
R_01072e64:
    ea = c.r[3] + 0x2e0u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 0)) goto L_01072e98;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x5cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072e84u;
    wp::call(c, c.ctr);
R_01072e84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010730b0;
    c.r[0] = 0xffffffffu;
    ea = c.r[31] + 0x2e0u;
    wp::wr32(ea, c.r[0]);
    goto L_010730b0;
L_01072e98:
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010730b0;
    ea = c.r[3] + 0x2e8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x2e8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_010730b0;
    ea = c.r[3] + 0x2e5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_010730b0;
    ea = c.r[3] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x274u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072ed4u;
    wp::call(c, c.ctr);
R_01072ed4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072ef8;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x26cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1072ef8u;
    wp::call(c, c.ctr);
L_01072ef8:
R_01072ef8:
    c.r[27] = 0x0u;
    c.r[26] = 0x1u;
    c.lr = 0x1072f04u;
    f_8000e2a0(c);
R_01072f04:
    c.r[28] = c.r[3] | c.r[3];
    c.r[25] = 0x0u;
    c.r[29] = 0x1u;
L_01072f10:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072f18u;
    f_8000fc20(c);
R_01072f18:
    ea = c.r[31] + 0x2e6u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = wp::slw(c.r[29], c.r[3]);
    c.r[0] = c.r[0] & c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01072f7c;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072f40;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072f38u;
    f_8000fc40(c);
R_01072f38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072f7c;
L_01072f40:
    c.r[26] = 0x0u;
    c.lr = 0x1072f48u;
    f_8000dd70(c);
R_01072f48:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072f54u;
    f_8000fc20(c);
R_01072f54:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01072f7c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072f64u;
    f_8000fc20(c);
R_01072f64:
    c.lr = 0x1072f68u;
    f_800699d0(c);
R_01072f68:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1072f70u;
    f_80066cd0(c);
R_01072f70:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01072f7c;
    c.r[27] = 0x1u;
L_01072f7c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01072f10;
    }
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01072fe8;
    c.r[25] = 0x0u;
L_01072f94:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072f9cu;
    f_8000fc40(c);
R_01072f9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01072fdc;
    c.lr = 0x1072fa8u;
    f_8000dd70(c);
R_01072fa8:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072fb4u;
    f_8000fc20(c);
R_01072fb4:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_01072fdc;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1072fc4u;
    f_8000fc20(c);
R_01072fc4:
    c.lr = 0x1072fc8u;
    f_800699d0(c);
R_01072fc8:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1072fd0u;
    f_80066cd0(c);
R_01072fd0:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01072fdc;
    c.r[27] = 0x1u;
L_01072fdc:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01072f94;
    }
L_01072fe8:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073068;
    c.r[25] = 0x1u;
    c.r[26] = 0x0u;
L_01072ff8:
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x1073000u;
    f_8000fc40(c);
R_01073000:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0107300c;
    c.r[25] = 0x0u;
L_0107300c:
    c.r[26] = c.r[26] + 0x1u;
    wp::compare_signed(c, 0, c.r[26], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01072ff8;
    }
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073068;
    c.r[25] = 0x0u;
L_01073024:
    c.lr = 0x1073028u;
    f_8000dd70(c);
R_01073028:
    c.r[30] = wp::sign_extend8(c.r[3]);
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1073034u;
    f_8000fc20(c);
R_01073034:
    wp::compare_signed(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_0107305c;
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x1073044u;
    f_8000fc20(c);
R_01073044:
    c.lr = 0x1073048u;
    f_800699d0(c);
R_01073048:
    c.r[4] = 0xffffffffu;
    c.lr = 0x1073050u;
    f_80066cd0(c);
R_01073050:
    c.r[0] = c.r[3] & 0x800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_0107305c;
    c.r[27] = 0x1u;
L_0107305c:
    c.r[25] = c.r[25] + 0x1u;
    wp::compare_signed(c, 0, c.r[25], 0x4u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_01073024;
    }
L_01073068:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010730b0;
    ea = c.r[31] + 0x2ecu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    c.r[5] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x30cu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107308cu;
    wp::call(c, c.ctr);
R_0107308c:
    c.r[3] = ((((g_mg507_bases[4] + 0x23e4u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[4] + 0x23bcu) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x23e4u) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = 0x324u;
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x23bcu) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[4] = 0x0u;
    c.lr = 0x10730a8u;
    f_80018e30(c);
R_010730a8:
    c.r[0] = 0x1u;
    ea = c.r[31] + 0x2e5u;
    wp::wr8(ea, c.r[0]);
L_010730b0:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x10730b8u;
    f_801c83fc(c);
R_010730b8:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg507_010730d0(wp::Cpu& c) {
    WP_ENTER(0x10730d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10730f8u: goto R_010730f8;
        case 0x10730fcu: goto R_010730fc;
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
L_010730e4:
    ea = c.r[31] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x240u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10730f8u;
    wp::call(c, c.ctr);
R_010730f8:
    c.lr = 0x10730fcu;
    f_8006a940(c);
R_010730fc:
    WP_POLL(c);
    goto L_010730e4;
}

void f_mg507_01073100(wp::Cpu& c) {
    WP_ENTER(0x1073100u);
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

void f_mg507_01073120(wp::Cpu& c) {
    WP_ENTER(0x1073120u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073144u: goto R_01073144;
        case 0x1073168u: goto R_01073168;
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
    c.lr = 0x1073144u;
    f_80010060(c);
R_01073144:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x28834u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28834u) & 0xFFFFu);
    c.ctr = c.r[12];
    c.lr = 0x1073168u;
    wp::call(c, c.ctr);
R_01073168:
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

void f_mg507_01073180(wp::Cpu& c) {
    WP_ENTER(0x1073180u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073194u: goto R_01073194;
        case 0x10731a8u: goto R_010731a8;
        case 0x10731bcu: goto R_010731bc;
        case 0x10731e4u: goto R_010731e4;
        case 0x10731f4u: goto R_010731f4;
        case 0x1073218u: goto R_01073218;
        case 0x1073278u: goto R_01073278;
        case 0x10732f8u: goto R_010732f8;
        case 0x1073360u: goto R_01073360;
        case 0x1073398u: goto R_01073398;
        case 0x10733acu: goto R_010733ac;
        case 0x10733bcu: goto R_010733bc;
        case 0x10733e0u: goto R_010733e0;
        case 0x10733e8u: goto R_010733e8;
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
    c.lr = 0x1073194u;
    f_801c83b4(c);
R_01073194:
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10731a8u;
    f_8006c450(c);
R_010731a8:
    c.r[0] = c.r[3] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_010733b0;
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x10731bcu;
    f_8006c460(c);
R_010731bc:
    c.r[27] = ((((g_mg507_bases[5] + 0x27668u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[27] = c.r[27] + wp::sign_extend16((g_mg507_bases[5] + 0x27668u) & 0xFFFFu);
    c.r[31] = c.r[3] | c.r[3];
    c.r[28] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10731e4u;
    f_801c7860(c);
R_010731e4:
    c.r[26] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x10731f4u;
    f_mg507_0101a6f0(c);
R_010731f4:
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
    c.lr = 0x1073218u;
    f_mg507_0101a8b0(c);
R_01073218:
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
    if (!wp::cr_get(c, 2)) goto L_01073254;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01073258;
L_01073254:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01073258:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x10u;
    c.r[7] = c.r[1] + 0x11u;
    c.r[8] = c.r[1] + 0x14u;
    c.r[5] = 0x0u;
    c.lr = 0x1073278u;
    f_mg507_0101a8b0(c);
R_01073278:
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
    if (!wp::cr_get(c, 2)) goto L_010732d4;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_010732d8;
L_010732d4:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_010732d8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x1cu;
    c.r[7] = c.r[1] + 0x1du;
    c.r[8] = c.r[1] + 0x20u;
    c.r[5] = 0x0u;
    c.lr = 0x10732f8u;
    f_mg507_0101a8b0(c);
R_010732f8:
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
    if (!wp::cr_get(c, 2)) goto L_0107333c;
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[0] & 0x7fu;
    goto L_01073340;
L_0107333c:
    ea = c.r[1] + 0x38u;
    c.r[4] = wp::rd32(ea);
L_01073340:
    ea = c.r[1] + 0x30u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[1] + 0x34u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[1] + 0x28u;
    c.r[7] = c.r[1] + 0x29u;
    c.r[8] = c.r[1] + 0x2cu;
    c.r[5] = 0x0u;
    c.lr = 0x1073360u;
    f_mg507_0101a8b0(c);
R_01073360:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x28840u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28840u) & 0xFFFFu);
    if (!wp::cr_get(c, 2)) goto L_01073380;
    c.r[5] = c.r[1] + 0x35u;
    goto L_01073384;
L_01073380:
    ea = c.r[1] + 0x3cu;
    c.r[5] = wp::rd32(ea);
L_01073384:
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x164u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073398u;
    wp::call(c, c.ctr);
R_01073398:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_010733e0;
    ea = c.r[1] + 0x3cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x10733acu;
    f_801c7a8c(c);
R_010733ac:
    goto L_010733e0;
L_010733b0:
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x40u;
    c.lr = 0x10733bcu;
    f_8006c4e0(c);
R_010733bc:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x28840u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28840u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x40u;
    c.ctr = c.r[12];
    c.lr = 0x10733e0u;
    wp::call(c, c.ctr);
L_010733e0:
R_010733e0:
    c.r[11] = c.r[1] + 0xa0u;
    c.lr = 0x10733e8u;
    f_801c8400(c);
R_010733e8:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg507_01073400(wp::Cpu& c) {
    WP_ENTER(0x1073400u);
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

void f_mg507_01073420(wp::Cpu& c) {
    WP_ENTER(0x1073420u);
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

void f_mg507_01073440(wp::Cpu& c) {
    WP_ENTER(0x1073440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107346cu: goto R_0107346c;
        case 0x1073484u: goto R_01073484;
        case 0x1073494u: goto R_01073494;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = ((((g_mg507_bases[5] + 0x2881cu) + 0x8000u) >> 16) << 16);
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
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg507_bases[5] + 0x2881cu) & 0xFFFFu);
    c.lr = 0x107346cu;
    f_mg507_0106b660(c);
R_0107346c:
    c.r[5] = ((((g_mg507_bases[5] + 0x27698u) + 0x8000u) >> 16) << 16);
    c.r[31] = c.r[3] | c.r[3];
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x27698u) & 0xFFFFu);
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x1073484u;
    f_801d34c4(c);
R_01073484:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.lr = 0x1073494u;
    f_mg507_0106e9b0(c);
R_01073494:
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

void f_mg507_010734b0(wp::Cpu& c) {
    WP_ENTER(0x10734b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10734e8u: goto R_010734e8;
        case 0x107350cu: goto R_0107350c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[4] | c.r[4];
    c.r[7] = ((((g_mg507_bases[5] + 0x27660u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x3fu;
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = c.r[7] + wp::sign_extend16((g_mg507_bases[5] + 0x27660u) & 0xFFFFu);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x10734e8u;
    f_801d3590(c);
R_010734e8:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x28828u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28828u) & 0xFFFFu);
    c.r[5] = c.r[1] + 0x8u;
    c.ctr = c.r[12];
    c.lr = 0x107350cu;
    wp::call(c, c.ctr);
R_0107350c:
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

void f_mg507_01073530(wp::Cpu& c) {
    WP_ENTER(0x1073530u);
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

void f_mg507_01073550(wp::Cpu& c) {
    WP_ENTER(0x1073550u);
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

void f_mg507_01073570(wp::Cpu& c) {
    WP_ENTER(0x1073570u);
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

void f_mg507_01073590(wp::Cpu& c) {
    WP_ENTER(0x1073590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10735b0u: goto R_010735b0;
        case 0x10735b8u: goto R_010735b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = ((((g_mg507_bases[5] + 0x28804u) + 0x8000u) >> 16) << 16);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + wp::sign_extend16((g_mg507_bases[5] + 0x28804u) & 0xFFFFu);
    c.lr = 0x10735b0u;
    f_mg507_0106b660(c);
R_010735b0:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10735b8u;
    f_mg507_0106dab0(c);
R_010735b8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_010735d0(wp::Cpu& c) {
    WP_ENTER(0x10735d0u);
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

void f_mg507_010735f0(wp::Cpu& c) {
    WP_ENTER(0x10735f0u);
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

void f_mg507_01073610(wp::Cpu& c) {
    WP_ENTER(0x1073610u);
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

void f_mg507_01073630(wp::Cpu& c) {
    WP_ENTER(0x1073630u);
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

void f_mg507_01073650(wp::Cpu& c) {
    WP_ENTER(0x1073650u);
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

void f_mg507_01073670(wp::Cpu& c) {
    WP_ENTER(0x1073670u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = ((((g_mg507_bases[4] + 0x2528u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + 0x2dcu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[4] + 0x2528u) & 0xFFFFu);
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0x0u;
    ea = c.r[3] + 0x2e0u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_010736a0;
    ea = c.r[3] + 0x2e4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010736a0;
    c.r[4] = 0x1u;
L_010736a0:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_mg507_010736b0(wp::Cpu& c) {
    WP_ENTER(0x10736b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10736e8u: goto R_010736e8;
        case 0x1073700u: goto R_01073700;
        case 0x1073708u: goto R_01073708;
        case 0x1073734u: goto R_01073734;
        case 0x107374cu: goto R_0107374c;
        case 0x1073754u: goto R_01073754;
        case 0x1073780u: goto R_01073780;
        case 0x1073798u: goto R_01073798;
        case 0x10737a0u: goto R_010737a0;
        case 0x10737ccu: goto R_010737cc;
        case 0x10737e4u: goto R_010737e4;
        case 0x10737ecu: goto R_010737ec;
        case 0x10737fcu: goto R_010737fc;
        case 0x1073814u: goto R_01073814;
        case 0x107382cu: goto R_0107382c;
        case 0x1073844u: goto R_01073844;
        case 0x107385cu: goto R_0107385c;
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
    if (wp::cr_get(c, 2)) goto L_01073708;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10736e8u;
    wp::call(c, c.ctr);
R_010736e8:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073700u;
    wp::call(c, c.ctr);
R_01073700:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1073708u;
    f_80019f20(c);
L_01073708:
R_01073708:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073848;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073754;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073734u;
    wp::call(c, c.ctr);
R_01073734:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107374cu;
    wp::call(c, c.ctr);
R_0107374c:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x1073754u;
    f_80019f20(c);
L_01073754:
R_01073754:
    ea = c.r[30] + 0x18cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073830;
    ea = c.r[29] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010737a0;
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073780u;
    wp::call(c, c.ctr);
R_01073780:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073798u;
    wp::call(c, c.ctr);
R_01073798:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10737a0u;
    f_80019f20(c);
L_010737a0:
R_010737a0:
    ea = c.r[29] + 0x18cu;
    c.r[30] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073818;
    ea = c.r[30] + 0x194u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_010737ec;
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10737ccu;
    wp::call(c, c.ctr);
R_010737cc:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x234u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x10737e4u;
    wp::call(c, c.ctr);
R_010737e4:
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x10737ecu;
    f_80019f20(c);
L_010737ec:
R_010737ec:
    ea = c.r[30] + 0x18cu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01073800;
    c.lr = 0x10737fcu;
    f_mg507_010711d0(c);
R_010737fc:
    goto L_0107385c;
L_01073800:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073814u;
    wp::call(c, c.ctr);
R_01073814:
    goto L_0107385c;
L_01073818:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107382cu;
    wp::call(c, c.ctr);
R_0107382c:
    goto L_0107385c;
L_01073830:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073844u;
    wp::call(c, c.ctr);
R_01073844:
    goto L_0107385c;
L_01073848:
    ea = c.r[29] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[12] + 0x230u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x107385cu;
    wp::call(c, c.ctr);
L_0107385c:
R_0107385c:
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

void f_mg507_01073880(wp::Cpu& c) {
    WP_ENTER(0x1073880u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = ((((g_mg507_bases[5] + 0x288b0u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x288b0u) & 0xFFFFu);
    ea = c.r[12] + 0x154u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_010738a0(wp::Cpu& c) {
    WP_ENTER(0x10738a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10738b0u: goto R_010738b0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x10738b0u;
    f_mg507_0106b660(c);
R_010738b0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xa4u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_mg507_010738d0(wp::Cpu& c) {
    WP_ENTER(0x10738d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg507_bases[5] + 0x288a8u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x174u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x288a8u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_01073900(wp::Cpu& c) {
    WP_ENTER(0x1073900u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg507_bases[5] + 0x28890u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x168u;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28890u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_01073930(wp::Cpu& c) {
    WP_ENTER(0x1073930u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg507_bases[5] + 0x28898u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x16cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28898u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_01073960(wp::Cpu& c) {
    WP_ENTER(0x1073960u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg507_bases[5] + 0x28878u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x258u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg507_bases[5] + 0x28878u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_01073980(wp::Cpu& c) {
    WP_ENTER(0x1073980u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[0] = c.r[4] | c.r[4];
    c.r[4] = ((((g_mg507_bases[5] + 0x28880u) + 0x8000u) >> 16) << 16);
    c.r[6] = c.r[5] | c.r[5];
    ea = c.r[12] + 0x25cu;
    c.r[12] = wp::rd32(ea);
    c.r[5] = c.r[0] | c.r[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28880u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_010739b0(wp::Cpu& c) {
    WP_ENTER(0x10739b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[6] = ((((g_mg507_bases[5] + 0x28870u) + 0x8000u) >> 16) << 16);
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[12] + 0x138u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[6] + wp::sign_extend16((g_mg507_bases[5] + 0x28870u) & 0xFFFFu);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_mg507_010739d0(wp::Cpu& c) {
    WP_ENTER(0x10739d0u);
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

void f_mg507_010739f0(wp::Cpu& c) {
    WP_ENTER(0x10739f0u);
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

void f_mg507_01073a00(wp::Cpu& c) {
    WP_ENTER(0x1073a00u);
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

void f_mg507_01073a10(wp::Cpu& c) {
    WP_ENTER(0x1073a10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073a44u: goto R_01073a44;
        case 0x1073a5cu: goto R_01073a5c;
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
    c.lr = 0x1073a44u;
    wp::call(c, c.ctr);
R_01073a44:
    ea = c.r[30] + 0x0u;
    c.r[12] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[12] + 0x228u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x1073a5cu;
    wp::call(c, c.ctr);
R_01073a5c:
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

void f_mg507_01073a80(wp::Cpu& c) {
    WP_ENTER(0x1073a80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15eu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg507_01073a90(wp::Cpu& c) {
    WP_ENTER(0x1073a90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x15cu;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_mg507_01073aa0(wp::Cpu& c) {
    WP_ENTER(0x1073aa0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x160u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x164u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg507_01073ab0(wp::Cpu& c) {
    WP_ENTER(0x1073ab0u);
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

void f_mg507_01073ad0(wp::Cpu& c) {
    WP_ENTER(0x1073ad0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073b14u: goto R_01073b14;
        case 0x1073b24u: goto R_01073b24;
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
    if (wp::cr_get(c, 2)) goto L_01073b24;
    c.r[0] = wp::add_carry(c, c.r[3], 0x125u, 0);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_01073b08;
    c.r[3] = ((((g_mg507_bases[6] + 0x14c4u) + 0x8000u) >> 16) << 16);
    c.r[0] = 0x0u;
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[6] + 0x14c4u) & 0xFFFFu);
    wp::wr32(ea, c.r[0]);
L_01073b08:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x1073b14u;
    f_8001bfe0(c);
R_01073b14:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01073b24;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1073b24u;
    f_801c7a8c(c);
L_01073b24:
R_01073b24:
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

void f_mg507_01073b40(wp::Cpu& c) {
    WP_ENTER(0x1073b40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg507_01070c00(c);
    return;
}

void f_mg507_01073b50(wp::Cpu& c) {
    WP_ENTER(0x1073b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg507_0106ee40(c);
    return;
}

void f_mg507_01073b60(wp::Cpu& c) {
    WP_ENTER(0x1073b60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_80022df0(c);
    return;
}

void f_mg507_01073b70(wp::Cpu& c) {
    WP_ENTER(0x1073b70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff4u;
    f_mg507_01073ad0(c);
    return;
}

void f_mg507_01073b80(wp::Cpu& c) {
    WP_ENTER(0x1073b80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffff8u;
    f_mg507_01071940(c);
    return;
}

void f_mg507_01073b90(wp::Cpu& c) {
    WP_ENTER(0x1073b90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffacu;
    f_mg507_01071940(c);
    return;
}

void f_mg507_01073ba0(wp::Cpu& c) {
    WP_ENTER(0x1073ba0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffe68u;
    f_mg507_01071940(c);
    return;
}

void f_mg507_01073bb0(wp::Cpu& c) {
    WP_ENTER(0x1073bb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg507_01072630(c);
    return;
}

void f_mg507_01073bc0(wp::Cpu& c) {
    WP_ENTER(0x1073bc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffd44u;
    f_mg507_01071940(c);
    return;
}

void f_mg507_01073bd0(wp::Cpu& c) {
    WP_ENTER(0x1073bd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg507_010730d0(c);
    return;
}

void f_mg507_01073be0(wp::Cpu& c) {
    WP_ENTER(0x1073be0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffee0u;
    f_mg507_01072a30(c);
    return;
}

void f_mg507_01073bf0(wp::Cpu& c) {
    WP_ENTER(0x1073bf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073c10u: goto R_01073c10;
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
    c.lr = 0x1073c10u;
    f_8011bd40(c);
R_01073c10:
    c.r[3] = ((((g_mg507_bases[4] + 0x2530u) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg507_bases[5] + 0x28948u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x2530u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg507_bases[5] + 0x28948u) & 0xFFFFu);
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

void f_mg507_01073c50(wp::Cpu& c) {
    WP_ENTER(0x1073c50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073c7cu: goto R_01073c7c;
        case 0x1073c8cu: goto R_01073c8c;
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
    if (wp::cr_get(c, 2)) goto L_01073c8c;
    c.r[4] = 0x0u;
    c.lr = 0x1073c7cu;
    f_8011bd50(c);
R_01073c7c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_01073c8c;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x1073c8cu;
    f_801c7a8c(c);
L_01073c8c:
R_01073c8c:
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

void f_mg507_01073cb0(wp::Cpu& c) {
    WP_ENTER(0x1073cb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x1073ce4u: goto R_01073ce4;
        case 0x1073dbcu: goto R_01073dbc;
        case 0x1073f3cu: goto R_01073f3c;
        case 0x1073f50u: goto R_01073f50;
        case 0x1073fb0u: goto R_01073fb0;
        case 0x1073fbcu: goto R_01073fbc;
        case 0x1073fe4u: goto R_01073fe4;
        case 0x1073ffcu: goto R_01073ffc;
        case 0x107401cu: goto R_0107401c;
        case 0x1074028u: goto R_01074028;
        case 0x1074050u: goto R_01074050;
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
    c.lr = 0x1073ce4u;
    f_801c83ac(c);
R_01073ce4:
    wp::compare_signed(c, 0, c.r[4], 0xbu);
    c.r[31] = ((((g_mg507_bases[4] + 0x2530u) + 0x8000u) >> 16) << 16);
    c.r[24] = c.r[5] | c.r[5];
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2530u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_01073d04;
    wp::compare_signed(c, 0, c.r[4], 0xcu);
    if (wp::cr_get(c, 2)) goto L_01073dd0;
    goto L_01074024;
L_01073d04:
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
    if (wp::cr_get(c, 2)) goto L_01073d80;
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
L_01073d80:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_01073dbc;
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
    c.lr = 0x1073dbcu;
    f_8011eeb0(c);
L_01073dbc:
R_01073dbc:
    ea = c.r[24] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[24] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01074028;
L_01073dd0:
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
    if (!wp::cr_get(c, 2)) goto L_01073dfc;
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
L_01073dfc:
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
    c.lr = 0x1073f3cu;
    f_801225e0(c);
R_01073f3c:
    c.f[28] = c.f[1];
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1073f50u;
    f_801225e0(c);
R_01073f50:
    c.f[3] = wp::round_single(c.f[28] - c.f[1]);
    c.ps1[3] = c.f[3];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_01073f90;
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
L_01073f90:
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    wp::compare_float(c, 0, c.f[3], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_01073fa8;
    ea = c.r[31] + 0x14u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[0] = wp::round_single(c.f[3] * wp::force25(c.f[0]));
    c.ps1[0] = c.f[0];
    c.f[29] = wp::round_single(c.f[29] + c.f[0]);
    c.ps1[29] = c.f[29];
L_01073fa8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x1073fb0u;
    f_8011eaa0(c);
R_01073fb0:
    c.f[28] = c.f[1];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x1073fbcu;
    f_8011ea40(c);
R_01073fbc:
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
    c.lr = 0x1073fe4u;
    f_80122d80(c);
R_01073fe4:
    c.r[0] = 0x300u;
    ea = c.r[29] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[27] | c.r[27];
    c.lr = 0x1073ffcu;
    f_80122d80(c);
R_01073ffc:
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
    c.lr = 0x107401cu;
    f_80121cf0(c);
R_0107401c:
    c.r[3] = 0x2u;
    goto L_01074028;
L_01074024:
    c.lr = 0x1074028u;
    f_8011bd90(c);
L_01074028:
R_01074028:
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
    c.lr = 0x1074050u;
    f_801c83f8(c);
R_01074050:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_mg507_01074060(wp::Cpu& c) {
    WP_ENTER(0x1074060u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x107407cu: goto R_0107407c;
        case 0x1074200u: goto R_01074200;
        case 0x1074254u: goto R_01074254;
        case 0x1074278u: goto R_01074278;
        case 0x1074284u: goto R_01074284;
        case 0x1074294u: goto R_01074294;
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
    c.lr = 0x107407cu;
    f_801c83b0(c);
R_0107407c:
    wp::compare_signed(c, 0, c.r[5], 0xbu);
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    if (wp::cr_get(c, 2)) goto L_01074098;
    wp::compare_signed(c, 0, c.r[5], 0xcu);
    if (wp::cr_get(c, 2)) goto L_010740ac;
    goto L_01074280;
L_01074098:
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_01074284;
L_010740ac:
    ea = c.r[6] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[7] = ((((g_mg507_bases[4] + 0x253cu) + 0x8000u) >> 16) << 16);
    ea = c.r[6] + 0x0u;
    c.r[31] = wp::rd32(ea);
    c.r[26] = ((((g_mg507_bases[4] + 0x2540u) + 0x8000u) >> 16) << 16);
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
    ea = c.r[7] + wp::sign_extend16((g_mg507_bases[4] + 0x253cu) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[26] + wp::sign_extend16((g_mg507_bases[4] + 0x2540u) & 0xFFFFu);
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
    c.lr = 0x1074200u;
    f_801225e0(c);
R_01074200:
    ea = c.r[26] + wp::sign_extend16((g_mg507_bases[4] + 0x2540u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    wp::compare_float(c, 0, c.f[1], c.f[2]);
    if (!wp::cr_get(c, 0)) goto L_01074210;
    goto L_01074214;
L_01074210:
    c.f[2] = c.f[1];
L_01074214:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_01074224;
    ea = c.r[31] + 0x50u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    goto L_0107422c;
L_01074224:
    c.r[3] = ((((g_mg507_bases[4] + 0x2540u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg507_bases[4] + 0x2540u) & 0xFFFFu);
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
L_0107422c:
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
    c.lr = 0x1074254u;
    f_8011e9e0(c);
R_01074254:
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
    c.lr = 0x1074278u;
    f_80121cf0(c);
R_01074278:
    c.r[3] = 0x2u;
    goto L_01074284;
L_01074280:
    c.lr = 0x1074284u;
    f_8011bec0(c);
L_01074284:
R_01074284:
    c.r[11] = c.r[1] + 0x90u;
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x1074294u;
    f_801c83fc(c);
R_01074294:
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_mg507_010742b0(wp::Cpu& c) {
    WP_ENTER(0x10742b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x10742c4u: goto R_010742c4;
        case 0x10742f4u: goto R_010742f4;
        case 0x107440cu: goto R_0107440c;
        case 0x1074494u: goto R_01074494;
        case 0x10744a0u: goto R_010744a0;
        case 0x10744acu: goto R_010744ac;
        case 0x10745c4u: goto R_010745c4;
        case 0x107470cu: goto R_0107470c;
        case 0x1074728u: goto R_01074728;
        case 0x1074730u: goto R_01074730;
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
    c.lr = 0x10742c4u;
    f_801c83b4(c);
R_010742c4:
    ea = c.r[3] + 0x108u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = ((((g_mg507_bases[4] + 0x2530u) + 0x8000u) >> 16) << 16);
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg507_bases[4] + 0x2530u) & 0xFFFFu);
    if (wp::cr_get(c, 2)) goto L_010742ec;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_010744a4;
    goto L_01074728;
L_010742ec:
    c.r[3] = c.r[1] + 0xecu;
    c.lr = 0x10742f4u;
    f_80132a30(c);
R_010742f4:
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
    if (!wp::cr_get(c, 2)) goto L_0107440c;
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x107440cu;
    f_8014b090(c);
L_0107440c:
R_0107440c:
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
    c.lr = 0x1074494u;
    f_8012be60(c);
R_01074494:
    c.r[3] = c.r[1] + 0xecu;
    c.r[4] = 0xffffffffu;
    c.lr = 0x10744a0u;
    f_80132ab0(c);
R_010744a0:
    goto L_01074728;
L_010744a4:
    c.r[3] = c.r[1] + 0x98u;
    c.lr = 0x10744acu;
    f_80132a30(c);
R_010744ac:
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
    if (!wp::cr_get(c, 2)) goto L_010745c4;
    c.r[3] = c.r[1] + 0x38u;
    c.lr = 0x10745c4u;
    f_8014b090(c);
L_010745c4:
R_010745c4:
    c.r[5] = ((((g_mg507_bases[6] + 0x14c8u) + 0x8000u) >> 16) << 16);
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[6] + 0x14c8u) & 0xFFFFu);
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_01074630;
    c.r[4] = ((((g_mg507_bases[6] + 0x14d0u) + 0x8000u) >> 16) << 16);
    ea = c.r[31] + 0x30u;
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.r[3] = c.r[4] + wp::sign_extend16((g_mg507_bases[6] + 0x14d0u) & 0xFFFFu);
    ea = c.r[31] + 0x34u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    ea = c.r[31] + 0x10u;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.r[0] = 0x1u;
    ea = c.r[4] + wp::sign_extend16((g_mg507_bases[6] + 0x14d0u) & 0xFFFFu);
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
    ea = c.r[5] + wp::sign_extend16((g_mg507_bases[6] + 0x14c8u) & 0xFFFFu);
    wp::wr8(ea, c.r[0]);
L_01074630:
    c.r[26] = ((((g_mg507_bases[6] + 0x14d0u) + 0x8000u) >> 16) << 16);
    c.r[27] = 0x0u;
    c.r[26] = c.r[26] + wp::sign_extend16((g_mg507_bases[6] + 0x14d0u) & 0xFFFFu);
L_0107463c:
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
    c.lr = 0x107470cu;
    f_8012be60(c);
R_0107470c:
    c.r[27] = c.r[27] + 0x1u;
    c.r[26] = c.r[26] + 0x8u;
    wp::compare_signed(c, 0, c.r[27], 0x8u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0107463c;
    }
    c.r[3] = c.r[1] + 0x98u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x1074728u;
    f_80132ab0(c);
L_01074728:
R_01074728:
    c.r[11] = c.r[1] + 0x160u;
    c.lr = 0x1074730u;
    f_801c8400(c);
R_01074730:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_mg507_01074740(wp::Cpu& c) {
    WP_ENTER(0x1074740u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mg507_01074750(wp::Cpu& c) {
    WP_ENTER(0x1074750u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

