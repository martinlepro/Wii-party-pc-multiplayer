#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mg214_bases[17];
void f_80034b10(wp::Cpu& c);
void f_80034f00(wp::Cpu& c);
void f_80034f20(wp::Cpu& c);
void f_8003d6b0(wp::Cpu& c);
void f_8004aa80(wp::Cpu& c);
void f_80051600(wp::Cpu& c);
void f_80052170(wp::Cpu& c);
void f_80052190(wp::Cpu& c);
void f_800e95b0(wp::Cpu& c);
void f_800ee3c0(wp::Cpu& c);
void f_80126360(wp::Cpu& c);
void f_801263e0(wp::Cpu& c);
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
void f_801c79a4(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c83b4(wp::Cpu& c);
void f_801c8400(wp::Cpu& c);
void f_mg214_01069fc0(wp::Cpu& c);
void f_mg214_0106a0b0(wp::Cpu& c);
void f_mg214_0106a320(wp::Cpu& c);
void f_mg214_0106a540(wp::Cpu& c);
void f_mg214_0106a870(wp::Cpu& c);
void f_mg214_0106aa10(wp::Cpu& c);
void f_mg214_0106aab0(wp::Cpu& c);
void f_mg214_0106ab60(wp::Cpu& c);
void f_mg214_0106ab70(wp::Cpu& c);
void f_mg214_0106ab80(wp::Cpu& c);
void f_mg214_0106ab90(wp::Cpu& c);

void f_mg214_0106a320(wp::Cpu& c) {
    WP_ENTER(0x106a320u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a374u: goto R_0106a374;
        case 0x106a394u: goto R_0106a394;
        case 0x106a3b0u: goto R_0106a3b0;
        case 0x106a3ccu: goto R_0106a3cc;
        case 0x106a3dcu: goto R_0106a3dc;
        case 0x106a3f8u: goto R_0106a3f8;
        case 0x106a480u: goto R_0106a480;
        case 0x106a48cu: goto R_0106a48c;
        case 0x106a4a0u: goto R_0106a4a0;
        case 0x106a4b0u: goto R_0106a4b0;
        case 0x106a4ccu: goto R_0106a4cc;
        case 0x106a524u: goto R_0106a524;
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
    c.lr = 0x106a374u;
    f_801c83b4(c);
R_0106a374:
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    c.r[29] = ((((g_mg214_bases[4] + 0x2868u) + 0x8000u) >> 16) << 16);
    c.r[27] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    c.r[29] = c.r[29] + wp::sign_extend16((g_mg214_bases[4] + 0x2868u) & 0xFFFFu);
    if (wp::cr_get(c, 1)) goto L_0106a3d0;
    c.r[3] = 0x2u;
    c.lr = 0x106a394u;
    f_8014f9d0(c);
R_0106a394:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x106a3b0u;
    f_8014f780(c);
R_0106a3b0:
    c.r[3] = 0x1u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x106a3ccu;
    f_8014f780(c);
R_0106a3cc:
    goto L_0106a4dc;
L_0106a3d0:
    c.r[0] = c.r[4] + 0x1u;
    c.r[3] = c.r[0] & 0xffu;
    c.lr = 0x106a3dcu;
    f_8014f9d0(c);
R_0106a3dc:
    c.r[3] = 0x0u;
    c.r[4] = 0x1u;
    c.r[5] = 0x4u;
    c.r[6] = 0x3cu;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x106a3f8u;
    f_8014f780(c);
R_0106a3f8:
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
    c.r[28] = ((((g_mg214_bases[4] + 0x2878u) + 0x8000u) >> 16) << 16);
    c.f[2] = wp::round_single(c.f[3] / c.f[1]);
    c.ps1[2] = c.f[2];
    c.r[4] = (((0x802f5684u + 0x8000u) >> 16) << 16);
    ea = c.r[4] + wp::sign_extend16(0x802f5684u & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[28] = c.r[28] + wp::sign_extend16((g_mg214_bases[4] + 0x2878u) & 0xFFFFu);
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
    goto L_0106a4d4;
L_0106a448:
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
    c.lr = 0x106a480u;
    f_80126360(c);
R_0106a480:
    c.f[24] = wp::round_single(c.f[27] * wp::force25(c.f[1]));
    c.ps1[24] = c.f[24];
    c.f[1] = wp::round_single(c.f[31] * wp::force25(c.f[25]));
    c.ps1[1] = c.f[1];
    c.lr = 0x106a48cu;
    f_801263e0(c);
R_0106a48c:
    c.f[2] = wp::round_single(c.f[26] * wp::force25(c.f[1]));
    c.ps1[2] = c.f[2];
    ea = c.r[29] + 0x4u;
    c.f[3] = wp::rdf32(ea);
    c.ps1[3] = c.f[3];
    c.f[1] = c.f[24];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x106a4a0u;
    f_8014b7e0(c);
R_0106a4a0:
    ea = c.r[28] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.lr = 0x106a4b0u;
    f_80154e70(c);
R_0106a4b0:
    ea = c.r[28] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x1u;
    ea = c.r[28] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = 0x4u;
    c.r[7] = 0x0u;
    c.r[8] = 0x7du;
    c.lr = 0x106a4ccu;
    f_8014f780(c);
R_0106a4cc:
    c.r[28] = c.r[28] + 0x8u;
    c.r[27] = c.r[27] + 0x1u;
L_0106a4d4:
    wp::compare_signed(c, 0, c.r[27], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106a448;
    }
L_0106a4dc:
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
    c.lr = 0x106a524u;
    f_801c8400(c);
R_0106a524:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_mg214_0106a540(wp::Cpu& c) {
    WP_ENTER(0x106a540u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a554u: goto R_0106a554;
        case 0x106a580u: goto R_0106a580;
        case 0x106a59cu: goto R_0106a59c;
        case 0x106a5b4u: goto R_0106a5b4;
        case 0x106a5d0u: goto R_0106a5d0;
        case 0x106a5dcu: goto R_0106a5dc;
        case 0x106a5f0u: goto R_0106a5f0;
        case 0x106a608u: goto R_0106a608;
        case 0x106a624u: goto R_0106a624;
        case 0x106a63cu: goto R_0106a63c;
        case 0x106a654u: goto R_0106a654;
        case 0x106a670u: goto R_0106a670;
        case 0x106a68cu: goto R_0106a68c;
        case 0x106a6a4u: goto R_0106a6a4;
        case 0x106a6c0u: goto R_0106a6c0;
        case 0x106a6d8u: goto R_0106a6d8;
        case 0x106a6f4u: goto R_0106a6f4;
        case 0x106a710u: goto R_0106a710;
        case 0x106a72cu: goto R_0106a72c;
        case 0x106a740u: goto R_0106a740;
        case 0x106a764u: goto R_0106a764;
        case 0x106a780u: goto R_0106a780;
        case 0x106a798u: goto R_0106a798;
        case 0x106a7b4u: goto R_0106a7b4;
        case 0x106a7dcu: goto R_0106a7dc;
        case 0x106a7f0u: goto R_0106a7f0;
        case 0x106a808u: goto R_0106a808;
        case 0x106a824u: goto R_0106a824;
        case 0x106a83cu: goto R_0106a83c;
        case 0x106a858u: goto R_0106a858;
        case 0x106a860u: goto R_0106a860;
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
    c.lr = 0x106a554u;
    f_801c83b4(c);
R_0106a554:
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
    c.lr = 0x106a580u;
    f_80153920(c);
R_0106a580:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106a628;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x1u;
    c.r[6] = 0xffu;
    c.lr = 0x106a59cu;
    f_801537c0(c);
R_0106a59c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x106a5b4u;
    f_80153360(c);
R_0106a5b4:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a5d0u;
    f_80153400(c);
R_0106a5d0:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.lr = 0x106a5dcu;
    f_801535e0(c);
R_0106a5dc:
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x106a5f0u;
    f_801537c0(c);
R_0106a5f0:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x6u;
    c.r[6] = 0x0u;
    c.r[7] = 0x7u;
    c.lr = 0x106a608u;
    f_80153360(c);
R_0106a608:
    c.r[3] = 0x1u;
    c.r[4] = 0xfu;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a624u;
    f_80153400(c);
R_0106a624:
    goto L_0106a670;
L_0106a628:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0xffu;
    c.lr = 0x106a63cu;
    f_801537c0(c);
R_0106a63c:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x4u;
    c.lr = 0x106a654u;
    f_80153360(c);
R_0106a654:
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a670u;
    f_80153400(c);
L_0106a670:
R_0106a670:
    wp::compare_signed(c, 0, c.r[26], 0x1u);
    if (wp::cr_get(c, 1)) goto L_0106a6f8;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x106a68cu;
    f_801537c0(c);
R_0106a68c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x8u;
    c.lr = 0x106a6a4u;
    f_80153320(c);
R_0106a6a4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a6c0u;
    f_801533a0(c);
R_0106a6c0:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x106a6d8u;
    f_80153360(c);
R_0106a6d8:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a6f4u;
    f_80153400(c);
R_0106a6f4:
    goto L_0106a7c8;
L_0106a6f8:
    c.r[5] = ((((g_mg214_bases[4] + 0x28c8u) + 0x8000u) >> 16) << 16);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[5] + wp::sign_extend16((g_mg214_bases[4] + 0x28c8u) & 0xFFFFu);
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x106a710u;
    f_80153530(c);
R_0106a710:
    c.r[31] = ((((g_mg214_bases[4] + 0x28d0u) + 0x8000u) >> 16) << 16);
    c.r[29] = 0x0u;
    c.r[31] = c.r[31] + wp::sign_extend16((g_mg214_bases[4] + 0x28d0u) & 0xFFFFu);
    goto L_0106a7c0;
L_0106a720:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x106a72cu;
    f_80153590(c);
R_0106a72c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] + 0x1u;
    c.r[5] = 0x2u;
    c.r[6] = 0xffu;
    c.lr = 0x106a740u;
    f_801537c0(c);
R_0106a740:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_0106a754;
    c.r[4] = 0xfu;
L_0106a754:
    c.r[5] = 0x8u;
    c.r[6] = 0xeu;
    c.r[7] = 0xfu;
    c.lr = 0x106a764u;
    f_80153320(c);
R_0106a764:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a780u;
    f_801533a0(c);
R_0106a780:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x0u;
    c.lr = 0x106a798u;
    f_80153360(c);
R_0106a798:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a7b4u;
    f_80153400(c);
R_0106a7b4:
    c.r[28] = c.r[28] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_0106a7c0:
    wp::compare_signed(c, 0, c.r[29], c.r[26]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_0106a720;
    }
L_0106a7c8:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106a858;
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.lr = 0x106a7dcu;
    f_801535e0(c);
R_0106a7dc:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xffu;
    c.r[5] = 0xffu;
    c.r[6] = 0xffu;
    c.lr = 0x106a7f0u;
    f_801537c0(c);
R_0106a7f0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0xfu;
    c.r[5] = 0xfu;
    c.r[6] = 0xfu;
    c.r[7] = 0x1u;
    c.lr = 0x106a808u;
    f_80153320(c);
R_0106a808:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a824u;
    f_801533a0(c);
R_0106a824:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x7u;
    c.r[5] = 0x7u;
    c.r[6] = 0x7u;
    c.r[7] = 0x6u;
    c.lr = 0x106a83cu;
    f_80153360(c);
R_0106a83c:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.lr = 0x106a858u;
    f_80153400(c);
L_0106a858:
R_0106a858:
    c.r[11] = c.r[1] + 0x30u;
    c.lr = 0x106a860u;
    f_801c8400(c);
R_0106a860:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_mg214_0106a870(wp::Cpu& c) {
    WP_ENTER(0x106a870u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106a8a4u: goto R_0106a8a4;
        case 0x106a8acu: goto R_0106a8ac;
        case 0x106a8b4u: goto R_0106a8b4;
        case 0x106a8bcu: goto R_0106a8bc;
        case 0x106a8ccu: goto R_0106a8cc;
        case 0x106a8e4u: goto R_0106a8e4;
        case 0x106a8f8u: goto R_0106a8f8;
        case 0x106a8fcu: goto R_0106a8fc;
        case 0x106a908u: goto R_0106a908;
        case 0x106a918u: goto R_0106a918;
        case 0x106a91cu: goto R_0106a91c;
        case 0x106a920u: goto R_0106a920;
        case 0x106a944u: goto R_0106a944;
        case 0x106a98cu: goto R_0106a98c;
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
    c.lr = 0x106a8a4u;
    f_80150850(c);
R_0106a8a4:
    c.r[3] = 0x1u;
    c.lr = 0x106a8acu;
    f_80153e40(c);
R_0106a8ac:
    c.r[3] = 0x0u;
    c.lr = 0x106a8b4u;
    f_80153e90(c);
R_0106a8b4:
    c.r[3] = 0x1u;
    c.lr = 0x106a8bcu;
    f_80153f20(c);
R_0106a8bc:
    c.r[3] = 0x0u;
    c.r[4] = 0x7u;
    c.r[5] = 0x0u;
    c.lr = 0x106a8ccu;
    f_80153ee0(c);
R_0106a8cc:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x3u;
    c.r[7] = 0xffu;
    c.lr = 0x106a8e4u;
    f_801536f0(c);
R_0106a8e4:
    c.r[3] = 0x1u;
    c.r[4] = 0x4u;
    c.r[5] = 0x5u;
    c.r[6] = 0x5u;
    c.lr = 0x106a8f8u;
    f_80153df0(c);
R_0106a8f8:
    c.lr = 0x106a8fcu;
    f_8014f020(c);
R_0106a8fc:
    c.r[3] = ((((g_mg214_bases[4] + 0x28f0u) + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16((g_mg214_bases[4] + 0x28f0u) & 0xFFFFu);
    c.lr = 0x106a908u;
    f_8014e9e0(c);
R_0106a908:
    c.r[4] = ((((g_mg214_bases[4] + 0x2908u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x0u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg214_bases[4] + 0x2908u) & 0xFFFFu);
    c.lr = 0x106a918u;
    f_8014f200(c);
R_0106a918:
    c.lr = 0x106a91cu;
    f_8004aa80(c);
R_0106a91c:
    c.lr = 0x106a920u;
    f_800ee3c0(c);
R_0106a920:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[1] + 0x14u;
    c.r[5] = c.r[1] + 0x10u;
    c.r[6] = c.r[1] + 0xcu;
    c.r[7] = c.r[1] + 0x8u;
    c.r[8] = 0x0u;
    c.r[9] = 0x0u;
    c.lr = 0x106a944u;
    f_800e95b0(c);
R_0106a944:
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
    c.lr = 0x106a98cu;
    f_80150560(c);
R_0106a98c:
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

void f_mg214_0106aa10(wp::Cpu& c) {
    WP_ENTER(0x106aa10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106aa4cu: goto R_0106aa4c;
        case 0x106aa60u: goto R_0106aa60;
        case 0x106aa6cu: goto R_0106aa6c;
        case 0x106aa7cu: goto R_0106aa7c;
        case 0x106aa88u: goto R_0106aa88;
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
    c.lr = 0x106aa4cu;
    f_8003d6b0(c);
R_0106aa4c:
    c.r[4] = ((((g_mg214_bases[5] + 0x27468u) + 0x8000u) >> 16) << 16);
    c.r[3] = 0x24u;
    c.r[4] = c.r[4] + wp::sign_extend16((g_mg214_bases[5] + 0x27468u) & 0xFFFFu);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.lr = 0x106aa60u;
    f_801c79a4(c);
R_0106aa60:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106aa6c;
    c.lr = 0x106aa6cu;
    f_mg214_01069fc0(c);
L_0106aa6c:
R_0106aa6c:
    ea = c.r[29] + 0x144u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[30] | c.r[30];
    c.lr = 0x106aa7cu;
    f_80052170(c);
R_0106aa7c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x106aa88u;
    f_80052190(c);
R_0106aa88:
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

void f_mg214_0106aab0(wp::Cpu& c) {
    WP_ENTER(0x106aab0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106aaf8u: goto R_0106aaf8;
        case 0x106ab04u: goto R_0106ab04;
        case 0x106ab10u: goto R_0106ab10;
        case 0x106ab18u: goto R_0106ab18;
        case 0x106ab2cu: goto R_0106ab2c;
        case 0x106ab3cu: goto R_0106ab3c;
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
    if (wp::cr_get(c, 2)) goto L_0106ab3c;
    c.r[3] = wp::add_carry(c, c.r[3], 0x144u, 0);
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_0106ab18;
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ab18;
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x106aaf8u;
    f_80034b10(c);
R_0106aaf8:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0xffffffffu;
    c.lr = 0x106ab04u;
    f_80034b10(c);
R_0106ab04:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0xffffffffu;
    c.lr = 0x106ab10u;
    f_80034b10(c);
R_0106ab10:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106ab18u;
    f_801c7a8c(c);
L_0106ab18:
R_0106ab18:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106ab2c;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x0u;
    c.lr = 0x106ab2cu;
    f_80051600(c);
L_0106ab2c:
R_0106ab2c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_0106ab3c;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x106ab3cu;
    f_801c7a8c(c);
L_0106ab3c:
R_0106ab3c:
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

void f_mg214_0106ab60(wp::Cpu& c) {
    WP_ENTER(0x106ab60u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg214_0106ab70(wp::Cpu& c) {
    WP_ENTER(0x106ab70u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

void f_mg214_0106ab80(wp::Cpu& c) {
    WP_ENTER(0x106ab80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x144u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_mg214_0106ab90(wp::Cpu& c) {
    WP_ENTER(0x106ab90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x106abb4u: goto R_0106abb4;
        case 0x106abb8u: goto R_0106abb8;
        case 0x106abd4u: goto R_0106abd4;
        case 0x106abfcu: goto R_0106abfc;
        case 0x106ac08u: goto R_0106ac08;
        case 0x106ac10u: goto R_0106ac10;
        case 0x106ac1cu: goto R_0106ac1c;
        case 0x106ac24u: goto R_0106ac24;
        case 0x106ac2cu: goto R_0106ac2c;
        case 0x106ac4cu: goto R_0106ac4c;
        case 0x106ac6cu: goto R_0106ac6c;
        case 0x106ac74u: goto R_0106ac74;
        case 0x106ac80u: goto R_0106ac80;
        case 0x106ac94u: goto R_0106ac94;
        case 0x106aca0u: goto R_0106aca0;
        case 0x106aca8u: goto R_0106aca8;
        case 0x106acb4u: goto R_0106acb4;
        case 0x106acc0u: goto R_0106acc0;
        case 0x106acd0u: goto R_0106acd0;
        case 0x106acd4u: goto R_0106acd4;
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
    if (!wp::cr_get(c, 1)) goto L_0106acd4;
    c.lr = 0x106abb4u;
    f_8004aa80(c);
R_0106abb4:
    c.lr = 0x106abb8u;
    f_800ee3c0(c);
R_0106abb8:
    ea = c.r[31] + 0x18u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_0106abd4;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[31] + 0x1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x106abd4u;
    f_mg214_0106a0b0(c);
L_0106abd4:
R_0106abd4:
    c.r[3] = ((((g_mg214_bases[4] + 0x286cu) + 0x8000u) >> 16) << 16);
    c.r[4] = ((((g_mg214_bases[4] + 0x2870u) + 0x8000u) >> 16) << 16);
    ea = c.r[3] + wp::sign_extend16((g_mg214_bases[4] + 0x286cu) & 0xFFFFu);
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.r[3] = c.r[1] + 0x40u;
    ea = c.r[4] + wp::sign_extend16((g_mg214_bases[4] + 0x2870u) & 0xFFFFu);
    c.f[2] = wp::rdf32(ea);
    c.ps1[2] = c.f[2];
    c.f[3] = c.f[1];
    c.f[4] = c.f[2];
    c.f[5] = c.f[1];
    c.f[6] = c.f[2];
    c.lr = 0x106abfcu;
    f_8014c050(c);
R_0106abfc:
    c.r[3] = c.r[1] + 0x40u;
    c.r[4] = 0x1u;
    c.lr = 0x106ac08u;
    f_80154c30(c);
R_0106ac08:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x106ac10u;
    f_8014b090(c);
R_0106ac10:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.lr = 0x106ac1cu;
    f_80154d30(c);
R_0106ac1c:
    c.r[3] = 0x0u;
    c.lr = 0x106ac24u;
    f_80154e50(c);
R_0106ac24:
    c.r[3] = 0x0u;
    c.lr = 0x106ac2cu;
    f_80151a30(c);
R_0106ac2c:
    c.r[3] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x106ac4cu;
    f_80151a60(c);
R_0106ac4c:
    c.r[3] = 0x5u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    c.r[8] = 0x0u;
    c.r[9] = 0x2u;
    c.lr = 0x106ac6cu;
    f_80151a60(c);
R_0106ac6c:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106ac74u;
    f_80034f00(c);
R_0106ac74:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x106ac80u;
    f_80034f20(c);
R_0106ac80:
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_0106aca0;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x106ac94u;
    f_80034f00(c);
R_0106ac94:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x1u;
    c.lr = 0x106aca0u;
    f_80034f20(c);
L_0106aca0:
R_0106aca0:
    c.r[3] = c.r[31] + 0x8u;
    c.lr = 0x106aca8u;
    f_80034f00(c);
R_0106aca8:
    c.r[3] = c.r[31] + 0x8u;
    c.r[4] = 0x2u;
    c.lr = 0x106acb4u;
    f_80034f20(c);
R_0106acb4:
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x106acc0u;
    f_mg214_0106a320(c);
R_0106acc0:
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x20u;
    c.r[5] = wp::rd8(ea);
    c.lr = 0x106acd0u;
    f_mg214_0106a540(c);
R_0106acd0:
    c.lr = 0x106acd4u;
    f_mg214_0106a870(c);
L_0106acd4:
R_0106acd4:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

