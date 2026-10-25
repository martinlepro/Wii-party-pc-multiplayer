#include "wp/cpu.h"
#include "wp/hle.h"
#include "wp/threads.h"

void f_800043c4(wp::Cpu& c);
void f_80004714(wp::Cpu& c);
void f_80049170(wp::Cpu& c);
void f_801354e0(wp::Cpu& c);
void f_80137970(wp::Cpu& c);
void f_80137a90(wp::Cpu& c);
void f_80138880(wp::Cpu& c);
void f_8013c030(wp::Cpu& c);
void f_8013c070(wp::Cpu& c);
void f_8013e990(wp::Cpu& c);
void f_8013f7e0(wp::Cpu& c);
void f_80143650(wp::Cpu& c);
void f_80197be0(wp::Cpu& c);
void f_80197c30(wp::Cpu& c);
void f_801c6de8(wp::Cpu& c);
void f_801c6e44(wp::Cpu& c);
void f_801c6e98(wp::Cpu& c);
void f_801c6f3c(wp::Cpu& c);
void f_801c6fbc(wp::Cpu& c);
void f_801c70cc(wp::Cpu& c);
void f_801c70d0(wp::Cpu& c);
void f_801c7860(wp::Cpu& c);
void f_801c787c(wp::Cpu& c);
void f_801c7a8c(wp::Cpu& c);
void f_801c7c5c(wp::Cpu& c);
void f_801c7c74(wp::Cpu& c);
void f_801c8310(wp::Cpu& c);
void f_801c835c(wp::Cpu& c);
void f_801c8384(wp::Cpu& c);
void f_801c83a0(wp::Cpu& c);
void f_801c83d0(wp::Cpu& c);
void f_801c83ec(wp::Cpu& c);
void f_801c841c(wp::Cpu& c);
void f_801c8640(wp::Cpu& c);
void f_801c8904(wp::Cpu& c);
void f_801c8d3c(wp::Cpu& c);
void f_801c8eec(wp::Cpu& c);
void f_801c95f0(wp::Cpu& c);
void f_801c9cb4(wp::Cpu& c);
void f_801c9cf4(wp::Cpu& c);
void f_801c9df8(wp::Cpu& c);
void f_801ca200(wp::Cpu& c);
void f_801ca344(wp::Cpu& c);
void f_801ca370(wp::Cpu& c);
void f_801ca37c(wp::Cpu& c);
void f_801ca420(wp::Cpu& c);
void f_801ca48c(wp::Cpu& c);
void f_801ca568(wp::Cpu& c);
void f_801ca7f0(wp::Cpu& c);
void f_801ca8dc(wp::Cpu& c);
void f_801cabf8(wp::Cpu& c);
void f_801cacdc(wp::Cpu& c);
void f_801caddc(wp::Cpu& c);
void f_801cb2b8(wp::Cpu& c);
void f_801cb41c(wp::Cpu& c);
void f_801cb5c0(wp::Cpu& c);
void f_801cbd0c(wp::Cpu& c);
void f_801cbd1c(wp::Cpu& c);
void f_801cbd2c(wp::Cpu& c);
void f_801cbd54(wp::Cpu& c);
void f_801cbe0c(wp::Cpu& c);
void f_801cc114(wp::Cpu& c);
void f_801cc1d0(wp::Cpu& c);
void f_801cc304(wp::Cpu& c);
void f_801cc3ac(wp::Cpu& c);
void f_801cc3b0(wp::Cpu& c);
void f_801cc574(wp::Cpu& c);
void f_801cc58c(wp::Cpu& c);
void f_801cc5d8(wp::Cpu& c);
void f_801cc5f4(wp::Cpu& c);
void f_801cc6b4(wp::Cpu& c);
void f_801cc76c(wp::Cpu& c);
void f_801cc838(wp::Cpu& c);
void f_801cc864(wp::Cpu& c);
void f_801cc890(wp::Cpu& c);
void f_801cc8dc(wp::Cpu& c);
void f_801cc998(wp::Cpu& c);
void f_801cca40(wp::Cpu& c);
void f_801ccb00(wp::Cpu& c);
void f_801ccbac(wp::Cpu& c);
void f_801ccc0c(wp::Cpu& c);
void f_801ccc24(wp::Cpu& c);
void f_801ccca0(wp::Cpu& c);
void f_801cccb0(wp::Cpu& c);
void f_801cd26c(wp::Cpu& c);
void f_801cd4ac(wp::Cpu& c);
void f_801cd75c(wp::Cpu& c);
void f_801cdb24(wp::Cpu& c);
void f_801cdc4c(wp::Cpu& c);
void f_801ce3e8(wp::Cpu& c);
void f_801cec94(wp::Cpu& c);
void f_801cecec(wp::Cpu& c);
void f_801ced58(wp::Cpu& c);
void f_801cee24(wp::Cpu& c);
void f_801ceeec(wp::Cpu& c);
void f_801cef68(wp::Cpu& c);
void f_801ceff0(wp::Cpu& c);
void f_801cf074(wp::Cpu& c);
void f_801cf168(wp::Cpu& c);
void f_801cf23c(wp::Cpu& c);
void f_801cf25c(wp::Cpu& c);
void f_801cf264(wp::Cpu& c);
void f_801cf2ec(wp::Cpu& c);
void f_801cf394(wp::Cpu& c);
void f_801cf454(wp::Cpu& c);
void f_801cf498(wp::Cpu& c);
void f_801cf4c4(wp::Cpu& c);
void f_801cf510(wp::Cpu& c);
void f_801cf62c(wp::Cpu& c);
void f_801cf66c(wp::Cpu& c);
void f_801cf69c(wp::Cpu& c);
void f_801cf7c0(wp::Cpu& c);
void f_801cf82c(wp::Cpu& c);
void f_801d0b50(wp::Cpu& c);
void f_801d0bd8(wp::Cpu& c);
void f_801d0c34(wp::Cpu& c);
void f_801d1048(wp::Cpu& c);
void f_801d10f0(wp::Cpu& c);
void f_801d11dc(wp::Cpu& c);
void f_801d12a0(wp::Cpu& c);
void f_801d12a8(wp::Cpu& c);
void f_801d12b0(wp::Cpu& c);
void f_801d12d8(wp::Cpu& c);
void f_801d1868(wp::Cpu& c);
void f_801d1aac(wp::Cpu& c);
void f_801d1d68(wp::Cpu& c);
void f_801d21bc(wp::Cpu& c);
void f_801d22e4(wp::Cpu& c);
void f_801d2a74(wp::Cpu& c);
void f_801d3400(wp::Cpu& c);
void f_801d3458(wp::Cpu& c);
void f_801d34c4(wp::Cpu& c);
void f_801d3590(wp::Cpu& c);
void f_801d3688(wp::Cpu& c);
void f_801d3714(wp::Cpu& c);
void f_801d3730(wp::Cpu& c);
void f_801d374c(wp::Cpu& c);
void f_801d3790(wp::Cpu& c);
void f_801d37c4(wp::Cpu& c);
void f_801d37f0(wp::Cpu& c);
void f_801d3868(wp::Cpu& c);
void f_801d3938(wp::Cpu& c);
void f_801d3940(wp::Cpu& c);
void f_801d3974(wp::Cpu& c);
void f_801d398c(wp::Cpu& c);
void f_801d39cc(wp::Cpu& c);
void f_801d3a88(wp::Cpu& c);
void f_801d3d54(wp::Cpu& c);
void f_801d3fec(wp::Cpu& c);
void f_801d4244(wp::Cpu& c);
void f_801d4474(wp::Cpu& c);
void f_801d47f4(wp::Cpu& c);
void f_801d4aa8(wp::Cpu& c);
void f_801d4bbc(wp::Cpu& c);
void f_801d53d0(wp::Cpu& c);
void f_801d5754(wp::Cpu& c);
void f_801d5864(wp::Cpu& c);
void f_801d6f1c(wp::Cpu& c);
void f_801d6fdc(wp::Cpu& c);
void f_801d722c(wp::Cpu& c);
void f_801d745c(wp::Cpu& c);
void f_801d75a8(wp::Cpu& c);
void f_801d75d4(wp::Cpu& c);
void f_801d769c(wp::Cpu& c);
void f_801d77ec(wp::Cpu& c);
void f_801d7874(wp::Cpu& c);
void f_801d79e0(wp::Cpu& c);
void f_801d7adc(wp::Cpu& c);
void f_801d7ba8(wp::Cpu& c);
void f_801d7c20(wp::Cpu& c);
void f_801d7c24(wp::Cpu& c);
void f_801d7c28(wp::Cpu& c);
void f_801d7c2c(wp::Cpu& c);
void f_801d7c30(wp::Cpu& c);
void f_801d7c34(wp::Cpu& c);
void f_801d7c38(wp::Cpu& c);
void f_801d7c3c(wp::Cpu& c);
void f_801d7c40(wp::Cpu& c);
void f_801d7e88(wp::Cpu& c);
void f_801d7e8c(wp::Cpu& c);
void f_801d7e90(wp::Cpu& c);
void f_801d7f30(wp::Cpu& c);
void f_801d7f50(wp::Cpu& c);
void f_801d7f8c(wp::Cpu& c);
void f_801d7f94(wp::Cpu& c);
void f_801d7fb8(wp::Cpu& c);
void f_801d7fc0(wp::Cpu& c);
void f_801d8074(wp::Cpu& c);
void f_801d80e8(wp::Cpu& c);
void f_801d810c(wp::Cpu& c);
void f_801d8130(wp::Cpu& c);
void f_801d81a4(wp::Cpu& c);
void f_801d81c8(wp::Cpu& c);
void f_801d81cc(wp::Cpu& c);
void f_801d81fc(wp::Cpu& c);
void f_801d8204(wp::Cpu& c);
void f_801d820c(wp::Cpu& c);
void f_801d8230(wp::Cpu& c);
void f_801d8338(wp::Cpu& c);
void f_801d8440(wp::Cpu& c);
void f_801d8478(wp::Cpu& c);
void f_801d84b4(wp::Cpu& c);
void f_801d85a0(wp::Cpu& c);
void f_801d86dc(wp::Cpu& c);
void f_801d8804(wp::Cpu& c);
void f_801d8924(wp::Cpu& c);
void f_801d89bc(wp::Cpu& c);
void f_801d8a50(wp::Cpu& c);
void f_801d8a54(wp::Cpu& c);
void f_801d8abc(wp::Cpu& c);
void f_801d8bf0(wp::Cpu& c);
void f_801d8c38(wp::Cpu& c);
void f_801d8c48(wp::Cpu& c);
void f_801d8cd0(wp::Cpu& c);
void f_801d8d08(wp::Cpu& c);
void f_801d8e40(wp::Cpu& c);
void f_801d8e44(wp::Cpu& c);
void f_801d8e98(wp::Cpu& c);
void f_801d8ec4(wp::Cpu& c);
void f_801d8ed8(wp::Cpu& c);
void f_801d8f14(wp::Cpu& c);
void f_801d8f50(wp::Cpu& c);
void f_801d8f64(wp::Cpu& c);
void f_801d8f78(wp::Cpu& c);
void f_801d8f90(wp::Cpu& c);
void f_801d8fe4(wp::Cpu& c);
void f_801d9074(wp::Cpu& c);
void f_801d9098(wp::Cpu& c);
void f_801d9124(wp::Cpu& c);
void f_801d91f0(wp::Cpu& c);
void f_801d9208(wp::Cpu& c);
void f_801d9210(wp::Cpu& c);
void f_801d92bc(wp::Cpu& c);
void f_801d92e0(wp::Cpu& c);
void f_801d92ec(wp::Cpu& c);
void f_801d9360(wp::Cpu& c);
void f_801d942c(wp::Cpu& c);
void f_801d9458(wp::Cpu& c);
void f_801d9498(wp::Cpu& c);
void f_801d94a0(wp::Cpu& c);
void f_801d94a8(wp::Cpu& c);
void f_801d94c4(wp::Cpu& c);
void f_801d96b8(wp::Cpu& c);
void f_801d97e0(wp::Cpu& c);
void f_801d98f8(wp::Cpu& c);
void f_801d99dc(wp::Cpu& c);
void f_801d9ae8(wp::Cpu& c);
void f_801d9b1c(wp::Cpu& c);
void f_801d9ce0(wp::Cpu& c);
void f_801d9e44(wp::Cpu& c);
void f_801d9ea8(wp::Cpu& c);
void f_801d9ec8(wp::Cpu& c);
void f_801d9f64(wp::Cpu& c);
void f_801d9f88(wp::Cpu& c);
void f_801d9fb0(wp::Cpu& c);
void f_801d9fd8(wp::Cpu& c);
void f_801da008(wp::Cpu& c);
void f_801da0ac(wp::Cpu& c);
void f_801da13c(wp::Cpu& c);
void f_801da20c(wp::Cpu& c);
void f_801da300(wp::Cpu& c);
void f_801da364(wp::Cpu& c);
void f_801da454(wp::Cpu& c);
void f_801da534(wp::Cpu& c);
void f_801da5cc(wp::Cpu& c);
void f_801da6b4(wp::Cpu& c);
void f_801da6bc(wp::Cpu& c);
void f_801da72c(wp::Cpu& c);
void f_801da7b4(wp::Cpu& c);
void f_801da820(wp::Cpu& c);
void f_801da88c(wp::Cpu& c);
void f_801daac0(wp::Cpu& c);
void f_801dacd0(wp::Cpu& c);
void f_801daecc(wp::Cpu& c);
void f_801db16c(wp::Cpu& c);
void f_801db230(wp::Cpu& c);
void f_801db4b4(wp::Cpu& c);
void f_801db56c(wp::Cpu& c);
void f_801db638(wp::Cpu& c);
void f_801db6a0(wp::Cpu& c);
void f_801db708(wp::Cpu& c);
void f_801db710(wp::Cpu& c);
void f_801db718(wp::Cpu& c);
void f_801db7c4(wp::Cpu& c);
void f_801db7cc(wp::Cpu& c);
void f_801db7d4(wp::Cpu& c);
void f_801db8cc(wp::Cpu& c);
void f_801db998(wp::Cpu& c);
void f_801dbae8(wp::Cpu& c);
void f_801dbbe0(wp::Cpu& c);
void f_801dbd1c(wp::Cpu& c);
void f_801dbe80(wp::Cpu& c);
void f_801dbff0(wp::Cpu& c);
void f_801dc220(wp::Cpu& c);
void f_801dc2d8(wp::Cpu& c);
void f_801dc3f0(wp::Cpu& c);
void f_801dc44c(wp::Cpu& c);
void f_801dc64c(wp::Cpu& c);
void f_801dc6e8(wp::Cpu& c);
void f_801dc80c(wp::Cpu& c);
void f_801dc894(wp::Cpu& c);
void f_801dc908(wp::Cpu& c);
void f_801dc918(wp::Cpu& c);
void f_801dcb0c(wp::Cpu& c);
void f_801dcb1c(wp::Cpu& c);
void f_801dcb2c(wp::Cpu& c);
void f_801dcb44(wp::Cpu& c);
void f_801dcc20(wp::Cpu& c);
void f_801dccc8(wp::Cpu& c);
void f_801dccec(wp::Cpu& c);
void f_801dcd10(wp::Cpu& c);
void f_801dced8(wp::Cpu& c);
void f_801dcf40(wp::Cpu& c);
void f_801dcf50(wp::Cpu& c);
void f_801dcf58(wp::Cpu& c);
void f_801dcfe8(wp::Cpu& c);
void f_801dcff0(wp::Cpu& c);

void f_801c9cb4(wp::Cpu& c) {
    WP_ENTER(0x801c9cb4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801c9cdcu: goto R_801c9cdc;
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
    if (wp::cr_get(c, 2)) goto L_801c9cdc;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801c9cdc;
    c.lr = 0x801c9cdcu;
    f_801c7a8c(c);
L_801c9cdc:
R_801c9cdc:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801c9cf4(wp::Cpu& c) {
    WP_ENTER(0x801c9cf4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[8] = c.r[5] | c.r[5];
    c.r[2] = c.r[4] | c.r[4];
    ea = c.r[3] + 0x280u;
    c.r[0] = wp::rd32(ea);
    wp::mtcrf(c, 0xff, c.r[0]);
    ea = c.r[3] + 0x234u;
    for (uint32_t k = 13; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.r[7] = c.r[3] + 0xe8u;
    ea = c.r[7];
    wp::load_quantized(c, 14, ea, 0, 0, q);
    ea = c.r[3] + 0xe0u;
    c.f[14] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0xf8u;
    ea = c.r[7];
    wp::load_quantized(c, 15, ea, 0, 0, q);
    ea = c.r[3] + 0xf0u;
    c.f[15] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x108u;
    ea = c.r[7];
    wp::load_quantized(c, 16, ea, 0, 0, q);
    ea = c.r[3] + 0x100u;
    c.f[16] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x118u;
    ea = c.r[7];
    wp::load_quantized(c, 17, ea, 0, 0, q);
    ea = c.r[3] + 0x110u;
    c.f[17] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x128u;
    ea = c.r[7];
    wp::load_quantized(c, 18, ea, 0, 0, q);
    ea = c.r[3] + 0x120u;
    c.f[18] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x138u;
    ea = c.r[7];
    wp::load_quantized(c, 19, ea, 0, 0, q);
    ea = c.r[3] + 0x130u;
    c.f[19] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x148u;
    ea = c.r[7];
    wp::load_quantized(c, 20, ea, 0, 0, q);
    ea = c.r[3] + 0x140u;
    c.f[20] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x158u;
    ea = c.r[7];
    wp::load_quantized(c, 21, ea, 0, 0, q);
    ea = c.r[3] + 0x150u;
    c.f[21] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x168u;
    ea = c.r[7];
    wp::load_quantized(c, 22, ea, 0, 0, q);
    ea = c.r[3] + 0x160u;
    c.f[22] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x178u;
    ea = c.r[7];
    wp::load_quantized(c, 23, ea, 0, 0, q);
    ea = c.r[3] + 0x170u;
    c.f[23] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x188u;
    ea = c.r[7];
    wp::load_quantized(c, 24, ea, 0, 0, q);
    ea = c.r[3] + 0x180u;
    c.f[24] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x198u;
    ea = c.r[7];
    wp::load_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[3] + 0x190u;
    c.f[25] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1a8u;
    ea = c.r[7];
    wp::load_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[3] + 0x1a0u;
    c.f[26] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1b8u;
    ea = c.r[7];
    wp::load_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[3] + 0x1b0u;
    c.f[27] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1c8u;
    ea = c.r[7];
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[3] + 0x1c0u;
    c.f[28] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1d8u;
    ea = c.r[7];
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[3] + 0x1d0u;
    c.f[29] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1e8u;
    ea = c.r[7];
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[3] + 0x1e0u;
    c.f[30] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x1f8u;
    ea = c.r[7];
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[3] + 0x1f0u;
    c.f[31] = wp::rdf64(ea);
    c.lr = c.r[8];
    ea = c.r[3] + 0x28cu;
    c.r[1] = wp::rd32(ea);
    ea = c.r[3] + 0x284u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x0u;
    wp::wr32(ea, c.r[3]);
    return;
}

void f_801c9df8(wp::Cpu& c) {
    WP_ENTER(0x801c9df8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801c9e18u: goto R_801c9e18;
        case 0x801c9e28u: goto R_801c9e28;
        case 0x801c9ee0u: goto R_801c9ee0;
        case 0x801c9eecu: goto R_801c9eec;
        case 0x801c9fd8u: goto R_801c9fd8;
        case 0x801c9ff8u: goto R_801c9ff8;
        case 0x801ca028u: goto R_801ca028;
        case 0x801ca06cu: goto R_801ca06c;
        case 0x801ca0a8u: goto R_801ca0a8;
        case 0x801ca0b0u: goto R_801ca0b0;
        case 0x801ca0bcu: goto R_801ca0bc;
        case 0x801ca0e4u: goto R_801ca0e4;
        case 0x801ca15cu: goto R_801ca15c;
        case 0x801ca174u: goto R_801ca174;
        case 0x801ca1ecu: goto R_801ca1ec;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x290u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801c9e18u;
    f_801c8d3c(c);
R_801c9e18:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801c9e28;
    c.lr = 0x801c9e28u;
    f_801c7c5c(c);
L_801c9e28:
R_801c9e28:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd16(ea);
    c.r[0] = wp::rotl(c.r[0], 28) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801c9e40;
    ea = c.r[30] + 0x27cu;
    c.r[8] = wp::rd32(ea);
    goto L_801c9e44;
L_801c9e40:
    ea = c.r[30] + 0x284u;
    c.r[8] = wp::rd32(ea);
L_801c9e44:
    ea = c.r[30] + 0x294u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x288u;
    wp::wr32(ea, c.r[8]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801c9f20;
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x284u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[30] + 0x27cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801c9ea8;
    c.r[3] = 0x0u;
    goto L_801c9eb0;
L_801c9ea8:
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[0] & 0x7fu;
L_801c9eb0:
    c.r[3] = c.r[3] & 0xffu;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 1)) goto L_801c9ee4;
    c.r[0] = c.r[3] + 0xfffffff1u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801c9ee4;
    wp::compare_signed(c, 0, c.r[3], 0xdu);
    if (wp::cr_get(c, 2)) goto L_801c9ef0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801c9ee4;
    c.lr = 0x801c9ee0u;
    f_801c7c5c(c);
R_801c9ee0:
    goto L_801c9ef0;
L_801c9ee4:
    c.r[3] = c.r[1] + 0x28u;
    c.lr = 0x801c9eecu;
    f_801c8eec(c);
R_801c9eec:
    WP_POLL(c);
    goto L_801c9eb0;
L_801c9ef0:
    ea = c.r[1] + 0x30u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x44u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x2u;
    c.r[3] = wp::sign_extend16(wp::rd16(ea));
    c.r[4] = c.r[4] + c.r[3];
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x294u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x298u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[30] + 0x29cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x2a0u;
    wp::wr32(ea, c.r[4]);
    goto L_801c9f28;
L_801c9f20:
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x2a0u;
    wp::wr32(ea, c.r[0]);
L_801c9f28:
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x284u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x288u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x27cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801c9f80;
    c.r[27] = 0x0u;
    goto L_801c9f88;
L_801c9f80:
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[27] = c.r[0] & 0x7fu;
L_801c9f88:
    c.r[3] = c.r[27] & 0xffu;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 1)) goto L_801ca0b4;
    wp::compare_signed(c, 0, c.r[3], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801c9fc4;
    wp::compare_signed(c, 0, c.r[3], 0xcu);
    if (wp::cr_get(c, 2)) goto L_801c9fe4;
    wp::compare_signed(c, 0, c.r[3], 0xfu);
    if (wp::cr_get(c, 2)) goto L_801ca004;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ca0b4;
    wp::compare_signed(c, 0, c.r[3], 0xdu);
    if (wp::cr_get(c, 2)) goto L_801ca0b4;
    goto L_801ca0ac;
L_801c9fc4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[30] + 0x294u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x801c9fd8u;
    f_801c7c74(c);
R_801c9fd8:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801ca0c4;
    goto L_801ca0b4;
L_801c9fe4:
    ea = c.r[1] + 0x30u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0xcu;
    ea = c.r[30] + 0x294u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x801c9ff8u;
    f_801c7c74(c);
R_801c9ff8:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801ca0c4;
    goto L_801ca0b4;
L_801ca004:
    ea = c.r[1] + 0x30u;
    c.r[29] = wp::rd32(ea);
    c.r[28] = 0x0u;
    ea = c.r[30] + 0x294u;
    c.r[31] = wp::rd32(ea);
    c.r[27] = c.r[29] | c.r[29];
    goto L_801ca040;
L_801ca018:
    ea = c.r[27] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x801ca028u;
    f_801c7c74(c);
R_801ca028:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ca038;
    c.r[0] = 0x1u;
    goto L_801ca050;
L_801ca038:
    c.r[27] = c.r[27] + 0x4u;
    c.r[28] = c.r[28] + 0x1u;
L_801ca040:
    ea = c.r[29] + 0x2u;
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[28], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ca018;
    }
    c.r[0] = 0x0u;
L_801ca050:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ca0b4;
    ea = c.r[1] + 0x30u;
    c.r[28] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = c.r[28] | c.r[28];
    c.lr = 0x801ca06cu;
    f_801c95f0(c);
R_801ca06c:
    ea = c.r[30] + 0x288u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[28] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x298u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + c.r[5];
    wp::wr32(ea, c.r[0]);
    c.r[4] = ea;
    ea = c.r[30] + 0x294u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x29cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x14u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    c.lr = 0x801ca0a8u;
    f_801c9cf4(c);
R_801ca0a8:
    goto L_801ca0b4;
L_801ca0ac:
    c.lr = 0x801ca0b0u;
    f_801c7c5c(c);
R_801ca0b0:
    goto L_801ca0c4;
L_801ca0b4:
    c.r[3] = c.r[1] + 0x28u;
    c.lr = 0x801ca0bcu;
    f_801c8eec(c);
R_801ca0bc:
    c.r[27] = c.r[3] | c.r[3];
    WP_POLL(c);
    goto L_801c9f88;
L_801ca0c4:
    c.r[0] = c.r[27] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801ca160;
    ea = c.r[1] + 0x30u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801ca0e4u;
    f_801c95f0(c);
R_801ca0e4:
    ea = c.r[30] + 0x288u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x298u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + c.r[3];
    wp::wr32(ea, c.r[0]);
    c.r[4] = ea;
    ea = c.r[30] + 0x294u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x29cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x294u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801ca134;
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x298u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[0]);
    goto L_801ca144;
L_801ca134:
    ea = c.r[30] + 0x298u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801ca144:
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    c.lr = 0x801ca15cu;
    f_801c9cf4(c);
R_801ca15c:
    goto L_801ca1ec;
L_801ca160:
    ea = c.r[1] + 0x30u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801ca174u;
    f_801c95f0(c);
R_801ca174:
    ea = c.r[30] + 0x288u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0xau;
    c.r[3] = wp::sign_extend16(wp::rd16(ea));
    ea = c.r[30] + 0x298u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + c.r[3];
    wp::wr32(ea, c.r[0]);
    c.r[4] = ea;
    ea = c.r[30] + 0x294u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x29cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x294u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801ca1c4;
    c.r[0] = c.r[4] + 0x10u;
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x298u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[4] + 0x10u;
    wp::wr32(ea, c.r[0]);
    goto L_801ca1d4;
L_801ca1c4:
    ea = c.r[30] + 0x298u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[4] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801ca1d4:
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0x24u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[5] + c.r[0];
    c.lr = 0x801ca1ecu;
    f_801c9cf4(c);
L_801ca1ec:
R_801ca1ec:
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_801ca200(wp::Cpu& c) {
    WP_ENTER(0x801ca200u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ca330u: goto R_801ca330;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffd40u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x2c4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x24cu;
    for (uint32_t k = 13; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    ea = c.r[1] + 0xf8u;
    wp::wrf64(ea, c.f[14]);
    c.r[3] = c.r[1] + 0x100u;
    ea = c.r[3];
    wp::store_quantized(c, 14, ea, 0, 0, q);
    ea = c.r[1] + 0x108u;
    wp::wrf64(ea, c.f[15]);
    c.r[3] = c.r[1] + 0x110u;
    ea = c.r[3];
    wp::store_quantized(c, 15, ea, 0, 0, q);
    ea = c.r[1] + 0x118u;
    wp::wrf64(ea, c.f[16]);
    c.r[3] = c.r[1] + 0x120u;
    ea = c.r[3];
    wp::store_quantized(c, 16, ea, 0, 0, q);
    ea = c.r[1] + 0x128u;
    wp::wrf64(ea, c.f[17]);
    c.r[3] = c.r[1] + 0x130u;
    ea = c.r[3];
    wp::store_quantized(c, 17, ea, 0, 0, q);
    ea = c.r[1] + 0x138u;
    wp::wrf64(ea, c.f[18]);
    c.r[3] = c.r[1] + 0x140u;
    ea = c.r[3];
    wp::store_quantized(c, 18, ea, 0, 0, q);
    ea = c.r[1] + 0x148u;
    wp::wrf64(ea, c.f[19]);
    c.r[3] = c.r[1] + 0x150u;
    ea = c.r[3];
    wp::store_quantized(c, 19, ea, 0, 0, q);
    ea = c.r[1] + 0x158u;
    wp::wrf64(ea, c.f[20]);
    c.r[3] = c.r[1] + 0x160u;
    ea = c.r[3];
    wp::store_quantized(c, 20, ea, 0, 0, q);
    ea = c.r[1] + 0x168u;
    wp::wrf64(ea, c.f[21]);
    c.r[3] = c.r[1] + 0x170u;
    ea = c.r[3];
    wp::store_quantized(c, 21, ea, 0, 0, q);
    ea = c.r[1] + 0x178u;
    wp::wrf64(ea, c.f[22]);
    c.r[3] = c.r[1] + 0x180u;
    ea = c.r[3];
    wp::store_quantized(c, 22, ea, 0, 0, q);
    ea = c.r[1] + 0x188u;
    wp::wrf64(ea, c.f[23]);
    c.r[3] = c.r[1] + 0x190u;
    ea = c.r[3];
    wp::store_quantized(c, 23, ea, 0, 0, q);
    ea = c.r[1] + 0x198u;
    wp::wrf64(ea, c.f[24]);
    c.r[3] = c.r[1] + 0x1a0u;
    ea = c.r[3];
    wp::store_quantized(c, 24, ea, 0, 0, q);
    ea = c.r[1] + 0x1a8u;
    wp::wrf64(ea, c.f[25]);
    c.r[3] = c.r[1] + 0x1b0u;
    ea = c.r[3];
    wp::store_quantized(c, 25, ea, 0, 0, q);
    ea = c.r[1] + 0x1b8u;
    wp::wrf64(ea, c.f[26]);
    c.r[3] = c.r[1] + 0x1c0u;
    ea = c.r[3];
    wp::store_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x1c8u;
    wp::wrf64(ea, c.f[27]);
    c.r[3] = c.r[1] + 0x1d0u;
    ea = c.r[3];
    wp::store_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x1d8u;
    wp::wrf64(ea, c.f[28]);
    c.r[3] = c.r[1] + 0x1e0u;
    ea = c.r[3];
    wp::store_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x1e8u;
    wp::wrf64(ea, c.f[29]);
    c.r[3] = c.r[1] + 0x1f0u;
    ea = c.r[3];
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x1f8u;
    wp::wrf64(ea, c.f[30]);
    c.r[3] = c.r[1] + 0x200u;
    ea = c.r[3];
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x208u;
    wp::wrf64(ea, c.f[31]);
    c.r[3] = c.r[1] + 0x210u;
    ea = c.r[3];
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.r[3] = wp::mfcr(c);
    ea = c.r[1] + 0x298u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x29cu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x2a4u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x2a8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x2acu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x2b0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x2b4u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x801ca330u;
    f_801c9df8(c);
R_801ca330:
    c.r[0] = c.r[0] | 0x0u;
    ea = c.r[1] + 0x2c4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x2c0u;
    return;
}

void f_801ca344(wp::Cpu& c) {
    WP_ENTER(0x801ca344u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    ea = c.r[3] + 0x8u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.r[3] = c.r[0] | c.r[0];
    c.r[4] = 0xffffffffu;
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_801ca370(wp::Cpu& c) {
    WP_ENTER(0x801ca370u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0xcbcu;
    return;
}

void f_801ca37c(wp::Cpu& c) {
    WP_ENTER(0x801ca37cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ca3bcu: goto R_801ca3bc;
        case 0x801ca3d4u: goto R_801ca3d4;
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
    c.r[30] = 0x3u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = 0x80230000u;
    c.r[29] = c.r[29] + 0xcd0u;
    goto L_801ca3fc;
L_801ca3a8:
    ea = c.r[29] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ca3bc;
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801ca3bcu;
    f_801cc114(c);
L_801ca3bc:
R_801ca3bc:
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[29] + 0x4cu;
    c.r[29] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ca3d8;
    c.lr = 0x801ca3d4u;
    f_80049170(c);
R_801ca3d4:
    goto L_801ca3fc;
L_801ca3d8:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[0] = (wp::rotl(c.r[30], 22) & 0x1c00000u) | (c.r[0] & 0xfe3fffffu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ca3fc;
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ca3fc;
    ea = c.r[3] + 0x4cu;
    wp::wr32(ea, c.r[31]);
L_801ca3fc:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ca3a8;
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

void f_801ca420(wp::Cpu& c) {
    WP_ENTER(0x801ca420u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ca458u: goto R_801ca458;
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
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0x80230000u;
    c.r[30] = c.r[30] + 0xcd0u;
    goto L_801ca468;
L_801ca444:
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ca464;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801ca458u;
    f_801cc1d0(c);
R_801ca458:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ca464;
    c.r[31] = 0xffffffffu;
L_801ca464:
    ea = c.r[30] + 0x4cu;
    c.r[30] = wp::rd32(ea);
L_801ca468:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ca444;
    }
    c.r[3] = c.r[31] | c.r[31];
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

void f_801ca48c(wp::Cpu& c) {
    WP_ENTER(0x801ca48cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ca4d4u: goto R_801ca4d4;
        case 0x801ca4fcu: goto R_801ca4fc;
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
    c.r[31] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[0]);
    goto L_801ca504;
L_801ca4c0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[30] | c.r[30];
    c.r[6] = 0xau;
    c.r[5] = 0x0u;
    c.lr = 0x801ca4d4u;
    f_801c8640(c);
R_801ca4d4:
    ea = c.r[29] + 0x4u;
    c.r[8] = wp::rd8(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[6] = 0xau;
    c.r[5] = 0x0u;
    c.r[7] = c.r[29] + c.r[8];
    c.r[0] = c.r[8] + 0x1u;
    ea = c.r[7] + 0x5u;
    wp::wr8(ea, c.r[4]);
    c.r[4] = c.r[30] | c.r[30];
    ea = c.r[29] + 0x4u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x801ca4fcu;
    f_801c841c(c);
R_801ca4fc:
    c.r[30] = c.r[4] | c.r[4];
    c.r[31] = c.r[3] | c.r[3];
L_801ca504:
    c.r[0] = c.r[30] | c.r[31];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ca4c0;
    }
    ea = c.r[29] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[29] + 0x5u;
    c.r[3] = c.r[29] + c.r[0];
    c.r[3] = c.r[3] + 0x5u;
    goto L_801ca534;
L_801ca520:
    ea = c.r[4] + 0x0u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[5]);
L_801ca534:
    c.r[3] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ca520;
    }
    ea = c.r[29] + 0x4u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0x2u;
    wp::wr16(ea, c.r[0]);
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

void f_801ca568(wp::Cpu& c) {
    WP_ENTER(0x801ca568u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[6] = 0xcccd0000u;
    ea = c.r[4] + 0x4u;
    c.r[8] = wp::rd8(ea);
    c.r[9] = c.r[6] + 0xffffcccdu;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[31]);
    c.r[0] = c.r[1] + 0x8u;
    ea = c.r[5] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[11] = 0x0u;
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[30]);
    c.r[12] = c.r[8] + c.r[7];
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[29]);
    c.r[12] = c.r[12] + 0xffffffffu;
    c.r[6] = c.r[0] + c.r[12];
    c.r[6] = c.r[6] + 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[11]);
    c.r[0] = c.r[6] | c.r[6];
    goto L_801ca6d8;
L_801ca5ac:
    ea = c.r[5] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[31] = c.r[7] + 0xffffffffu;
    c.r[7] = c.r[12] - c.r[31];
    c.r[30] = wp::add_carry(c, c.r[7], 0xffffffffu, 0);
    wp::record(c, c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_801ca5c8;
    c.r[30] = 0x0u;
    c.r[31] = c.r[12] + 0xffffffffu;
L_801ca5c8:
    ea = c.r[4] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[8] = c.r[5] + c.r[31];
    c.r[31] = c.r[31] + 0x1u;
    c.r[10] = c.r[4] + c.r[30];
    c.r[7] = c.r[7] - c.r[30];
    c.r[29] = c.r[8] + 0x5u;
    wp::compare_signed(c, 0, c.r[31], c.r[7]);
    c.r[30] = c.r[10] + 0x5u;
    if (!wp::cr_get(c, 1)) goto L_801ca5f0;
    c.r[31] = c.r[7] | c.r[7];
L_801ca5f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801ca6b8;
    c.r[7] = wp::rotl(c.r[31], 29) & 0x1fffffffu;
    wp::record(c, c.r[7]);
    c.ctr = c.r[7];
    if (wp::cr_get(c, 2)) goto L_801ca698;
L_801ca604:
    ea = c.r[30] + 0x0u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0x0u;
    c.r[8] = wp::rd8(ea);
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x1u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xffffffffu;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x2u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffffeu;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x3u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffffdu;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x4u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffffcu;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x5u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffffbu;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x6u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffffau;
    c.r[8] = wp::rd8(ea);
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    ea = c.r[30] + 0x7u;
    c.r[10] = wp::rd8(ea);
    ea = c.r[29] + 0xfffffff9u;
    c.r[8] = wp::rd8(ea);
    c.r[30] = c.r[30] + 0x8u;
    c.r[29] = c.r[29] + 0xfffffff8u;
    c.r[11] = c.r[11] + c.r[7];
    c.r[7] = c.r[10] * c.r[8];
    c.r[11] = c.r[11] + c.r[7];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ca604;
    }
    c.r[31] = c.r[31] & 0x7u;
    wp::record(c, c.r[31]);
    if (wp::cr_get(c, 2)) goto L_801ca6b8;
L_801ca698:
    c.ctr = c.r[31];
L_801ca69c:
    ea = c.r[30] + 0x0u;
    c.r[10] = wp::rd8(ea);
    c.r[30] = c.r[30] + 0x1u;
    ea = c.r[29] + 0x0u;
    c.r[8] = wp::rd8(ea);
    c.r[29] = c.r[29] + 0xffffffffu;
    c.r[7] = c.r[10] * c.r[8];
    c.r[11] = c.r[11] + c.r[7];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ca69c;
    }
L_801ca6b8:
    c.r[8] = wp::mulhwu(c.r[9], c.r[11]);
    c.r[12] = c.r[12] + 0xffffffffu;
    c.r[7] = c.r[8] | c.r[8];
    c.r[8] = wp::rotl(c.r[8], 29) & 0x1fffffffu;
    c.r[8] = c.r[8] * 0xau;
    c.r[8] = c.r[11] - c.r[8];
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[8]);
    c.r[6] = ea;
    c.r[11] = wp::rotl(c.r[7], 29) & 0x1fffffffu;
L_801ca6d8:
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801ca5ac;
    }
    ea = c.r[4] + 0x2u;
    c.r[7] = wp::sign_extend16(wp::rd16(ea));
    wp::compare_signed(c, 0, c.r[11], 0x0u);
    ea = c.r[5] + 0x2u;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    c.r[4] = c.r[7] + c.r[4];
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_801ca708;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[11]);
    c.r[6] = ea;
    c.r[4] = wp::sign_extend16(c.r[4]);
    c.r[4] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[4]);
L_801ca708:
    c.r[7] = 0x0u;
    goto L_801ca724;
L_801ca710:
    c.r[4] = c.r[3] + c.r[7];
    ea = c.r[6] + 0x0u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[4] + 0x5u;
    wp::wr8(ea, c.r[5]);
    c.r[7] = c.r[7] + 0x1u;
    c.r[6] = c.r[6] + 0x1u;
L_801ca724:
    wp::compare_signed(c, 0, c.r[7], 0x24u);
    if (!wp::cr_get(c, 0)) goto L_801ca734;
    wp::compare_unsigned(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ca710;
    }
L_801ca734:
    wp::compare_unsigned(c, 0, c.r[6], c.r[0]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801ca7dc;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], 0x5u);
    if (wp::cr_get(c, 0)) goto L_801ca7dc;
    if (!wp::cr_get(c, 2)) goto L_801ca784;
    c.r[5] = c.r[6] + 0x1u;
    c.r[4] = c.r[0] - c.r[5];
    c.ctr = c.r[4];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801ca778;
L_801ca764:
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ca784;
    c.r[5] = c.r[5] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ca764;
    }
L_801ca778:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ca7dc;
L_801ca784:
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd8(ea);
    c.r[6] = c.r[3] + 0x5u;
    c.r[0] = 0x0u;
    c.r[5] = c.r[6] + c.r[4];
    c.r[5] = c.r[5] + 0xffffffffu;
L_801ca798:
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], 0x9u);
    if (!wp::cr_get(c, 0)) goto L_801ca7b0;
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    goto L_801ca7dc;
L_801ca7b0:
    wp::compare_unsigned(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801ca7d0;
    c.r[0] = 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x2u;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[0]);
    goto L_801ca7dc;
L_801ca7d0:
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[5] = c.r[5] + 0xffffffffu;
    WP_POLL(c);
    goto L_801ca798;
L_801ca7dc:
    ea = c.r[1] + 0x5cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    c.r[29] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_801ca7f0(wp::Cpu& c) {
    WP_ENTER(0x801ca7f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[5]);
    c.r[7] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    goto L_801ca81c;
L_801ca804:
    ea = c.r[4] + 0x0u;
    c.r[6] = wp::rd8(ea);
    c.r[5] = c.r[3] + c.r[7];
    c.r[4] = c.r[4] + 0x1u;
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = c.r[6] + 0xffffffd0u;
    ea = c.r[5] + 0x5u;
    wp::wr8(ea, c.r[0]);
L_801ca81c:
    wp::compare_signed(c, 0, c.r[7], 0x24u);
    if (!wp::cr_get(c, 0)) goto L_801ca830;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ca804;
    }
L_801ca830:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[7]);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) return;
    wp::compare_signed(c, 0, c.r[0], 0x5u);
    if (wp::cr_get(c, 0)) return;
    if (wp::cr_get(c, 1)) goto L_801ca880;
    c.r[5] = c.r[4] + 0x1u;
    goto L_801ca864;
L_801ca854:
    c.r[0] = wp::sign_extend8(c.r[4]);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801ca880;
    c.r[5] = c.r[5] + 0x1u;
L_801ca864:
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[4]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ca854;
    }
    c.r[4] = c.r[7] + c.r[3];
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) return;
L_801ca880:
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd8(ea);
    c.r[6] = c.r[3] + 0x5u;
    c.r[0] = 0x0u;
    c.r[5] = c.r[6] + c.r[4];
    c.r[5] = c.r[5] + 0xffffffffu;
L_801ca894:
    ea = c.r[5] + 0x0u;
    c.r[4] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], 0x9u);
    if (!wp::cr_get(c, 0)) goto L_801ca8ac;
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    return;
L_801ca8ac:
    wp::compare_unsigned(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801ca8cc;
    c.r[0] = 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[3] + 0x2u;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[0]);
    return;
L_801ca8cc:
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[5] = c.r[5] + 0xffffffffu;
    WP_POLL(c);
    goto L_801ca894;
    return;
}

void f_801ca8dc(wp::Cpu& c) {
    WP_ENTER(0x801ca8dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ca92cu: goto R_801ca92c;
        case 0x801ca944u: goto R_801ca944;
        case 0x801ca95cu: goto R_801ca95c;
        case 0x801ca974u: goto R_801ca974;
        case 0x801ca98cu: goto R_801ca98c;
        case 0x801ca9a4u: goto R_801ca9a4;
        case 0x801ca9bcu: goto R_801ca9bc;
        case 0x801ca9d4u: goto R_801ca9d4;
        case 0x801ca9ecu: goto R_801ca9ec;
        case 0x801caa04u: goto R_801caa04;
        case 0x801caa1cu: goto R_801caa1c;
        case 0x801caa34u: goto R_801caa34;
        case 0x801caa4cu: goto R_801caa4c;
        case 0x801caa64u: goto R_801caa64;
        case 0x801caa7cu: goto R_801caa7c;
        case 0x801caa94u: goto R_801caa94;
        case 0x801caaacu: goto R_801caaac;
        case 0x801caac4u: goto R_801caac4;
        case 0x801caadcu: goto R_801caadc;
        case 0x801caaf4u: goto R_801caaf4;
        case 0x801cab0cu: goto R_801cab0c;
        case 0x801cab24u: goto R_801cab24;
        case 0x801cab34u: goto R_801cab34;
        case 0x801cabb4u: goto R_801cabb4;
        case 0x801cabd0u: goto R_801cabd0;
        case 0x801cabe0u: goto R_801cabe0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] + 0x40u;
    wp::compare_unsigned(c, 0, c.r[0], 0x48u);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    if (wp::cr_get(c, 1)) goto L_801cab10;
    c.r[5] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[5] = c.r[5] + 0xe10u;
    ea = c.r[5] + c.r[0];
    c.r[5] = wp::rd32(ea);
    c.ctr = c.r[5];
    switch (c.ctr) {
    case 0x801ca91cu: goto L_801ca91c;
    case 0x801ca930u: goto L_801ca930;
    case 0x801ca948u: goto L_801ca948;
    case 0x801ca960u: goto L_801ca960;
    case 0x801ca978u: goto L_801ca978;
    case 0x801ca990u: goto L_801ca990;
    case 0x801ca9a8u: goto L_801ca9a8;
    case 0x801ca9c0u: goto L_801ca9c0;
    case 0x801ca9d8u: goto L_801ca9d8;
    case 0x801ca9f0u: goto L_801ca9f0;
    case 0x801caa08u: goto L_801caa08;
    case 0x801caa20u: goto L_801caa20;
    case 0x801caa38u: goto L_801caa38;
    case 0x801caa50u: goto L_801caa50;
    case 0x801caa68u: goto L_801caa68;
    case 0x801caa80u: goto L_801caa80;
    case 0x801caa98u: goto L_801caa98;
    case 0x801caab0u: goto L_801caab0;
    case 0x801caac8u: goto L_801caac8;
    case 0x801caae0u: goto L_801caae0;
    case 0x801caaf8u: goto L_801caaf8;
    case 0x801cab10u: goto L_801cab10;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801ca91c:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xffffffecu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.lr = 0x801ca92cu;
    f_801ca7f0(c);
R_801ca92c:
    goto L_801cabe0;
L_801ca930:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffff0u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x2eu;
    c.lr = 0x801ca944u;
    f_801ca7f0(c);
R_801ca944:
    goto L_801cabe0;
L_801ca948:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffff6u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x55u;
    c.lr = 0x801ca95cu;
    f_801ca7f0(c);
R_801ca95c:
    goto L_801cabe0;
L_801ca960:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffbu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x6du;
    c.lr = 0x801ca974u;
    f_801ca7f0(c);
R_801ca974:
    goto L_801cabe0;
L_801ca978:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffdu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x7au;
    c.lr = 0x801ca98cu;
    f_801ca7f0(c);
R_801ca98c:
    goto L_801cabe0;
L_801ca990:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffdu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x81u;
    c.lr = 0x801ca9a4u;
    f_801ca7f0(c);
R_801ca9a4:
    goto L_801cabe0;
L_801ca9a8:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffeu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x87u;
    c.lr = 0x801ca9bcu;
    f_801ca7f0(c);
R_801ca9bc:
    goto L_801cabe0;
L_801ca9c0:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffeu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x8du;
    c.lr = 0x801ca9d4u;
    f_801ca7f0(c);
R_801ca9d4:
    goto L_801cabe0;
L_801ca9d8:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xfffffffeu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x92u;
    c.lr = 0x801ca9ecu;
    f_801ca7f0(c);
R_801ca9ec:
    goto L_801cabe0;
L_801ca9f0:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x96u;
    c.lr = 0x801caa04u;
    f_801ca7f0(c);
R_801caa04:
    goto L_801cabe0;
L_801caa08:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x9au;
    c.lr = 0x801caa1cu;
    f_801ca7f0(c);
R_801caa1c:
    goto L_801cabe0;
L_801caa20:
    c.r[4] = 0x80200000u;
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x9du;
    c.lr = 0x801caa34u;
    f_801ca7f0(c);
R_801caa34:
    goto L_801cabe0;
L_801caa38:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0x9fu;
    c.lr = 0x801caa4cu;
    f_801ca7f0(c);
R_801caa4c:
    goto L_801cabe0;
L_801caa50:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xa1u;
    c.lr = 0x801caa64u;
    f_801ca7f0(c);
R_801caa64:
    goto L_801cabe0;
L_801caa68:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xa3u;
    c.lr = 0x801caa7cu;
    f_801ca7f0(c);
R_801caa7c:
    goto L_801cabe0;
L_801caa80:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xa5u;
    c.lr = 0x801caa94u;
    f_801ca7f0(c);
R_801caa94:
    goto L_801cabe0;
L_801caa98:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x1u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xa7u;
    c.lr = 0x801caaacu;
    f_801ca7f0(c);
R_801caaac:
    goto L_801cabe0;
L_801caab0:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x1u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xaau;
    c.lr = 0x801caac4u;
    f_801ca7f0(c);
R_801caac4:
    goto L_801cabe0;
L_801caac8:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x1u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xadu;
    c.lr = 0x801caadcu;
    f_801ca7f0(c);
R_801caadc:
    goto L_801cabe0;
L_801caae0:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x2u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xb0u;
    c.lr = 0x801caaf4u;
    f_801ca7f0(c);
R_801caaf4:
    goto L_801cabe0;
L_801caaf8:
    c.r[4] = 0x80200000u;
    c.r[5] = 0x2u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[4] = c.r[4] + 0xb4u;
    c.lr = 0x801cab0cu;
    f_801ca7f0(c);
R_801cab0c:
    goto L_801cabe0;
L_801cab10:
    c.r[0] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[3] = c.r[1] + 0x34u;
    c.r[0] = c.r[0] + c.r[4];
    c.r[4] = wp::sraw(c, c.r[0], 1);
    c.lr = 0x801cab24u;
    f_801ca8dc(c);
R_801cab24:
    c.r[4] = c.r[1] + 0x34u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[4] | c.r[4];
    c.lr = 0x801cab34u;
    f_801ca568(c);
R_801cab34:
    c.r[0] = c.r[30] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cabe0;
    ea = c.r[31] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[31] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[31] + 0x28u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0x30u;
    wp::wr16(ea, c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801cabb8;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[1] + 0x34u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[4] + 0xa1u;
    c.lr = 0x801cabb4u;
    f_801ca7f0(c);
R_801cabb4:
    goto L_801cabd0;
L_801cabb8:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[1] + 0x34u;
    c.r[4] = c.r[4] + 0x6f80u;
    c.r[5] = 0xffffffffu;
    c.r[4] = c.r[4] + 0x9du;
    c.lr = 0x801cabd0u;
    f_801ca7f0(c);
L_801cabd0:
R_801cabd0:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    c.r[5] = c.r[1] + 0x34u;
    c.lr = 0x801cabe0u;
    f_801ca568(c);
L_801cabe0:
R_801cabe0:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x6cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_801cabf8(wp::Cpu& c) {
    WP_ENTER(0x801cabf8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x5u;
    c.r[5] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cac14;
    ea = c.r[4] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
L_801cac14:
    ea = c.r[4] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cac2c;
    c.r[0] = wp::cntlzw(c.r[5]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    return;
L_801cac2c:
    ea = c.r[3] + 0x2u;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::sign_extend16(wp::rd16(ea));
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cacd4;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd8(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[7] | c.r[7];
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801cac54;
    c.r[9] = c.r[0] | c.r[0];
L_801cac54:
    c.r[8] = 0x0u;
    c.ctr = c.r[9];
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801cac8c;
L_801cac64:
    c.r[6] = c.r[3] + c.r[8];
    c.r[5] = c.r[4] + c.r[8];
    ea = c.r[6] + 0x5u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[5] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cac84;
    c.r[3] = 0x0u;
    return;
L_801cac84:
    c.r[8] = c.r[8] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cac64;
    }
L_801cac8c:
    wp::compare_signed(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 2)) goto L_801cac98;
    c.r[3] = c.r[4] | c.r[4];
L_801cac98:
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd8(ea);
    c.r[0] = c.r[4] - c.r[8];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[8], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_801caccc;
L_801cacac:
    c.r[4] = c.r[3] + c.r[8];
    ea = c.r[4] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cacc4;
    c.r[3] = 0x0u;
    return;
L_801cacc4:
    c.r[8] = c.r[8] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cacac;
    }
L_801caccc:
    c.r[3] = 0x1u;
    return;
L_801cacd4:
    c.r[3] = 0x0u;
    return;
}

void f_801cacdc(wp::Cpu& c) {
    WP_ENTER(0x801cacdcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cacfc;
    ea = c.r[4] + 0x5u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
L_801cacfc:
    ea = c.r[4] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cad10;
    c.r[3] = 0x0u;
    return;
L_801cad10:
    ea = c.r[4] + 0x2u;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::sign_extend16(wp::rd16(ea));
    wp::compare_signed(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 2)) goto L_801cadc4;
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd8(ea);
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[9] = c.r[7] | c.r[7];
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801cad38;
    c.r[9] = c.r[0] | c.r[0];
L_801cad38:
    c.r[8] = 0x0u;
    c.ctr = c.r[9];
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801cad80;
L_801cad48:
    c.r[6] = c.r[4] + c.r[8];
    c.r[5] = c.r[3] + c.r[8];
    ea = c.r[6] + 0x5u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[5] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801cad68;
    c.r[3] = 0x1u;
    return;
L_801cad68:
    wp::compare_unsigned(c, 0, c.r[6], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801cad78;
    c.r[3] = 0x0u;
    return;
L_801cad78:
    c.r[8] = c.r[8] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cad48;
    }
L_801cad80:
    wp::compare_signed(c, 0, c.r[9], c.r[7]);
    if (!wp::cr_get(c, 2)) goto L_801cadbc;
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] - c.r[8];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[8], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_801cadbc;
L_801cad9c:
    c.r[3] = c.r[4] + c.r[8];
    ea = c.r[3] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cadb4;
    c.r[3] = 0x1u;
    return;
L_801cadb4:
    c.r[8] = c.r[8] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cad9c;
    }
L_801cadbc:
    c.r[3] = 0x0u;
    return;
L_801cadc4:
    c.r[0] = c.r[5] ^ c.r[0];
    c.r[3] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[5];
    c.r[0] = c.r[3] - c.r[0];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    return;
}

void f_801caddc(wp::Cpu& c) {
    WP_ENTER(0x801caddcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[4] + 0xcu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[4] + 0x8u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[4] + 0x4u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[4] + 0x0u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[4] + 0x10u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[4] + 0x14u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[4] + 0x18u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[4] + 0x1cu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[4] + 0x20u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[4] + 0x24u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[4] + 0x28u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[12]);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[3] + 0x28u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[5] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb2a4;
    ea = c.r[3] + 0x4u;
    c.r[8] = wp::rd8(ea);
    ea = c.r[5] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801cae64;
    c.r[8] = c.r[0] | c.r[0];
L_801cae64:
    ea = c.r[5] + 0x2u;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[0] - c.r[4];
    c.r[8] = c.r[8] + c.r[0];
    wp::compare_signed(c, 0, c.r[8], 0x24u);
    if (!wp::cr_get(c, 1)) goto L_801cae80;
    c.r[8] = 0x24u;
L_801cae80:
    c.r[7] = 0x0u;
    goto L_801cae9c;
L_801cae88:
    ea = c.r[3] + 0x4u;
    c.r[6] = wp::rd8(ea);
    c.r[4] = c.r[3] + c.r[6];
    c.r[6] = c.r[6] + 0x1u;
    ea = c.r[4] + 0x5u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[6]);
L_801cae9c:
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[8]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cae88;
    }
    ea = c.r[5] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[4] = c.r[3] + 0x5u;
    c.r[6] = c.r[4] + c.r[8];
    c.r[7] = c.r[7] + c.r[0];
    wp::compare_signed(c, 0, c.r[7], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801caec4;
    c.r[6] = c.r[4] + c.r[7];
L_801caec4:
    c.r[7] = c.r[6] - c.r[4];
    c.r[9] = c.r[5] + 0x5u;
    c.r[7] = c.r[7] - c.r[0];
    c.r[10] = c.r[9] + c.r[7];
    c.r[11] = c.r[10] | c.r[10];
    goto L_801caffc;
L_801caedc:
    ea = c.r[6] + 0xffffffffu;
    c.r[8] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[10] + 0xffffffffu;
    c.r[7] = wp::rd8(ea);
    c.r[10] = ea;
    wp::compare_unsigned(c, 0, c.r[8], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801cafec;
    c.r[12] = c.r[6] + 0xffffffffu;
    goto L_801caef8;
L_801caef4:
    c.r[12] = c.r[12] + 0xffffffffu;
L_801caef8:
    ea = c.r[12] + 0x0u;
    c.r[7] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801caef4;
    }
    wp::compare_unsigned(c, 0, c.r[12], c.r[6]);
    c.r[8] = c.r[6] - c.r[12];
    if (wp::cr_get(c, 2)) goto L_801cafec;
    c.r[7] = wp::rotl(c.r[8], 29) & 0x1fffffffu;
    wp::record(c, c.r[7]);
    c.ctr = c.r[7];
    if (wp::cr_get(c, 2)) goto L_801cafcc;
L_801caf1c:
    ea = c.r[12] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x0u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x1u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x1u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x2u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x2u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x3u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x3u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x4u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x5u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x5u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x6u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x6u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x7u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    c.r[7] = c.r[7] & 0xffu;
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x7u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x8u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    ea = c.r[12] + 0x8u;
    wp::wr8(ea, c.r[7]);
    c.r[12] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801caf1c;
    }
    c.r[8] = c.r[8] & 0x7u;
    wp::record(c, c.r[8]);
    if (wp::cr_get(c, 2)) goto L_801cafec;
L_801cafcc:
    c.ctr = c.r[8];
L_801cafd0:
    ea = c.r[12] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xffffffffu;
    ea = c.r[12] + 0x0u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[12] + 0x1u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0xau;
    ea = c.r[12] + 0x1u;
    wp::wr8(ea, c.r[7]);
    c.r[12] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cafd0;
    }
L_801cafec:
    ea = c.r[10] + 0x0u;
    c.r[8] = wp::rd8(ea);
    ea = c.r[6] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[7] = c.r[7] - c.r[8];
    ea = c.r[6] + 0x0u;
    wp::wr8(ea, c.r[7]);
L_801caffc:
    wp::compare_unsigned(c, 0, c.r[6], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801cb00c;
    wp::compare_unsigned(c, 0, c.r[10], c.r[9]);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801caedc;
    }
L_801cb00c:
    ea = c.r[5] + 0x4u;
    c.r[8] = wp::rd8(ea);
    c.r[9] = c.r[11] - c.r[9];
    wp::compare_signed(c, 0, c.r[9], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801cb1a0;
    ea = c.r[11] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[10] = 0x0u;
    wp::compare_unsigned(c, 0, c.r[7], 0x5u);
    if (!wp::cr_get(c, 0)) goto L_801cb034;
    c.r[10] = 0x1u;
    goto L_801cb080;
L_801cb034:
    if (!wp::cr_get(c, 2)) goto L_801cb080;
    c.r[5] = c.r[5] + c.r[8];
    c.r[6] = c.r[11] + 0x1u;
    c.r[7] = c.r[5] + 0x5u;
    c.r[5] = c.r[7] - c.r[6];
    c.ctr = c.r[5];
    wp::compare_unsigned(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801cb068;
L_801cb054:
    ea = c.r[6] + 0x0u;
    c.r[5] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cb1a0;
    c.r[6] = c.r[6] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb054;
    }
L_801cb068:
    c.r[5] = c.r[4] + c.r[9];
    c.r[6] = c.r[0] + c.r[5];
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cb080;
    c.r[10] = 0x1u;
L_801cb080:
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb1a0;
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_801cb194;
    c.r[8] = c.r[6] + 0xffffffffu;
    goto L_801cb0a0;
L_801cb09c:
    c.r[8] = c.r[8] + 0xffffffffu;
L_801cb0a0:
    ea = c.r[8] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cb09c;
    }
    wp::compare_unsigned(c, 0, c.r[8], c.r[6]);
    c.r[5] = c.r[6] - c.r[8];
    if (wp::cr_get(c, 2)) goto L_801cb194;
    c.r[0] = wp::rotl(c.r[5], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801cb174;
L_801cb0c4:
    ea = c.r[8] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x1u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x2u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x3u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x3u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x4u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x5u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x6u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x6u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x7u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    c.r[7] = c.r[0] & 0xffu;
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x7u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x8u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    ea = c.r[8] + 0x8u;
    wp::wr8(ea, c.r[0]);
    c.r[8] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb0c4;
    }
    c.r[5] = c.r[5] & 0x7u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_801cb194;
L_801cb174:
    c.ctr = c.r[5];
L_801cb178:
    ea = c.r[8] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xffffffffu;
    ea = c.r[8] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[8] + 0x1u;
    c.r[7] = wp::rd8(ea);
    c.r[0] = c.r[7] + 0xau;
    ea = c.r[8] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[8] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb178;
    }
L_801cb194:
    ea = c.r[6] + 0x0u;
    c.r[5] = wp::rd8(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    ea = c.r[6] + 0x0u;
    wp::wr8(ea, c.r[0]);
L_801cb1a0:
    c.r[7] = c.r[4] | c.r[4];
    goto L_801cb1ac;
L_801cb1a8:
    c.r[7] = c.r[7] + 0x1u;
L_801cb1ac:
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cb1a8;
    }
    wp::compare_unsigned(c, 0, c.r[7], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801cb26c;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = c.r[7] - c.r[4];
    c.r[8] = c.r[6] & 0xffu;
    ea = c.r[3] + 0x2u;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[6] = c.r[4] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[7], c.r[6]);
    c.r[0] = c.r[5] - c.r[8];
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[0]);
    c.r[5] = c.r[6] - c.r[7];
    if (!wp::cr_get(c, 0)) goto L_801cb260;
    c.r[0] = wp::rotl(c.r[5], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801cb248;
L_801cb1f4:
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x2u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x3u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x3u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x4u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x5u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x6u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[4] + 0x6u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[7] + 0x7u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0x8u;
    ea = c.r[4] + 0x7u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[4] + 0x8u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb1f4;
    }
    c.r[5] = c.r[5] & 0x7u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_801cb260;
L_801cb248:
    c.ctr = c.r[5];
L_801cb24c:
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = c.r[7] + 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[4] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb24c;
    }
L_801cb260:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[0] - c.r[8];
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[0]);
L_801cb26c:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[3] + 0x5u;
    c.r[5] = c.r[4] + c.r[0];
    c.r[0] = c.r[5] - c.r[4];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801cb298;
L_801cb288:
    ea = c.r[5] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cb298;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb288;
    }
L_801cb298:
    c.r[4] = c.r[5] - c.r[4];
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[0]);
L_801cb2a4:
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[29] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801cb2b8(wp::Cpu& c) {
    WP_ENTER(0x801cb2b8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cb2e0u: goto R_801cb2e0;
        case 0x801cb320u: goto R_801cb320;
        case 0x801cb344u: goto R_801cb344;
        case 0x801cb374u: goto R_801cb374;
        case 0x801cb3c8u: goto R_801cb3c8;
        case 0x801cb3d4u: goto R_801cb3d4;
        case 0x801cb3d8u: goto R_801cb3d8;
        case 0x801cb3e8u: goto R_801cb3e8;
        case 0x801cb3f8u: goto R_801cb3f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x88u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[29]);
    c.lr = 0x801cb2e0u;
    f_801ccc0c(c);
R_801cb2e0:
    ea = c.r[2] + 0xffff9898u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    wp::compare_float(c, 0, c.f[0], c.f[31]);
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[31] = wp::sign_extend8(c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cb318;
    c.r[3] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[30] + 0x2u;
    wp::wr16(ea, c.r[3]);
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x5u;
    wp::wr8(ea, c.r[3]);
    goto L_801cb3fc;
L_801cb318:
    c.f[1] = c.f[31];
    c.lr = 0x801cb320u;
    f_801ccc24(c);
R_801cb320:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 1)) goto L_801cb35c;
    c.f[1] = c.f[31];
    c.r[3] = 0x0u;
    c.r[0] = 0x1u;
    ea = c.r[30] + 0x0u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[30] + 0x2u;
    wp::wr16(ea, c.r[3]);
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x801cb344u;
    f_801ccc24(c);
R_801cb344:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    c.r[0] = 0x49u;
    if (!wp::cr_get(c, 2)) goto L_801cb354;
    c.r[0] = 0x4eu;
L_801cb354:
    ea = c.r[30] + 0x5u;
    wp::wr8(ea, c.r[0]);
    goto L_801cb3fc;
L_801cb35c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb368;
    c.f[31] = -c.f[31];
L_801cb368:
    c.f[1] = c.f[31];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801cb374u;
    f_801d77ec(c);
R_801cb374:
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[1]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x14u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[0] = c.r[0] & ~c.r[4];
    c.r[3] = c.r[3] | 0x100000u;
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = wp::sub_carry(c, c.r[0], 0x20u);
    if (!wp::cr_get(c, 2)) goto L_801cb3b4;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[0] & ~c.r[3];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::sub_carry(c, c.r[0], 0x20u);
    c.r[4] = c.r[3] + 0x20u;
L_801cb3b4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[29] = wp::sub_carry(c, c.r[4], 0x35u);
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = c.r[0] - c.r[29];
    c.lr = 0x801cb3c8u;
    f_801ca8dc(c);
R_801cb3c8:
    c.f[1] = c.f[31];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801cb3d4u;
    f_801d7874(c);
R_801cb3d4:
    c.lr = 0x801cb3d8u;
    f_801c8904(c);
R_801cb3d8:
    c.r[5] = c.r[3] | c.r[3];
    c.r[6] = c.r[4] | c.r[4];
    c.r[3] = c.r[1] + 0x44u;
    c.lr = 0x801cb3e8u;
    f_801ca48c(c);
R_801cb3e8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x44u;
    c.r[5] = c.r[1] + 0x18u;
    c.lr = 0x801cb3f8u;
    f_801ca568(c);
R_801cb3f8:
    ea = c.r[30] + 0x0u;
    wp::wr8(ea, c.r[31]);
L_801cb3fc:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x84u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[29] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801cb41c(wp::Cpu& c) {
    WP_ENTER(0x801cb41cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cb440u: goto R_801cb440;
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
    ea = c.r[3] + 0x2u;
    c.r[31] = wp::sign_extend16(wp::rd16(ea));
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801cb440u;
    f_801cb2b8(c);
R_801cb440:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (wp::cr_get(c, 1)) goto L_801cb5a8;
    wp::compare_signed(c, 0, c.r[31], 0x24u);
    if (!wp::cr_get(c, 1)) goto L_801cb458;
    c.r[31] = 0x24u;
L_801cb458:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801cb544;
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801cb544;
    c.r[4] = c.r[30] + 0x5u;
    ea = c.r[4] + c.r[31];
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[4] + c.r[31];
    wp::compare_unsigned(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 1)) goto L_801cb488;
    c.r[4] = 0x1u;
    goto L_801cb4e4;
L_801cb488:
    if (!wp::cr_get(c, 0)) goto L_801cb494;
    c.r[4] = 0xffffffffu;
    goto L_801cb4e4;
L_801cb494:
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + c.r[0];
    c.r[0] = c.r[4] - c.r[3];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (!wp::cr_get(c, 0)) goto L_801cb4cc;
L_801cb4b0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb4c4;
    c.r[4] = 0x1u;
    goto L_801cb4e4;
L_801cb4c4:
    c.r[3] = c.r[3] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb4b0;
    }
L_801cb4cc:
    c.r[3] = c.r[31] + c.r[30];
    c.r[4] = 0xffffffffu;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cb4e4;
    c.r[4] = 0x1u;
L_801cb4e4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[31]);
    if (wp::cr_get(c, 0)) goto L_801cb544;
    c.r[4] = c.r[30] + 0x5u;
    c.r[0] = 0x0u;
    c.r[5] = c.r[4] + c.r[31];
    c.r[5] = c.r[5] + 0xffffffffu;
L_801cb500:
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x9u);
    if (!wp::cr_get(c, 0)) goto L_801cb518;
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    goto L_801cb544;
L_801cb518:
    wp::compare_unsigned(c, 0, c.r[5], c.r[4]);
    if (!wp::cr_get(c, 2)) goto L_801cb538;
    c.r[0] = 0x1u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x2u;
    c.r[3] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x2u;
    wp::wr16(ea, c.r[0]);
    goto L_801cb544;
L_801cb538:
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[5] = c.r[5] + 0xffffffffu;
    WP_POLL(c);
    goto L_801cb500;
L_801cb544:
    c.r[5] = 0x0u;
    goto L_801cb560;
L_801cb54c:
    ea = c.r[30] + 0x4u;
    c.r[4] = wp::rd8(ea);
    c.r[3] = c.r[30] + c.r[4];
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[30] + 0x4u;
    wp::wr8(ea, c.r[0]);
L_801cb560:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[31]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cb54c;
    }
    c.r[3] = c.r[3] + 0xffffffffu;
    ea = c.r[30] + 0x2u;
    c.r[0] = wp::sign_extend16(wp::rd16(ea));
    c.r[3] = wp::sign_extend16(c.r[3]);
    c.r[5] = 0x0u;
    c.r[0] = c.r[0] - c.r[3];
    ea = c.r[30] + 0x2u;
    wp::wr16(ea, c.r[0]);
    goto L_801cb59c;
L_801cb588:
    c.r[4] = c.r[30] + c.r[5];
    c.r[5] = c.r[5] + 0x1u;
    ea = c.r[4] + 0x5u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0x30u;
    ea = c.r[4] + 0x5u;
    wp::wr8(ea, c.r[0]);
L_801cb59c:
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cb588;
    }
L_801cb5a8:
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

void f_801cb5c0(wp::Cpu& c) {
    WP_ENTER(0x801cb5c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cb5dcu: goto R_801cb5dc;
        case 0x801cb618u: goto R_801cb618;
        case 0x801cb65cu: goto R_801cb65c;
        case 0x801cb684u: goto R_801cb684;
        case 0x801cb820u: goto R_801cb820;
        case 0x801cb82cu: goto R_801cb82c;
        case 0x801cb858u: goto R_801cb858;
        case 0x801cb9f0u: goto R_801cb9f0;
        case 0x801cba14u: goto R_801cba14;
        case 0x801cba24u: goto R_801cba24;
        case 0x801cba30u: goto R_801cba30;
        case 0x801cba50u: goto R_801cba50;
        case 0x801cba5cu: goto R_801cba5c;
        case 0x801cba70u: goto R_801cba70;
        case 0x801cbabcu: goto R_801cbabc;
        case 0x801cbaecu: goto R_801cbaec;
        case 0x801cbb00u: goto R_801cbb00;
        case 0x801cbb1cu: goto R_801cbb1c;
        case 0x801cbc88u: goto R_801cbc88;
        case 0x801cbc98u: goto R_801cbc98;
        case 0x801cbca4u: goto R_801cbca4;
        case 0x801cbcccu: goto R_801cbccc;
        case 0x801cbcfcu: goto R_801cbcfc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffe80u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x184u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x170u;
    ea = c.r[1] + 0x170u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x178u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.lr = 0x801cb5dcu;
    f_801c83a0(c);
R_801cb5dc:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = 0x43300000u;
    ea = c.r[1] + 0x128u;
    wp::wr32(ea, c.r[4]);
    c.r[27] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[1] + 0x130u;
    wp::wr32(ea, c.r[4]);
    if (!wp::cr_get(c, 2)) goto L_801cb61c;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cb60c;
    ea = c.r[2] + 0xffff98a0u;
    c.f[2] = wp::rdf64(ea);
    goto L_801cb610;
L_801cb60c:
    ea = c.r[2] + 0xffff98a8u;
    c.f[2] = wp::rdf64(ea);
L_801cb610:
    ea = c.r[2] + 0xffff9898u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801cb618u;
    f_801d75a8(c);
R_801cb618:
    goto L_801cbcec;
L_801cb61c:
    ea = c.r[3] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801cb63c;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801cb660;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801cb688;
    goto L_801cb6c8;
L_801cb63c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cb650;
    ea = c.r[2] + 0xffff98a0u;
    c.f[2] = wp::rdf64(ea);
    goto L_801cb654;
L_801cb650:
    ea = c.r[2] + 0xffff98a8u;
    c.f[2] = wp::rdf64(ea);
L_801cb654:
    ea = c.r[2] + 0xffff9898u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801cb65cu;
    f_801d75a8(c);
R_801cb65c:
    goto L_801cbcec;
L_801cb660:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cb674;
    ea = c.r[2] + 0xffff98a0u;
    c.f[2] = wp::rdf64(ea);
    goto L_801cb678;
L_801cb674:
    ea = c.r[2] + 0xffff98a8u;
    c.f[2] = wp::rdf64(ea);
L_801cb678:
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x801cb684u;
    f_801d75a8(c);
R_801cb684:
    goto L_801cbcec;
L_801cb688:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = 0x0u;
    c.r[3] = 0x7ff00000u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801cb6b4;
    c.r[0] = 0x80000000u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[0] | 0x7ff00000u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_801cb6b4:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x80000u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf64(ea);
    goto L_801cbcec;
L_801cb6c8:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x101u;
    ea = c.r[1] + 0x100u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.r[21] = wp::rd32(ea);
    ea = c.r[1] + 0x100u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x8u;
    c.r[12] = wp::rd32(ea);
    c.r[28] = c.r[4] + c.r[0];
    ea = c.r[3] + 0xcu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    c.r[10] = wp::rd32(ea);
    wp::compare_unsigned(c, 1, c.r[4], c.r[28]);
    ea = c.r[3] + 0x14u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[3] + 0x20u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x28u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0xfcu;
    wp::wr32(ea, c.r[21]);
    ea = c.r[1] + 0x104u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x108u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x10cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x110u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x114u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x118u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x11cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x120u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x124u;
    wp::wr16(ea, c.r[0]);
    if (!wp::cr_get(c, 4)) goto L_801cb7ec;
    c.r[0] = c.r[28] - c.r[4];
    c.r[3] = c.r[28] + 0xfffffff8u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801cb7c8;
    if (wp::cr_get(c, 5)) goto L_801cb7c8;
    c.r[0] = c.r[3] + 0x7u;
    c.r[0] = c.r[0] - c.r[4];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_801cb7c8;
L_801cb760:
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x1u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x2u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x3u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x3u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x4u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x5u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x6u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x6u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[4] + 0x7u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x7u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[4] + 0x8u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb760;
    }
L_801cb7c8:
    c.r[0] = c.r[28] - c.r[4];
    c.ctr = c.r[0];
    wp::compare_unsigned(c, 0, c.r[4], c.r[28]);
    if (!wp::cr_get(c, 0)) goto L_801cb7ec;
L_801cb7d8:
    ea = c.r[4] + 0x0u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[4] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[4] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb7d8;
    }
L_801cb7ec:
    ea = c.r[1] + 0x100u;
    c.r[3] = wp::rd8(ea);
    c.r[4] = 0x80200000u;
    c.r[4] = c.r[4] + 0x6f80u;
    ea = c.r[1] + 0xfeu;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[1] + 0xd0u;
    c.r[0] = wp::sign_extend16(c.r[0]);
    c.r[4] = c.r[4] + 0xb8u;
    c.r[0] = c.r[5] + c.r[0];
    ea = c.r[1] + 0xfeu;
    wp::wr16(ea, c.r[0]);
    c.r[29] = wp::sign_extend16(c.r[0]);
    c.r[5] = 0x134u;
    c.lr = 0x801cb820u;
    f_801ca7f0(c);
R_801cb820:
    c.r[3] = c.r[1] + 0xd0u;
    c.r[4] = c.r[1] + 0xfcu;
    c.lr = 0x801cb82cu;
    f_801cacdc(c);
R_801cb82c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb85c;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cb848;
    ea = c.r[2] + 0xffff98a0u;
    c.f[2] = wp::rdf64(ea);
    goto L_801cb84c;
L_801cb848:
    ea = c.r[2] + 0xffff98a8u;
    c.f[2] = wp::rdf64(ea);
L_801cb84c:
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    c.lr = 0x801cb858u;
    f_801d75a8(c);
R_801cb858:
    goto L_801cbcec;
L_801cb85c:
    ea = c.r[1] + 0x101u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[1] + 0x12cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x102u;
    ea = c.r[2] + 0xffff98c0u;
    c.f[2] = wp::rdf64(ea);
    c.r[7] = c.r[7] + 0xf38u;
    ea = c.r[1] + 0x128u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = 0x80000000u;
    c.f[31] = c.f[0] - c.f[2];
    goto L_801cb9c0;
L_801cb884:
    c.r[5] = c.r[28] - c.r[4];
    c.r[10] = 0x0u;
    c.r[0] = wp::rotl(c.r[5], 29) & 0xe0000000u;
    c.r[5] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[0] = c.r[0] - c.r[5];
    c.r[0] = wp::rotl(c.r[0], 3);
    c.r[6] = c.r[0] + c.r[5];
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801cb8a8;
    c.r[6] = 0x8u;
L_801cb8a8:
    wp::compare_signed(c, 1, c.r[6], 0x0u);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 5)) goto L_801cb988;
    wp::compare_signed(c, 0, c.r[6], 0x8u);
    c.r[8] = c.r[6] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_801cb960;
    c.r[9] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801cb8d8;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801cb8d8;
    c.r[9] = 0x1u;
L_801cb8d8:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cb960;
    c.r[0] = c.r[8] + 0x7u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801cb960;
L_801cb8f4:
    c.r[0] = c.r[10] * 0xau;
    ea = c.r[4] + 0x0u;
    c.r[9] = wp::rd8(ea);
    ea = c.r[4] + 0x1u;
    c.r[8] = wp::rd8(ea);
    c.r[5] = c.r[5] + 0x8u;
    ea = c.r[4] + 0x2u;
    c.r[21] = wp::rd8(ea);
    c.r[0] = c.r[9] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    ea = c.r[4] + 0x3u;
    c.r[12] = wp::rd8(ea);
    ea = c.r[4] + 0x4u;
    c.r[11] = wp::rd8(ea);
    ea = c.r[4] + 0x5u;
    c.r[10] = wp::rd8(ea);
    c.r[0] = c.r[8] + c.r[0];
    ea = c.r[4] + 0x6u;
    c.r[9] = wp::rd8(ea);
    c.r[0] = c.r[0] * 0xau;
    ea = c.r[4] + 0x7u;
    c.r[8] = wp::rd8(ea);
    c.r[4] = c.r[4] + 0x8u;
    c.r[0] = c.r[21] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[12] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[11] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[10] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    c.r[0] = c.r[9] + c.r[0];
    c.r[0] = c.r[0] * 0xau;
    c.r[10] = c.r[8] + c.r[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb8f4;
    }
L_801cb960:
    c.r[0] = c.r[6] - c.r[5];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801cb988;
L_801cb970:
    c.r[0] = c.r[10] * 0xau;
    ea = c.r[4] + 0x0u;
    c.r[8] = wp::rd8(ea);
    c.r[5] = c.r[5] + 0x1u;
    c.r[4] = c.r[4] + 0x1u;
    c.r[10] = c.r[8] + c.r[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cb970;
    }
L_801cb988:
    c.r[0] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    ea = c.r[1] + 0x134u;
    wp::wr32(ea, c.r[10]);
    c.r[5] = c.r[7] + c.r[0];
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    ea = c.r[5] + 0xfffffff8u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x130u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[31] * c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    if (wp::cr_get(c, 2)) goto L_801cb9b8;
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (wp::cr_get(c, 2)) goto L_801cb9c8;
L_801cb9b8:
    c.f[31] = c.f[0];
    c.r[29] = c.r[29] - c.r[6];
L_801cb9c0:
    wp::compare_unsigned(c, 0, c.r[4], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cb884;
    }
L_801cb9c8:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801cb9f8;
    c.r[0] = 0u - c.r[29];
    ea = c.r[2] + 0xffff98c8u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x12cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff98b0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x128u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] - c.f[2];
    c.lr = 0x801cb9f0u;
    f_801d7c3c(c);
R_801cb9f0:
    c.f[31] = c.f[31] / c.f[1];
    goto L_801cba18;
L_801cb9f8:
    c.r[0] = c.r[29] ^ 0x80000000u;
    ea = c.r[1] + 0x134u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff98c8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x130u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff98b0u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] - c.f[2];
    c.lr = 0x801cba14u;
    f_801d7c3c(c);
R_801cba14:
    c.f[31] = c.f[31] * c.f[1];
L_801cba18:
    c.f[1] = c.f[31];
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801cba24u;
    f_801d7874(c);
R_801cba24:
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[1]);
    c.lr = 0x801cba30u;
    f_801ccc24(c);
R_801cba30:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cba40;
    ea = c.r[2] + 0xffff98b8u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[31]);
L_801cba40:
    c.f[1] = c.f[31];
    c.r[3] = c.r[1] + 0xa4u;
    c.r[27] = 0x0u;
    c.lr = 0x801cba50u;
    f_801cb2b8(c);
R_801cba50:
    c.r[3] = c.r[1] + 0xa4u;
    c.r[4] = c.r[1] + 0xfcu;
    c.lr = 0x801cba5cu;
    f_801cabf8(c);
R_801cba5c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbcd8;
    c.r[3] = c.r[1] + 0xa4u;
    c.r[4] = c.r[1] + 0xfcu;
    c.lr = 0x801cba70u;
    f_801cacdc(c);
R_801cba70:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cba7c;
    c.r[27] = 0x1u;
L_801cba7c:
    c.r[0] = wp::cntlzw(c.r[27]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[31]);
    c.r[28] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[29] = 0x1u;
    c.r[30] = 0x0u;
    c.r[31] = 0xffffffffu;
L_801cba94:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbac8;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[0], c.r[29], 0);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::add_extended(c, c.r[3], c.r[30]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801cbabcu;
    f_801ccc24(c);
R_801cbabc:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cbcd8;
    goto L_801cbae0;
L_801cbac8:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::add_carry(c, c.r[0], c.r[31], 0);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::add_extended(c, c.r[3], c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801cbae0:
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = c.r[1] + 0x78u;
    c.lr = 0x801cbaecu;
    f_801cb2b8(c);
R_801cbaec:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbb08;
    c.r[3] = c.r[1] + 0x78u;
    c.r[4] = c.r[1] + 0xfcu;
    c.lr = 0x801cbb00u;
    f_801cacdc(c);
R_801cbb00:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbc78;
L_801cbb08:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbc14;
    c.r[3] = c.r[1] + 0xfcu;
    c.r[4] = c.r[1] + 0x78u;
    c.lr = 0x801cbb1cu;
    f_801cacdc(c);
R_801cbb1c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbc14;
    c.f[0] = c.f[31];
    ea = c.r[1] + 0x8u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0xa4u;
    c.r[21] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0xa8u;
    c.r[22] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[1] + 0xacu;
    c.r[23] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0xb0u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[1] + 0xb4u;
    c.r[25] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0xb8u;
    c.r[26] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0xbcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0xc0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xc4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xc8u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x9cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xccu;
    c.r[27] = wp::rd16(ea);
    ea = c.r[1] + 0xa0u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[21]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[22]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[25]);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x74u;
    wp::wr16(ea, c.r[27]);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xc0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xccu;
    wp::wr16(ea, c.r[0]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[21]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[22]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[23]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[25]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[26]);
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0xa0u;
    wp::wr16(ea, c.r[27]);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    goto L_801cbc78;
L_801cbc14:
    ea = c.r[1] + 0x78u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x90u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x94u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x98u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x9cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xa0u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0x8u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xacu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0xb0u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0xb8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0xbcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xc0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xccu;
    wp::wr16(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[31]);
    WP_POLL(c);
    goto L_801cba94;
L_801cbc78:
    c.r[3] = c.r[1] + 0x4cu;
    c.r[4] = c.r[1] + 0xfcu;
    c.r[5] = c.r[1] + 0xa4u;
    c.lr = 0x801cbc88u;
    f_801caddc(c);
R_801cbc88:
    c.r[3] = c.r[1] + 0x20u;
    c.r[4] = c.r[1] + 0x78u;
    c.r[5] = c.r[1] + 0xfcu;
    c.lr = 0x801cbc98u;
    f_801caddc(c);
R_801cbc98:
    c.r[3] = c.r[1] + 0x4cu;
    c.r[4] = c.r[1] + 0x20u;
    c.lr = 0x801cbca4u;
    f_801cabf8(c);
R_801cbca4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbcc0;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cbcd8;
    ea = c.r[1] + 0x8u;
    c.f[31] = wp::rdf64(ea);
    goto L_801cbcd8;
L_801cbcc0:
    c.r[3] = c.r[1] + 0x4cu;
    c.r[4] = c.r[1] + 0x20u;
    c.lr = 0x801cbcccu;
    f_801cacdc(c);
R_801cbccc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbcd8;
    ea = c.r[1] + 0x8u;
    c.f[31] = wp::rdf64(ea);
L_801cbcd8:
    ea = c.r[1] + 0xfcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cbce8;
    c.f[31] = -c.f[31];
L_801cbce8:
    c.f[1] = c.f[31];
L_801cbcec:
    c.r[11] = c.r[1] + 0x170u;
    ea = c.r[1] + 0x178u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x170u;
    c.f[31] = wp::rdf64(ea);
    c.lr = 0x801cbcfcu;
    f_801c83ec(c);
R_801cbcfc:
    ea = c.r[1] + 0x184u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x180u;
    return;
}

void f_801cbd0c(wp::Cpu& c) {
    WP_ENTER(0x801cbd0cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = wp::sraw(c, c.r[3], 31);
    c.r[0] = c.r[4] ^ c.r[3];
    c.r[3] = c.r[0] - c.r[4];
    return;
}

void f_801cbd1c(wp::Cpu& c) {
    WP_ENTER(0x801cbd1cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = wp::sraw(c, c.r[3], 31);
    c.r[0] = c.r[4] ^ c.r[3];
    c.r[3] = c.r[0] - c.r[4];
    return;
}

void f_801cbd2c(wp::Cpu& c) {
    WP_ENTER(0x801cbd2cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] & c.r[0];
    ea = c.r[3] + 0x24u;
    wp::wr32(ea, c.r[6]);
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x34u;
    wp::wr32(ea, c.r[4]);
    return;
}

void f_801cbd54(wp::Cpu& c) {
    WP_ENTER(0x801cbd54u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cbda0u: goto R_801cbda0;
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
    ea = c.r[3] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[5];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cbdcc;
    ea = c.r[30] + 0x40u;
    c.r[12] = wp::rd32(ea);
    c.r[4] = c.r[5] | c.r[5];
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[30] + 0x28u;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x48u;
    c.r[6] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801cbda0u;
    wp::call(c, c.ctr);
R_801cbda0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbdb0;
    ea = c.r[30] + 0x28u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801cbdb0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbdbc;
    goto L_801cbdf4;
L_801cbdbc:
    ea = c.r[30] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
L_801cbdcc:
    ea = c.r[30] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[30] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x1cu;
    c.r[6] = wp::rd32(ea);
    ea = c.r[30] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[4] & c.r[0];
    ea = c.r[30] + 0x24u;
    wp::wr32(ea, c.r[6]);
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x34u;
    wp::wr32(ea, c.r[4]);
L_801cbdf4:
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

void f_801cbe0c(wp::Cpu& c) {
    WP_ENTER(0x801cbe0cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cbe38u: goto R_801cbe38;
        case 0x801cbe4cu: goto R_801cbe4c;
        case 0x801cbe80u: goto R_801cbe80;
        case 0x801cbef4u: goto R_801cbef4;
        case 0x801cbf1cu: goto R_801cbf1c;
        case 0x801cbfb8u: goto R_801cbfb8;
        case 0x801cbfe8u: goto R_801cbfe8;
        case 0x801cc03cu: goto R_801cc03c;
        case 0x801cc0a8u: goto R_801cc0a8;
        case 0x801cc0dcu: goto R_801cc0dc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 25; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[6] | c.r[6];
    c.r[26] = c.r[3] | c.r[3];
    c.r[25] = c.r[5] | c.r[5];
    c.r[4] = 0x0u;
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801cbe38u;
    f_801d37f0(c);
R_801cbe38:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbe4c;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0xffffffffu;
    c.lr = 0x801cbe4cu;
    f_801d37f0(c);
L_801cbe4c:
R_801cbe4c:
    c.r[30] = c.r[27] * c.r[25];
    wp::record(c, c.r[30]);
    if (wp::cr_get(c, 2)) goto L_801cbe6c;
    ea = c.r[28] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbe6c;
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cbe74;
L_801cbe6c:
    c.r[3] = 0x0u;
    goto L_801cc100;
L_801cbe74:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cbe80;
    c.lr = 0x801cbe80u;
    f_801ccca0(c);
L_801cbe80:
R_801cbe80:
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = 0x1u;
    c.r[4] = 0x0u;
    c.r[0] = wp::rotl(c.r[3], 13) & 0x1u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cbea0;
    c.r[0] = wp::rotl(c.r[3], 7) & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cbea4;
L_801cbea0:
    c.r[4] = 0x1u;
L_801cbea4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cbec0;
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 7) & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cbec0;
    c.r[31] = 0x0u;
L_801cbec0:
    ea = c.r[28] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cbf1c;
    ea = c.r[28] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[3], 5) & 0x2u;
    wp::record(c, c.r[0]);
    c.r[0] = wp::rotl(c.r[3], 5) & 0x7u;
    if (wp::cr_get(c, 2)) goto L_801cbf1c;
    c.r[0] = c.r[0] & 0x4u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cbf04;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.r[5] = 0x2u;
    c.lr = 0x801cbef4u;
    f_801cc3b0(c);
R_801cbef4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbf04;
    c.r[3] = 0x0u;
    goto L_801cc100;
L_801cbf04:
    ea = c.r[28] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.r[0] = (wp::rotl(c.r[3], 29) & 0xe0000000u) | (c.r[0] & 0x1fffffffu);
    ea = c.r[28] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801cbf1cu;
    f_801cbd2c(c);
L_801cbf1c:
R_801cbf1c:
    ea = c.r[28] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cbf44;
    c.r[3] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0xau;
    wp::wr8(ea, c.r[3]);
    c.r[3] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc100;
L_801cbf44:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[29] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_801cc074;
    ea = c.r[28] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x24u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801cbf68;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc074;
L_801cbf68:
    ea = c.r[28] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[4] - c.r[3];
    c.r[0] = c.r[0] - c.r[3];
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
L_801cbf78:
    ea = c.r[28] + 0x28u;
    c.r[5] = wp::rd32(ea);
    c.r[25] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    wp::compare_unsigned(c, 0, c.r[5], c.r[30]);
    if (!wp::cr_get(c, 1)) goto L_801cbf94;
    c.r[5] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
L_801cbf94:
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 7) & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cbfd0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cbfd0;
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = 0xau;
    c.lr = 0x801cbfb8u;
    f_801cc864(c);
R_801cbfb8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cbfd0;
    c.r[0] = c.r[3] + 0x1u;
    c.r[5] = c.r[0] - c.r[26];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
L_801cbfd0:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc010;
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    c.lr = 0x801cbfe8u;
    f_800043c4(c);
R_801cbfe8:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[28] + 0x24u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[28] + 0x28u;
    c.r[0] = wp::rd32(ea);
    c.r[26] = c.r[26] + c.r[4];
    c.r[3] = c.r[3] + c.r[4];
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[30] = c.r[30] - c.r[4];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[3];
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
L_801cc010:
    ea = c.r[28] + 0x28u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc030;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc030;
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 7) & 0x3u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc05c;
L_801cc030:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x801cc03cu;
    f_801cbd54(c);
R_801cc03c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc05c;
    c.r[3] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0xau;
    wp::wr8(ea, c.r[3]);
    c.r[30] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc074;
L_801cc05c:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[29] = c.r[29] + c.r[0];
    if (wp::cr_get(c, 2)) goto L_801cc074;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cbf78;
    }
L_801cc074:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc0e4;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc0e4;
    ea = c.r[28] + 0x1cu;
    c.r[25] = wp::rd32(ea);
    c.r[0] = c.r[26] + c.r[30];
    ea = c.r[28] + 0x20u;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x1cu;
    wp::wr32(ea, c.r[26]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[28] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801cc0a8u;
    f_801cbd54(c);
R_801cc0a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc0c4;
    c.r[3] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0xau;
    wp::wr8(ea, c.r[3]);
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc0cc;
L_801cc0c4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[29] + c.r[0];
L_801cc0cc:
    ea = c.r[28] + 0x1cu;
    wp::wr32(ea, c.r[25]);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[28] + 0x20u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801cc0dcu;
    f_801cbd2c(c);
R_801cc0dc:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
L_801cc0e4:
    ea = c.r[28] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 7) & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cc0fc;
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x28u;
    wp::wr32(ea, c.r[0]);
L_801cc0fc:
    c.r[3] = wp::divwu(c.r[29], c.r[27]);
L_801cc100:
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 25; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801cc114(wp::Cpu& c) {
    WP_ENTER(0x801cc114u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc158u: goto R_801cc158;
        case 0x801cc16cu: goto R_801cc16c;
        case 0x801cc198u: goto R_801cc198;
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
    c.r[29] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801cc140;
    c.r[3] = 0xffffffffu;
    goto L_801cc1b4;
L_801cc140:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc154;
    c.r[3] = 0x0u;
    goto L_801cc1b4;
L_801cc154:
    c.lr = 0x801cc158u;
    f_801cc1d0(c);
R_801cc158:
    ea = c.r[29] + 0x44u;
    c.r[12] = wp::rd32(ea);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[29] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801cc16cu;
    wp::call(c, c.ctr);
R_801cc16c:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0x0u;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    c.r[0] = wp::rotl(c.r[0], 4) & 0x1u;
    wp::record(c, c.r[0]);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[5]);
    c.r[4] = c.r[4] & 0xfe3fffffu;
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_801cc198;
    ea = c.r[29] + 0x1cu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801cc198u;
    f_80049170(c);
L_801cc198:
R_801cc198:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_801cc1ac;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc1b0;
L_801cc1ac:
    c.r[0] = 0x1u;
L_801cc1b0:
    c.r[3] = 0u - c.r[0];
L_801cc1b4:
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

void f_801cc1d0(wp::Cpu& c) {
    WP_ENTER(0x801cc1d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc1f4u: goto R_801cc1f4;
        case 0x801cc2a0u: goto R_801cc2a0;
        case 0x801cc2b0u: goto R_801cc2b0;
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
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    if (!wp::cr_get(c, 2)) goto L_801cc1f8;
    c.lr = 0x801cc1f4u;
    f_801ca420(c);
R_801cc1f4:
    goto L_801cc2ec;
L_801cc1f8:
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc210;
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc218;
L_801cc210:
    c.r[3] = 0xffffffffu;
    goto L_801cc2ec;
L_801cc218:
    c.r[0] = wp::rotl(c.r[4], 5) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cc22c;
    c.r[3] = 0x0u;
    goto L_801cc2ec;
L_801cc22c:
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 0)) goto L_801cc248;
    c.r[0] = 0x2u;
    c.r[4] = (wp::rotl(c.r[0], 29) & 0xe0000000u) | (c.r[4] & 0x1fffffffu);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
L_801cc248:
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cc260;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x28u;
    wp::wr32(ea, c.r[0]);
L_801cc260:
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 3) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cc280;
    c.r[0] = c.r[4] & 0x1fffffffu;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    goto L_801cc2ec;
L_801cc280:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cc298;
    c.r[30] = 0x0u;
    goto L_801cc2a4;
L_801cc298:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801cc2a0u;
    f_801cc3ac(c);
R_801cc2a0:
    c.r[30] = c.r[3] | c.r[3];
L_801cc2a4:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x0u;
    c.lr = 0x801cc2b0u;
    f_801cbd54(c);
R_801cc2b0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc2d0;
    c.r[3] = 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0xau;
    wp::wr8(ea, c.r[3]);
    c.r[3] = 0xffffffffu;
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc2ec;
L_801cc2d0:
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x0u;
    ea = c.r[31] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = 0x0u;
    c.r[0] = c.r[0] & 0x1fffffffu;
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x28u;
    wp::wr32(ea, c.r[4]);
L_801cc2ec:
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

void f_801cc304(wp::Cpu& c) {
    WP_ENTER(0x801cc304u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = 0x0u;
    c.r[4] = wp::rotl(c.r[0], 10) & 0x7u;
    c.r[0] = c.r[4] + 0xffu;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 1)) goto L_801cc32c;
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc33c;
L_801cc32c:
    c.r[0] = 0x28u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0xffffffffu;
    return;
L_801cc33c:
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) goto L_801cc350;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd32(ea);
    return;
L_801cc350:
    ea = c.r[3] + 0x1cu;
    c.r[8] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[5], 0x3u);
    ea = c.r[3] + 0x24u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[8];
    c.r[7] = c.r[0] + c.r[4];
    if (wp::cr_get(c, 0)) goto L_801cc374;
    c.r[6] = c.r[5] + 0xfffffffeu;
    c.r[7] = c.r[7] - c.r[6];
L_801cc374:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 13) & 0x1u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc3a4;
    c.r[0] = c.r[4] - c.r[6];
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801cc3a4;
L_801cc38c:
    ea = c.r[8] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[8] = c.r[8] + 0x1u;
    wp::compare_unsigned(c, 0, c.r[0], 0xau);
    if (!wp::cr_get(c, 2)) goto L_801cc3a0;
    c.r[7] = c.r[7] + 0x1u;
L_801cc3a0:
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cc38c;
    }
L_801cc3a4:
    c.r[3] = c.r[7] | c.r[7];
    return;
}

void f_801cc3ac(wp::Cpu& c) {
    WP_ENTER(0x801cc3acu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801cc304(c);
    return;
}

void f_801cc3b0(wp::Cpu& c) {
    WP_ENTER(0x801cc3b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc414u: goto R_801cc414;
        case 0x801cc450u: goto R_801cc450;
        case 0x801cc51cu: goto R_801cc51c;
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
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 10) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cc3ec;
    ea = c.r[3] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc3fc;
L_801cc3ec:
    c.r[0] = 0x28u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0xffffffffu;
    goto L_801cc55c;
L_801cc3fc:
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cc43c;
    c.r[4] = 0x0u;
    c.lr = 0x801cc414u;
    f_801cbd54(c);
R_801cc414:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc43c;
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = 0x1u;
    c.r[3] = 0xffffffffu;
    ea = c.r[30] + 0xau;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x28u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc55c;
L_801cc43c:
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cc45c;
    c.r[3] = c.r[30] | c.r[30];
    c.r[31] = 0x0u;
    c.lr = 0x801cc450u;
    f_801cc304(c);
R_801cc450:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801cc45c:
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cc4e0;
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 5) & 0x7u;
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801cc4e0;
    ea = c.r[30] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[6], 3) & 0x7u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 1)) goto L_801cc4e0;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x18u;
    c.r[5] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_801cc4a4;
    ea = c.r[30] + 0x34u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_801cc4b4;
L_801cc4a4:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1fffffffu;
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc4ec;
L_801cc4b4:
    ea = c.r[30] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[0] - c.r[3];
    c.r[0] = 0x2u;
    c.r[3] = c.r[4] + c.r[3];
    ea = c.r[30] + 0x24u;
    wp::wr32(ea, c.r[3]);
    c.r[6] = (wp::rotl(c.r[0], 29) & 0xe0000000u) | (c.r[6] & 0x1fffffffu);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[5] - c.r[0];
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[6]);
    goto L_801cc4ec;
L_801cc4e0:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x1fffffffu;
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801cc4ec:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc558;
    ea = c.r[30] + 0x38u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc544;
    c.r[5] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[30] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x48u;
    c.r[6] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801cc51cu;
    wp::call(c, c.ctr);
R_801cc51c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc544;
    c.r[4] = 0x0u;
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = 0x1u;
    c.r[3] = 0xffffffffu;
    ea = c.r[30] + 0xau;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x28u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    goto L_801cc55c;
L_801cc544:
    c.r[3] = 0x0u;
    ea = c.r[30] + 0x9u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x28u;
    wp::wr32(ea, c.r[3]);
L_801cc558:
    c.r[3] = 0x0u;
L_801cc55c:
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

void f_801cc574(wp::Cpu& c) {
    WP_ENTER(0x801cc574u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = 0x80230000u;
    c.r[6] = c.r[6] + 0x1128u;
    ea = c.r[6] + 0x38u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[6] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_801cc58c(wp::Cpu& c) {
    WP_ENTER(0x801cc58cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc59c;
    c.r[3] = 0x0u;
    return;
L_801cc59c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc5ac;
    c.r[3] = 0xffffffffu;
    return;
L_801cc5ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cc5bc;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    wp::wr16(ea, c.r[0]);
L_801cc5bc:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cc5d0;
    c.r[3] = 0x0u;
    return;
L_801cc5d0:
    c.r[3] = 0x1u;
    return;
}

void f_801cc5d8(wp::Cpu& c) {
    WP_ENTER(0x801cc5d8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc5e8;
    c.r[3] = 0x0u;
    return;
L_801cc5e8:
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[4]);
    c.r[3] = 0x1u;
    return;
}

void f_801cc5f4(wp::Cpu& c) {
    WP_ENTER(0x801cc5f4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc618u: goto R_801cc618;
        case 0x801cc660u: goto R_801cc660;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[4] | c.r[4];
    c.r[26] = c.r[3] | c.r[3];
    c.r[28] = c.r[5] | c.r[5];
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x801cc618u;
    f_801c7860(c);
R_801cc618:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cc698;
    c.r[31] = 0x80230000u;
    c.r[30] = 0x0u;
    c.r[31] = c.r[31] + 0x1128u;
    goto L_801cc68c;
L_801cc634:
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cc67c;
    ea = c.r[31] + 0x38u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[29] | c.r[29];
    ea = c.r[6] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.r[26] = c.r[26] + 0x2u;
    c.lr = 0x801cc660u;
    wp::call(c, c.ctr);
R_801cc660:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801cc674;
    c.r[27] = c.r[27] + c.r[3];
    c.r[29] = c.r[29] - c.r[3];
    goto L_801cc688;
L_801cc674:
    c.r[3] = 0xffffffffu;
    goto L_801cc6a0;
L_801cc67c:
    c.r[0] = 0x0u;
    ea = c.r[26] + 0x0u;
    wp::wr16(ea, c.r[0]);
    goto L_801cc69c;
L_801cc688:
    c.r[30] = c.r[30] + 0x1u;
L_801cc68c:
    wp::compare_unsigned(c, 0, c.r[30], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cc634;
    }
    goto L_801cc69c;
L_801cc698:
    c.r[30] = 0x0u;
L_801cc69c:
    c.r[3] = c.r[30] | c.r[30];
L_801cc6a0:
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801cc6b4(wp::Cpu& c) {
    WP_ENTER(0x801cc6b4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc728u: goto R_801cc728;
        case 0x801cc748u: goto R_801cc748;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[5] | c.r[5];
    c.r[29] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_801cc6e0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc6e8;
L_801cc6e0:
    c.r[3] = 0x0u;
    goto L_801cc758;
L_801cc6e8:
    c.r[31] = 0x80230000u;
    c.r[28] = c.r[4] | c.r[4];
    c.r[31] = c.r[31] + 0x1128u;
    goto L_801cc74c;
L_801cc6f8:
    ea = c.r[28] + 0x0u;
    c.r[4] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc710;
    c.r[0] = 0x0u;
    ea = c.r[26] + c.r[29];
    wp::wr8(ea, c.r[0]);
    goto L_801cc754;
L_801cc710:
    ea = c.r[31] + 0x38u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[5] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.r[28] = c.r[28] + 0x2u;
    c.lr = 0x801cc728u;
    wp::call(c, c.ctr);
R_801cc728:
    c.r[0] = c.r[29] + c.r[3];
    c.r[30] = c.r[3] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], c.r[27]);
    if (wp::cr_get(c, 1)) goto L_801cc754;
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[26] + c.r[29];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801cc748u;
    f_801cf454(c);
R_801cc748:
    c.r[29] = c.r[29] + c.r[30];
L_801cc74c:
    wp::compare_unsigned(c, 0, c.r[29], c.r[27]);
    if (!wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801cc6f8;
    }
L_801cc754:
    c.r[3] = c.r[29] | c.r[29];
L_801cc758:
    ea = c.r[1] + 0x18u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801cc76c(wp::Cpu& c) {
    WP_ENTER(0x801cc76cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cc7acu: goto R_801cc7ac;
        case 0x801cc7b4u: goto R_801cc7b4;
        case 0x801cc7c4u: goto R_801cc7c4;
        case 0x801cc7ccu: goto R_801cc7cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[3] ^ c.r[4];
    wp::compare_unsigned(c, 0, c.r[5], 0x20u);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::cntlzw(c.r[6]);
    c.r[0] = wp::slw(c.r[3], c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[7] = wp::rotl(c.r[0], 1) & 0x1u;
    if (wp::cr_get(c, 0)) goto L_801cc7d4;
    c.r[0] = c.r[6] & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cc7b8;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc7b0;
    c.lr = 0x801cc7acu;
    f_801cca40(c);
R_801cc7ac:
    goto L_801cc7cc;
L_801cc7b0:
    c.lr = 0x801cc7b4u;
    f_801ccb00(c);
R_801cc7b4:
    goto L_801cc7cc;
L_801cc7b8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc7c8;
    c.lr = 0x801cc7c4u;
    f_801cc8dc(c);
R_801cc7c4:
    goto L_801cc7cc;
L_801cc7c8:
    c.lr = 0x801cc7ccu;
    f_801cc998(c);
L_801cc7cc:
R_801cc7cc:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801cc824;
L_801cc7d4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cc800;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cc7f4;
L_801cc7ec:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cc7f4:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc7ec;
    }
    goto L_801cc820;
L_801cc800:
    c.r[4] = c.r[4] + c.r[5];
    c.r[3] = c.r[3] + c.r[5];
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cc818;
L_801cc810:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cc818:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc810;
    }
L_801cc820:
    c.r[3] = c.r[31] | c.r[31];
L_801cc824:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801cc838(wp::Cpu& c) {
    WP_ENTER(0x801cc838u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] & 0xffu;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cc854;
L_801cc848:
    ea = c.r[3] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = ea;
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
L_801cc854:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc848;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801cc864(wp::Cpu& c) {
    WP_ENTER(0x801cc864u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + c.r[5];
    c.r[4] = c.r[4] & 0xffu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cc880;
L_801cc874:
    ea = c.r[3] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = ea;
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
L_801cc880:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc874;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801cc890(wp::Cpu& c) {
    WP_ENTER(0x801cc890u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[7] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[3] + 0xffffffffu;
    c.r[4] = c.r[5] + 0x1u;
    goto L_801cc8cc;
L_801cc8a0:
    ea = c.r[6] + 0x1u;
    c.r[3] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = ea;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cc8cc;
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd8(ea);
    c.r[3] = 0x1u;
    ea = c.r[7] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) return;
    c.r[3] = 0xffffffffu;
    return;
L_801cc8cc:
    c.r[4] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc8a0;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801cc8dc(wp::Cpu& c) {
    WP_ENTER(0x801cc8dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0u - c.r[3];
    c.r[7] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[0] & 0x3u;
    wp::record(c, c.r[6]);
    c.r[3] = c.r[3] + 0xffffffffu;
    if (wp::cr_get(c, 2)) goto L_801cc904;
    c.r[5] = c.r[5] - c.r[6];
L_801cc8f4:
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = ea;
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffffu, 0);
    wp::record(c, c.r[6]);
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc8f4;
    }
L_801cc904:
    c.r[4] = wp::rotl(c.r[5], 27) & 0x7ffffffu;
    wp::record(c, c.r[4]);
    c.r[6] = c.r[7] + 0xfffffffdu;
    c.r[3] = c.r[3] + 0xfffffffdu;
    if (wp::cr_get(c, 2)) goto L_801cc95c;
L_801cc914:
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x18u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0x20u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = ea;
    ea = c.r[3] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc914;
    }
L_801cc95c:
    c.r[4] = wp::rotl(c.r[5], 30) & 0x7u;
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_801cc974;
L_801cc964:
    ea = c.r[6] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = ea;
    c.r[4] = wp::add_carry(c, c.r[4], 0xffffffffu, 0);
    wp::record(c, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc964;
    }
L_801cc974:
    c.r[5] = c.r[5] & 0x3u;
    wp::record(c, c.r[5]);
    c.r[4] = c.r[6] + 0x3u;
    c.r[3] = c.r[3] + 0x3u;
    if (wp::cr_get(c, 2)) return;
L_801cc984:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc984;
    }
    return;
}

void f_801cc998(wp::Cpu& c) {
    WP_ENTER(0x801cc998u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[6] = c.r[3] + c.r[5];
    c.r[4] = c.r[4] + c.r[5];
    c.r[3] = c.r[6] & 0x3u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801cc9bc;
    c.r[5] = c.r[5] - c.r[3];
L_801cc9ac:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc9ac;
    }
L_801cc9bc:
    c.r[3] = wp::rotl(c.r[5], 27) & 0x7ffffffu;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801cca0c;
L_801cc9c4:
    ea = c.r[4] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    ea = c.r[6] + 0xfffffffcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xfffffff8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xfffffff8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xfffffff4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xfffffff4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xfffffff0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xfffffff0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xffffffecu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xffffffecu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xffffffe8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xffffffe8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xffffffe4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0xffffffe4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0xffffffe0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ea;
    ea = c.r[6] + 0xffffffe0u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cc9c4;
    }
L_801cca0c:
    c.r[3] = wp::rotl(c.r[5], 30) & 0x7u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801cca24;
L_801cca14:
    ea = c.r[4] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = ea;
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    ea = c.r[6] + 0xfffffffcu;
    wp::wr32(ea, c.r[0]);
    c.r[6] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cca14;
    }
L_801cca24:
    c.r[5] = c.r[5] & 0x3u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) return;
L_801cca2c:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cca2c;
    }
    return;
}

void f_801cca40(wp::Cpu& c) {
    WP_ENTER(0x801cca40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0u - c.r[3];
    c.r[7] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[0] & 0x3u;
    wp::record(c, c.r[6]);
    c.r[3] = c.r[3] + 0xffffffffu;
    if (wp::cr_get(c, 2)) goto L_801cca68;
    c.r[5] = c.r[5] - c.r[6];
L_801cca58:
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = ea;
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffffu, 0);
    wp::record(c, c.r[6]);
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cca58;
    }
L_801cca68:
    c.r[0] = c.r[7] + 0x1u;
    c.r[4] = c.r[3] + 0xfffffffdu;
    c.r[10] = c.r[0] & 0x3u;
    c.r[6] = wp::rotl(c.r[5], 29) & 0x1fffffffu;
    c.r[7] = c.r[7] - c.r[10];
    c.r[11] = wp::rotl(c.r[0], 3) & 0x18u;
    ea = c.r[7] + 0x1u;
    c.r[8] = wp::rd32(ea);
    c.r[7] = ea;
    c.r[12] = wp::sub_carry(c, c.r[11], 0x20u);
L_801cca88:
    ea = c.r[7] + 0x4u;
    c.r[9] = wp::rd32(ea);
    c.r[3] = wp::slw(c.r[8], c.r[11]);
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffffu, 0);
    wp::record(c, c.r[6]);
    c.r[0] = wp::srw(c.r[9], c.r[12]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = wp::slw(c.r[9], c.r[11]);
    ea = c.r[7] + 0x8u;
    c.r[8] = wp::rd32(ea);
    c.r[7] = ea;
    c.r[0] = wp::srw(c.r[8], c.r[12]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cca88;
    }
    c.r[0] = c.r[5] & 0x4u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ccad4;
    ea = c.r[7] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[7] = ea;
    c.r[3] = wp::slw(c.r[8], c.r[11]);
    c.r[0] = wp::srw(c.r[0], c.r[12]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = ea;
L_801ccad4:
    c.r[5] = c.r[5] & 0x3u;
    wp::record(c, c.r[5]);
    c.r[6] = c.r[7] + 0x3u;
    c.r[3] = c.r[4] + 0x3u;
    if (wp::cr_get(c, 2)) return;
    c.r[0] = wp::sub_carry(c, c.r[10], 0x4u);
    c.r[6] = c.r[6] - c.r[0];
L_801ccaec:
    ea = c.r[6] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ccaec;
    }
    return;
}

void f_801ccb00(wp::Cpu& c) {
    WP_ENTER(0x801ccb00u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[12] = c.r[3] + c.r[5];
    c.r[4] = c.r[4] + c.r[5];
    c.r[3] = c.r[12] & 0x3u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801ccb24;
    c.r[5] = c.r[5] - c.r[3];
L_801ccb14:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    ea = c.r[12] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[12] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ccb14;
    }
L_801ccb24:
    c.r[10] = wp::rotl(c.r[4], 3) & 0x18u;
    c.r[9] = c.r[4] & 0x3u;
    c.r[11] = wp::sub_carry(c, c.r[10], 0x20u);
    c.r[6] = wp::rotl(c.r[5], 29) & 0x1fffffffu;
    c.r[0] = wp::sub_carry(c, c.r[9], 0x4u);
    c.r[4] = c.r[4] + c.r[0];
    ea = c.r[4] + 0xfffffffcu;
    c.r[7] = wp::rd32(ea);
    c.r[4] = ea;
L_801ccb40:
    ea = c.r[4] + 0xfffffffcu;
    c.r[8] = wp::rd32(ea);
    c.r[0] = wp::srw(c.r[7], c.r[11]);
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffffu, 0);
    wp::record(c, c.r[6]);
    c.r[3] = wp::slw(c.r[8], c.r[10]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[12] + 0xfffffffcu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::srw(c.r[8], c.r[11]);
    ea = c.r[4] + 0xfffffff8u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = ea;
    c.r[3] = wp::slw(c.r[7], c.r[10]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[12] + 0xfffffff8u;
    wp::wr32(ea, c.r[0]);
    c.r[12] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ccb40;
    }
    c.r[0] = c.r[5] & 0x4u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ccb8c;
    ea = c.r[4] + 0xfffffffcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = ea;
    c.r[0] = wp::srw(c.r[7], c.r[11]);
    c.r[3] = wp::slw(c.r[3], c.r[10]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[12] + 0xfffffffcu;
    wp::wr32(ea, c.r[0]);
    c.r[12] = ea;
L_801ccb8c:
    c.r[5] = c.r[5] & 0x3u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) return;
    c.r[3] = c.r[4] + c.r[9];
L_801ccb98:
    ea = c.r[3] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[3] = ea;
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    ea = c.r[12] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[12] = ea;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ccb98;
    }
    return;
}

void f_801ccbac(wp::Cpu& c) {
    WP_ENTER(0x801ccbacu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[3] & 0x7f800000u;
    c.r[0] = c.r[4] + 0x80800000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccbd4;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccbec;
    goto L_801ccc00;
L_801ccbd4:
    c.r[3] = c.r[3] & 0x7fffffu;
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::sraw(c, c.r[0], 31);
    c.r[3] = c.r[3] + 0x2u;
    goto L_801ccc04;
L_801ccbec:
    c.r[0] = c.r[3] & 0x7fffffu;
    wp::record(c, c.r[0]);
    c.r[3] = 0x3u;
    if (wp::cr_get(c, 2)) goto L_801ccc04;
    c.r[3] = 0x5u;
    goto L_801ccc04;
L_801ccc00:
    c.r[3] = 0x4u;
L_801ccc04:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801ccc0c(wp::Cpu& c) {
    WP_ENTER(0x801ccc0cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] & 0x80000000u;
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801ccc24(wp::Cpu& c) {
    WP_ENTER(0x801ccc24u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[3] & 0x7ff00000u;
    c.r[0] = c.r[4] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccc4c;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccc70;
    goto L_801ccc94;
L_801ccc4c:
    c.r[0] = c.r[3] & 0xfffffu;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801ccc60;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccc68;
L_801ccc60:
    c.r[3] = 0x1u;
    goto L_801ccc98;
L_801ccc68:
    c.r[3] = 0x2u;
    goto L_801ccc98;
L_801ccc70:
    c.r[0] = c.r[3] & 0xfffffu;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801ccc84;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccc8c;
L_801ccc84:
    c.r[3] = 0x5u;
    goto L_801ccc98;
L_801ccc8c:
    c.r[3] = 0x3u;
    goto L_801ccc98;
L_801ccc94:
    c.r[3] = 0x4u;
L_801ccc98:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801ccca0(wp::Cpu& c) {
    WP_ENTER(0x801ccca0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x801d0000u;
    c.r[3] = c.r[3] + 0xffffa37cu;
    ea = c.r[13] + 0xffff9454u;
    wp::wr32(ea, c.r[3]);
    return;
}

void f_801cccb0(wp::Cpu& c) {
    WP_ENTER(0x801cccb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ccdccu: goto R_801ccdcc;
        case 0x801ccec0u: goto R_801ccec0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x0u;
    ea = c.r[3] + 0x1u;
    c.r[6] = wp::rd8(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[8] = 0x1u;
    c.r[6] = wp::sign_extend8(c.r[6]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    wp::compare_signed(c, 0, c.r[6], 0x25u);
    c.r[31] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[8]);
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[7]);
    if (!wp::cr_get(c, 2)) goto L_801ccd2c;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[6]);
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[7]);
    goto L_801cd250;
L_801ccd2c:
    c.r[0] = 0x2u;
L_801ccd30:
    wp::compare_signed(c, 0, c.r[6], 0x2du);
    c.r[4] = 0x1u;
    if (wp::cr_get(c, 2)) goto L_801ccd60;
    wp::compare_signed(c, 0, c.r[6], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801ccd68;
    wp::compare_signed(c, 0, c.r[6], 0x20u);
    if (wp::cr_get(c, 2)) goto L_801ccd70;
    wp::compare_signed(c, 0, c.r[6], 0x23u);
    if (wp::cr_get(c, 2)) goto L_801ccd84;
    wp::compare_signed(c, 0, c.r[6], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801ccd8c;
    goto L_801ccda0;
L_801ccd60:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[7]);
    goto L_801ccda4;
L_801ccd68:
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[8]);
    goto L_801ccda4;
L_801ccd70:
    ea = c.r[1] + 0x9u;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801ccda4;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[0]);
    goto L_801ccda4;
L_801ccd84:
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[8]);
    goto L_801ccda4;
L_801ccd8c:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccda4;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    goto L_801ccda4;
L_801ccda0:
    c.r[4] = 0x0u;
L_801ccda4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccdb8;
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[6] = wp::sign_extend8(c.r[6]);
    WP_POLL(c);
    goto L_801ccd30;
L_801ccdb8:
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801ccdf8;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x801ccdccu;
    f_801c787c(c);
R_801ccdcc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801ccdec;
    c.r[0] = 0u - c.r[0];
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
L_801ccdec:
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[6] = wp::sign_extend8(c.r[6]);
    goto L_801cce5c;
L_801ccdf8:
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[4] = wp::rd32(ea);
    goto L_801cce24;
L_801cce08:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] * 0xau;
    c.r[3] = c.r[6] + c.r[0];
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = wp::sign_extend8(c.r[6]);
L_801cce24:
    wp::compare_unsigned(c, 0, c.r[6], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cce34;
    c.r[0] = 0x0u;
L_801cce34:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cce44;
    c.r[0] = 0x0u;
    goto L_801cce54;
L_801cce44:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[6], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801cce54:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cce08;
    }
L_801cce5c:
    ea = c.r[1] + 0x10u;
    c.r[7] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801cce94;
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801cd250;
L_801cce94:
    wp::compare_signed(c, 0, c.r[6], 0x2eu);
    if (!wp::cr_get(c, 2)) goto L_801ccf48;
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
    c.r[6] = wp::sign_extend8(c.r[6]);
    wp::compare_signed(c, 0, c.r[6], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801ccee4;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x801ccec0u;
    f_801c787c(c);
R_801ccec0:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801cced8;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_801cced8:
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[6] = wp::sign_extend8(c.r[6]);
    goto L_801ccf48;
L_801ccee4:
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[4] = wp::rd32(ea);
    goto L_801ccf10;
L_801ccef4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] * 0xau;
    c.r[3] = c.r[6] + c.r[0];
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[0] = c.r[3] + 0xffffffd0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = wp::sign_extend8(c.r[6]);
L_801ccf10:
    wp::compare_unsigned(c, 0, c.r[6], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801ccf20;
    c.r[0] = 0x0u;
L_801ccf20:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ccf30;
    c.r[0] = 0x0u;
    goto L_801ccf40;
L_801ccf30:
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[6], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801ccf40:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ccef4;
    }
L_801ccf48:
    wp::compare_signed(c, 0, c.r[6], 0x68u);
    c.r[4] = 0x1u;
    if (wp::cr_get(c, 2)) goto L_801ccf80;
    wp::compare_signed(c, 0, c.r[6], 0x6cu);
    if (wp::cr_get(c, 2)) goto L_801ccfac;
    wp::compare_signed(c, 0, c.r[6], 0x4cu);
    if (wp::cr_get(c, 2)) goto L_801ccfd8;
    wp::compare_signed(c, 0, c.r[6], 0x6au);
    if (wp::cr_get(c, 2)) goto L_801ccfe4;
    wp::compare_signed(c, 0, c.r[6], 0x74u);
    if (wp::cr_get(c, 2)) goto L_801ccff0;
    wp::compare_signed(c, 0, c.r[6], 0x7au);
    if (wp::cr_get(c, 2)) goto L_801ccffc;
    goto L_801cd008;
L_801ccf80:
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = 0x2u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    c.r[3] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x68u);
    if (!wp::cr_get(c, 2)) goto L_801cd00c;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + 0x1u;
    goto L_801cd00c;
L_801ccfac:
    ea = c.r[31] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = 0x3u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    c.r[3] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x6cu);
    if (!wp::cr_get(c, 2)) goto L_801cd00c;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + 0x1u;
    goto L_801cd00c;
L_801ccfd8:
    c.r[0] = 0x9u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd00c;
L_801ccfe4:
    c.r[0] = 0x6u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd00c;
L_801ccff0:
    c.r[0] = 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd00c;
L_801ccffc:
    c.r[0] = 0x7u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd00c;
L_801cd008:
    c.r[4] = 0x0u;
L_801cd00c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd01c;
    ea = c.r[31] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[31] = ea;
    c.r[6] = wp::sign_extend8(c.r[6]);
L_801cd01c:
    c.r[0] = c.r[6] + 0xffffffbfu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[6]);
    wp::compare_unsigned(c, 0, c.r[0], 0x37u);
    if (wp::cr_get(c, 1)) goto L_801cd224;
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x1170u;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801cd044u: goto L_801cd044;
    case 0x801cd08cu: goto L_801cd08c;
    case 0x801cd0d4u: goto L_801cd0d4;
    case 0x801cd120u: goto L_801cd120;
    case 0x801cd134u: goto L_801cd134;
    case 0x801cd184u: goto L_801cd184;
    case 0x801cd1a8u: goto L_801cd1a8;
    case 0x801cd1e0u: goto L_801cd1e0;
    case 0x801cd20cu: goto L_801cd20c;
    case 0x801cd224u: goto L_801cd224;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801cd044:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801cd05c;
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd05c:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd074;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801cd22c;
L_801cd074:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cd22c;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd08c:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801cd0b0;
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cd0b0;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801cd0bc;
L_801cd0b0:
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd0bc:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd22c;
    c.r[0] = 0x6u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801cd22c;
L_801cd0d4:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd0e8;
    c.r[0] = 0xdu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_801cd0e8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801cd114;
    c.r[0] = c.r[3] + 0xffu;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801cd114;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801cd22c;
L_801cd114:
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd120:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd134;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_801cd134:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801cd160;
    c.r[0] = c.r[3] + 0xffu;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801cd160;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801cd16c;
L_801cd160:
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd16c:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd22c;
    c.r[0] = 0x6u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801cd22c;
L_801cd184:
    c.r[5] = 0x78u;
    c.r[4] = 0x1u;
    c.r[3] = 0x3u;
    c.r[0] = 0x8u;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801cd22c;
L_801cd1a8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801cd1c0;
    c.r[0] = 0x5u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd1c0:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd1d4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd22c;
L_801cd1d4:
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd1e0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801cd1f8;
    c.r[0] = 0x5u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd1f8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd22c;
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd20c:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801cd22c;
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
    goto L_801cd22c;
L_801cd224:
    c.r[0] = 0xffu;
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[0]);
L_801cd22c:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0x1u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801cd250:
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

void f_801cd26c(wp::Cpu& c) {
    WP_ENTER(0x801cd26cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[8] = 0x0u;
    ea = c.r[4] + 0xffffffffu;
    wp::wr8(ea, c.r[8]);
    c.r[6] = c.r[4] + 0xffffffffu;
    c.r[7] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_801cd2b0;
    ea = c.r[5] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd2b0;
    ea = c.r[5] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd2a8;
    ea = c.r[5] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801cd2b0;
L_801cd2a8:
    c.r[3] = c.r[6] | c.r[6];
    return;
L_801cd2b0:
    ea = c.r[5] + 0x5u;
    c.r[9] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[9], 0x64u);
    if (wp::cr_get(c, 2)) goto L_801cd2e8;
    wp::compare_signed(c, 0, c.r[9], 0x69u);
    if (wp::cr_get(c, 2)) goto L_801cd2e8;
    wp::compare_signed(c, 0, c.r[9], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801cd314;
    wp::compare_signed(c, 0, c.r[9], 0x75u);
    if (wp::cr_get(c, 2)) goto L_801cd324;
    wp::compare_signed(c, 0, c.r[9], 0x78u);
    if (wp::cr_get(c, 2)) goto L_801cd334;
    wp::compare_signed(c, 0, c.r[9], 0x58u);
    if (wp::cr_get(c, 2)) goto L_801cd334;
    goto L_801cd340;
L_801cd2e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0xau;
    if (!wp::cr_get(c, 0)) goto L_801cd340;
    c.r[9] = wp::sraw(c, c.r[3], 31);
    c.r[8] = 0x80000000u;
    c.r[8] = c.r[9] ^ c.r[8];
    c.r[8] = c.r[3] | c.r[8];
    wp::record(c, c.r[8]);
    if (wp::cr_get(c, 2)) goto L_801cd30c;
    c.r[3] = 0u - c.r[3];
L_801cd30c:
    c.r[8] = 0x1u;
    goto L_801cd340;
L_801cd314:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x8u;
    goto L_801cd340;
L_801cd324:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0xau;
    goto L_801cd340;
L_801cd334:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x10u;
L_801cd340:
    c.r[9] = wp::divwu(c.r[3], c.r[0]);
    c.r[9] = c.r[9] * c.r[0];
    c.r[11] = c.r[3] - c.r[9];
    c.r[3] = wp::divwu(c.r[3], c.r[0]);
    wp::compare_signed(c, 0, c.r[11], 0xau);
    if (!wp::cr_get(c, 0)) goto L_801cd360;
    c.r[11] = c.r[11] + 0x30u;
    goto L_801cd378;
L_801cd360:
    ea = c.r[5] + 0x5u;
    c.r[9] = wp::rd8(ea);
    c.r[10] = c.r[11] + 0x37u;
    wp::compare_unsigned(c, 0, c.r[9], 0x78u);
    if (!wp::cr_get(c, 2)) goto L_801cd374;
    c.r[10] = c.r[11] + 0x57u;
L_801cd374:
    c.r[11] = c.r[10] | c.r[10];
L_801cd378:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[11]);
    c.r[6] = c.r[6] + 0xffffffffu;
    c.r[7] = c.r[7] + 0x1u;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cd340;
    }
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801cd3b8;
    ea = c.r[5] + 0x3u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd3b8;
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801cd3b8;
    c.r[3] = 0x30u;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[6] = ea;
    c.r[7] = c.r[7] + 0x1u;
L_801cd3b8:
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cd40c;
    ea = c.r[5] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801cd3e0;
    ea = c.r[5] + 0x1u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd3ec;
L_801cd3e0:
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xffffffffu;
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_801cd3ec:
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801cd40c;
    ea = c.r[5] + 0x3u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd40c;
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xfffffffeu;
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_801cd40c:
    ea = c.r[5] + 0xcu;
    c.r[9] = wp::rd32(ea);
    c.r[3] = c.r[4] - c.r[6];
    c.r[3] = c.r[9] + c.r[3];
    wp::compare_signed(c, 0, c.r[3], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801cd428;
    c.r[3] = 0x0u;
    return;
L_801cd428:
    c.r[4] = 0x30u;
    goto L_801cd438;
L_801cd430:
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    c.r[6] = ea;
    c.r[7] = c.r[7] + 0x1u;
L_801cd438:
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cd430;
    }
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801cd468;
    ea = c.r[5] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd468;
    ea = c.r[5] + 0x5u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = 0x30u;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    ea = c.r[6] + 0xfffffffeu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
L_801cd468:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd47c;
    c.r[0] = 0x2du;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    goto L_801cd4a4;
L_801cd47c:
    ea = c.r[5] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cd494;
    c.r[0] = 0x2bu;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    goto L_801cd4a4;
L_801cd494:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cd4a4;
    c.r[0] = 0x20u;
    ea = c.r[6] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
L_801cd4a4:
    c.r[3] = c.r[6] | c.r[6];
    return;
}

void f_801cd4ac(wp::Cpu& c) {
    WP_ENTER(0x801cd4acu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cd5ccu: goto R_801cd5cc;
        case 0x801cd5e4u: goto R_801cd5e4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] | c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[25] = 0x0u;
    c.r[31] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[23] = c.r[5] | c.r[5];
    c.r[24] = c.r[6] | c.r[6];
    c.r[27] = c.r[5] + 0xffffffffu;
    c.r[26] = 0x0u;
    ea = c.r[5] + 0xffffffffu;
    wp::wr8(ea, c.r[25]);
    if (!wp::cr_get(c, 2)) goto L_801cd510;
    ea = c.r[6] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cd510;
    ea = c.r[6] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd508;
    ea = c.r[6] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801cd510;
L_801cd508:
    c.r[3] = c.r[27] | c.r[27];
    goto L_801cd748;
L_801cd510:
    ea = c.r[6] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x64u);
    if (wp::cr_get(c, 2)) goto L_801cd548;
    wp::compare_signed(c, 0, c.r[0], 0x69u);
    if (wp::cr_get(c, 2)) goto L_801cd548;
    wp::compare_signed(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801cd58c;
    wp::compare_signed(c, 0, c.r[0], 0x75u);
    if (wp::cr_get(c, 2)) goto L_801cd59c;
    wp::compare_signed(c, 0, c.r[0], 0x78u);
    if (wp::cr_get(c, 2)) goto L_801cd5ac;
    wp::compare_signed(c, 0, c.r[0], 0x58u);
    if (wp::cr_get(c, 2)) goto L_801cd5ac;
    goto L_801cd5b8;
L_801cd548:
    c.r[29] = 0x0u;
    c.r[0] = c.r[3] ^ 0x80000000u;
    c.r[6] = c.r[29] ^ 0x80000000u;
    c.r[28] = 0xau;
    c.r[5] = wp::sub_carry(c, c.r[29], c.r[4]);
    c.r[6] = wp::sub_extended(c, c.r[6], c.r[0]);
    c.r[6] = wp::sub_extended(c, c.r[0], c.r[0]);
    c.r[6] = 0u - c.r[6];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_801cd5b8;
    c.r[0] = 0x80000000u;
    c.r[0] = c.r[3] ^ c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cd584;
    c.r[30] = wp::sub_carry(c, c.r[4], 0x0u);
    c.r[31] = wp::sub_extended(c, c.r[3], 0);
L_801cd584:
    c.r[25] = 0x1u;
    goto L_801cd5b8;
L_801cd58c:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0x8u;
    goto L_801cd5b8;
L_801cd59c:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0xau;
    goto L_801cd5b8;
L_801cd5ac:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0x10u;
L_801cd5b8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.lr = 0x801cd5ccu;
    f_801c8640(c);
R_801cd5cc:
    c.r[22] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.lr = 0x801cd5e4u;
    f_801c841c(c);
R_801cd5e4:
    wp::compare_signed(c, 0, c.r[22], 0xau);
    c.r[30] = c.r[4] | c.r[4];
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 0)) goto L_801cd5fc;
    c.r[5] = c.r[22] + 0x30u;
    goto L_801cd610;
L_801cd5fc:
    ea = c.r[24] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[22] + 0x37u;
    wp::compare_unsigned(c, 0, c.r[0], 0x78u);
    if (!wp::cr_get(c, 2)) goto L_801cd610;
    c.r[5] = c.r[22] + 0x57u;
L_801cd610:
    c.r[0] = c.r[4] | c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[5]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cd5b8;
    }
    c.r[0] = c.r[28] ^ 0x8u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cd650;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd650;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801cd650;
    c.r[0] = 0x30u;
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
L_801cd650:
    ea = c.r[24] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cd6a8;
    ea = c.r[24] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cd678;
    ea = c.r[24] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd684;
L_801cd678:
    ea = c.r[24] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801cd684:
    c.r[0] = c.r[28] ^ 0x10u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cd6a8;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd6a8;
    ea = c.r[24] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xfffffffeu;
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801cd6a8:
    ea = c.r[24] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[23] - c.r[27];
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801cd6c4;
    c.r[3] = 0x0u;
    goto L_801cd748;
L_801cd6c4:
    c.r[3] = 0x30u;
    goto L_801cd6d4;
L_801cd6cc:
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
L_801cd6d4:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cd6cc;
    }
    c.r[0] = c.r[28] ^ 0x10u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cd708;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd708;
    ea = c.r[24] + 0x5u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = 0x30u;
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    ea = c.r[27] + 0xfffffffeu;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ea;
L_801cd708:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cd71c;
    c.r[0] = 0x2du;
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ea;
    goto L_801cd744;
L_801cd71c:
    ea = c.r[24] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cd734;
    c.r[0] = 0x2bu;
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ea;
    goto L_801cd744;
L_801cd734:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cd744;
    c.r[0] = 0x20u;
    ea = c.r[27] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[27] = ea;
L_801cd744:
    c.r[3] = c.r[27] | c.r[27];
L_801cd748:
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801cd75c(wp::Cpu& c) {
    WP_ENTER(0x801cd75cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cd7ccu: goto R_801cd7cc;
        case 0x801cd820u: goto R_801cd820;
        case 0x801cd838u: goto R_801cd838;
        case 0x801cd860u: goto R_801cd860;
        case 0x801cd878u: goto R_801cd878;
        case 0x801cd8b0u: goto R_801cd8b0;
        case 0x801cd8c8u: goto R_801cd8c8;
        case 0x801cd8f0u: goto R_801cd8f0;
        case 0x801cd908u: goto R_801cd908;
        case 0x801cd988u: goto R_801cd988;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x80230000u;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xf78u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[5] + 0x0u;
    c.r[31] = wp::rd8(ea);
    if (!wp::cr_get(c, 1)) goto L_801cd7b0;
    c.r[3] = 0x0u;
    goto L_801cdafc;
L_801cd7b0:
    c.r[28] = 0x0u;
    c.r[0] = 0x20u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[28]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x12u;
    wp::wr16(ea, c.r[0]);
    c.lr = 0x801cd7ccu;
    f_801cb41c(c);
R_801cd7cc:
    ea = c.r[1] + 0x3du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801cd7ec;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801cd7f4;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801cd880;
    goto L_801cd910;
L_801cd7ec:
    ea = c.r[1] + 0x3au;
    wp::wr16(ea, c.r[28]);
    goto L_801cd910;
L_801cd7f4:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cd83c;
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[28] = c.r[29] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801cd824;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.lr = 0x801cd820u;
    f_801cf394(c);
R_801cd820:
    goto L_801cd878;
L_801cd824:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x5u;
    c.lr = 0x801cd838u;
    f_801cf394(c);
R_801cd838:
    goto L_801cd878;
L_801cd83c:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[28] = c.r[29] + 0xfffffffcu;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801cd864;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0xau;
    c.lr = 0x801cd860u;
    f_801cf394(c);
R_801cd860:
    goto L_801cd878;
L_801cd864:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0xeu;
    c.lr = 0x801cd878u;
    f_801cf394(c);
L_801cd878:
R_801cd878:
    c.r[3] = c.r[28] | c.r[28];
    goto L_801cdafc;
L_801cd880:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cd8cc;
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[28] = c.r[29] + 0xfffffffbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801cd8b4;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x12u;
    c.lr = 0x801cd8b0u;
    f_801cf394(c);
R_801cd8b0:
    goto L_801cd908;
L_801cd8b4:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x17u;
    c.lr = 0x801cd8c8u;
    f_801cf394(c);
R_801cd8c8:
    goto L_801cd908;
L_801cd8cc:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[28] = c.r[29] + 0xfffffffcu;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801cd8f4;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x1cu;
    c.lr = 0x801cd8f0u;
    f_801cf394(c);
R_801cd8f0:
    goto L_801cd908;
L_801cd8f4:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x20u;
    c.lr = 0x801cd908u;
    f_801cf394(c);
L_801cd908:
R_801cd908:
    c.r[3] = c.r[28] | c.r[28];
    goto L_801cdafc;
L_801cd910:
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    c.r[8] = 0x0u;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd8(ea);
    c.r[9] = 0x1u;
    c.r[0] = wp::rotl(c.r[0], 17) & 0xfffe0000u;
    c.r[7] = 0x64u;
    c.r[0] = (wp::rotl(c.r[3], 25) & 0xfe000000u) | (c.r[0] & 0x1ffffffu);
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[9]);
    c.r[5] = wp::rotl(c.r[0], 11) & 0x7ffu;
    c.r[4] = c.r[29] | c.r[29];
    c.r[0] = 0u - c.r[5];
    ea = c.r[1] + 0x29u;
    wp::wr8(ea, c.r[9]);
    c.r[3] = c.r[0] | c.r[5];
    c.r[0] = c.r[5] + 0xfffffc01u;
    ea = c.r[1] + 0x2au;
    wp::wr8(ea, c.r[8]);
    c.r[3] = wp::sraw(c, c.r[3], 31);
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x2bu;
    wp::wr8(ea, c.r[8]);
    c.r[3] = c.r[0] & c.r[3];
    ea = c.r[1] + 0x28u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[8]);
    ea = c.r[1] + 0x2du;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[9]);
    c.lr = 0x801cd988u;
    f_801cd26c(c);
R_801cd988:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801cd9a0;
    c.r[0] = 0x70u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801cd9a8;
L_801cd9a0:
    c.r[0] = 0x50u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cd9a8:
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[8] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[9] = c.r[4] + 0xbu;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 0)) goto L_801cda54;
L_801cd9c4:
    wp::compare_signed(c, 0, c.r[9], 0x40u);
    if (!wp::cr_get(c, 0)) goto L_801cda44;
    c.r[4] = wp::sraw(c, c.r[9], 3);
    c.r[0] = c.r[9] + 0xfffffffcu;
    c.r[7] = c.r[8] + c.r[4];
    c.r[6] = c.r[9] & 0x7u;
    c.r[4] = c.r[9] & 0xfffffff8u;
    c.r[0] = c.r[0] & 0xfffffff8u;
    ea = c.r[7] + 0x0u;
    c.r[5] = wp::rd8(ea);
    c.r[6] = wp::sub_carry(c, c.r[6], 0x7u);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[0] = wp::sraw(c, c.r[5], c.r[6]);
    c.r[4] = c.r[0] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801cda14;
    ea = c.r[7] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::rotl(c.r[0], 8) & 0xffffff00u;
    c.r[0] = wp::sraw(c, c.r[0], c.r[6]);
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = c.r[0] & 0xffu;
L_801cda14:
    c.r[4] = c.r[4] & 0xfu;
    wp::compare_unsigned(c, 0, c.r[4], 0xau);
    if (!wp::cr_get(c, 0)) goto L_801cda28;
    c.r[4] = c.r[4] + 0x30u;
    goto L_801cda48;
L_801cda28:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801cda3c;
    c.r[4] = c.r[4] + 0x57u;
    goto L_801cda48;
L_801cda3c:
    c.r[4] = c.r[4] + 0x37u;
    goto L_801cda48;
L_801cda44:
    c.r[4] = 0x30u;
L_801cda48:
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    c.r[3] = ea;
    c.r[9] = c.r[9] + 0xfffffffcu;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cd9c4;
    }
L_801cda54:
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cda6c;
    ea = c.r[30] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cda70;
L_801cda6c:
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[31]);
    c.r[3] = ea;
L_801cda70:
    c.f[1] = std::fabs(c.f[31]);
    ea = c.r[2] + 0xffff98e8u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (wp::cr_get(c, 2)) goto L_801cda8c;
    c.r[0] = 0x31u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801cda94;
L_801cda8c:
    c.r[0] = 0x30u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cda94:
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801cdaac;
    c.r[0] = 0x78u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801cdab4;
L_801cdaac:
    c.r[0] = 0x58u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cdab4:
    c.r[0] = 0x30u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cdad4;
    c.r[0] = 0x2du;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801cdafc;
L_801cdad4:
    ea = c.r[30] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cdaec;
    c.r[0] = 0x2bu;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801cdafc;
L_801cdaec:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cdafc;
    c.r[0] = 0x20u;
    ea = c.r[3] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[3] = ea;
L_801cdafc:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x70u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801cdb24(wp::Cpu& c) {
    WP_ENTER(0x801cdb24u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801cdb48;
L_801cdb2c:
    c.r[5] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = 0x30u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[0]);
    return;
L_801cdb48:
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[7]);
    if (!wp::cr_get(c, 0)) return;
    c.r[6] = c.r[3] + c.r[4];
    ea = c.r[6] + 0x5u;
    c.r[5] = wp::rd8(ea);
    c.r[8] = c.r[6] + 0x5u;
    c.r[0] = c.r[5] + 0xffffffd0u;
    c.r[6] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[6], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_801cdbac;
    c.r[5] = c.r[3] + c.r[7];
    c.r[5] = c.r[5] + 0x5u;
L_801cdb78:
    c.r[5] = c.r[5] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[8]);
    if (!wp::cr_get(c, 1)) goto L_801cdb90;
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cdb78;
    }
L_801cdb90:
    wp::compare_unsigned(c, 0, c.r[5], c.r[8]);
    if (!wp::cr_get(c, 2)) goto L_801cdba4;
    ea = c.r[8] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[0] & 0x1u;
    goto L_801cdbc0;
L_801cdba4:
    c.r[5] = 0x1u;
    goto L_801cdbc0;
L_801cdbac:
    c.r[0] = c.r[6] ^ 0x5u;
    c.r[5] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[6];
    c.r[0] = c.r[5] - c.r[0];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
L_801cdbc0:
    c.ctr = c.r[4];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdc14;
L_801cdbcc:
    ea = c.r[8] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[8] = ea;
    c.r[5] = c.r[0] + c.r[5];
    c.r[0] = c.r[5] + 0xffffffd0u;
    c.r[6] = wp::sign_extend8(c.r[0]);
    c.r[0] = c.r[6] ^ 0x9u;
    c.r[5] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[6];
    c.r[0] = c.r[5] - c.r[0];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) goto L_801cdbfc;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cdc04;
L_801cdbfc:
    c.r[4] = c.r[4] + 0xffffffffu;
    goto L_801cdc10;
L_801cdc04:
    c.r[0] = c.r[6] + 0x30u;
    ea = c.r[8] + 0x0u;
    wp::wr8(ea, c.r[0]);
    goto L_801cdc14;
L_801cdc10:
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cdbcc;
    }
L_801cdc14:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdc3c;
    ea = c.r[3] + 0x2u;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[4] = 0x1u;
    c.r[0] = 0x31u;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    c.r[4] = c.r[5] + 0x1u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[4]);
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[0]);
    return;
L_801cdc3c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cdb2c;
    }
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_801cdc4c(wp::Cpu& c) {
    WP_ENTER(0x801cdc4cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cdcb4u: goto R_801cdcb4;
        case 0x801cdd88u: goto R_801cdd88;
        case 0x801cdda0u: goto R_801cdda0;
        case 0x801cde04u: goto R_801cde04;
        case 0x801cde1cu: goto R_801cde1c;
        case 0x801cde90u: goto R_801cde90;
        case 0x801cdea8u: goto R_801cdea8;
        case 0x801cdf0cu: goto R_801cdf0c;
        case 0x801cdf24u: goto R_801cdf24;
        case 0x801cdfa0u: goto R_801cdfa0;
        case 0x801ce05cu: goto R_801ce05c;
        case 0x801ce1d8u: goto R_801ce1d8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x80230000u;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xf78u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    ea = c.r[5] + 0x0u;
    c.r[30] = wp::rd8(ea);
    if (!wp::cr_get(c, 1)) goto L_801cdc98;
    c.r[3] = 0x0u;
    goto L_801ce3c4;
L_801cdc98:
    c.r[3] = 0x0u;
    c.r[0] = 0x20u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xau;
    wp::wr16(ea, c.r[0]);
    c.lr = 0x801cdcb4u;
    f_801cb41c(c);
R_801cdcb4:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[1] + 0x11u;
    c.r[5] = c.r[5] + c.r[0];
    goto L_801cdcdc;
L_801cdcc4:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[3] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
L_801cdcdc:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801cdcf4;
    ea = c.r[5] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cdcc4;
    }
L_801cdcf4:
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801cdd14;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801cdd20;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801cde24;
    goto L_801cdf2c;
L_801cdd14:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801cdf2c;
L_801cdd20:
    ea = c.r[2] + 0xffff98e8u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801cdda4;
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[31] = c.r[28] + 0xfffffffbu;
    c.r[3] = 0x1u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801cdd44;
    c.r[3] = 0x0u;
L_801cdd44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdd54;
    c.r[0] = 0x0u;
    goto L_801cdd70;
L_801cdd54:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801cdd70:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdd8c;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.lr = 0x801cdd88u;
    f_801cf394(c);
R_801cdd88:
    goto L_801cde1c;
L_801cdd8c:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x5u;
    c.lr = 0x801cdda0u;
    f_801cf394(c);
R_801cdda0:
    goto L_801cde1c;
L_801cdda4:
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[31] = c.r[28] + 0xfffffffcu;
    c.r[3] = 0x1u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801cddbc;
    c.r[3] = 0x0u;
L_801cddbc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cddcc;
    c.r[0] = 0x0u;
    goto L_801cdde8;
L_801cddcc:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801cdde8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cde08;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0xau;
    c.lr = 0x801cde04u;
    f_801cf394(c);
R_801cde04:
    goto L_801cde1c;
L_801cde08:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0xeu;
    c.lr = 0x801cde1cu;
    f_801cf394(c);
L_801cde1c:
R_801cde1c:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801ce3c4;
L_801cde24:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cdeac;
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[31] = c.r[28] + 0xfffffffbu;
    c.r[3] = 0x1u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801cde48;
    c.r[3] = 0x0u;
L_801cde48:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cde58;
    c.r[0] = 0x0u;
    goto L_801cde74;
L_801cde58:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801cde74:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cde94;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x12u;
    c.lr = 0x801cde90u;
    f_801cf394(c);
R_801cde90:
    goto L_801cdf24;
L_801cde94:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x17u;
    c.lr = 0x801cdea8u;
    f_801cf394(c);
R_801cdea8:
    goto L_801cdf24;
L_801cdeac:
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    c.r[31] = c.r[28] + 0xfffffffcu;
    c.r[3] = 0x1u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801cdec4;
    c.r[3] = 0x0u;
L_801cdec4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cded4;
    c.r[0] = 0x0u;
    goto L_801cdef0;
L_801cded4:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801cdef0:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdf10;
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x1cu;
    c.lr = 0x801cdf0cu;
    f_801cf394(c);
R_801cdf0c:
    goto L_801cdf24;
L_801cdf10:
    c.r[4] = 0x80200000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x7568u;
    c.r[4] = c.r[4] + 0x20u;
    c.lr = 0x801cdf24u;
    f_801cf394(c);
L_801cdf24:
R_801cdf24:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801ce3c4;
L_801cdf2c:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xeu;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    c.r[31] = c.r[28] + 0xffffffffu;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[3] = wp::sign_extend16(c.r[3]);
    c.r[3] = c.r[4] + c.r[3];
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[3]);
    ea = c.r[28] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x67u);
    if (wp::cr_get(c, 2)) goto L_801cdf88;
    wp::compare_signed(c, 0, c.r[0], 0x47u);
    if (wp::cr_get(c, 2)) goto L_801cdf88;
    wp::compare_signed(c, 0, c.r[0], 0x65u);
    if (wp::cr_get(c, 2)) goto L_801ce040;
    wp::compare_signed(c, 0, c.r[0], 0x45u);
    if (wp::cr_get(c, 2)) goto L_801ce040;
    wp::compare_signed(c, 0, c.r[0], 0x66u);
    if (wp::cr_get(c, 2)) goto L_801ce1a4;
    wp::compare_signed(c, 0, c.r[0], 0x46u);
    if (wp::cr_get(c, 2)) goto L_801ce1a4;
    goto L_801ce3c0;
L_801cdf88:
    ea = c.r[29] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801cdfa0;
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x801cdfa0u;
    f_801cdb24(c);
L_801cdfa0:
R_801cdfa0:
    ea = c.r[1] + 0xeu;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    wp::compare_signed(c, 0, c.r[4], 0xfffffffcu);
    if (wp::cr_get(c, 0)) goto L_801cdfb8;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_801ce004;
L_801cdfb8:
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cdfd4;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801cdfe0;
L_801cdfd4:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801cdfe0:
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x67u);
    if (!wp::cr_get(c, 2)) goto L_801cdff8;
    c.r[0] = 0x65u;
    ea = c.r[29] + 0x5u;
    wp::wr8(ea, c.r[0]);
    goto L_801ce040;
L_801cdff8:
    c.r[0] = 0x45u;
    ea = c.r[29] + 0x5u;
    wp::wr8(ea, c.r[0]);
    goto L_801ce040;
L_801ce004:
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce020;
    c.r[0] = c.r[4] + 0x1u;
    c.r[0] = c.r[3] - c.r[0];
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801ce1a4;
L_801ce020:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[4] + 0x1u;
    c.r[0] = c.r[0] - c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801ce1a4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801ce1a4;
L_801ce040:
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801ce05c;
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x801ce05cu;
    f_801cdb24(c);
L_801ce05c:
R_801ce05c:
    ea = c.r[1] + 0xeu;
    c.r[6] = wp::sign_extend16(wp::rd16(ea));
    c.r[8] = 0x2bu;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801ce074;
    c.r[6] = 0u - c.r[6];
    c.r[8] = 0x2du;
L_801ce074:
    c.r[3] = 0x66660000u;
    c.r[7] = 0x0u;
    c.r[5] = c.r[3] + 0x6667u;
    goto L_801ce0b8;
L_801ce084:
    c.r[0] = wp::mulhw(c.r[5], c.r[6]);
    c.r[7] = c.r[7] + 0x1u;
    c.r[3] = wp::sraw(c, c.r[0], 2);
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = c.r[3] + c.r[4];
    c.r[4] = c.r[3] * 0xau;
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] - c.r[4];
    c.r[6] = c.r[0] + c.r[3];
    c.r[0] = c.r[4] + 0x30u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
L_801ce0b8:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ce084;
    }
    wp::compare_signed(c, 0, c.r[7], 0x2u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ce084;
    }
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[8]);
    ea = c.r[29] + 0x5u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[28] - c.r[31];
    c.r[0] = c.r[3] + c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801ce0f0;
    c.r[3] = 0x0u;
    goto L_801ce3c4;
L_801ce0f0:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801ce11c;
    c.r[3] = c.r[3] + 0x2u;
    c.r[0] = 0x30u;
    c.r[3] = c.r[3] - c.r[4];
    goto L_801ce114;
L_801ce110:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801ce114:
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ce110;
    }
L_801ce11c:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0x11u;
    c.r[4] = c.r[4] + c.r[3];
    goto L_801ce134;
L_801ce12c:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801ce134:
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ce12c;
    }
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce154;
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce158;
L_801ce154:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[30]);
    c.r[31] = ea;
L_801ce158:
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ce178;
    c.r[0] = 0x2du;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801ce3c0;
L_801ce178:
    ea = c.r[29] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801ce190;
    c.r[0] = 0x2bu;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801ce3c0;
L_801ce190:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801ce3c0;
    c.r[0] = 0x20u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801ce3c0;
L_801ce1a4:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[3] = c.r[4] - c.r[5];
    c.r[8] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801ce1bc;
    c.r[8] = 0x0u;
L_801ce1bc:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801ce1f0;
    c.r[0] = c.r[8] - c.r[0];
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[4] - c.r[0];
    c.lr = 0x801ce1d8u;
    f_801cdb24(c);
R_801ce1d8:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[3] = c.r[4] - c.r[5];
    c.r[8] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801ce1f0;
    c.r[8] = 0x0u;
L_801ce1f0:
    c.r[7] = wp::add_carry(c, c.r[5], 0x1u, 0);
    wp::record(c, c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801ce1fc;
    c.r[7] = 0x0u;
L_801ce1fc:
    c.r[0] = c.r[7] + c.r[8];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801ce210;
    c.r[3] = 0x0u;
    goto L_801ce3c4;
L_801ce210:
    c.r[6] = c.r[1] + 0x11u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[6] + c.r[4];
    c.r[3] = 0x30u;
    goto L_801ce22c;
L_801ce224:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[31] = ea;
    c.r[5] = c.r[5] + 0x1u;
L_801ce22c:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[8];
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ce224;
    }
    c.r[3] = 0x0u;
    goto L_801ce250;
L_801ce244:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801ce250:
    wp::compare_signed(c, 0, c.r[3], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801ce264;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ce244;
    }
L_801ce264:
    wp::compare_signed(c, 0, c.r[3], c.r[8]);
    c.r[3] = c.r[8] - c.r[3];
    c.r[4] = 0x30u;
    if (!wp::cr_get(c, 0)) goto L_801ce2b8;
    c.r[0] = wp::rotl(c.r[3], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801ce2ac;
L_801ce280:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffdu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffcu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffbu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffff9u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffff8u;
    wp::wr8(ea, c.r[4]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ce280;
    }
    c.r[3] = c.r[3] & 0x7u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801ce2b8;
L_801ce2ac:
    c.ctr = c.r[3];
L_801ce2b0:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ce2b0;
    }
L_801ce2b8:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce2d0;
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce2d4;
L_801ce2d0:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[30]);
    c.r[31] = ea;
L_801ce2d4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce378;
    c.r[4] = 0x0u;
    c.r[3] = 0x30u;
    goto L_801ce2f0;
L_801ce2e8:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[31] = ea;
    c.r[4] = c.r[4] + 0x1u;
L_801ce2f0:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[7] - c.r[0];
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801ce2e8;
    }
    wp::compare_signed(c, 0, c.r[4], c.r[7]);
    c.r[3] = c.r[7] - c.r[4];
    if (!wp::cr_get(c, 0)) goto L_801ce380;
    c.r[0] = wp::rotl(c.r[3], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801ce364;
L_801ce318:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffeu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffdu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffdu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffbu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffau;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffau;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffff9u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffff9u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffff8u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[31] + 0xfffffff8u;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ce318;
    }
    c.r[3] = c.r[3] & 0x7u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801ce380;
L_801ce364:
    c.ctr = c.r[3];
L_801ce368:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801ce368;
    }
    goto L_801ce380;
L_801ce378:
    c.r[0] = 0x30u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801ce380:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801ce398;
    c.r[0] = 0x2du;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801ce3c0;
L_801ce398:
    ea = c.r[29] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801ce3b0;
    c.r[0] = 0x2bu;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801ce3c0;
L_801ce3b0:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801ce3c0;
    c.r[0] = 0x20u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801ce3c0:
    c.r[3] = c.r[31] | c.r[31];
L_801ce3c4:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x44u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x40u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x3cu;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x38u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801ce3e8(wp::Cpu& c) {
    WP_ENTER(0x801ce3e8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ce43cu: goto R_801ce43c;
        case 0x801ce450u: goto R_801ce450;
        case 0x801ce474u: goto R_801ce474;
        case 0x801ce4a4u: goto R_801ce4a4;
        case 0x801ce4c4u: goto R_801ce4c4;
        case 0x801ce504u: goto R_801ce504;
        case 0x801ce520u: goto R_801ce520;
        case 0x801ce540u: goto R_801ce540;
        case 0x801ce560u: goto R_801ce560;
        case 0x801ce57cu: goto R_801ce57c;
        case 0x801ce590u: goto R_801ce590;
        case 0x801ce5f4u: goto R_801ce5f4;
        case 0x801ce634u: goto R_801ce634;
        case 0x801ce660u: goto R_801ce660;
        case 0x801ce67cu: goto R_801ce67c;
        case 0x801ce69cu: goto R_801ce69c;
        case 0x801ce6bcu: goto R_801ce6bc;
        case 0x801ce6d8u: goto R_801ce6d8;
        case 0x801ce6ecu: goto R_801ce6ec;
        case 0x801ce750u: goto R_801ce750;
        case 0x801ce790u: goto R_801ce790;
        case 0x801ce7bcu: goto R_801ce7bc;
        case 0x801ce7d0u: goto R_801ce7d0;
        case 0x801ce800u: goto R_801ce800;
        case 0x801ce82cu: goto R_801ce82c;
        case 0x801ce840u: goto R_801ce840;
        case 0x801ce870u: goto R_801ce870;
        case 0x801ce89cu: goto R_801ce89c;
        case 0x801ce8c0u: goto R_801ce8c0;
        case 0x801ce8e0u: goto R_801ce8e0;
        case 0x801ce8fcu: goto R_801ce8fc;
        case 0x801ce920u: goto R_801ce920;
        case 0x801ce988u: goto R_801ce988;
        case 0x801ce9a0u: goto R_801ce9a0;
        case 0x801ce9b4u: goto R_801ce9b4;
        case 0x801ce9d0u: goto R_801ce9d0;
        case 0x801cea70u: goto R_801cea70;
        case 0x801cea98u: goto R_801cea98;
        case 0x801ceabcu: goto R_801ceabc;
        case 0x801ceb3cu: goto R_801ceb3c;
        case 0x801ceb9cu: goto R_801ceb9c;
        case 0x801cebd0u: goto R_801cebd0;
        case 0x801cec10u: goto R_801cec10;
        case 0x801cec4cu: goto R_801cec4c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffd30u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x2d4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28cu;
    for (uint32_t k = 15; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[24] = 0x20u;
    c.r[22] = 0x80200000u;
    c.r[25] = c.r[3] | c.r[3];
    c.r[26] = c.r[4] | c.r[4];
    c.r[15] = c.r[5] | c.r[5];
    c.r[27] = c.r[6] | c.r[6];
    c.r[28] = c.r[7] | c.r[7];
    c.r[22] = c.r[22] + 0x7568u;
    c.r[21] = c.r[1] + 0x27fu;
    c.r[17] = 0x0u;
    c.r[20] = 0x80230000u;
    c.r[23] = 0x25u;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[24]);
    goto L_801cec70;
L_801ce430:
    c.r[3] = c.r[15] | c.r[15];
    c.r[4] = 0x25u;
    c.lr = 0x801ce43cu;
    f_801cf66c(c);
R_801ce43c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[16] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801ce484;
    c.r[3] = c.r[15] | c.r[15];
    c.lr = 0x801ce450u;
    f_801c7860(c);
R_801ce450:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = c.r[3] | c.r[3];
    c.r[17] = c.r[17] + c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cec7c;
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[15] | c.r[15];
    c.ctr = c.r[12];
    c.lr = 0x801ce474u;
    wp::call(c, c.ctr);
R_801ce474:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cec7c;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ce484:
    c.r[5] = c.r[3] - c.r[15];
    wp::record(c, c.r[5]);
    c.r[17] = c.r[17] + c.r[5];
    if (wp::cr_get(c, 2)) goto L_801ce4b4;
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[15] | c.r[15];
    c.ctr = c.r[12];
    c.lr = 0x801ce4a4u;
    wp::call(c, c.ctr);
R_801ce4a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce4b4;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ce4b4:
    c.r[3] = c.r[16] | c.r[16];
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x801ce4c4u;
    f_801cccb0(c);
R_801ce4c4:
    ea = c.r[1] + 0x75u;
    c.r[4] = wp::rd8(ea);
    c.r[15] = c.r[3] | c.r[3];
    c.r[0] = c.r[4] + 0xffffffdbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x53u);
    if (wp::cr_get(c, 1)) goto L_801cea90;
    c.r[3] = c.r[20] + 0x1250u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801ce4ecu: goto L_801ce4ec;
    case 0x801ce648u: goto L_801ce648;
    case 0x801ce7a4u: goto L_801ce7a4;
    case 0x801ce814u: goto L_801ce814;
    case 0x801ce884u: goto L_801ce884;
    case 0x801ce9a8u: goto L_801ce9a8;
    case 0x801cea60u: goto L_801cea60;
    case 0x801cea80u: goto L_801cea80;
    case 0x801cea90u: goto L_801cea90;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801ce4ec:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801ce50c;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce504u;
    f_801c787c(c);
R_801ce504:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce594;
L_801ce50c:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801ce52c;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x801ce520u;
    f_801c787c(c);
R_801ce520:
    ea = c.r[3] + 0x0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[29] = wp::rd32(ea);
    goto L_801ce594;
L_801ce52c:
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801ce54c;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x801ce540u;
    f_801c787c(c);
R_801ce540:
    ea = c.r[3] + 0x0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[29] = wp::rd32(ea);
    goto L_801ce594;
L_801ce54c:
    wp::compare_unsigned(c, 0, c.r[0], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_801ce568;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce560u;
    f_801c787c(c);
R_801ce560:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce594;
L_801ce568:
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801ce584;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce57cu;
    f_801c787c(c);
R_801ce57c:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce594;
L_801ce584:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce590u;
    f_801c787c(c);
R_801ce590:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_801ce594:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801ce5a4;
    c.r[31] = wp::sign_extend16(c.r[31]);
L_801ce5a4:
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801ce5b0;
    c.r[31] = wp::sign_extend8(c.r[31]);
L_801ce5b0:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801ce5c0;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801ce604;
L_801ce5c0:
    ea = c.r[1] + 0x70u;
    c.r[9] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x74u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x78u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0x60u;
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce5f4u;
    f_801cd4ac(c);
R_801ce5f4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
    goto L_801ce640;
L_801ce604:
    ea = c.r[1] + 0x70u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x74u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x78u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce634u;
    f_801cd26c(c);
R_801ce634:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
L_801ce640:
    c.r[19] = c.r[21] - c.r[18];
    goto L_801cead4;
L_801ce648:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801ce668;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce660u;
    f_801c787c(c);
R_801ce660:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce6f0;
L_801ce668:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801ce688;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x801ce67cu;
    f_801c787c(c);
R_801ce67c:
    ea = c.r[3] + 0x0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[29] = wp::rd32(ea);
    goto L_801ce6f0;
L_801ce688:
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801ce6a8;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x2u;
    c.lr = 0x801ce69cu;
    f_801c787c(c);
R_801ce69c:
    ea = c.r[3] + 0x0u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[29] = wp::rd32(ea);
    goto L_801ce6f0;
L_801ce6a8:
    wp::compare_unsigned(c, 0, c.r[0], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_801ce6c4;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce6bcu;
    f_801c787c(c);
R_801ce6bc:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce6f0;
L_801ce6c4:
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801ce6e0;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce6d8u;
    f_801c787c(c);
R_801ce6d8:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
    goto L_801ce6f0;
L_801ce6e0:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce6ecu;
    f_801c787c(c);
R_801ce6ec:
    ea = c.r[3] + 0x0u;
    c.r[31] = wp::rd32(ea);
L_801ce6f0:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801ce700;
    c.r[31] = c.r[31] & 0xffffu;
L_801ce700:
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801ce70c;
    c.r[31] = c.r[31] & 0xffu;
L_801ce70c:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801ce71c;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801ce760;
L_801ce71c:
    ea = c.r[1] + 0x70u;
    c.r[9] = wp::rd32(ea);
    c.r[4] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x74u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x78u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce750u;
    f_801cd4ac(c);
R_801ce750:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
    goto L_801ce79c;
L_801ce760:
    ea = c.r[1] + 0x70u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x74u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x78u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce790u;
    f_801cd26c(c);
R_801ce790:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
L_801ce79c:
    c.r[19] = c.r[21] - c.r[18];
    goto L_801cead4;
L_801ce7a4:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801ce7c4;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x3u;
    c.lr = 0x801ce7bcu;
    f_801c787c(c);
R_801ce7bc:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801ce7d4;
L_801ce7c4:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x3u;
    c.lr = 0x801ce7d0u;
    f_801c787c(c);
R_801ce7d0:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
L_801ce7d4:
    ea = c.r[1] + 0x70u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x74u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x78u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce800u;
    f_801cdc4c(c);
R_801ce800:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
    c.r[19] = c.r[21] - c.r[3];
    goto L_801cead4;
L_801ce814:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801ce834;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x3u;
    c.lr = 0x801ce82cu;
    f_801c787c(c);
R_801ce82c:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801ce844;
L_801ce834:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x3u;
    c.lr = 0x801ce840u;
    f_801c787c(c);
R_801ce840:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
L_801ce844:
    ea = c.r[1] + 0x70u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x280u;
    ea = c.r[1] + 0x74u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x78u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ce870u;
    f_801cd75c(c);
R_801ce870:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[18] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801cea90;
    c.r[19] = c.r[21] - c.r[3];
    goto L_801cead4;
L_801ce884:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_801ce8f0;
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce89cu;
    f_801c787c(c);
R_801ce89c:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_801ce8c8;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce8c8;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801ce8c0u;
    f_801d3974(c);
R_801ce8c0:
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ce8c8:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce8d4;
    c.r[4] = c.r[13] + 0xffff88c0u;
L_801ce8d4:
    c.r[3] = c.r[1] + 0x80u;
    c.r[5] = 0x200u;
    c.lr = 0x801ce8e0u;
    f_801cc6b4(c);
R_801ce8e0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801cea90;
    c.r[18] = c.r[1] + 0x80u;
    goto L_801ce900;
L_801ce8f0:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce8fcu;
    f_801c787c(c);
R_801ce8fc:
    ea = c.r[3] + 0x0u;
    c.r[18] = wp::rd32(ea);
L_801ce900:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce928;
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce928;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801ce920u;
    f_801d3974(c);
R_801ce920:
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ce928:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ce934;
    c.r[18] = c.r[22] + 0x24u;
L_801ce934:
    ea = c.r[1] + 0x73u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce968;
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[18] + 0x0u;
    c.r[19] = wp::rd8(ea);
    c.r[18] = c.r[18] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cead4;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[19], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801cead4;
    c.r[19] = c.r[0] | c.r[0];
    goto L_801cead4;
L_801ce968:
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801ce998;
    ea = c.r[1] + 0x7cu;
    c.r[19] = wp::rd32(ea);
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = c.r[19] | c.r[19];
    c.lr = 0x801ce988u;
    f_801cc838(c);
R_801ce988:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cead4;
    c.r[19] = c.r[3] - c.r[18];
    goto L_801cead4;
L_801ce998:
    c.r[3] = c.r[18] | c.r[18];
    c.lr = 0x801ce9a0u;
    f_801c7860(c);
R_801ce9a0:
    c.r[19] = c.r[3] | c.r[3];
    goto L_801cead4;
L_801ce9a8:
    c.r[3] = c.r[27] | c.r[27];
    c.r[4] = 0x1u;
    c.lr = 0x801ce9b4u;
    f_801c787c(c);
R_801ce9b4:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_801ce9d8;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801ce9d0u;
    f_801d3974(c);
R_801ce9d0:
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ce9d8:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cea18;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cea20;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801cea28;
    wp::compare_signed(c, 0, c.r[0], 0x6u);
    if (wp::cr_get(c, 2)) goto L_801cea30;
    wp::compare_signed(c, 0, c.r[0], 0x7u);
    if (wp::cr_get(c, 2)) goto L_801cea40;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (wp::cr_get(c, 2)) goto L_801cea48;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801cea50;
    goto L_801cec70;
L_801cea18:
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[17]);
    goto L_801cec70;
L_801cea20:
    ea = c.r[3] + 0x0u;
    wp::wr16(ea, c.r[17]);
    goto L_801cec70;
L_801cea28:
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[17]);
    goto L_801cec70;
L_801cea30:
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[17]);
    c.r[0] = wp::sraw(c, c.r[17], 31);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801cec70;
L_801cea40:
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[17]);
    goto L_801cec70;
L_801cea48:
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[17]);
    goto L_801cec70;
L_801cea50:
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[17]);
    c.r[0] = wp::sraw(c, c.r[17], 31);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801cec70;
L_801cea60:
    c.r[3] = c.r[27] | c.r[27];
    c.r[18] = c.r[1] + 0x80u;
    c.r[4] = 0x1u;
    c.lr = 0x801cea70u;
    f_801c787c(c);
R_801cea70:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[19] = 0x1u;
    ea = c.r[1] + 0x80u;
    wp::wr8(ea, c.r[0]);
    goto L_801cead4;
L_801cea80:
    ea = c.r[1] + 0x80u;
    wp::wr8(ea, c.r[23]);
    c.r[18] = c.r[1] + 0x80u;
    c.r[19] = 0x1u;
    goto L_801cead4;
L_801cea90:
    c.r[3] = c.r[16] | c.r[16];
    c.lr = 0x801cea98u;
    f_801c7860(c);
R_801cea98:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = c.r[3] | c.r[3];
    c.r[17] = c.r[17] + c.r[3];
    if (wp::cr_get(c, 2)) goto L_801ceacc;
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[16] | c.r[16];
    c.ctr = c.r[12];
    c.lr = 0x801ceabcu;
    wp::call(c, c.ctr);
R_801ceabc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ceacc;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ceacc:
    c.r[3] = c.r[17] | c.r[17];
    goto L_801cec80;
L_801cead4:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[19] | c.r[19];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cebf0;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    c.r[3] = 0x20u;
    if (!wp::cr_get(c, 2)) goto L_801ceaf4;
    c.r[3] = 0x30u;
L_801ceaf4:
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[18] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801ceb18;
    wp::compare_signed(c, 0, c.r[0], 0x2du);
    if (wp::cr_get(c, 2)) goto L_801ceb18;
    wp::compare_signed(c, 0, c.r[0], 0x20u);
    if (!wp::cr_get(c, 2)) goto L_801ceb54;
L_801ceb18:
    c.r[0] = wp::sign_extend8(c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801ceb54;
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[18] | c.r[18];
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801ceb3cu;
    wp::call(c, c.ctr);
R_801ceb3c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801ceb4c;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ceb4c:
    c.r[18] = c.r[18] + 0x1u;
    c.r[19] = c.r[19] + 0xffffffffu;
L_801ceb54:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801cebe4;
    ea = c.r[1] + 0x75u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (wp::cr_get(c, 2)) goto L_801ceb74;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801cebe4;
L_801ceb74:
    wp::compare_signed(c, 0, c.r[19], 0x2u);
    if (!wp::cr_get(c, 0)) goto L_801ceb84;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801ceb84:
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[18] | c.r[18];
    c.r[5] = 0x2u;
    c.ctr = c.r[12];
    c.lr = 0x801ceb9cu;
    wp::call(c, c.ctr);
R_801ceb9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cebac;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801cebac:
    c.r[19] = c.r[19] + 0xfffffffeu;
    c.r[18] = c.r[18] + 0x2u;
    goto L_801cebe4;
L_801cebb8:
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[1] + 0x9u;
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801cebd0u;
    wp::call(c, c.ctr);
R_801cebd0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cebe0;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801cebe0:
    c.r[16] = c.r[16] + 0x1u;
L_801cebe4:
    ea = c.r[1] + 0x78u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[16], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cebb8;
    }
L_801cebf0:
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cec20;
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    c.r[4] = c.r[18] | c.r[18];
    c.r[5] = c.r[19] | c.r[19];
    c.ctr = c.r[12];
    c.lr = 0x801cec10u;
    wp::call(c, c.ctr);
R_801cec10:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cec20;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801cec20:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cec6c;
    goto L_801cec60;
L_801cec30:
    c.r[12] = c.r[25] | c.r[25];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[24]);
    c.r[4] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801cec4cu;
    wp::call(c, c.ctr);
R_801cec4c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cec5c;
    c.r[3] = 0xffffffffu;
    goto L_801cec80;
L_801cec5c:
    c.r[16] = c.r[16] + 0x1u;
L_801cec60:
    ea = c.r[1] + 0x78u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[16], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801cec30;
    }
L_801cec6c:
    c.r[17] = c.r[17] + c.r[16];
L_801cec70:
    ea = c.r[15] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801ce430;
    }
L_801cec7c:
    c.r[3] = c.r[17] | c.r[17];
L_801cec80:
    ea = c.r[1] + 0x28cu;
    for (uint32_t k = 15; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x2d4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x2d0u;
    return;
}

void f_801cec94(wp::Cpu& c) {
    WP_ENTER(0x801cec94u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cecc0u: goto R_801cecc0;
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
    c.r[4] = 0x1u;
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x801cecc0u;
    f_801cbe0c(c);
R_801cecc0:
    wp::compare_unsigned(c, 0, c.r[31], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801ceccc;
    goto L_801cecd0;
L_801ceccc:
    c.r[30] = 0x0u;
L_801cecd0:
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

void f_801cecec(wp::Cpu& c) {
    WP_ENTER(0x801cececu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801ced30u: goto R_801ced30;
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
    ea = c.r[3] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[6] + c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], c.r[7]);
    c.r[31] = c.r[7] - c.r[6];
    if (wp::cr_get(c, 1)) goto L_801ced20;
    c.r[31] = c.r[5] | c.r[5];
L_801ced20:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[0] + c.r[6];
    c.lr = 0x801ced30u;
    f_800043c4(c);
R_801ced30:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x1u;
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x8u;
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

void f_801ced58(wp::Cpu& c) {
    WP_ENTER(0x801ced58u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cedc8u: goto R_801cedc8;
        case 0x801cee0cu: goto R_801cee0c;
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
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801ced94;
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
L_801ced94:
    c.r[31] = 0x80230000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[31] = c.r[31] + 0xcd0u;
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] + 0x50u;
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
    c.lr = 0x801cedc8u;
    f_801d37f0(c);
R_801cedc8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801cedd8;
    c.r[3] = 0xffffffffu;
    goto L_801cee0c;
L_801cedd8:
    c.r[4] = c.r[1] + 0x88u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[5] = 0x1000000u;
    c.r[3] = 0x801d0000u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[5]);
    c.r[6] = c.r[1] + 0x68u;
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[3] + 0xffffec94u;
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[31] + 0x50u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801cee0cu;
    f_801ce3e8(c);
L_801cee0c:
R_801cee0c:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_801cee24(wp::Cpu& c) {
    WP_ENTER(0x801cee24u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cee90u: goto R_801cee90;
        case 0x801ceed4u: goto R_801ceed4;
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
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801cee64;
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
L_801cee64:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0xffffffffu;
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
    c.lr = 0x801cee90u;
    f_801d37f0(c);
R_801cee90:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801ceea0;
    c.r[3] = 0xffffffffu;
    goto L_801ceed4;
L_801ceea0:
    c.r[7] = c.r[1] + 0x88u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[4] = 0x2000000u;
    c.r[3] = 0x801d0000u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[4]);
    c.r[6] = c.r[1] + 0x68u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[3] + 0xffffec94u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801ceed4u;
    f_801ce3e8(c);
L_801ceed4:
R_801ceed4:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_801ceeec(wp::Cpu& c) {
    WP_ENTER(0x801ceeecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cef20u: goto R_801cef20;
        case 0x801cef4cu: goto R_801cef4c;
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
    c.r[31] = 0x80230000u;
    c.r[31] = c.r[31] + 0xcd0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    c.r[4] = 0xffffffffu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] + 0x50u;
    c.lr = 0x801cef20u;
    f_801d37f0(c);
R_801cef20:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801cef30;
    c.r[3] = 0xffffffffu;
    goto L_801cef4c;
L_801cef30:
    c.r[3] = 0x801d0000u;
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] + 0x50u;
    c.r[3] = c.r[3] + 0xffffec94u;
    c.r[7] = 0x0u;
    c.lr = 0x801cef4cu;
    f_801ce3e8(c);
L_801cef4c:
R_801cef4c:
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

void f_801cef68(wp::Cpu& c) {
    WP_ENTER(0x801cef68u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cefacu: goto R_801cefac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x801d0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[7] + 0xffffececu;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801cefacu;
    f_801ce3e8(c);
R_801cefac:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cefd4;
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_801cefc4;
    ea = c.r[29] + c.r[3];
    wp::wr8(ea, c.r[31]);
    goto L_801cefd4;
L_801cefc4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cefd4;
    c.r[4] = c.r[29] + c.r[30];
    ea = c.r[4] + 0xffffffffu;
    wp::wr8(ea, c.r[31]);
L_801cefd4:
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

void f_801ceff0(wp::Cpu& c) {
    WP_ENTER(0x801ceff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cf03cu: goto R_801cf03c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = c.r[5] | c.r[5];
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[7] = 0x801d0000u;
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0xffffffffu;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[7] + 0xffffececu;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801cf03cu;
    f_801ce3e8(c);
R_801cf03c:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf058;
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_801cf054;
    ea = c.r[29] + c.r[3];
    wp::wr8(ea, c.r[31]);
    goto L_801cf058;
L_801cf054:
    ea = c.r[29] + 0xfffffffeu;
    wp::wr8(ea, c.r[31]);
L_801cf058:
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

void f_801cf074(wp::Cpu& c) {
    WP_ENTER(0x801cf074u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cf120u: goto R_801cf120;
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
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801cf0bc;
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
L_801cf0bc:
    c.r[12] = c.r[1] + 0x98u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[30] = 0x3000000u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = 0x0u;
    c.r[7] = c.r[1] + 0x74u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = c.r[7] | c.r[7];
    c.r[11] = 0x801d0000u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[11] + 0xffffececu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x68u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801cf120u;
    f_801ce3e8(c);
R_801cf120:
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf148;
    wp::compare_unsigned(c, 0, c.r[3], c.r[29]);
    if (!wp::cr_get(c, 0)) goto L_801cf138;
    ea = c.r[28] + c.r[3];
    wp::wr8(ea, c.r[31]);
    goto L_801cf148;
L_801cf138:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf148;
    c.r[4] = c.r[28] + c.r[29];
    ea = c.r[4] + 0xffffffffu;
    wp::wr8(ea, c.r[31]);
L_801cf148:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801cf168(wp::Cpu& c) {
    WP_ENTER(0x801cf168u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cf20cu: goto R_801cf20c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff60u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xa4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8cu;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801cf1a0;
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
L_801cf1a0:
    c.r[12] = c.r[1] + 0xa8u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[29] = 0x2000000u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    c.r[30] = 0xffffffffu;
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[28] = c.r[1] + 0x74u;
    c.r[11] = 0x801d0000u;
    c.r[5] = c.r[4] | c.r[4];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x68u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[11] + 0xffffececu;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801cf20cu;
    f_801ce3e8(c);
R_801cf20c:
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf228;
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_801cf224;
    ea = c.r[27] + c.r[3];
    wp::wr8(ea, c.r[31]);
    goto L_801cf228;
L_801cf224:
    ea = c.r[27] + 0xfffffffeu;
    wp::wr8(ea, c.r[31]);
L_801cf228:
    ea = c.r[1] + 0x8cu;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0xa4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xa0u;
    return;
}

void f_801cf23c(wp::Cpu& c) {
    WP_ENTER(0x801cf23cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x41c60000u;
    ea = c.r[13] + 0xffff88c8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x4e6du;
    c.r[3] = c.r[4] * c.r[0];
    c.r[0] = c.r[3] + 0x3039u;
    ea = c.r[13] + 0xffff88c8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 16) & 0x7fffu;
    return;
}

void f_801cf25c(wp::Cpu& c) {
    WP_ENTER(0x801cf25cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff88c8u;
    wp::wr32(ea, c.r[3]);
    return;
}

void f_801cf264(wp::Cpu& c) {
    WP_ENTER(0x801cf264u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf280;
    wp::compare_signed(c, 0, c.r[5], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cf2b0;
    wp::compare_signed(c, 0, c.r[5], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801cf2dc;
    goto L_801cf2e4;
L_801cf280:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[5] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[5]);
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cf2a0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0xffffffffu;
    return;
L_801cf2a0:
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[5] | c.r[5];
    return;
L_801cf2b0:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf2cc;
    ea = c.r[3] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[5] + 0xffffffffu;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801cf2d4;
L_801cf2cc:
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801cf2d4:
    c.r[3] = c.r[4] | c.r[4];
    return;
L_801cf2dc:
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    return;
L_801cf2e4:
    c.r[3] = 0x0u;
    return;
}

void f_801cf2ec(wp::Cpu& c) {
    WP_ENTER(0x801cf2ecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cf368u: goto R_801cf368;
        case 0x801cf378u: goto R_801cf378;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 1)) goto L_801cf318;
    c.r[3] = 0xffffffffu;
    goto L_801cf37c;
L_801cf318:
    c.r[4] = 0x802f0000u;
    c.r[5] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[4] + 0x2f58u;
    ea = c.r[4] + c.r[5];
    c.r[31] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cf338;
    c.r[0] = 0x0u;
    ea = c.r[4] + c.r[5];
    wp::wr32(ea, c.r[0]);
L_801cf338:
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cf350;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf358;
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801cf358;
L_801cf350:
    c.r[3] = 0x0u;
    goto L_801cf37c;
L_801cf358:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf368;
    c.r[3] = 0x0u;
    c.lr = 0x801cf368u;
    f_80143650(c);
L_801cf368:
R_801cf368:
    c.r[12] = c.r[31] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x801cf378u;
    wp::call(c, c.ctr);
R_801cf378:
    c.r[3] = 0x0u;
L_801cf37c:
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

void f_801cf394(wp::Cpu& c) {
    WP_ENTER(0x801cf394u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = c.r[3] & 0x3u;
    c.r[5] = c.r[4] & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    c.r[7] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801cf430;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf3ec;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.r[0] = wp::sub_carry(c, c.r[5], 0x3u);
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf3e4;
L_801cf3d0:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[7] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[7] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cf3d0;
    }
L_801cf3e4:
    c.r[7] = c.r[7] + 0x1u;
    c.r[4] = c.r[4] + 0x1u;
L_801cf3ec:
    ea = c.r[4] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[5] = 0x80810000u;
    c.r[5] = c.r[5] + 0xffff8080u;
    c.r[6] = c.r[8] + 0xfeff0000u;
    c.r[6] = c.r[6] + 0xfffffeffu;
    c.r[6] = c.r[6] & ~c.r[8];
    c.r[0] = c.r[6] & c.r[5];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cf430;
    c.r[7] = c.r[7] + 0xfffffffcu;
L_801cf410:
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[8]);
    c.r[7] = ea;
    ea = c.r[4] + 0x4u;
    c.r[8] = wp::rd32(ea);
    c.r[4] = ea;
    c.r[6] = c.r[8] + 0xfeff0000u;
    c.r[6] = c.r[6] + 0xfffffeffu;
    c.r[6] = c.r[6] & ~c.r[8];
    c.r[0] = c.r[6] & c.r[5];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf410;
    }
    c.r[7] = c.r[7] + 0x4u;
L_801cf430:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[7] + 0x0u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
L_801cf440:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[7] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[7] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf440;
    }
    return;
}

void f_801cf454(wp::Cpu& c) {
    WP_ENTER(0x801cf454u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[3] + 0xffffffffu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cf48c;
L_801cf464:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf48c;
    c.r[0] = 0x0u;
    goto L_801cf480;
L_801cf47c:
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
L_801cf480:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf47c;
    }
    return;
L_801cf48c:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf464;
    }
    return;
}

void f_801cf498(wp::Cpu& c) {
    WP_ENTER(0x801cf498u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[5] = c.r[3] + 0xffffffffu;
L_801cf4a0:
    ea = c.r[5] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf4a0;
    }
    c.r[5] = c.r[5] + 0xffffffffu;
L_801cf4b0:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf4b0;
    }
    return;
}

void f_801cf4c4(wp::Cpu& c) {
    WP_ENTER(0x801cf4c4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[3] + 0xffffffffu;
L_801cf4cc:
    ea = c.r[6] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf4cc;
    }
    c.r[6] = c.r[6] + 0xffffffffu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801cf4fc;
L_801cf4e4:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[6] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf4fc;
    c.r[6] = c.r[6] + 0xffffffffu;
    goto L_801cf504;
L_801cf4fc:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf4e4;
    }
L_801cf504:
    c.r[0] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[0]);
    return;
}

void f_801cf510(wp::Cpu& c) {
    WP_ENTER(0x801cf510u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[5] - c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf528;
    c.r[3] = c.r[0] | c.r[0];
    return;
L_801cf528:
    c.r[0] = c.r[4] & 0x3u;
    c.r[6] = c.r[3] & 0x3u;
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801cf5f4;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf594;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf550;
    c.r[3] = 0x0u;
    return;
L_801cf550:
    c.r[0] = wp::sub_carry(c, c.r[6], 0x3u);
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf58c;
L_801cf560:
    ea = c.r[3] + 0x1u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = ea;
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[0] = c.r[5] - c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf578;
    c.r[3] = c.r[0] | c.r[0];
    return;
L_801cf578:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf588;
    c.r[3] = 0x0u;
    return;
L_801cf588:
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801cf560;
    }
L_801cf58c:
    c.r[3] = c.r[3] + 0x1u;
    c.r[4] = c.r[4] + 0x1u;
L_801cf594:
    ea = c.r[3] + 0x0u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = 0x80810000u;
    c.r[6] = c.r[5] + 0xffff8080u;
    ea = c.r[4] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[5] = c.r[7] + 0xfeff0000u;
    c.r[5] = c.r[5] + 0xfffffeffu;
    c.r[5] = c.r[5] & ~c.r[7];
    c.r[0] = c.r[5] & c.r[6];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cf5dc;
    goto L_801cf5d4;
L_801cf5bc:
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = ea;
    ea = c.r[4] + 0x4u;
    c.r[8] = wp::rd32(ea);
    c.r[4] = ea;
    c.r[5] = c.r[7] + 0xfeff0000u;
    c.r[0] = c.r[5] + 0xfffffeffu;
    c.r[0] = c.r[0] & c.r[6];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cf5dc;
L_801cf5d4:
    wp::compare_unsigned(c, 0, c.r[7], c.r[8]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf5bc;
    }
L_801cf5dc:
    ea = c.r[3] + 0x0u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[5] - c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf5f4;
    c.r[3] = c.r[0] | c.r[0];
    return;
L_801cf5f4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf604;
    c.r[3] = 0x0u;
    return;
L_801cf604:
    ea = c.r[3] + 0x1u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = ea;
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[0] = c.r[5] - c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf61c;
    c.r[3] = c.r[0] | c.r[0];
    return;
L_801cf61c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf604;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801cf62c(wp::Cpu& c) {
    WP_ENTER(0x801cf62cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.r[6] = c.r[5] + 0x1u;
    goto L_801cf65c;
L_801cf63c:
    ea = c.r[3] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = ea;
    ea = c.r[4] + 0x1u;
    c.r[5] = wp::rd8(ea);
    c.r[4] = ea;
    wp::compare_unsigned(c, 0, c.r[0], c.r[5]);
    if (wp::cr_get(c, 2)) goto L_801cf654;
    c.r[3] = c.r[0] - c.r[5];
    return;
L_801cf654:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf664;
L_801cf65c:
    c.r[6] = wp::add_carry(c, c.r[6], 0xffffffffu, 0);
    wp::record(c, c.r[6]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf63c;
    }
L_801cf664:
    c.r[3] = 0x0u;
    return;
}

void f_801cf66c(wp::Cpu& c) {
    WP_ENTER(0x801cf66cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[0] = c.r[4] & 0xffu;
    goto L_801cf680;
L_801cf678:
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 2)) return;
L_801cf680:
    ea = c.r[3] + 0x1u;
    c.r[4] = wp::rd8(ea);
    c.r[3] = ea;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf678;
    }
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.r[3] = 0x0u;
    return;
}

void f_801cf69c(wp::Cpu& c) {
    WP_ENTER(0x801cf69cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = 0x0u;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf6d0;
    ea = c.r[13] + 0xffff88d4u;
    wp::wr32(ea, c.r[3]);
L_801cf6d0:
    c.r[7] = c.r[4] + 0xffffffffu;
    c.r[5] = c.r[1] + 0x8u;
    c.r[3] = 0x1u;
    goto L_801cf6fc;
L_801cf6e0:
    c.r[6] = wp::rotl(c.r[0], 29) & 0x1fu;
    c.r[0] = c.r[0] & 0x7u;
    c.r[0] = wp::slw(c.r[3], c.r[0]);
    ea = c.r[5] + c.r[6];
    c.r[4] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[5] + c.r[6];
    wp::wr8(ea, c.r[0]);
L_801cf6fc:
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf6e0;
    }
    ea = c.r[13] + 0xffff88d4u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    c.r[3] = 0x1u;
    c.r[7] = c.r[4] + 0xffffffffu;
    goto L_801cf738;
L_801cf71c:
    c.r[4] = wp::rotl(c.r[6], 29) & 0x1fu;
    c.r[0] = c.r[6] & 0x7u;
    c.r[0] = wp::slw(c.r[3], c.r[0]);
    ea = c.r[5] + c.r[4];
    c.r[4] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[4] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cf744;
L_801cf738:
    ea = c.r[7] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[7] = ea;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf71c;
    }
L_801cf744:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf75c;
    ea = c.r[13] + 0xffff88d0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[13] + 0xffff88d4u;
    wp::wr32(ea, c.r[0]);
    goto L_801cf7b8;
L_801cf75c:
    c.r[3] = c.r[7] | c.r[7];
    c.r[6] = c.r[1] + 0x8u;
    c.r[4] = 0x1u;
    goto L_801cf788;
L_801cf76c:
    c.r[5] = wp::rotl(c.r[8], 29) & 0x1fu;
    c.r[0] = c.r[8] & 0x7u;
    c.r[0] = wp::slw(c.r[4], c.r[0]);
    ea = c.r[6] + c.r[5];
    c.r[5] = wp::rd8(ea);
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[5] & c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801cf794;
L_801cf788:
    ea = c.r[7] + 0x1u;
    c.r[8] = wp::rd8(ea);
    c.r[7] = ea;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf76c;
    }
L_801cf794:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf7a8;
    ea = c.r[13] + 0xffff88d0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[13] + 0xffff88d4u;
    wp::wr32(ea, c.r[0]);
    goto L_801cf7b8;
L_801cf7a8:
    c.r[4] = c.r[7] + 0x1u;
    c.r[0] = 0x0u;
    ea = c.r[13] + 0xffff88d4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0x0u;
    wp::wr8(ea, c.r[0]);
L_801cf7b8:
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801cf7c0(wp::Cpu& c) {
    WP_ENTER(0x801cf7c0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[5] = c.r[3] + 0xffffffffu;
    if (wp::cr_get(c, 2)) return;
    ea = c.r[4] + 0x0u;
    c.r[6] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf818;
    return;
    goto L_801cf818;
L_801cf7e0:
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801cf818;
    c.r[7] = c.r[5] + 0xffffffffu;
    c.r[8] = c.r[4] + 0xffffffffu;
L_801cf7f0:
    ea = c.r[7] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = ea;
    ea = c.r[8] + 0x1u;
    c.r[3] = wp::rd8(ea);
    c.r[8] = ea;
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801cf808;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf7f0;
    }
L_801cf808:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cf818;
    c.r[3] = c.r[5] | c.r[5];
    return;
L_801cf818:
    ea = c.r[5] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf7e0;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801cf82c(wp::Cpu& c) {
    WP_ENTER(0x801cf82cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801cf840u: goto R_801cf840;
        case 0x801cf8e4u: goto R_801cf8e4;
        case 0x801cfa28u: goto R_801cfa28;
        case 0x801cfaa4u: goto R_801cfaa4;
        case 0x801cfad0u: goto R_801cfad0;
        case 0x801cfaf8u: goto R_801cfaf8;
        case 0x801cfb54u: goto R_801cfb54;
        case 0x801cfc50u: goto R_801cfc50;
        case 0x801cfcdcu: goto R_801cfcdc;
        case 0x801cfd94u: goto R_801cfd94;
        case 0x801cfda0u: goto R_801cfda0;
        case 0x801cfdecu: goto R_801cfdec;
        case 0x801cfe5cu: goto R_801cfe5c;
        case 0x801cfed4u: goto R_801cfed4;
        case 0x801cff48u: goto R_801cff48;
        case 0x801cff9cu: goto R_801cff9c;
        case 0x801d0088u: goto R_801d0088;
        case 0x801d00e4u: goto R_801d00e4;
        case 0x801d0118u: goto R_801d0118;
        case 0x801d0144u: goto R_801d0144;
        case 0x801d01c4u: goto R_801d01c4;
        case 0x801d01f8u: goto R_801d01f8;
        case 0x801d0284u: goto R_801d0284;
        case 0x801d0308u: goto R_801d0308;
        case 0x801d0334u: goto R_801d0334;
        case 0x801d0360u: goto R_801d0360;
        case 0x801d03d4u: goto R_801d03d4;
        case 0x801d0498u: goto R_801d0498;
        case 0x801d04bcu: goto R_801d04bc;
        case 0x801d05b8u: goto R_801d05b8;
        case 0x801d05dcu: goto R_801d05dc;
        case 0x801d0638u: goto R_801d0638;
        case 0x801d0678u: goto R_801d0678;
        case 0x801d069cu: goto R_801d069c;
        case 0x801d0710u: goto R_801d0710;
        case 0x801d0744u: goto R_801d0744;
        case 0x801d07d0u: goto R_801d07d0;
        case 0x801d0864u: goto R_801d0864;
        case 0x801d0960u: goto R_801d0960;
        case 0x801d0a60u: goto R_801d0a60;
        case 0x801d0b40u: goto R_801d0b40;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff10u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xf4u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0xf0u;
    c.lr = 0x801cf840u;
    f_801c8384(c);
R_801cf840:
    c.r[8] = 0x80230000u;
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[31]);
    c.r[17] = c.r[4] | c.r[4];
    ea = c.r[8] + 0xf78u;
    c.r[8] = wp::rd32(ea);
    c.r[18] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    c.r[0] = 0x0u;
    c.r[12] = c.r[17] | c.r[17];
    c.r[19] = c.r[7] | c.r[7];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[18] | c.r[18];
    c.r[16] = 0x1u;
    c.r[29] = 0x0u;
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[14] = 0x0u;
    c.r[28] = 0x0u;
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[27] = 0x0u;
    c.r[24] = 0x0u;
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[31]);
    c.r[22] = 0x0u;
    c.r[30] = 0x1u;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[31]);
    c.r[5] = 0x0u;
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x90u;
    wp::wr16(ea, c.r[31]);
    ea = c.r[8] + 0x0u;
    c.r[26] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[7] + 0x0u;
    wp::wr32(ea, c.r[31]);
    c.ctr = c.r[12];
    c.lr = 0x801cf8e4u;
    wp::call(c, c.ctr);
R_801cf8e4:
    c.r[8] = 0x80200000u;
    ea = c.r[8] + 0x7590u;
    c.r[7] = wp::rd32(ea);
    c.r[8] = ea;
    ea = c.r[2] + 0xffff98f8u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[8] + 0x4u;
    c.r[6] = wp::rd32(ea);
    c.r[15] = 0x80230000u;
    ea = c.r[8] + 0x8u;
    c.r[3] = wp::rd8(ea);
    c.r[15] = c.r[15] + 0x1128u;
    ea = c.r[2] + 0xffff98fcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x38u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    goto L_801d07d4;
L_801cf920:
    wp::compare_signed(c, 0, c.r[16], 0x80u);
    if (wp::cr_get(c, 2)) goto L_801d00f4;
    if (!wp::cr_get(c, 0)) goto L_801cf984;
    wp::compare_signed(c, 0, c.r[16], 0x8u);
    if (wp::cr_get(c, 2)) goto L_801cfee4;
    if (!wp::cr_get(c, 0)) goto L_801cf960;
    wp::compare_signed(c, 0, c.r[16], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d07d4;
    if (!wp::cr_get(c, 0)) goto L_801cf954;
    wp::compare_signed(c, 0, c.r[16], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801cf9d4;
    if (!wp::cr_get(c, 0)) goto L_801cfdc4;
    goto L_801d07d4;
L_801cf954:
    wp::compare_signed(c, 0, c.r[16], 0x5u);
    if (!wp::cr_get(c, 0)) goto L_801d07d4;
    goto L_801cfeb0;
L_801cf960:
    wp::compare_signed(c, 0, c.r[16], 0x20u);
    if (wp::cr_get(c, 2)) goto L_801cfff0;
    if (!wp::cr_get(c, 0)) goto L_801cf978;
    wp::compare_signed(c, 0, c.r[16], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801cffa4;
    goto L_801d07d4;
L_801cf978:
    wp::compare_signed(c, 0, c.r[16], 0x40u);
    if (wp::cr_get(c, 2)) goto L_801d0090;
    goto L_801d07d4;
L_801cf984:
    wp::compare_signed(c, 0, c.r[16], 0x2000u);
    if (wp::cr_get(c, 2)) goto L_801cfbec;
    if (!wp::cr_get(c, 0)) goto L_801cf9b4;
    wp::compare_signed(c, 0, c.r[16], 0x200u);
    if (wp::cr_get(c, 2)) goto L_801d01d4;
    if (!wp::cr_get(c, 0)) goto L_801cf9a8;
    wp::compare_signed(c, 0, c.r[16], 0x100u);
    if (wp::cr_get(c, 2)) goto L_801d0158;
    goto L_801d07d4;
L_801cf9a8:
    wp::compare_signed(c, 0, c.r[16], 0x400u);
    if (wp::cr_get(c, 2)) goto L_801d0208;
    goto L_801d07d4;
L_801cf9b4:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffff8000u;
    wp::compare_signed(c, 0, c.r[16], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d028c;
    if (!wp::cr_get(c, 0)) goto L_801d07d4;
    wp::compare_signed(c, 0, c.r[16], 0x4000u);
    if (wp::cr_get(c, 2)) goto L_801cfb0c;
    goto L_801d07d4;
L_801cf9d4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cf9e4;
    c.r[0] = 0x0u;
L_801cf9e4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cf9f4;
    c.r[0] = 0x0u;
    goto L_801cfa08;
L_801cf9f4:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x100u;
L_801cfa08:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfa34;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x801cfa28u;
    wp::call(c, c.ctr);
R_801cfa28:
    c.r[4] = c.r[3] | c.r[3];
    c.r[29] = c.r[29] + 0x1u;
    goto L_801d07d4;
L_801cfa34:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfa44;
    c.r[0] = 0x0u;
L_801cfa44:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfa54;
    c.r[0] = c.r[4] | c.r[4];
    goto L_801cfa60;
L_801cfa54:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[0] = wp::rd8(ea);
L_801cfa60:
    wp::compare_signed(c, 0, c.r[0], 0x2du);
    if (wp::cr_get(c, 2)) goto L_801cfa84;
    wp::compare_signed(c, 0, c.r[0], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801cfa88;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801cfab4;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801cfadc;
    goto L_801cfb04;
L_801cfa84:
    c.r[14] = 0x1u;
L_801cfa88:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfaa4u;
    wp::call(c, c.ctr);
R_801cfaa4:
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x98u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801cfab4:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfad0u;
    wp::call(c, c.ctr);
R_801cfad0:
    c.r[4] = c.r[3] | c.r[3];
    c.r[16] = 0x4000u;
    goto L_801d07d4;
L_801cfadc:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfaf8u;
    wp::call(c, c.ctr);
R_801cfaf8:
    c.r[4] = c.r[3] | c.r[3];
    c.r[16] = 0x2000u;
    goto L_801d07d4;
L_801cfb04:
    c.r[16] = 0x2u;
    goto L_801d07d4;
L_801cfb0c:
    ea = c.r[1] + 0x30u;
    c.r[5] = wp::rd32(ea);
    c.r[16] = c.r[1] + 0x3du;
    ea = c.r[1] + 0x34u;
    c.r[3] = wp::rd32(ea);
    c.r[20] = 0x1u;
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x44u;
    wp::wr8(ea, c.r[0]);
    goto L_801cfb58;
L_801cfb30:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[16] = c.r[16] + 0x1u;
    c.r[20] = c.r[20] + 0x1u;
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfb54u;
    wp::call(c, c.ctr);
R_801cfb54:
    c.r[4] = c.r[3] | c.r[3];
L_801cfb58:
    wp::compare_signed(c, 0, c.r[20], 0x8u);
    if (!wp::cr_get(c, 0)) goto L_801cfb9c;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfb70;
    c.r[3] = 0x0u;
L_801cfb70:
    ea = c.r[16] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = wp::sign_extend8(c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cfb88;
    c.r[0] = c.r[4] | c.r[4];
    goto L_801cfb94;
L_801cfb88:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[0] = wp::rd8(ea);
L_801cfb94:
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cfb30;
    }
L_801cfb9c:
    wp::compare_signed(c, 0, c.r[20], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801cfbac;
    wp::compare_signed(c, 0, c.r[20], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801cfbe4;
L_801cfbac:
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfbc4;
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d1cu;
    c.f[0] = wp::rdf32(ea);
    c.ps1[0] = c.f[0];
    c.f[1] = -c.f[0];
    goto L_801cfbcc;
L_801cfbc4:
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d1cu;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
L_801cfbcc:
    ea = c.r[1] + 0x98u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[29];
    c.r[0] = c.r[20] + c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d0b38;
L_801cfbe4:
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801cfbec:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[20] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd8(ea);
    c.r[16] = c.r[1] + 0x21u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    c.r[21] = 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[20]);
    goto L_801cfc54;
L_801cfc2c:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[16] = c.r[16] + 0x1u;
    c.r[21] = c.r[21] + 0x1u;
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfc50u;
    wp::call(c, c.ctr);
R_801cfc50:
    c.r[4] = c.r[3] | c.r[3];
L_801cfc54:
    wp::compare_signed(c, 0, c.r[21], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_801cfc98;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[3] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfc6c;
    c.r[3] = 0x0u;
L_801cfc6c:
    ea = c.r[16] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = wp::sign_extend8(c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cfc84;
    c.r[0] = c.r[4] | c.r[4];
    goto L_801cfc90;
L_801cfc84:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[0] = wp::rd8(ea);
L_801cfc90:
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cfc2c;
    }
L_801cfc98:
    c.r[0] = c.r[21] + 0xfffffffdu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 1)) goto L_801cfdbc;
    wp::compare_signed(c, 0, c.r[21], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801cfd7c;
    c.r[16] = c.r[1] + 0x48u;
    goto L_801cfce0;
L_801cfcb4:
    c.r[12] = c.r[17] | c.r[17];
    ea = c.r[16] + 0x0u;
    wp::wr8(ea, c.r[4]);
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[20] = c.r[20] + 0x1u;
    c.r[16] = c.r[16] + 0x1u;
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfcdcu;
    wp::call(c, c.ctr);
R_801cfcdc:
    c.r[4] = c.r[3] | c.r[3];
L_801cfce0:
    wp::compare_signed(c, 0, c.r[20], 0x20u);
    if (!wp::cr_get(c, 0)) goto L_801cfd68;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfcf8;
    c.r[0] = 0x0u;
L_801cfcf8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfd08;
    c.r[0] = 0x0u;
    goto L_801cfd1c;
L_801cfd08:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801cfd1c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cfcb4;
    }
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfd34;
    c.r[0] = 0x0u;
L_801cfd34:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfd44;
    c.r[0] = 0x0u;
    goto L_801cfd58;
L_801cfd44:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x1u;
L_801cfd58:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cfcb4;
    }
    wp::compare_signed(c, 0, c.r[4], c.r[26]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cfcb4;
    }
L_801cfd68:
    wp::compare_signed(c, 0, c.r[4], 0x29u);
    if (wp::cr_get(c, 2)) goto L_801cfd78;
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801cfd78:
    c.r[20] = c.r[20] + 0x1u;
L_801cfd7c:
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    c.r[3] = c.r[1] + 0x48u;
    c.r[0] = 0x0u;
    ea = c.r[3] + c.r[20];
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801cfd9c;
    c.lr = 0x801cfd94u;
    f_801d7e88(c);
R_801cfd94:
    c.f[1] = -c.f[1];
    goto L_801cfda0;
L_801cfd9c:
    c.lr = 0x801cfda0u;
    f_801d7e88(c);
L_801cfda0:
R_801cfda0:
    ea = c.r[1] + 0x98u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[21];
    c.r[0] = c.r[20] + c.r[29];
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d0b38;
L_801cfdbc:
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801cfdc4:
    wp::compare_signed(c, 0, c.r[4], c.r[26]);
    if (!wp::cr_get(c, 2)) goto L_801cfdf4;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[16] = 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfdecu;
    wp::call(c, c.ctr);
R_801cfdec:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801cfdf4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfe04;
    c.r[0] = 0x0u;
L_801cfe04:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfe14;
    c.r[0] = 0x0u;
    goto L_801cfe28;
L_801cfe14:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801cfe28:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cfe38;
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801cfe38:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801cfea8;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfe5cu;
    wp::call(c, c.ctr);
R_801cfe5c:
    wp::compare_unsigned(c, 0, c.r[3], 0xffu);
    c.r[4] = c.r[3] | c.r[3];
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfe70;
    c.r[0] = 0x0u;
L_801cfe70:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cfe7c;
    goto L_801cfe88;
L_801cfe7c:
    ea = c.r[15] + 0x38u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[3];
    c.r[3] = wp::rd8(ea);
L_801cfe88:
    wp::compare_signed(c, 0, c.r[3], 0x58u);
    if (!wp::cr_get(c, 2)) goto L_801cfea0;
    c.r[3] = 0x10000u;
    c.r[31] = 0x1u;
    c.r[16] = c.r[3] + 0xffff8000u;
    goto L_801d07d4;
L_801cfea0:
    c.r[16] = 0x4u;
    goto L_801d07d4;
L_801cfea8:
    c.r[16] = 0x8u;
    goto L_801d07d4;
L_801cfeb0:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801cfedc;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cfed4u;
    wp::call(c, c.ctr);
R_801cfed4:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801cfedc:
    c.r[16] = 0x8u;
    goto L_801d07d4;
L_801cfee4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cfef4;
    c.r[0] = 0x0u;
L_801cfef4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cff04;
    c.r[0] = 0x0u;
    goto L_801cff18;
L_801cff04:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801cff18:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cff58;
    wp::compare_signed(c, 0, c.r[4], c.r[26]);
    if (!wp::cr_get(c, 2)) goto L_801cff50;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[16] = 0x20u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cff48u;
    wp::call(c, c.ctr);
R_801cff48:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801cff50:
    c.r[16] = 0x40u;
    goto L_801d07d4;
L_801cff58:
    ea = c.r[1] + 0x6cu;
    c.r[5] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[5], 0x14u);
    if (!wp::cr_get(c, 0)) goto L_801cff7c;
    c.r[0] = c.r[1] + 0x68u;
    c.r[3] = c.r[0] + c.r[5];
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[4]);
    c.r[0] = c.r[5] + 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
    goto L_801cff80;
L_801cff7c:
    c.r[27] = c.r[27] + 0x1u;
L_801cff80:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801cff9cu;
    wp::call(c, c.ctr);
R_801cff9c:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801cffa4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801cffb4;
    c.r[0] = 0x0u;
L_801cffb4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801cffc4;
    c.r[0] = 0x0u;
    goto L_801cffd8;
L_801cffc4:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801cffd8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801cffe8;
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801cffe8:
    c.r[16] = 0x20u;
    goto L_801d07d4;
L_801cfff0:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0000;
    c.r[0] = 0x0u;
L_801d0000:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0010;
    c.r[0] = 0x0u;
    goto L_801d0024;
L_801d0010:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d0024:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0034;
    c.r[16] = 0x40u;
    goto L_801d07d4;
L_801d0034:
    ea = c.r[1] + 0x6cu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x14u);
    if (!wp::cr_get(c, 0)) goto L_801d006c;
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0050;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0068;
L_801d0050:
    ea = c.r[1] + 0x6cu;
    c.r[5] = wp::rd8(ea);
    c.r[0] = c.r[1] + 0x68u;
    c.r[3] = c.r[0] + c.r[5];
    c.r[0] = c.r[5] + 0x1u;
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
L_801d0068:
    c.r[27] = c.r[27] + 0xffffffffu;
L_801d006c:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0088u;
    wp::call(c, c.ctr);
R_801d0088:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d0090:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d00a0;
    c.r[0] = 0x0u;
L_801d00a0:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d00b0;
    c.r[0] = c.r[4] | c.r[4];
    goto L_801d00bc;
L_801d00b0:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[0] = wp::rd8(ea);
L_801d00bc:
    wp::compare_signed(c, 0, c.r[0], 0x45u);
    if (!wp::cr_get(c, 2)) goto L_801d00ec;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[16] = 0x80u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d00e4u;
    wp::call(c, c.ctr);
R_801d00e4:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d00ec:
    c.r[16] = 0x800u;
    goto L_801d07d4;
L_801d00f4:
    wp::compare_signed(c, 0, c.r[4], 0x2bu);
    if (!wp::cr_get(c, 2)) goto L_801d0120;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0118u;
    wp::call(c, c.ctr);
R_801d0118:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d0150;
L_801d0120:
    wp::compare_signed(c, 0, c.r[4], 0x2du);
    if (!wp::cr_get(c, 2)) goto L_801d0150;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0144u;
    wp::call(c, c.ctr);
R_801d0144:
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[3] | c.r[3];
L_801d0150:
    c.r[16] = 0x100u;
    goto L_801d07d4;
L_801d0158:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0168;
    c.r[0] = 0x0u;
L_801d0168:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0178;
    c.r[0] = 0x0u;
    goto L_801d018c;
L_801d0178:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d018c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d019c;
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801d019c:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d01cc;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[16] = 0x200u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d01c4u;
    wp::call(c, c.ctr);
R_801d01c4:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d01cc:
    c.r[16] = 0x400u;
    goto L_801d07d4;
L_801d01d4:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0200;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d01f8u;
    wp::call(c, c.ctr);
R_801d01f8:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d0200:
    c.r[16] = 0x400u;
    goto L_801d07d4;
L_801d0208:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0218;
    c.r[0] = 0x0u;
L_801d0218:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0228;
    c.r[0] = 0x0u;
    goto L_801d023c;
L_801d0228:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d023c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d024c;
    c.r[16] = 0x800u;
    goto L_801d07d4;
L_801d024c:
    c.r[0] = c.r[28] * 0xau;
    c.r[3] = c.r[4] + c.r[0];
    c.r[28] = c.r[3] + 0xffffffd0u;
    wp::compare_signed(c, 0, c.r[28], 0x134u);
    if (!wp::cr_get(c, 1)) goto L_801d0268;
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d0268:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0284u;
    wp::call(c, c.ctr);
R_801d0284:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d028c:
    wp::compare_signed(c, 0, c.r[31], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801d05e4;
    if (!wp::cr_get(c, 0)) goto L_801d02c8;
    wp::compare_signed(c, 0, c.r[31], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d0370;
    if (!wp::cr_get(c, 0)) goto L_801d02bc;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d033c;
    if (!wp::cr_get(c, 0)) goto L_801d07d4;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_801d02f8;
    goto L_801d07d4;
L_801d02bc:
    wp::compare_signed(c, 0, c.r[31], 0x8u);
    if (wp::cr_get(c, 2)) goto L_801d04c4;
    goto L_801d07d4;
L_801d02c8:
    wp::compare_signed(c, 0, c.r[31], 0x80u);
    if (wp::cr_get(c, 2)) goto L_801d0720;
    if (!wp::cr_get(c, 0)) goto L_801d02ec;
    wp::compare_signed(c, 0, c.r[31], 0x40u);
    if (wp::cr_get(c, 2)) goto L_801d06a4;
    if (!wp::cr_get(c, 0)) goto L_801d07d4;
    wp::compare_signed(c, 0, c.r[31], 0x20u);
    if (wp::cr_get(c, 2)) goto L_801d0648;
    goto L_801d07d4;
L_801d02ec:
    wp::compare_signed(c, 0, c.r[31], 0x100u);
    if (wp::cr_get(c, 2)) goto L_801d0754;
    goto L_801d07d4;
L_801d02f8:
    c.r[3] = c.r[1] + 0x28u;
    c.r[4] = 0x0u;
    c.r[5] = 0x8u;
    c.lr = 0x801d0308u;
    f_80004714(c);
R_801d0308:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[25] = c.r[1] + 0x28u;
    c.r[22] = 0x0u;
    c.r[23] = 0x0u;
    c.r[31] = 0x2u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0334u;
    wp::call(c, c.ctr);
R_801d0334:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d033c:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0368;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0360u;
    wp::call(c, c.ctr);
R_801d0360:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d0368:
    c.r[31] = 0x4u;
    goto L_801d07d4;
L_801d0370:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0380;
    c.r[0] = 0x0u;
L_801d0380:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0390;
    c.r[0] = 0x0u;
    goto L_801d03a4;
L_801d0390:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x400u;
L_801d03a4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d03e4;
    wp::compare_signed(c, 0, c.r[4], c.r[26]);
    if (!wp::cr_get(c, 2)) goto L_801d03dc;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[31] = 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d03d4u;
    wp::call(c, c.ctr);
R_801d03d4:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d03dc:
    c.r[31] = 0x10u;
    goto L_801d07d4;
L_801d03e4:
    c.r[0] = 0xeu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d04a0;
    c.r[0] = wp::rotl(c.r[23], 1) & 0x1u;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = c.r[0] + c.r[23];
    c.r[3] = 0x1u;
    c.r[0] = wp::sraw(c, c.r[0], 1);
    c.r[22] = c.r[22] + 0x1u;
    ea = c.r[25] + c.r[0];
    c.r[0] = wp::rd8(ea);
    if (wp::cr_get(c, 1)) goto L_801d0414;
    c.r[3] = 0x0u;
L_801d0414:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0420;
    goto L_801d042c;
L_801d0420:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[4] = wp::rd8(ea);
L_801d042c:
    wp::compare_signed(c, 0, c.r[4], 0x41u);
    c.r[6] = c.r[4] + 0xffffffd0u;
    if (wp::cr_get(c, 0)) goto L_801d043c;
    c.r[6] = c.r[4] + 0xffffffc9u;
L_801d043c:
    c.r[5] = wp::rotl(c.r[23], 1) & 0x1u;
    c.r[3] = c.r[23] & 0x1u;
    c.r[4] = c.r[3] ^ c.r[5];
    c.r[3] = wp::rotl(c.r[6], 4) & 0xf0u;
    c.r[4] = c.r[4] - c.r[5];
    wp::record(c, c.r[4]);
    c.r[3] = c.r[0] | c.r[3];
    c.r[4] = c.r[6] & 0xffu;
    c.r[5] = c.r[3] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d0468;
    c.r[0] = c.r[0] | c.r[4];
    c.r[5] = c.r[0] & 0xffu;
L_801d0468:
    c.r[0] = wp::rotl(c.r[23], 1) & 0x1u;
    c.r[12] = c.r[17] | c.r[17];
    c.r[0] = c.r[0] + c.r[23];
    c.r[3] = c.r[18] | c.r[18];
    c.r[0] = wp::sraw(c, c.r[0], 1);
    c.r[4] = 0x0u;
    ea = c.r[25] + c.r[0];
    wp::wr8(ea, c.r[5]);
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[23] = c.r[23] + 0x1u;
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0498u;
    wp::call(c, c.ctr);
R_801d0498:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d04a0:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d04bcu;
    wp::call(c, c.ctr);
R_801d04bc:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d04c4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d04d4;
    c.r[0] = 0x0u;
L_801d04d4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d04e4;
    c.r[0] = 0x0u;
    goto L_801d04f8;
L_801d04e4:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x400u;
L_801d04f8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0508;
    c.r[31] = 0x10u;
    goto L_801d07d4;
L_801d0508:
    c.r[0] = 0xeu;
    wp::compare_unsigned(c, 0, c.r[22], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d05c0;
    c.r[0] = wp::rotl(c.r[23], 1) & 0x1u;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = c.r[0] + c.r[23];
    c.r[3] = 0x1u;
    c.r[0] = wp::sraw(c, c.r[0], 1);
    ea = c.r[25] + c.r[0];
    c.r[0] = wp::rd8(ea);
    if (wp::cr_get(c, 1)) goto L_801d0534;
    c.r[3] = 0x0u;
L_801d0534:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0540;
    goto L_801d054c;
L_801d0540:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[4] = wp::rd8(ea);
L_801d054c:
    wp::compare_signed(c, 0, c.r[4], 0x41u);
    c.r[6] = c.r[4] + 0xffffffd0u;
    if (wp::cr_get(c, 0)) goto L_801d055c;
    c.r[6] = c.r[4] + 0xffffffc9u;
L_801d055c:
    c.r[5] = wp::rotl(c.r[23], 1) & 0x1u;
    c.r[3] = c.r[23] & 0x1u;
    c.r[4] = c.r[3] ^ c.r[5];
    c.r[3] = wp::rotl(c.r[6], 4) & 0xf0u;
    c.r[4] = c.r[4] - c.r[5];
    wp::record(c, c.r[4]);
    c.r[3] = c.r[0] | c.r[3];
    c.r[4] = c.r[6] & 0xffu;
    c.r[5] = c.r[3] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d0588;
    c.r[0] = c.r[0] | c.r[4];
    c.r[5] = c.r[0] & 0xffu;
L_801d0588:
    c.r[0] = wp::rotl(c.r[23], 1) & 0x1u;
    c.r[12] = c.r[17] | c.r[17];
    c.r[0] = c.r[0] + c.r[23];
    c.r[3] = c.r[18] | c.r[18];
    c.r[0] = wp::sraw(c, c.r[0], 1);
    c.r[4] = 0x0u;
    ea = c.r[25] + c.r[0];
    wp::wr8(ea, c.r[5]);
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[23] = c.r[23] + 0x1u;
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d05b8u;
    wp::call(c, c.ctr);
R_801d05b8:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d05c0:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d05dcu;
    wp::call(c, c.ctr);
R_801d05dc:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d05e4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d05f4;
    c.r[0] = 0x0u;
L_801d05f4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0604;
    c.r[0] = c.r[4] | c.r[4];
    goto L_801d0610;
L_801d0604:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[0] = wp::rd8(ea);
L_801d0610:
    wp::compare_signed(c, 0, c.r[0], 0x50u);
    if (!wp::cr_get(c, 2)) goto L_801d0640;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[31] = 0x20u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0638u;
    wp::call(c, c.ctr);
R_801d0638:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d0640:
    c.r[16] = 0x800u;
    goto L_801d07d4;
L_801d0648:
    wp::compare_signed(c, 0, c.r[4], 0x2du);
    if (!wp::cr_get(c, 2)) goto L_801d065c;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    goto L_801d067c;
L_801d065c:
    wp::compare_signed(c, 0, c.r[4], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801d067c;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d0678u;
    wp::call(c, c.ctr);
R_801d0678:
    c.r[30] = c.r[30] + 0xffffffffu;
L_801d067c:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[31] = 0x40u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d069cu;
    wp::call(c, c.ctr);
R_801d069c:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d06a4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d06b4;
    c.r[0] = 0x0u;
L_801d06b4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d06c4;
    c.r[0] = 0x0u;
    goto L_801d06d8;
L_801d06c4:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d06d8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d06e8;
    c.r[16] = 0x1000u;
    goto L_801d07d4;
L_801d06e8:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0718;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[31] = 0x80u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0710u;
    wp::call(c, c.ctr);
R_801d0710:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d0718:
    c.r[31] = 0x100u;
    goto L_801d07d4;
L_801d0720:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d074c;
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d0744u;
    wp::call(c, c.ctr);
R_801d0744:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d07d4;
L_801d074c:
    c.r[31] = 0x100u;
    goto L_801d07d4;
L_801d0754:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0764;
    c.r[0] = 0x0u;
L_801d0764:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0774;
    c.r[0] = 0x0u;
    goto L_801d0788;
L_801d0774:
    ea = c.r[15] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d0788:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0798;
    c.r[16] = 0x800u;
    goto L_801d07d4;
L_801d0798:
    c.r[0] = c.r[24] * 0xau;
    wp::compare_signed(c, 0, c.r[28], 0x7fffu);
    c.r[3] = c.r[4] + c.r[0];
    c.r[24] = c.r[3] + 0xffffffd0u;
    if (!wp::cr_get(c, 1)) goto L_801d07b4;
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d07b4:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[30] = c.r[30] + 0x1u;
    c.lr = 0x801d07d0u;
    wp::call(c, c.ctr);
R_801d07d0:
    c.r[4] = c.r[3] | c.r[3];
L_801d07d4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d07f0;
    wp::compare_signed(c, 0, c.r[4], 0xffffffffu);
    if (wp::cr_get(c, 2)) goto L_801d07f0;
    c.r[0] = c.r[16] & 0x1800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801cf920;
    }
L_801d07f0:
    c.r[0] = c.r[16] + 0x0u;
    wp::compare_unsigned(c, 0, c.r[0], 0x8000u);
    if (wp::cr_get(c, 2)) goto L_801d080c;
    c.r[0] = c.r[16] & 0xe2cu;
    wp::record(c, c.r[0]);
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[3] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    goto L_801d0828;
L_801d080c:
    c.r[0] = c.r[30] + 0xffffffffu;
    c.r[3] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801d0824;
    c.r[0] = c.r[31] & 0x18eu;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d0828;
L_801d0824:
    c.r[3] = 0x1u;
L_801d0828:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0840;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d0850;
L_801d0840:
    c.r[3] = c.r[30] + c.r[29];
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d0850:
    c.r[12] = c.r[17] | c.r[17];
    c.r[3] = c.r[18] | c.r[18];
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d0864u;
    wp::call(c, c.ctr);
R_801d0864:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d09b8;
    ea = c.r[1] + 0x9cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d087c;
    c.r[28] = 0u - c.r[28];
L_801d087c:
    ea = c.r[1] + 0x6cu;
    c.r[3] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0x6du;
    c.r[4] = c.r[4] + c.r[3];
    goto L_801d0890;
L_801d088c:
    c.r[27] = c.r[27] + 0x1u;
L_801d0890:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[3] = c.r[3] + 0xffffffffu;
    if (wp::cr_get(c, 2)) goto L_801d08a8;
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    wp::compare_unsigned(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d088c;
    }
L_801d08a8:
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[0] & 0xffu;
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 2)) goto L_801d08cc;
    c.r[3] = c.r[1] + 0x6du;
    c.r[0] = 0x30u;
    ea = c.r[3] + c.r[4];
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
L_801d08cc:
    c.r[0] = c.r[28] + 0x134u;
    wp::compare_unsigned(c, 0, c.r[0], 0x268u);
    if (!wp::cr_get(c, 1)) goto L_801d090c;
    ea = c.r[19] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0904;
    ea = c.r[1] + 0x6du;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0904;
    ea = c.r[1] + 0x6eu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0904;
    ea = c.r[2] + 0xffff9900u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d0b38;
L_801d0904:
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d090c:
    ea = c.r[19] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[28] = c.r[28] + c.r[27];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0954;
    ea = c.r[1] + 0x9cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0930;
    ea = c.r[2] + 0xffff9900u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d0b38;
L_801d0930:
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0948;
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d20u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = -c.f[0];
    goto L_801d0b38;
L_801d0948:
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d20u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d0b38;
L_801d0954:
    ea = c.r[1] + 0x6au;
    wp::wr16(ea, c.r[28]);
    c.r[3] = c.r[1] + 0x68u;
    c.lr = 0x801d0960u;
    f_801cb5c0(c);
R_801d0960:
    ea = c.r[2] + 0xffff9900u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (wp::cr_get(c, 2)) goto L_801d0984;
    ea = c.r[2] + 0xffff9908u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801d0984;
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d09a0;
L_801d0984:
    ea = c.r[2] + 0xffff9910u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d09a0;
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x5d20u;
    c.f[1] = wp::rdf64(ea);
L_801d09a0:
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0b38;
    c.r[0] = c.r[16] & 0xe2cu;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d0b38;
    c.f[1] = -c.f[1];
    goto L_801d0b38;
L_801d09b8:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x18u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d09cc;
    c.r[24] = 0u - c.r[24];
L_801d09cc:
    c.r[0] = wp::rotl(c.r[22], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x28u;
    c.r[5] = wp::rd8(ea);
    c.r[24] = c.r[24] + c.r[0];
    c.r[6] = 0x0u;
    c.r[4] = 0x80u;
    goto L_801d09ec;
L_801d09e4:
    c.r[6] = c.r[6] + 0x1u;
    c.r[24] = c.r[24] + 0xffffffffu;
L_801d09ec:
    wp::compare_unsigned(c, 0, c.r[6], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_801d0a00;
    c.r[0] = wp::sraw(c, c.r[4], c.r[6]);
    c.r[0] = c.r[5] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d09e4;
    }
L_801d0a00:
    c.r[5] = wp::add_carry(c, c.r[6], 0x1u, 0);
    wp::record(c, c.r[5]);
    c.r[24] = c.r[24] + 0xffffffffu;
    if (wp::cr_get(c, 2)) goto L_801d0a54;
    c.r[25] = c.r[1] + 0x2fu;
    c.r[4] = c.r[1] + 0x28u;
    wp::compare_unsigned(c, 0, c.r[25], c.r[4]);
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 0)) goto L_801d0a54;
    c.r[0] = c.r[25] + 0x1u;
    c.r[6] = wp::sub_carry(c, c.r[5], 0x8u);
    c.r[0] = c.r[0] - c.r[4];
    c.ctr = c.r[0];
    if (wp::cr_get(c, 0)) goto L_801d0a54;
L_801d0a34:
    ea = c.r[25] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = wp::slw(c.r[0], c.r[5]);
    c.r[0] = wp::sraw(c, c.r[0], c.r[6]);
    c.r[4] = c.r[7] | c.r[4];
    ea = c.r[25] + 0x0u;
    wp::wr8(ea, c.r[4]);
    c.r[7] = c.r[0] & 0xffu;
    c.r[25] = c.r[25] + 0xffffffffu;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d0a34;
    }
L_801d0a54:
    c.r[4] = 0x0u;
    c.r[5] = 0x8u;
    c.lr = 0x801d0a60u;
    f_80004714(c);
R_801d0a60:
    c.r[0] = 0x7u;
    c.r[4] = c.r[1] + 0x28u;
    c.r[3] = c.r[1] + 0x19u;
    c.r[9] = 0x0u;
    c.r[8] = 0xffu;
    c.ctr = c.r[0];
L_801d0a78:
    c.r[0] = c.r[9] + 0x8u;
    ea = c.r[4] + 0x0u;
    c.r[6] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x34u);
    c.r[5] = c.r[9] + 0xcu;
    if (!wp::cr_get(c, 1)) goto L_801d0a9c;
    c.r[0] = wp::sub_carry(c, c.r[9], 0x34u);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[0] = c.r[0] & 0xffu;
    c.r[6] = c.r[6] & c.r[0];
L_801d0a9c:
    c.r[10] = c.r[5] & 0x7u;
    c.r[6] = c.r[6] & 0xffu;
    c.r[0] = wp::sraw(c, c.r[6], c.r[10]);
    ea = c.r[3] + 0x0u;
    c.r[7] = wp::rd8(ea);
    c.r[5] = c.r[0] & 0xffu;
    c.r[4] = c.r[4] + 0x1u;
    c.r[5] = c.r[7] | c.r[5];
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[5]);
    c.r[0] = wp::sub_carry(c, c.r[10], 0x8u);
    c.r[9] = c.r[9] + 0x8u;
    c.r[0] = wp::slw(c.r[6], c.r[0]);
    ea = c.r[3] + 0x1u;
    c.r[5] = wp::rd8(ea);
    c.r[3] = ea;
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[5] | c.r[0];
    ea = c.r[3] + 0x0u;
    wp::wr8(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d0a78;
    }
    c.r[3] = c.r[28] + c.r[24];
    c.r[24] = c.r[3] + 0x3ffu;
    c.r[0] = c.r[24] & 0xfffff800u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d0afc;
    c.r[0] = 0x1u;
    ea = c.r[19] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9900u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d0b38;
L_801d0afc:
    c.r[24] = wp::rotl(c.r[24], 21) & 0xffe00000u;
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd8(ea);
    c.r[4] = wp::rotl(c.r[24], 7) & 0x7fu;
    ea = c.r[1] + 0x19u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = wp::rotl(c.r[24], 15) & 0xffu;
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    c.r[4] = c.r[5] | c.r[4];
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[4]);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[1] + 0x19u;
    wp::wr8(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d0b34;
    c.r[0] = c.r[4] & 0xffu;
    c.r[0] = c.r[0] | 0x80u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[0]);
L_801d0b34:
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf64(ea);
L_801d0b38:
    c.r[11] = c.r[1] + 0xf0u;
    c.lr = 0x801d0b40u;
    f_801c83d0(c);
R_801d0b40:
    ea = c.r[1] + 0xf4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xf0u;
    return;
}

void f_801d0b50(wp::Cpu& c) {
    WP_ENTER(0x801d0b50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d0b98u: goto R_801d0b98;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x80000000u;
    c.r[5] = 0x801d0000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[7] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[5] + 0xfffff264u;
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[6] + 0xffffffffu;
    c.r[6] = c.r[1] + 0xcu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d0b98u;
    f_801cf82c(c);
R_801d0b98:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0bac;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[30] + c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d0bac:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0bc0;
    c.r[0] = 0x22u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
L_801d0bc0:
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

void f_801d0bd8(wp::Cpu& c) {
    WP_ENTER(0x801d0bd8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d0c10u: goto R_801d0c10;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x801d0000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[4] = c.r[4] + 0xfffff264u;
    c.r[5] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x80000000u;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[6] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[7] = c.r[1] + 0xcu;
    c.lr = 0x801d0c10u;
    f_801cf82c(c);
R_801d0c10:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0c24;
    c.r[0] = 0x22u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
L_801d0c24:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d0c34(wp::Cpu& c) {
    WP_ENTER(0x801d0c34u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d0cc0u: goto R_801d0cc0;
        case 0x801d0d68u: goto R_801d0d68;
        case 0x801d0d98u: goto R_801d0d98;
        case 0x801d0dc4u: goto R_801d0dc4;
        case 0x801d0e0cu: goto R_801d0e0c;
        case 0x801d0e50u: goto R_801d0e50;
        case 0x801d0fe0u: goto R_801d0fe0;
        case 0x801d1030u: goto R_801d1030;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 17; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = 0x0u;
    c.r[17] = c.r[3] | c.r[3];
    c.r[18] = c.r[4] | c.r[4];
    c.r[19] = c.r[5] | c.r[5];
    c.r[20] = c.r[6] | c.r[6];
    c.r[21] = c.r[7] | c.r[7];
    c.r[22] = c.r[8] | c.r[8];
    c.r[23] = c.r[9] | c.r[9];
    c.r[28] = 0x1u;
    c.r[26] = 0x0u;
    c.r[25] = 0x0u;
    c.r[24] = 0x0u;
    ea = c.r[9] + 0x0u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[8] + 0x0u;
    wp::wr32(ea, c.r[27]);
    if (wp::cr_get(c, 0)) goto L_801d0c9c;
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d0c9c;
    wp::compare_signed(c, 0, c.r[3], 0x24u);
    if (wp::cr_get(c, 1)) goto L_801d0c9c;
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_801d0ca4;
L_801d0c9c:
    c.r[28] = 0x40u;
    goto L_801d0cc4;
L_801d0ca4:
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = 0x1u;
    c.lr = 0x801d0cc0u;
    wp::call(c, c.ctr);
R_801d0cc0:
    c.r[4] = c.r[3] | c.r[3];
L_801d0cc4:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0cd4;
    c.r[0] = 0xffffffffu;
    c.r[24] = wp::divwu(c.r[0], c.r[17]);
L_801d0cd4:
    c.r[3] = 0x80230000u;
    c.r[30] = 0x1u;
    c.r[31] = 0xffffffffu;
    c.r[29] = c.r[3] + 0x1128u;
    goto L_801d0fe4;
L_801d0ce8:
    wp::compare_signed(c, 0, c.r[28], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d0d14;
    wp::compare_signed(c, 0, c.r[28], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d0dd4;
    wp::compare_signed(c, 0, c.r[28], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d0e1c;
    wp::compare_signed(c, 0, c.r[28], 0x8u);
    if (wp::cr_get(c, 2)) goto L_801d0e6c;
    wp::compare_signed(c, 0, c.r[28], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801d0e6c;
    goto L_801d0fe4;
L_801d0d14:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0d24;
    c.r[0] = 0x0u;
L_801d0d24:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0d34;
    c.r[0] = 0x0u;
    goto L_801d0d48;
L_801d0d34:
    ea = c.r[29] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x100u;
L_801d0d48:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0d74;
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.lr = 0x801d0d68u;
    wp::call(c, c.ctr);
R_801d0d68:
    c.r[4] = c.r[3] | c.r[3];
    c.r[26] = c.r[26] + 0x1u;
    goto L_801d0fe4;
L_801d0d74:
    wp::compare_signed(c, 0, c.r[4], 0x2bu);
    if (!wp::cr_get(c, 2)) goto L_801d0da0;
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = c.r[27] + 0x1u;
    c.lr = 0x801d0d98u;
    wp::call(c, c.ctr);
R_801d0d98:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d0dcc;
L_801d0da0:
    wp::compare_signed(c, 0, c.r[4], 0x2du);
    if (!wp::cr_get(c, 2)) goto L_801d0dcc;
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = c.r[27] + 0x1u;
    c.lr = 0x801d0dc4u;
    wp::call(c, c.ctr);
R_801d0dc4:
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[22] + 0x0u;
    wp::wr32(ea, c.r[30]);
L_801d0dcc:
    c.r[28] = 0x2u;
    goto L_801d0fe4;
L_801d0dd4:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0de4;
    wp::compare_signed(c, 0, c.r[17], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801d0e14;
L_801d0de4:
    wp::compare_signed(c, 0, c.r[4], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d0e14;
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[28] = 0x4u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = c.r[27] + 0x1u;
    c.lr = 0x801d0e0cu;
    wp::call(c, c.ctr);
R_801d0e0c:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d0fe4;
L_801d0e14:
    c.r[28] = 0x8u;
    goto L_801d0fe4;
L_801d0e1c:
    wp::compare_signed(c, 0, c.r[4], 0x58u);
    if (wp::cr_get(c, 2)) goto L_801d0e2c;
    wp::compare_signed(c, 0, c.r[4], 0x78u);
    if (!wp::cr_get(c, 2)) goto L_801d0e58;
L_801d0e2c:
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[17] = 0x10u;
    c.r[28] = 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = c.r[27] + 0x1u;
    c.lr = 0x801d0e50u;
    wp::call(c, c.ctr);
R_801d0e50:
    c.r[4] = c.r[3] | c.r[3];
    goto L_801d0fe4;
L_801d0e58:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0e64;
    c.r[17] = 0x8u;
L_801d0e64:
    c.r[28] = 0x10u;
    goto L_801d0fe4;
L_801d0e6c:
    wp::compare_signed(c, 0, c.r[17], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0e78;
    c.r[17] = 0xau;
L_801d0e78:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d0e84;
    c.r[24] = wp::divwu(c.r[31], c.r[17]);
L_801d0e84:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0e94;
    c.r[0] = 0x0u;
L_801d0e94:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0ea4;
    c.r[0] = 0x0u;
    goto L_801d0eb8;
L_801d0ea4:
    ea = c.r[29] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x8u;
L_801d0eb8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0ee4;
    c.r[4] = c.r[4] + 0xffffffd0u;
    wp::compare_signed(c, 0, c.r[4], c.r[17]);
    if (wp::cr_get(c, 0)) goto L_801d0f9c;
    wp::compare_signed(c, 0, c.r[28], 0x10u);
    c.r[28] = 0x40u;
    if (!wp::cr_get(c, 2)) goto L_801d0edc;
    c.r[28] = 0x20u;
L_801d0edc:
    c.r[4] = c.r[4] + 0x30u;
    goto L_801d0fe4;
L_801d0ee4:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0ef4;
    c.r[0] = 0x0u;
L_801d0ef4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0f04;
    c.r[0] = 0x0u;
    goto L_801d0f18;
L_801d0f04:
    ea = c.r[29] + 0x38u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 1) & 0xfffffffeu;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x1u;
L_801d0f18:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0f58;
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0f30;
    c.r[0] = 0x0u;
L_801d0f30:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0f40;
    c.r[3] = c.r[4] | c.r[4];
    goto L_801d0f4c;
L_801d0f40:
    ea = c.r[29] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[3] = wp::rd8(ea);
L_801d0f4c:
    c.r[0] = c.r[3] + 0xffffffc9u;
    wp::compare_signed(c, 0, c.r[0], c.r[17]);
    if (wp::cr_get(c, 0)) goto L_801d0f70;
L_801d0f58:
    wp::compare_signed(c, 0, c.r[28], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801d0f68;
    c.r[28] = 0x20u;
    goto L_801d0fe4;
L_801d0f68:
    c.r[28] = 0x40u;
    goto L_801d0fe4;
L_801d0f70:
    wp::compare_unsigned(c, 0, c.r[4], 0xffu);
    c.r[0] = 0x1u;
    if (wp::cr_get(c, 1)) goto L_801d0f80;
    c.r[0] = 0x0u;
L_801d0f80:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d0f8c;
    goto L_801d0f98;
L_801d0f8c:
    ea = c.r[29] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[4];
    c.r[4] = wp::rd8(ea);
L_801d0f98:
    c.r[4] = c.r[4] + 0xffffffc9u;
L_801d0f9c:
    wp::compare_unsigned(c, 0, c.r[25], c.r[24]);
    if (!wp::cr_get(c, 1)) goto L_801d0fa8;
    ea = c.r[23] + 0x0u;
    wp::wr32(ea, c.r[30]);
L_801d0fa8:
    c.r[25] = c.r[25] * c.r[17];
    c.r[0] = wp::sub_carry(c, c.r[25], 0xffffffffu);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d0fbc;
    ea = c.r[23] + 0x0u;
    wp::wr32(ea, c.r[30]);
L_801d0fbc:
    c.r[12] = c.r[19] | c.r[19];
    c.r[25] = c.r[25] + c.r[4];
    c.r[3] = c.r[20] | c.r[20];
    c.r[28] = 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.ctr = c.r[12];
    c.r[27] = c.r[27] + 0x1u;
    c.lr = 0x801d0fe0u;
    wp::call(c, c.ctr);
R_801d0fe0:
    c.r[4] = c.r[3] | c.r[3];
L_801d0fe4:
    wp::compare_signed(c, 0, c.r[27], c.r[18]);
    if (wp::cr_get(c, 1)) goto L_801d0ffc;
    wp::compare_signed(c, 0, c.r[4], 0xffffffffu);
    if (wp::cr_get(c, 2)) goto L_801d0ffc;
    c.r[0] = c.r[28] & 0x60u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d0ce8;
    }
L_801d0ffc:
    c.r[0] = c.r[28] & 0x34u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d1010;
    c.r[25] = 0x0u;
    ea = c.r[21] + 0x0u;
    wp::wr32(ea, c.r[25]);
    goto L_801d101c;
L_801d1010:
    c.r[3] = c.r[27] + c.r[26];
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[21] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d101c:
    c.r[12] = c.r[19] | c.r[19];
    c.r[3] = c.r[20] | c.r[20];
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d1030u;
    wp::call(c, c.ctr);
R_801d1030:
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 17; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801d1048(wp::Cpu& c) {
    WP_ENTER(0x801d1048u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d1098u: goto R_801d1098;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x80000000u;
    c.r[6] = 0x801d0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[9] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[7] + 0xffffffffu;
    c.r[7] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] + 0xfffff264u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[6] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d1098u;
    f_801d0c34(c);
R_801d1098:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d10ac;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[30] + c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d10ac:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d10c8;
    c.r[0] = 0x22u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0xffffffffu;
    goto L_801d10d8;
L_801d10c8:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d10d8;
    c.r[3] = 0u - c.r[3];
L_801d10d8:
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

void f_801d10f0(wp::Cpu& c) {
    WP_ENTER(0x801d10f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d1140u: goto R_801d1140;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x80000000u;
    c.r[6] = 0x801d0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[8] = c.r[1] + 0xcu;
    c.r[9] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    c.r[4] = c.r[7] + 0xffffffffu;
    c.r[7] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[6] + 0xfffff264u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[6] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d1140u;
    f_801d0c34(c);
R_801d1140:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1154;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[30] + c.r[0];
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d1154:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1190;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d117c;
    c.r[4] = 0x80000000u;
    c.r[0] = c.r[4] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d1190;
L_801d117c:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d11b8;
    c.r[0] = 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d11b8;
L_801d1190:
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x22u;
    c.r[3] = 0x80000000u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0u - c.r[5];
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] | c.r[5];
    c.r[3] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[3] = c.r[3] + c.r[0];
    goto L_801d11c4;
L_801d11b8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d11c4;
    c.r[3] = 0u - c.r[3];
L_801d11c4:
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

void f_801d11dc(wp::Cpu& c) {
    WP_ENTER(0x801d11dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d1220u: goto R_801d1220;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x801d0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = c.r[5] + 0xfffff264u;
    c.r[6] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x80000000u;
    c.r[4] = c.r[31] + 0xffffffffu;
    c.r[7] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[8] = c.r[1] + 0xcu;
    c.r[9] = c.r[1] + 0x10u;
    c.r[3] = 0xau;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d1220u;
    f_801d0c34(c);
R_801d1220:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1258;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1244;
    c.r[0] = c.r[31] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d1258;
L_801d1244:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1280;
    c.r[0] = 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d1280;
L_801d1258:
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x22u;
    c.r[3] = 0x80000000u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0u - c.r[5];
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[3] = c.r[4] | c.r[5];
    c.r[3] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[3] = c.r[3] + c.r[0];
    goto L_801d128c;
L_801d1280:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d128c;
    c.r[3] = 0u - c.r[3];
L_801d128c:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d12a0(wp::Cpu& c) {
    WP_ENTER(0x801d12a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    f_800043c4(c);
    return;
}

void f_801d12a8(wp::Cpu& c) {
    WP_ENTER(0x801d12a8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = wp::rotl(c.r[5], 1) & 0xfffffffeu;
    f_801cc76c(c);
    return;
}

void f_801d12b0(wp::Cpu& c) {
    WP_ENTER(0x801d12b0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.ctr = c.r[5];
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d12d0;
L_801d12bc:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
    c.r[3] = c.r[3] + 0x2u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d12bc;
    }
L_801d12d0:
    c.r[3] = 0x0u;
    return;
}

void f_801d12d8(wp::Cpu& c) {
    WP_ENTER(0x801d12d8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d13ecu: goto R_801d13ec;
        case 0x801d14c8u: goto R_801d14c8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x0u;
    c.r[7] = 0x1u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] + 0x2u;
    wp::compare_unsigned(c, 0, c.r[0], 0x25u);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    if (!wp::cr_get(c, 2)) goto L_801d1350;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = c.r[31] + 0x2u;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[5] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0x8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[6]);
    goto L_801d184c;
L_801d1350:
    c.r[3] = 0x2u;
L_801d1354:
    wp::compare_signed(c, 0, c.r[0], 0x2du);
    c.r[5] = 0x1u;
    if (wp::cr_get(c, 2)) goto L_801d1384;
    wp::compare_signed(c, 0, c.r[0], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801d138c;
    wp::compare_signed(c, 0, c.r[0], 0x20u);
    if (wp::cr_get(c, 2)) goto L_801d1394;
    wp::compare_signed(c, 0, c.r[0], 0x23u);
    if (wp::cr_get(c, 2)) goto L_801d13a8;
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801d13b0;
    goto L_801d13c4;
L_801d1384:
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[6]);
    goto L_801d13c8;
L_801d138c:
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[7]);
    goto L_801d13c8;
L_801d1394:
    ea = c.r[1] + 0x9u;
    c.r[4] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[4], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d13c8;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[3]);
    goto L_801d13c8;
L_801d13a8:
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[7]);
    goto L_801d13c8;
L_801d13b0:
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d13c8;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    goto L_801d13c8;
L_801d13c4:
    c.r[5] = 0x0u;
L_801d13c8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d13d8;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    WP_POLL(c);
    goto L_801d1354;
L_801d13d8:
    wp::compare_unsigned(c, 0, c.r[0], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801d1414;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x801d13ecu;
    f_801c787c(c);
R_801d13ec:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d140c;
    c.r[0] = 0u - c.r[0];
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
L_801d140c:
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    goto L_801d1464;
L_801d1414:
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[5] = wp::rd32(ea);
    goto L_801d143c;
L_801d1424:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] * 0xau;
    c.r[3] = c.r[0] + c.r[3];
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    c.r[3] = c.r[3] + 0xffffffd0u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
L_801d143c:
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (!wp::cr_get(c, 0)) goto L_801d1458;
    ea = c.r[5] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    ea = c.r[4] + c.r[3];
    c.r[3] = wp::rd16(ea);
    c.r[3] = c.r[3] & 0x8u;
    goto L_801d145c;
L_801d1458:
    c.r[3] = 0x0u;
L_801d145c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d1424;
    }
L_801d1464:
    ea = c.r[1] + 0x10u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801d14a0;
    c.r[3] = 0x10000u;
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0x2u;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801d184c;
L_801d14a0:
    wp::compare_unsigned(c, 0, c.r[0], 0x2eu);
    if (!wp::cr_get(c, 2)) goto L_801d1538;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    c.r[3] = 0x1u;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[3]);
    wp::compare_unsigned(c, 0, c.r[0], 0x2au);
    if (!wp::cr_get(c, 2)) goto L_801d14e8;
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = 0x1u;
    c.lr = 0x801d14c8u;
    f_801c787c(c);
R_801d14c8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d14e0;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[0]);
L_801d14e0:
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    goto L_801d1538;
L_801d14e8:
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[5] = wp::rd32(ea);
    goto L_801d1510;
L_801d14f8:
    ea = c.r[1] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] * 0xau;
    c.r[3] = c.r[0] + c.r[3];
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
    c.r[3] = c.r[3] + 0xffffffd0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
L_801d1510:
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (!wp::cr_get(c, 0)) goto L_801d152c;
    ea = c.r[5] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    ea = c.r[4] + c.r[3];
    c.r[3] = wp::rd16(ea);
    c.r[3] = c.r[3] & 0x8u;
    goto L_801d1530;
L_801d152c:
    c.r[3] = 0x0u;
L_801d1530:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d14f8;
    }
L_801d1538:
    wp::compare_signed(c, 0, c.r[0], 0x68u);
    c.r[5] = 0x1u;
    if (wp::cr_get(c, 2)) goto L_801d1570;
    wp::compare_signed(c, 0, c.r[0], 0x6cu);
    if (wp::cr_get(c, 2)) goto L_801d1598;
    wp::compare_signed(c, 0, c.r[0], 0x4cu);
    if (wp::cr_get(c, 2)) goto L_801d15c0;
    wp::compare_signed(c, 0, c.r[0], 0x6au);
    if (wp::cr_get(c, 2)) goto L_801d15cc;
    wp::compare_signed(c, 0, c.r[0], 0x74u);
    if (wp::cr_get(c, 2)) goto L_801d15d8;
    wp::compare_signed(c, 0, c.r[0], 0x7au);
    if (wp::cr_get(c, 2)) goto L_801d15e4;
    goto L_801d15f0;
L_801d1570:
    ea = c.r[31] + 0x2u;
    c.r[3] = wp::rd16(ea);
    c.r[4] = 0x2u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[3], 0x68u);
    if (!wp::cr_get(c, 2)) goto L_801d15f4;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + 0x2u;
    goto L_801d15f4;
L_801d1598:
    ea = c.r[31] + 0x2u;
    c.r[3] = wp::rd16(ea);
    c.r[4] = 0x3u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[3], 0x6cu);
    if (!wp::cr_get(c, 2)) goto L_801d15f4;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + 0x2u;
    goto L_801d15f4;
L_801d15c0:
    c.r[3] = 0x9u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    goto L_801d15f4;
L_801d15cc:
    c.r[3] = 0x6u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    goto L_801d15f4;
L_801d15d8:
    c.r[3] = 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    goto L_801d15f4;
L_801d15e4:
    c.r[3] = 0x7u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[3]);
    goto L_801d15f4;
L_801d15f0:
    c.r[5] = 0x0u;
L_801d15f4:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1600;
    ea = c.r[31] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = ea;
L_801d1600:
    c.r[3] = c.r[0] & 0xffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    c.r[0] = c.r[3] + 0xffffffbfu;
    wp::compare_unsigned(c, 0, c.r[0], 0x37u);
    if (wp::cr_get(c, 1)) goto L_801d181c;
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x13a0u;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801d162cu: goto L_801d162c;
    case 0x801d1670u: goto L_801d1670;
    case 0x801d16bcu: goto L_801d16bc;
    case 0x801d170cu: goto L_801d170c;
    case 0x801d1720u: goto L_801d1720;
    case 0x801d1774u: goto L_801d1774;
    case 0x801d1798u: goto L_801d1798;
    case 0x801d17d4u: goto L_801d17d4;
    case 0x801d1804u: goto L_801d1804;
    case 0x801d181cu: goto L_801d181c;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801d162c:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801d1640;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
L_801d1640:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1658;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801d1828;
L_801d1658:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d1828;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    goto L_801d1828;
L_801d1670:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801d1694;
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d1694;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801d16a4;
L_801d1694:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d1828;
L_801d16a4:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1828;
    c.r[0] = 0x6u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801d1828;
L_801d16bc:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d16d0;
    c.r[0] = 0xdu;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_801d16d0:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801d16fc;
    c.r[0] = c.r[3] + 0xffu;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d16fc;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801d1828;
L_801d16fc:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d1828;
L_801d170c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1720;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_801d1720:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xfau;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801d174c;
    c.r[0] = c.r[3] + 0xffu;
    c.r[0] = c.r[0] & 0xffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d174c;
    wp::compare_unsigned(c, 0, c.r[3], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801d175c;
L_801d174c:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d1828;
L_801d175c:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1828;
    c.r[0] = 0x6u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801d1828;
L_801d1774:
    c.r[5] = 0x3u;
    c.r[4] = 0x1u;
    c.r[3] = 0x78u;
    c.r[0] = 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    goto L_801d1828;
L_801d1798:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801d17b0;
    c.r[0] = 0x5u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801d1828;
L_801d17b0:
    ea = c.r[1] + 0xau;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d17c4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1828;
L_801d17c4:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d1828;
L_801d17d4:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801d17ec;
    c.r[0] = 0x5u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801d1828;
L_801d17ec:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1828;
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d1828;
L_801d1804:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801d1828;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801d1828;
L_801d181c:
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
L_801d1828:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[3] = c.r[31] + 0x2u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[30] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[30] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801d184c:
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

void f_801d1868(wp::Cpu& c) {
    WP_ENTER(0x801d1868u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[8] = 0x0u;
    ea = c.r[4] + 0xfffffffeu;
    wp::wr16(ea, c.r[8]);
    c.r[6] = c.r[4] + 0xfffffffeu;
    c.r[7] = 0x0u;
    if (!wp::cr_get(c, 2)) goto L_801d18ac;
    ea = c.r[5] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d18ac;
    ea = c.r[5] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d18a4;
    ea = c.r[5] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801d18ac;
L_801d18a4:
    c.r[3] = c.r[6] | c.r[6];
    return;
L_801d18ac:
    ea = c.r[5] + 0x6u;
    c.r[9] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[9], 0x64u);
    if (wp::cr_get(c, 2)) goto L_801d18e4;
    wp::compare_signed(c, 0, c.r[9], 0x69u);
    if (wp::cr_get(c, 2)) goto L_801d18e4;
    wp::compare_signed(c, 0, c.r[9], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801d1908;
    wp::compare_signed(c, 0, c.r[9], 0x75u);
    if (wp::cr_get(c, 2)) goto L_801d1918;
    wp::compare_signed(c, 0, c.r[9], 0x78u);
    if (wp::cr_get(c, 2)) goto L_801d1928;
    wp::compare_signed(c, 0, c.r[9], 0x58u);
    if (wp::cr_get(c, 2)) goto L_801d1928;
    goto L_801d1934;
L_801d18e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[0] = 0xau;
    if (!wp::cr_get(c, 0)) goto L_801d1934;
    c.r[8] = c.r[3] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1900;
    c.r[3] = 0u - c.r[3];
L_801d1900:
    c.r[8] = 0x1u;
    goto L_801d1934;
L_801d1908:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x8u;
    goto L_801d1934;
L_801d1918:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0xau;
    goto L_801d1934;
L_801d1928:
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x10u;
L_801d1934:
    c.r[9] = wp::divwu(c.r[3], c.r[0]);
    c.r[9] = c.r[9] * c.r[0];
    c.r[11] = c.r[3] - c.r[9];
    c.r[3] = wp::divwu(c.r[3], c.r[0]);
    wp::compare_signed(c, 0, c.r[11], 0xau);
    if (!wp::cr_get(c, 0)) goto L_801d1954;
    c.r[11] = c.r[11] + 0x30u;
    goto L_801d196c;
L_801d1954:
    ea = c.r[5] + 0x6u;
    c.r[9] = wp::rd16(ea);
    c.r[10] = c.r[11] + 0x37u;
    wp::compare_unsigned(c, 0, c.r[9], 0x78u);
    if (!wp::cr_get(c, 2)) goto L_801d1968;
    c.r[10] = c.r[11] + 0x57u;
L_801d1968:
    c.r[11] = c.r[10] | c.r[10];
L_801d196c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[11]);
    c.r[6] = c.r[6] + 0xfffffffeu;
    c.r[7] = c.r[7] + 0x1u;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d1934;
    }
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801d19ac;
    ea = c.r[5] + 0x3u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d19ac;
    ea = c.r[6] + 0x0u;
    c.r[3] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801d19ac;
    c.r[3] = 0x30u;
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[3]);
    c.r[6] = ea;
    c.r[7] = c.r[7] + 0x1u;
L_801d19ac:
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d1a00;
    ea = c.r[5] + 0x8u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801d19d4;
    ea = c.r[5] + 0x1u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d19e0;
L_801d19d4:
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xffffffffu;
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_801d19e0:
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801d1a00;
    ea = c.r[5] + 0x3u;
    c.r[3] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1a00;
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xfffffffeu;
    ea = c.r[5] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_801d1a00:
    c.r[4] = c.r[4] - c.r[6];
    ea = c.r[5] + 0xcu;
    c.r[9] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[3] = c.r[3] + c.r[4];
    c.r[3] = wp::sraw(c, c.r[3], 1);
    c.r[3] = c.r[9] + c.r[3];
    wp::compare_signed(c, 0, c.r[3], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801d1a28;
    c.r[3] = 0x0u;
    return;
L_801d1a28:
    c.r[4] = 0x30u;
    goto L_801d1a38;
L_801d1a30:
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[4]);
    c.r[6] = ea;
    c.r[7] = c.r[7] + 0x1u;
L_801d1a38:
    ea = c.r[5] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[7], c.r[3]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d1a30;
    }
    wp::compare_unsigned(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801d1a68;
    ea = c.r[5] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1a68;
    ea = c.r[5] + 0x6u;
    c.r[3] = wp::rd16(ea);
    c.r[0] = 0x30u;
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[3]);
    ea = c.r[6] + 0xfffffffcu;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
L_801d1a68:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1a7c;
    c.r[0] = 0x2du;
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
    goto L_801d1aa4;
L_801d1a7c:
    ea = c.r[5] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d1a94;
    c.r[0] = 0x2bu;
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
    goto L_801d1aa4;
L_801d1a94:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d1aa4;
    c.r[0] = 0x20u;
    ea = c.r[6] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
L_801d1aa4:
    c.r[3] = c.r[6] | c.r[6];
    return;
}

void f_801d1aac(wp::Cpu& c) {
    WP_ENTER(0x801d1aacu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d1bccu: goto R_801d1bcc;
        case 0x801d1be4u: goto R_801d1be4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] | c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[25] = 0x0u;
    c.r[31] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[23] = c.r[5] | c.r[5];
    c.r[24] = c.r[6] | c.r[6];
    c.r[27] = c.r[5] + 0xfffffffeu;
    c.r[26] = 0x0u;
    ea = c.r[5] + 0xfffffffeu;
    wp::wr16(ea, c.r[25]);
    if (!wp::cr_get(c, 2)) goto L_801d1b10;
    ea = c.r[6] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d1b10;
    ea = c.r[6] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1b08;
    ea = c.r[6] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801d1b10;
L_801d1b08:
    c.r[3] = c.r[27] | c.r[27];
    goto L_801d1d54;
L_801d1b10:
    ea = c.r[6] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x64u);
    if (wp::cr_get(c, 2)) goto L_801d1b48;
    wp::compare_signed(c, 0, c.r[0], 0x69u);
    if (wp::cr_get(c, 2)) goto L_801d1b48;
    wp::compare_signed(c, 0, c.r[0], 0x6fu);
    if (wp::cr_get(c, 2)) goto L_801d1b8c;
    wp::compare_signed(c, 0, c.r[0], 0x75u);
    if (wp::cr_get(c, 2)) goto L_801d1b9c;
    wp::compare_signed(c, 0, c.r[0], 0x78u);
    if (wp::cr_get(c, 2)) goto L_801d1bac;
    wp::compare_signed(c, 0, c.r[0], 0x58u);
    if (wp::cr_get(c, 2)) goto L_801d1bac;
    goto L_801d1bb8;
L_801d1b48:
    c.r[29] = 0x0u;
    c.r[0] = c.r[3] ^ 0x80000000u;
    c.r[6] = c.r[29] ^ 0x80000000u;
    c.r[28] = 0xau;
    c.r[5] = wp::sub_carry(c, c.r[29], c.r[4]);
    c.r[6] = wp::sub_extended(c, c.r[6], c.r[0]);
    c.r[6] = wp::sub_extended(c, c.r[0], c.r[0]);
    c.r[6] = 0u - c.r[6];
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_801d1bb8;
    c.r[0] = 0x80000000u;
    c.r[0] = c.r[3] ^ c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d1b84;
    c.r[30] = wp::sub_carry(c, c.r[4], 0x0u);
    c.r[31] = wp::sub_extended(c, c.r[3], 0);
L_801d1b84:
    c.r[25] = 0x1u;
    goto L_801d1bb8;
L_801d1b8c:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0x8u;
    goto L_801d1bb8;
L_801d1b9c:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0xau;
    goto L_801d1bb8;
L_801d1bac:
    c.r[29] = 0x0u;
    ea = c.r[6] + 0x1u;
    wp::wr8(ea, c.r[29]);
    c.r[28] = 0x10u;
L_801d1bb8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.lr = 0x801d1bccu;
    f_801c8640(c);
R_801d1bcc:
    c.r[22] = c.r[4] | c.r[4];
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[30] | c.r[30];
    c.r[5] = c.r[29] | c.r[29];
    c.r[6] = c.r[28] | c.r[28];
    c.lr = 0x801d1be4u;
    f_801c841c(c);
R_801d1be4:
    wp::compare_signed(c, 0, c.r[22], 0xau);
    c.r[30] = c.r[4] | c.r[4];
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 0)) goto L_801d1bfc;
    c.r[5] = c.r[22] + 0x30u;
    goto L_801d1c10;
L_801d1bfc:
    ea = c.r[24] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[5] = c.r[22] + 0x37u;
    wp::compare_unsigned(c, 0, c.r[0], 0x78u);
    if (!wp::cr_get(c, 2)) goto L_801d1c10;
    c.r[5] = c.r[22] + 0x57u;
L_801d1c10:
    c.r[0] = c.r[4] | c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[5]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d1bb8;
    }
    c.r[0] = c.r[28] ^ 0x8u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d1c50;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1c50;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801d1c50;
    c.r[0] = 0x30u;
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
L_801d1c50:
    ea = c.r[24] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d1ca8;
    ea = c.r[24] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d1c78;
    ea = c.r[24] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1c84;
L_801d1c78:
    ea = c.r[24] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801d1c84:
    c.r[0] = c.r[28] ^ 0x10u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d1ca8;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1ca8;
    ea = c.r[24] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xfffffffeu;
    ea = c.r[24] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801d1ca8:
    c.r[3] = c.r[23] - c.r[27];
    ea = c.r[24] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[0] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[4] + c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801d1cd0;
    c.r[3] = 0x0u;
    goto L_801d1d54;
L_801d1cd0:
    c.r[3] = 0x30u;
    goto L_801d1ce0;
L_801d1cd8:
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[3]);
    c.r[27] = ea;
    c.r[26] = c.r[26] + 0x1u;
L_801d1ce0:
    ea = c.r[24] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[26], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d1cd8;
    }
    c.r[0] = c.r[28] ^ 0x10u;
    c.r[0] = c.r[0] | c.r[29];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d1d14;
    ea = c.r[24] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1d14;
    ea = c.r[24] + 0x6u;
    c.r[3] = wp::rd16(ea);
    c.r[0] = 0x30u;
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[3]);
    ea = c.r[27] + 0xfffffffcu;
    wp::wr16(ea, c.r[0]);
    c.r[27] = ea;
L_801d1d14:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d1d28;
    c.r[0] = 0x2du;
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[27] = ea;
    goto L_801d1d50;
L_801d1d28:
    ea = c.r[24] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d1d40;
    c.r[0] = 0x2bu;
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[27] = ea;
    goto L_801d1d50;
L_801d1d40:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d1d50;
    c.r[0] = 0x20u;
    ea = c.r[27] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[27] = ea;
L_801d1d50:
    c.r[3] = c.r[27] | c.r[27];
L_801d1d54:
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d1d68(wp::Cpu& c) {
    WP_ENTER(0x801d1d68u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d1dd8u: goto R_801d1dd8;
        case 0x801d1e28u: goto R_801d1e28;
        case 0x801d1e40u: goto R_801d1e40;
        case 0x801d1e68u: goto R_801d1e68;
        case 0x801d1e80u: goto R_801d1e80;
        case 0x801d1eb8u: goto R_801d1eb8;
        case 0x801d1ed0u: goto R_801d1ed0;
        case 0x801d1ef8u: goto R_801d1ef8;
        case 0x801d1f10u: goto R_801d1f10;
        case 0x801d1f48u: goto R_801d1f48;
        case 0x801d1f60u: goto R_801d1f60;
        case 0x801d1f88u: goto R_801d1f88;
        case 0x801d1fa0u: goto R_801d1fa0;
        case 0x801d201cu: goto R_801d201c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x80230000u;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xf78u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[5] + 0x0u;
    c.r[31] = wp::rd8(ea);
    if (!wp::cr_get(c, 1)) goto L_801d1dbc;
    c.r[3] = 0x0u;
    goto L_801d2194;
L_801d1dbc:
    c.r[28] = 0x0u;
    c.r[0] = 0x20u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[28]);
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = c.r[1] + 0x38u;
    ea = c.r[1] + 0x12u;
    wp::wr16(ea, c.r[0]);
    c.lr = 0x801d1dd8u;
    f_801cb41c(c);
R_801d1dd8:
    ea = c.r[1] + 0x3du;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801d1df8;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801d1e88;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801d1f18;
    goto L_801d1fa8;
L_801d1df8:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x3au;
    wp::wr16(ea, c.r[28]);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d1e44;
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff6u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1e2c;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.lr = 0x801d1e28u;
    f_801d3730(c);
R_801d1e28:
    goto L_801d1e80;
L_801d1e2c:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0xau;
    c.lr = 0x801d1e40u;
    f_801d3730(c);
R_801d1e40:
    goto L_801d1e80;
L_801d1e44:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff8u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1e6c;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x14u;
    c.lr = 0x801d1e68u;
    f_801d3730(c);
R_801d1e68:
    goto L_801d1e80;
L_801d1e6c:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x1cu;
    c.lr = 0x801d1e80u;
    f_801d3730(c);
L_801d1e80:
R_801d1e80:
    c.r[3] = c.r[28] | c.r[28];
    goto L_801d2194;
L_801d1e88:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d1ed4;
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff6u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1ebc;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x24u;
    c.lr = 0x801d1eb8u;
    f_801d3730(c);
R_801d1eb8:
    goto L_801d1f10;
L_801d1ebc:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x2eu;
    c.lr = 0x801d1ed0u;
    f_801d3730(c);
R_801d1ed0:
    goto L_801d1f10;
L_801d1ed4:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff8u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1efc;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x38u;
    c.lr = 0x801d1ef8u;
    f_801d3730(c);
R_801d1ef8:
    goto L_801d1f10;
L_801d1efc:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x40u;
    c.lr = 0x801d1f10u;
    f_801d3730(c);
L_801d1f10:
R_801d1f10:
    c.r[3] = c.r[28] | c.r[28];
    goto L_801d2194;
L_801d1f18:
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d1f64;
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff6u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1f4c;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x48u;
    c.lr = 0x801d1f48u;
    f_801d3730(c);
R_801d1f48:
    goto L_801d1fa0;
L_801d1f4c:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x52u;
    c.lr = 0x801d1f60u;
    f_801d3730(c);
R_801d1f60:
    goto L_801d1fa0;
L_801d1f64:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[28] = c.r[29] + 0xfffffff8u;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d1f8c;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x5cu;
    c.lr = 0x801d1f88u;
    f_801d3730(c);
R_801d1f88:
    goto L_801d1fa0;
L_801d1f8c:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x64u;
    c.lr = 0x801d1fa0u;
    f_801d3730(c);
L_801d1fa0:
R_801d1fa0:
    c.r[3] = c.r[28] | c.r[28];
    goto L_801d2194;
L_801d1fa8:
    ea = c.r[1] + 0x9u;
    c.r[0] = wp::rd8(ea);
    c.r[8] = 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd8(ea);
    c.r[7] = 0x64u;
    c.r[0] = wp::rotl(c.r[0], 17) & 0xfffe0000u;
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[8]);
    c.r[0] = (wp::rotl(c.r[3], 25) & 0xfe000000u) | (c.r[0] & 0x1ffffffu);
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = wp::rotl(c.r[0], 11) & 0x7ffu;
    ea = c.r[1] + 0x29u;
    wp::wr8(ea, c.r[8]);
    c.r[0] = 0u - c.r[5];
    c.r[0] = c.r[0] | c.r[5];
    ea = c.r[1] + 0x2au;
    wp::wr8(ea, c.r[28]);
    c.r[3] = wp::sraw(c, c.r[0], 31);
    c.r[0] = c.r[5] + 0xfffffc01u;
    ea = c.r[1] + 0x2bu;
    wp::wr8(ea, c.r[28]);
    c.r[3] = c.r[0] & c.r[3];
    c.r[5] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x28u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[28]);
    ea = c.r[1] + 0x2eu;
    wp::wr16(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[8]);
    c.lr = 0x801d201cu;
    f_801d1868(c);
R_801d201c:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801d2034;
    c.r[0] = 0x70u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801d203c;
L_801d2034:
    c.r[0] = 0x50u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
L_801d203c:
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[8] = c.r[1] + 0x8u;
    c.r[4] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[9] = c.r[4] + 0xbu;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 0)) goto L_801d20ec;
L_801d2058:
    wp::compare_signed(c, 0, c.r[9], 0x40u);
    if (!wp::cr_get(c, 0)) goto L_801d20d8;
    c.r[4] = wp::sraw(c, c.r[9], 3);
    c.r[0] = c.r[9] + 0xfffffffcu;
    c.r[7] = c.r[8] + c.r[4];
    c.r[6] = c.r[9] & 0x7u;
    c.r[4] = c.r[9] & 0xfffffff8u;
    c.r[0] = c.r[0] & 0xfffffff8u;
    ea = c.r[7] + 0x0u;
    c.r[5] = wp::rd8(ea);
    c.r[6] = wp::sub_carry(c, c.r[6], 0x7u);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    c.r[0] = wp::sraw(c, c.r[5], c.r[6]);
    c.r[4] = c.r[0] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d20a8;
    ea = c.r[7] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::rotl(c.r[0], 8) & 0xffffff00u;
    c.r[0] = wp::sraw(c, c.r[0], c.r[6]);
    c.r[0] = c.r[0] & 0xffu;
    c.r[0] = c.r[4] | c.r[0];
    c.r[4] = c.r[0] & 0xffu;
L_801d20a8:
    c.r[4] = c.r[4] & 0xfu;
    wp::compare_unsigned(c, 0, c.r[4], 0xau);
    if (!wp::cr_get(c, 0)) goto L_801d20bc;
    c.r[4] = c.r[4] + 0x30u;
    goto L_801d20dc;
L_801d20bc:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801d20d0;
    c.r[4] = c.r[4] + 0x57u;
    goto L_801d20dc;
L_801d20d0:
    c.r[4] = c.r[4] + 0x37u;
    goto L_801d20dc;
L_801d20d8:
    c.r[4] = 0x30u;
L_801d20dc:
    c.r[0] = c.r[4] & 0xffu;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    c.r[9] = c.r[9] + 0xfffffffcu;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d2058;
    }
L_801d20ec:
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d2104;
    ea = c.r[30] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2108;
L_801d2104:
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[31]);
    c.r[3] = ea;
L_801d2108:
    c.f[1] = std::fabs(c.f[31]);
    ea = c.r[2] + 0xffff9918u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (wp::cr_get(c, 2)) goto L_801d2124;
    c.r[0] = 0x31u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801d212c;
L_801d2124:
    c.r[0] = 0x30u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
L_801d212c:
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (!wp::cr_get(c, 2)) goto L_801d2144;
    c.r[0] = 0x78u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801d214c;
L_801d2144:
    c.r[0] = 0x58u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
L_801d214c:
    c.r[0] = 0x30u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    ea = c.r[1] + 0x38u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d216c;
    c.r[0] = 0x2du;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801d2194;
L_801d216c:
    ea = c.r[30] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d2184;
    c.r[0] = 0x2bu;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
    goto L_801d2194;
L_801d2184:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d2194;
    c.r[0] = 0x20u;
    ea = c.r[3] + 0xfffffffeu;
    wp::wr16(ea, c.r[0]);
    c.r[3] = ea;
L_801d2194:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x70u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801d21bc(wp::Cpu& c) {
    WP_ENTER(0x801d21bcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d21e0;
L_801d21c4:
    c.r[5] = 0x0u;
    c.r[4] = 0x1u;
    c.r[0] = 0x30u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[0]);
    return;
L_801d21e0:
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[7]);
    if (!wp::cr_get(c, 0)) return;
    c.r[6] = c.r[3] + c.r[4];
    ea = c.r[6] + 0x5u;
    c.r[5] = wp::rd8(ea);
    c.r[8] = c.r[6] + 0x5u;
    c.r[0] = c.r[5] + 0xffffffd0u;
    c.r[6] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[6], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_801d2244;
    c.r[5] = c.r[3] + c.r[7];
    c.r[5] = c.r[5] + 0x5u;
L_801d2210:
    c.r[5] = c.r[5] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[5], c.r[8]);
    if (!wp::cr_get(c, 1)) goto L_801d2228;
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d2210;
    }
L_801d2228:
    wp::compare_unsigned(c, 0, c.r[5], c.r[8]);
    if (!wp::cr_get(c, 2)) goto L_801d223c;
    ea = c.r[8] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[0] & 0x1u;
    goto L_801d2258;
L_801d223c:
    c.r[5] = 0x1u;
    goto L_801d2258;
L_801d2244:
    c.r[0] = c.r[6] ^ 0x5u;
    c.r[5] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[6];
    c.r[0] = c.r[5] - c.r[0];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
L_801d2258:
    c.ctr = c.r[4];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d22ac;
L_801d2264:
    ea = c.r[8] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[8] = ea;
    c.r[5] = c.r[0] + c.r[5];
    c.r[0] = c.r[5] + 0xffffffd0u;
    c.r[6] = wp::sign_extend8(c.r[0]);
    c.r[0] = c.r[6] ^ 0x9u;
    c.r[5] = wp::sraw(c, c.r[0], 1);
    c.r[0] = c.r[0] & c.r[6];
    c.r[0] = c.r[5] - c.r[0];
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) goto L_801d2294;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d229c;
L_801d2294:
    c.r[4] = c.r[4] + 0xffffffffu;
    goto L_801d22a8;
L_801d229c:
    c.r[0] = c.r[6] + 0x30u;
    ea = c.r[8] + 0x0u;
    wp::wr8(ea, c.r[0]);
    goto L_801d22ac;
L_801d22a8:
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d2264;
    }
L_801d22ac:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d22d4;
    ea = c.r[3] + 0x2u;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[4] = 0x1u;
    c.r[0] = 0x31u;
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    c.r[4] = c.r[5] + 0x1u;
    ea = c.r[3] + 0x2u;
    wp::wr16(ea, c.r[4]);
    ea = c.r[3] + 0x5u;
    wp::wr8(ea, c.r[0]);
    return;
L_801d22d4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d21c4;
    }
    ea = c.r[3] + 0x4u;
    wp::wr8(ea, c.r[4]);
    return;
}

void f_801d22e4(wp::Cpu& c) {
    WP_ENTER(0x801d22e4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d234cu: goto R_801d234c;
        case 0x801d2414u: goto R_801d2414;
        case 0x801d242cu: goto R_801d242c;
        case 0x801d2480u: goto R_801d2480;
        case 0x801d2498u: goto R_801d2498;
        case 0x801d24fcu: goto R_801d24fc;
        case 0x801d2514u: goto R_801d2514;
        case 0x801d2568u: goto R_801d2568;
        case 0x801d2580u: goto R_801d2580;
        case 0x801d25fcu: goto R_801d25fc;
        case 0x801d26b8u: goto R_801d26b8;
        case 0x801d2838u: goto R_801d2838;
        case 0x801d2a28u: goto R_801d2a28;
        case 0x801d2a3cu: goto R_801d2a3c;
        case 0x801d2a4cu: goto R_801d2a4c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffdb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x80230000u;
    ea = c.r[1] + 0x254u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x248u;
    wp::wrf64(ea, c.f[31]);
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x240u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x23cu;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x238u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0xf78u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    ea = c.r[5] + 0x0u;
    c.r[30] = wp::rd8(ea);
    if (!wp::cr_get(c, 1)) goto L_801d2330;
    c.r[3] = 0x0u;
    goto L_801d2a50;
L_801d2330:
    c.r[3] = 0x0u;
    c.r[0] = 0x20u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xau;
    wp::wr16(ea, c.r[0]);
    c.lr = 0x801d234cu;
    f_801cb41c(c);
R_801d234c:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = c.r[1] + 0x11u;
    c.r[5] = c.r[5] + c.r[0];
    goto L_801d2374;
L_801d235c:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[3] = wp::sign_extend16(wp::rd16(ea));
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
L_801d2374:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d238c;
    ea = c.r[5] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d235c;
    }
L_801d238c:
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x30u);
    if (wp::cr_get(c, 2)) goto L_801d23ac;
    wp::compare_signed(c, 0, c.r[0], 0x49u);
    if (wp::cr_get(c, 2)) goto L_801d23b8;
    wp::compare_signed(c, 0, c.r[0], 0x4eu);
    if (wp::cr_get(c, 2)) goto L_801d24a0;
    goto L_801d2588;
L_801d23ac:
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    goto L_801d2588;
L_801d23b8:
    ea = c.r[2] + 0xffff9918u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801d2430;
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = c.r[28] + 0xfffffff6u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (wp::cr_get(c, 0)) goto L_801d23dc;
    c.r[0] = 0x0u;
    goto L_801d23f8;
L_801d23dc:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801d23f8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2418;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x24u;
    c.lr = 0x801d2414u;
    f_801d3730(c);
R_801d2414:
    goto L_801d2498;
L_801d2418:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x2eu;
    c.lr = 0x801d242cu;
    f_801d3730(c);
R_801d242c:
    goto L_801d2498;
L_801d2430:
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = c.r[28] + 0xfffffff8u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (wp::cr_get(c, 0)) goto L_801d2448;
    c.r[0] = 0x0u;
    goto L_801d2464;
L_801d2448:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801d2464:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2484;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x38u;
    c.lr = 0x801d2480u;
    f_801d3730(c);
R_801d2480:
    goto L_801d2498;
L_801d2484:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x40u;
    c.lr = 0x801d2498u;
    f_801d3730(c);
L_801d2498:
R_801d2498:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801d2a50;
L_801d24a0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d2518;
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = c.r[28] + 0xfffffff6u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (wp::cr_get(c, 0)) goto L_801d24c4;
    c.r[0] = 0x0u;
    goto L_801d24e0;
L_801d24c4:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801d24e0:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2500;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x48u;
    c.lr = 0x801d24fcu;
    f_801d3730(c);
R_801d24fc:
    goto L_801d2580;
L_801d2500:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x52u;
    c.lr = 0x801d2514u;
    f_801d3730(c);
R_801d2514:
    goto L_801d2580;
L_801d2518:
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    c.r[31] = c.r[28] + 0xfffffff8u;
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (wp::cr_get(c, 0)) goto L_801d2530;
    c.r[0] = 0x0u;
    goto L_801d254c;
L_801d2530:
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1fffeu;
    c.r[3] = c.r[3] + 0x1128u;
    ea = c.r[3] + 0x38u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    c.r[0] = wp::rd16(ea);
    c.r[0] = c.r[0] & 0x200u;
L_801d254c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d256c;
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x5cu;
    c.lr = 0x801d2568u;
    f_801d3730(c);
R_801d2568:
    goto L_801d2580;
L_801d256c:
    c.r[4] = 0x80230000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[4] + 0x15d0u;
    c.r[4] = c.r[4] + 0x64u;
    c.lr = 0x801d2580u;
    f_801d3730(c);
L_801d2580:
R_801d2580:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801d2a50;
L_801d2588:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0xeu;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    c.r[31] = c.r[1] + 0x237u;
    c.r[3] = c.r[3] + 0xffffffffu;
    ea = c.r[1] + 0x237u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = wp::sign_extend16(c.r[3]);
    c.r[0] = c.r[4] + c.r[0];
    ea = c.r[1] + 0xeu;
    wp::wr16(ea, c.r[0]);
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x67u);
    if (wp::cr_get(c, 2)) goto L_801d25e4;
    wp::compare_signed(c, 0, c.r[0], 0x47u);
    if (wp::cr_get(c, 2)) goto L_801d25e4;
    wp::compare_signed(c, 0, c.r[0], 0x65u);
    if (wp::cr_get(c, 2)) goto L_801d269c;
    wp::compare_signed(c, 0, c.r[0], 0x45u);
    if (wp::cr_get(c, 2)) goto L_801d269c;
    wp::compare_signed(c, 0, c.r[0], 0x66u);
    if (wp::cr_get(c, 2)) goto L_801d2804;
    wp::compare_signed(c, 0, c.r[0], 0x46u);
    if (wp::cr_get(c, 2)) goto L_801d2804;
    goto L_801d2a20;
L_801d25e4:
    ea = c.r[29] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801d25fc;
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x801d25fcu;
    f_801d21bc(c);
L_801d25fc:
R_801d25fc:
    ea = c.r[1] + 0xeu;
    c.r[4] = wp::sign_extend16(wp::rd16(ea));
    wp::compare_signed(c, 0, c.r[4], 0xfffffffcu);
    if (wp::cr_get(c, 0)) goto L_801d2614;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_801d2660;
L_801d2614:
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2630;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801d263c;
L_801d2630:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801d263c:
    ea = c.r[29] + 0x6u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x67u);
    if (!wp::cr_get(c, 2)) goto L_801d2654;
    c.r[0] = 0x65u;
    ea = c.r[29] + 0x6u;
    wp::wr16(ea, c.r[0]);
    goto L_801d269c;
L_801d2654:
    c.r[0] = 0x45u;
    ea = c.r[29] + 0x6u;
    wp::wr16(ea, c.r[0]);
    goto L_801d269c;
L_801d2660:
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d267c;
    c.r[0] = c.r[4] + 0x1u;
    c.r[0] = c.r[3] - c.r[0];
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801d2804;
L_801d267c:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[3] = c.r[4] + 0x1u;
    c.r[0] = c.r[0] - c.r[3];
    wp::record(c, c.r[0]);
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d2804;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801d2804;
L_801d269c:
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801d26b8;
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x801d26b8u;
    f_801d21bc(c);
L_801d26b8:
R_801d26b8:
    ea = c.r[1] + 0xeu;
    c.r[6] = wp::sign_extend16(wp::rd16(ea));
    c.r[8] = 0x2bu;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d26d0;
    c.r[6] = 0u - c.r[6];
    c.r[8] = 0x2du;
L_801d26d0:
    c.r[3] = 0x66660000u;
    c.r[7] = 0x0u;
    c.r[5] = c.r[3] + 0x6667u;
    goto L_801d2714;
L_801d26e0:
    c.r[0] = wp::mulhw(c.r[5], c.r[6]);
    c.r[7] = c.r[7] + 0x1u;
    c.r[3] = wp::sraw(c, c.r[0], 2);
    c.r[4] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = wp::sraw(c, c.r[0], 2);
    c.r[3] = c.r[3] + c.r[4];
    c.r[4] = c.r[3] * 0xau;
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] - c.r[4];
    c.r[6] = c.r[0] + c.r[3];
    c.r[0] = c.r[4] + 0x30u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = c.r[31] + 0xffffffffu;
L_801d2714:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d26e0;
    }
    wp::compare_signed(c, 0, c.r[7], 0x2u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d26e0;
    }
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[8]);
    c.r[0] = c.r[1] + 0x38u;
    ea = c.r[29] + 0x6u;
    c.r[3] = wp::rd16(ea);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[3]);
    c.r[31] = ea;
    ea = c.r[29] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[31];
    c.r[0] = c.r[0] + c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801d2750;
    c.r[3] = 0x0u;
    goto L_801d2a50;
L_801d2750:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    c.r[0] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d277c;
    c.r[3] = c.r[3] + 0x2u;
    c.r[0] = 0x30u;
    c.r[3] = c.r[3] - c.r[4];
    goto L_801d2774;
L_801d2770:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801d2774:
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d2770;
    }
L_801d277c:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0x11u;
    c.r[4] = c.r[4] + c.r[3];
    goto L_801d2794;
L_801d278c:
    ea = c.r[4] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801d2794:
    c.r[3] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d278c;
    }
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d27b4;
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d27b8;
L_801d27b4:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[30]);
    c.r[31] = ea;
L_801d27b8:
    ea = c.r[1] + 0x11u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d27d8;
    c.r[0] = 0x2du;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801d2a20;
L_801d27d8:
    ea = c.r[29] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d27f0;
    c.r[0] = 0x2bu;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801d2a20;
L_801d27f0:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d2a20;
    c.r[0] = 0x20u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801d2a20;
L_801d2804:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[3] = c.r[4] - c.r[5];
    c.r[8] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801d281c;
    c.r[8] = 0x0u;
L_801d281c:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d2850;
    c.r[0] = c.r[8] - c.r[0];
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[4] - c.r[0];
    c.lr = 0x801d2838u;
    f_801d21bc(c);
R_801d2838:
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd8(ea);
    ea = c.r[1] + 0xeu;
    c.r[5] = wp::sign_extend16(wp::rd16(ea));
    c.r[3] = c.r[4] - c.r[5];
    c.r[8] = wp::add_carry(c, c.r[3], 0xffffffffu, 0);
    wp::record(c, c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801d2850;
    c.r[8] = 0x0u;
L_801d2850:
    c.r[7] = wp::add_carry(c, c.r[5], 0x1u, 0);
    wp::record(c, c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801d285c;
    c.r[7] = 0x0u;
L_801d285c:
    c.r[0] = c.r[7] + c.r[8];
    wp::compare_signed(c, 0, c.r[0], 0x1fdu);
    if (!wp::cr_get(c, 1)) goto L_801d2870;
    c.r[3] = 0x0u;
    goto L_801d2a50;
L_801d2870:
    c.r[6] = c.r[1] + 0x11u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[6] + c.r[4];
    c.r[3] = 0x30u;
    goto L_801d288c;
L_801d2884:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[31] = ea;
    c.r[5] = c.r[5] + 0x1u;
L_801d288c:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[8];
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d2884;
    }
    c.r[3] = 0x0u;
    goto L_801d28b0;
L_801d28a4:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    c.r[3] = c.r[3] + 0x1u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801d28b0:
    wp::compare_signed(c, 0, c.r[3], c.r[8]);
    if (!wp::cr_get(c, 0)) goto L_801d28c4;
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d28a4;
    }
L_801d28c4:
    wp::compare_signed(c, 0, c.r[3], c.r[8]);
    c.r[3] = c.r[8] - c.r[3];
    c.r[4] = 0x30u;
    if (!wp::cr_get(c, 0)) goto L_801d2918;
    c.r[0] = wp::rotl(c.r[3], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801d290c;
L_801d28e0:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffdu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffcu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffbu;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffffau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffff9u;
    wp::wr8(ea, c.r[4]);
    ea = c.r[31] + 0xfffffff8u;
    wp::wr8(ea, c.r[4]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d28e0;
    }
    c.r[3] = c.r[3] & 0x7u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801d2918;
L_801d290c:
    c.ctr = c.r[3];
L_801d2910:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[4]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d2910;
    }
L_801d2918:
    ea = c.r[29] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d2930;
    ea = c.r[29] + 0x3u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2934;
L_801d2930:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[30]);
    c.r[31] = ea;
L_801d2934:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d29d8;
    c.r[4] = 0x0u;
    c.r[3] = 0x30u;
    goto L_801d2950;
L_801d2948:
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[3]);
    c.r[31] = ea;
    c.r[4] = c.r[4] + 0x1u;
L_801d2950:
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd8(ea);
    c.r[0] = c.r[7] - c.r[0];
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d2948;
    }
    wp::compare_signed(c, 0, c.r[4], c.r[7]);
    c.r[3] = c.r[7] - c.r[4];
    if (!wp::cr_get(c, 0)) goto L_801d29e0;
    c.r[0] = wp::rotl(c.r[3], 29) & 0x1fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801d29c4;
L_801d2978:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffeu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffeu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffdu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffdu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffcu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffbu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffbu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffffau;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffffau;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffff9u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0xfffffff9u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[6] + 0xfffffff8u;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[31] + 0xfffffff8u;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d2978;
    }
    c.r[3] = c.r[3] & 0x7u;
    wp::record(c, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801d29e0;
L_801d29c4:
    c.ctr = c.r[3];
L_801d29c8:
    ea = c.r[6] + 0xffffffffu;
    c.r[0] = wp::rd8(ea);
    c.r[6] = ea;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d29c8;
    }
    goto L_801d29e0;
L_801d29d8:
    c.r[0] = 0x30u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801d29e0:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d29f8;
    c.r[0] = 0x2du;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801d2a20;
L_801d29f8:
    ea = c.r[29] + 0x1u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d2a10;
    c.r[0] = 0x2bu;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
    goto L_801d2a20;
L_801d2a10:
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d2a20;
    c.r[0] = 0x20u;
    ea = c.r[31] + 0xffffffffu;
    wp::wr8(ea, c.r[0]);
    c.r[31] = ea;
L_801d2a20:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801d2a28u;
    f_801c7860(c);
R_801d2a28:
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[28] - c.r[0];
    c.r[28] = c.r[4] + 0xfffffffeu;
    c.lr = 0x801d2a3cu;
    f_801c7860(c);
R_801d2a3c:
    c.r[5] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x801d2a4cu;
    f_801cc5f4(c);
R_801d2a4c:
    c.r[3] = c.r[28] | c.r[28];
L_801d2a50:
    ea = c.r[1] + 0x254u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x248u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x244u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x23cu;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x238u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x250u;
    return;
}

void f_801d2a74(wp::Cpu& c) {
    WP_ENTER(0x801d2a74u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d2accu: goto R_801d2acc;
        case 0x801d2ae0u: goto R_801d2ae0;
        case 0x801d2b04u: goto R_801d2b04;
        case 0x801d2b40u: goto R_801d2b40;
        case 0x801d2b60u: goto R_801d2b60;
        case 0x801d2ba0u: goto R_801d2ba0;
        case 0x801d2bbcu: goto R_801d2bbc;
        case 0x801d2bdcu: goto R_801d2bdc;
        case 0x801d2bfcu: goto R_801d2bfc;
        case 0x801d2c18u: goto R_801d2c18;
        case 0x801d2c2cu: goto R_801d2c2c;
        case 0x801d2c84u: goto R_801d2c84;
        case 0x801d2cc4u: goto R_801d2cc4;
        case 0x801d2cfcu: goto R_801d2cfc;
        case 0x801d2d18u: goto R_801d2d18;
        case 0x801d2d38u: goto R_801d2d38;
        case 0x801d2d58u: goto R_801d2d58;
        case 0x801d2d74u: goto R_801d2d74;
        case 0x801d2d88u: goto R_801d2d88;
        case 0x801d2de0u: goto R_801d2de0;
        case 0x801d2e20u: goto R_801d2e20;
        case 0x801d2e58u: goto R_801d2e58;
        case 0x801d2e6cu: goto R_801d2e6c;
        case 0x801d2e9cu: goto R_801d2e9c;
        case 0x801d2ed4u: goto R_801d2ed4;
        case 0x801d2ee8u: goto R_801d2ee8;
        case 0x801d2f18u: goto R_801d2f18;
        case 0x801d2f50u: goto R_801d2f50;
        case 0x801d2f74u: goto R_801d2f74;
        case 0x801d2fe0u: goto R_801d2fe0;
        case 0x801d3004u: goto R_801d3004;
        case 0x801d3018u: goto R_801d3018;
        case 0x801d303cu: goto R_801d303c;
        case 0x801d30a4u: goto R_801d30a4;
        case 0x801d30bcu: goto R_801d30bc;
        case 0x801d30d0u: goto R_801d30d0;
        case 0x801d30fcu: goto R_801d30fc;
        case 0x801d3110u: goto R_801d3110;
        case 0x801d31b8u: goto R_801d31b8;
        case 0x801d31d4u: goto R_801d31d4;
        case 0x801d31ecu: goto R_801d31ec;
        case 0x801d320cu: goto R_801d320c;
        case 0x801d3230u: goto R_801d3230;
        case 0x801d32a8u: goto R_801d32a8;
        case 0x801d3308u: goto R_801d3308;
        case 0x801d333cu: goto R_801d333c;
        case 0x801d337cu: goto R_801d337c;
        case 0x801d33b8u: goto R_801d33b8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffb30u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x4d4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x488u;
    for (uint32_t k = 14; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[19] = 0x20u;
    c.r[17] = 0x80230000u;
    c.r[20] = c.r[3] | c.r[3];
    c.r[21] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    c.r[22] = c.r[6] | c.r[6];
    c.r[23] = c.r[7] | c.r[7];
    c.r[17] = c.r[17] + 0x15d0u;
    c.r[16] = c.r[1] + 0x47eu;
    c.r[31] = 0x0u;
    c.r[18] = 0x80200000u;
    c.r[15] = 0x80230000u;
    c.r[14] = 0x25u;
    ea = c.r[1] + 0xcu;
    wp::wr16(ea, c.r[19]);
    goto L_801d33dc;
L_801d2ac0:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = 0x25u;
    c.lr = 0x801d2accu;
    f_801d37c4(c);
R_801d2acc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d2b14;
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d2ae0u;
    f_801d3714(c);
R_801d2ae0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d33e8;
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x801d2b04u;
    wp::call(c, c.ctr);
R_801d2b04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d33e8;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d2b14:
    c.r[3] = c.r[3] - c.r[30];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[5] = wp::sraw(c, c.r[0], 1);
    wp::record(c, c.r[5]);
    c.r[31] = c.r[31] + c.r[5];
    if (wp::cr_get(c, 2)) goto L_801d2b50;
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[30] | c.r[30];
    c.ctr = c.r[12];
    c.lr = 0x801d2b40u;
    wp::call(c, c.ctr);
R_801d2b40:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d2b50;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d2b50:
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[22] | c.r[22];
    c.r[5] = c.r[1] + 0x70u;
    c.lr = 0x801d2b60u;
    f_801d12d8(c);
R_801d2b60:
    ea = c.r[1] + 0x76u;
    c.r[4] = wp::rd16(ea);
    c.r[30] = c.r[3] | c.r[3];
    c.r[0] = c.r[4] + 0xffffffdbu;
    wp::compare_unsigned(c, 0, c.r[0], 0x53u);
    if (wp::cr_get(c, 1)) goto L_801d3204;
    c.r[3] = c.r[15] + 0x1480u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801d2b88u: goto L_801d2b88;
    case 0x801d2ce4u: goto L_801d2ce4;
    case 0x801d2e40u: goto L_801d2e40;
    case 0x801d2ebcu: goto L_801d2ebc;
    case 0x801d2f38u: goto L_801d2f38;
    case 0x801d30e4u: goto L_801d30e4;
    case 0x801d319cu: goto L_801d319c;
    case 0x801d31f4u: goto L_801d31f4;
    case 0x801d3204u: goto L_801d3204;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801d2b88:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801d2ba8;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2ba0u;
    f_801c787c(c);
R_801d2ba0:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2c30;
L_801d2ba8:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801d2bc8;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x2u;
    c.lr = 0x801d2bbcu;
    f_801c787c(c);
R_801d2bbc:
    ea = c.r[3] + 0x0u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[26] = wp::rd32(ea);
    goto L_801d2c30;
L_801d2bc8:
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801d2be8;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x2u;
    c.lr = 0x801d2bdcu;
    f_801c787c(c);
R_801d2bdc:
    ea = c.r[3] + 0x0u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[26] = wp::rd32(ea);
    goto L_801d2c30;
L_801d2be8:
    wp::compare_unsigned(c, 0, c.r[0], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_801d2c04;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2bfcu;
    f_801c787c(c);
R_801d2bfc:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2c30;
L_801d2c04:
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801d2c20;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2c18u;
    f_801c787c(c);
R_801d2c18:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2c30;
L_801d2c20:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2c2cu;
    f_801c787c(c);
R_801d2c2c:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_801d2c30:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d2c40;
    c.r[28] = wp::sign_extend16(c.r[28]);
L_801d2c40:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d2c50;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801d2c94;
L_801d2c50:
    ea = c.r[1] + 0x70u;
    c.r[9] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x74u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x78u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0x60u;
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2c84u;
    f_801d1aac(c);
R_801d2c84:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
    goto L_801d2cd0;
L_801d2c94:
    ea = c.r[1] + 0x70u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x74u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x78u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2cc4u;
    f_801d1868(c);
R_801d2cc4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
L_801d2cd0:
    c.r[3] = c.r[16] - c.r[25];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[24] = wp::sraw(c, c.r[0], 1);
    goto L_801d3248;
L_801d2ce4:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x3u);
    if (!wp::cr_get(c, 2)) goto L_801d2d04;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2cfcu;
    f_801c787c(c);
R_801d2cfc:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2d8c;
L_801d2d04:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 2)) goto L_801d2d24;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x2u;
    c.lr = 0x801d2d18u;
    f_801c787c(c);
R_801d2d18:
    ea = c.r[3] + 0x0u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[26] = wp::rd32(ea);
    goto L_801d2d8c;
L_801d2d24:
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801d2d44;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x2u;
    c.lr = 0x801d2d38u;
    f_801c787c(c);
R_801d2d38:
    ea = c.r[3] + 0x0u;
    c.r[27] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[26] = wp::rd32(ea);
    goto L_801d2d8c;
L_801d2d44:
    wp::compare_unsigned(c, 0, c.r[0], 0x7u);
    if (!wp::cr_get(c, 2)) goto L_801d2d60;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2d58u;
    f_801c787c(c);
R_801d2d58:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2d8c;
L_801d2d60:
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 2)) goto L_801d2d7c;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2d74u;
    f_801c787c(c);
R_801d2d74:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
    goto L_801d2d8c;
L_801d2d7c:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2d88u;
    f_801c787c(c);
R_801d2d88:
    ea = c.r[3] + 0x0u;
    c.r[28] = wp::rd32(ea);
L_801d2d8c:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d2d9c;
    c.r[28] = c.r[28] & 0xffffu;
L_801d2d9c:
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d2dac;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (!wp::cr_get(c, 2)) goto L_801d2df0;
L_801d2dac:
    ea = c.r[1] + 0x70u;
    c.r[9] = wp::rd32(ea);
    c.r[4] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x74u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x78u;
    c.r[7] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0x40u;
    ea = c.r[1] + 0x40u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2de0u;
    f_801d1aac(c);
R_801d2de0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
    goto L_801d2e2c;
L_801d2df0:
    ea = c.r[1] + 0x70u;
    c.r[8] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x74u;
    c.r[7] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x78u;
    c.r[6] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x30u;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2e20u;
    f_801d1868(c);
R_801d2e20:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
L_801d2e2c:
    c.r[3] = c.r[16] - c.r[25];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[24] = wp::sraw(c, c.r[0], 1);
    goto L_801d3248;
L_801d2e40:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801d2e60;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x3u;
    c.lr = 0x801d2e58u;
    f_801c787c(c);
R_801d2e58:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d2e70;
L_801d2e60:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x3u;
    c.lr = 0x801d2e6cu;
    f_801c787c(c);
R_801d2e6c:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
L_801d2e70:
    ea = c.r[1] + 0x70u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x74u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x20u;
    ea = c.r[1] + 0x78u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2e9cu;
    f_801d22e4(c);
R_801d2e9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
    c.r[3] = c.r[16] - c.r[3];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[24] = wp::sraw(c, c.r[0], 1);
    goto L_801d3248;
L_801d2ebc:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x9u);
    if (!wp::cr_get(c, 2)) goto L_801d2edc;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x3u;
    c.lr = 0x801d2ed4u;
    f_801c787c(c);
R_801d2ed4:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d2eec;
L_801d2edc:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x3u;
    c.lr = 0x801d2ee8u;
    f_801c787c(c);
R_801d2ee8:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
L_801d2eec:
    ea = c.r[1] + 0x70u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x480u;
    ea = c.r[1] + 0x74u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x78u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d2f18u;
    f_801d1d68(c);
R_801d2f18:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[25] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3204;
    c.r[3] = c.r[16] - c.r[3];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[24] = wp::sraw(c, c.r[0], 1);
    goto L_801d3248;
L_801d2f38:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_801d300c;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d2f50u;
    f_801c787c(c);
R_801d2f50:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[25] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_801d2f7c;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d2f7c;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801d2f74u;
    f_801d3974(c);
R_801d2f74:
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d2f7c:
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d2f88;
    c.r[25] = c.r[17] + 0x6cu;
L_801d2f88:
    ea = c.r[1] + 0x73u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2fc0;
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[25] + 0x0u;
    c.r[3] = wp::rd16(ea);
    c.r[25] = c.r[25] + 0x2u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[24] = c.r[3] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d3248;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[24], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d3248;
    c.r[24] = c.r[0] | c.r[0];
    goto L_801d3248;
L_801d2fc0:
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d2ffc;
    ea = c.r[1] + 0x7cu;
    c.r[24] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = 0x0u;
    c.r[5] = c.r[24] | c.r[24];
    c.lr = 0x801d2fe0u;
    f_801d12b0(c);
R_801d2fe0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3248;
    c.r[3] = c.r[3] - c.r[25];
    c.r[0] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[0] = c.r[0] + c.r[3];
    c.r[24] = wp::sraw(c, c.r[0], 1);
    goto L_801d3248;
L_801d2ffc:
    c.r[3] = c.r[25] | c.r[25];
    c.lr = 0x801d3004u;
    f_801d3714(c);
R_801d3004:
    c.r[24] = c.r[3] | c.r[3];
    goto L_801d3248;
L_801d300c:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d3018u;
    f_801c787c(c);
R_801d3018:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    ea = c.r[3] + 0x0u;
    c.r[24] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_801d3044;
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d3044;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801d303cu;
    f_801d3974(c);
R_801d303c:
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d3044:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d3050;
    c.r[24] = c.r[18] + 0x7ba0u;
L_801d3050:
    ea = c.r[1] + 0x73u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3084;
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[25] + 0x0u;
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.r[25] = c.r[3] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d30c0;
    ea = c.r[1] + 0x7cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[25], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d30c0;
    c.r[25] = c.r[0] | c.r[0];
    goto L_801d30c0;
L_801d3084:
    ea = c.r[1] + 0x72u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d30b4;
    ea = c.r[1] + 0x7cu;
    c.r[25] = wp::rd32(ea);
    c.r[3] = c.r[24] | c.r[24];
    c.r[4] = 0x0u;
    c.r[5] = c.r[25] | c.r[25];
    c.lr = 0x801d30a4u;
    f_801cc838(c);
R_801d30a4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d30c0;
    c.r[25] = c.r[3] - c.r[24];
    goto L_801d30c0;
L_801d30b4:
    c.r[3] = c.r[24] | c.r[24];
    c.lr = 0x801d30bcu;
    f_801c7860(c);
R_801d30bc:
    c.r[25] = c.r[3] | c.r[3];
L_801d30c0:
    c.r[4] = c.r[24] | c.r[24];
    c.r[5] = c.r[25] | c.r[25];
    c.r[3] = c.r[1] + 0x80u;
    c.lr = 0x801d30d0u;
    f_801cc5f4(c);
R_801d30d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[24] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 0)) goto L_801d3204;
    c.r[25] = c.r[1] + 0x80u;
    goto L_801d3248;
L_801d30e4:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3104;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0xffffffffu;
    c.lr = 0x801d30fcu;
    f_801d3974(c);
R_801d30fc:
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d3104:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d3110u;
    f_801c787c(c);
R_801d3110:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x0u;
    c.r[25] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3154;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d315c;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d3164;
    wp::compare_signed(c, 0, c.r[0], 0x6u);
    if (wp::cr_get(c, 2)) goto L_801d316c;
    wp::compare_signed(c, 0, c.r[0], 0x7u);
    if (wp::cr_get(c, 2)) goto L_801d317c;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (wp::cr_get(c, 2)) goto L_801d3184;
    wp::compare_signed(c, 0, c.r[0], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d318c;
    goto L_801d33dc;
L_801d3154:
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[31]);
    goto L_801d33dc;
L_801d315c:
    ea = c.r[25] + 0x0u;
    wp::wr16(ea, c.r[31]);
    goto L_801d33dc;
L_801d3164:
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[31]);
    goto L_801d33dc;
L_801d316c:
    ea = c.r[25] + 0x4u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = wp::sraw(c, c.r[31], 31);
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d33dc;
L_801d317c:
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[31]);
    goto L_801d33dc;
L_801d3184:
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[31]);
    goto L_801d33dc;
L_801d318c:
    ea = c.r[25] + 0x4u;
    wp::wr32(ea, c.r[31]);
    c.r[0] = wp::sraw(c, c.r[31], 31);
    ea = c.r[25] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d33dc;
L_801d319c:
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd8(ea);
    c.r[25] = c.r[1] + 0x80u;
    wp::compare_unsigned(c, 0, c.r[0], 0x5u);
    if (!wp::cr_get(c, 2)) goto L_801d31c8;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d31b8u;
    f_801c787c(c);
R_801d31b8:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[24] = 0x1u;
    ea = c.r[1] + 0x80u;
    wp::wr16(ea, c.r[0]);
    goto L_801d3248;
L_801d31c8:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x1u;
    c.lr = 0x801d31d4u;
    f_801c787c(c);
R_801d31d4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    c.r[5] = 0x1u;
    c.lr = 0x801d31ecu;
    f_801cc574(c);
R_801d31ec:
    c.r[24] = c.r[3] | c.r[3];
    goto L_801d3248;
L_801d31f4:
    ea = c.r[1] + 0x80u;
    wp::wr16(ea, c.r[14]);
    c.r[25] = c.r[1] + 0x80u;
    c.r[24] = 0x1u;
    goto L_801d3248;
L_801d3204:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801d320cu;
    f_801d3714(c);
R_801d320c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[5] = c.r[3] | c.r[3];
    c.r[31] = c.r[31] + c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d3240;
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[29] | c.r[29];
    c.ctr = c.r[12];
    c.lr = 0x801d3230u;
    wp::call(c, c.ctr);
R_801d3230:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d3240;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d3240:
    c.r[3] = c.r[31] | c.r[31];
    goto L_801d33ec;
L_801d3248:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    c.r[29] = c.r[24] | c.r[24];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d335c;
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    c.r[0] = 0x20u;
    if (!wp::cr_get(c, 2)) goto L_801d3268;
    c.r[0] = 0x30u;
L_801d3268:
    ea = c.r[1] + 0xcu;
    wp::wr16(ea, c.r[0]);
    ea = c.r[25] + 0x0u;
    c.r[3] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x2bu);
    if (wp::cr_get(c, 2)) goto L_801d3288;
    wp::compare_unsigned(c, 0, c.r[3], 0x2du);
    if (wp::cr_get(c, 2)) goto L_801d3288;
    wp::compare_unsigned(c, 0, c.r[3], 0x20u);
    if (!wp::cr_get(c, 2)) goto L_801d32c0;
L_801d3288:
    wp::compare_unsigned(c, 0, c.r[0], 0x30u);
    if (!wp::cr_get(c, 2)) goto L_801d32c0;
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d32a8u;
    wp::call(c, c.ctr);
R_801d32a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d32b8;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d32b8:
    c.r[25] = c.r[25] + 0x2u;
    c.r[24] = c.r[24] + 0xffffffffu;
L_801d32c0:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d3350;
    ea = c.r[1] + 0x76u;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x61u);
    if (wp::cr_get(c, 2)) goto L_801d32e0;
    wp::compare_unsigned(c, 0, c.r[0], 0x41u);
    if (!wp::cr_get(c, 2)) goto L_801d3350;
L_801d32e0:
    wp::compare_signed(c, 0, c.r[24], 0x2u);
    if (!wp::cr_get(c, 0)) goto L_801d32f0;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d32f0:
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = 0x2u;
    c.ctr = c.r[12];
    c.lr = 0x801d3308u;
    wp::call(c, c.ctr);
R_801d3308:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d3318;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d3318:
    c.r[24] = c.r[24] + 0xfffffffeu;
    c.r[25] = c.r[25] + 0x4u;
    goto L_801d3350;
L_801d3324:
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[1] + 0xcu;
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d333cu;
    wp::call(c, c.ctr);
R_801d333c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d334c;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d334c:
    c.r[29] = c.r[29] + 0x1u;
L_801d3350:
    ea = c.r[1] + 0x78u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d3324;
    }
L_801d335c:
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d338c;
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    c.r[4] = c.r[25] | c.r[25];
    c.r[5] = c.r[24] | c.r[24];
    c.ctr = c.r[12];
    c.lr = 0x801d337cu;
    wp::call(c, c.ctr);
R_801d337c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d338c;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d338c:
    ea = c.r[1] + 0x70u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d33d8;
    goto L_801d33cc;
L_801d339c:
    c.r[12] = c.r[20] | c.r[20];
    c.r[3] = c.r[21] | c.r[21];
    ea = c.r[1] + 0xau;
    wp::wr16(ea, c.r[19]);
    c.r[4] = c.r[1] + 0xau;
    c.r[5] = 0x1u;
    c.ctr = c.r[12];
    c.lr = 0x801d33b8u;
    wp::call(c, c.ctr);
R_801d33b8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d33c8;
    c.r[3] = 0xffffffffu;
    goto L_801d33ec;
L_801d33c8:
    c.r[29] = c.r[29] + 0x1u;
L_801d33cc:
    ea = c.r[1] + 0x78u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d339c;
    }
L_801d33d8:
    c.r[31] = c.r[31] + c.r[29];
L_801d33dc:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d2ac0;
    }
L_801d33e8:
    c.r[3] = c.r[31] | c.r[31];
L_801d33ec:
    ea = c.r[1] + 0x488u;
    for (uint32_t k = 14; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x4d4u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x4d0u;
    return;
}

void f_801d3400(wp::Cpu& c) {
    WP_ENTER(0x801d3400u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d342cu: goto R_801d342c;
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
    c.r[4] = 0x2u;
    c.r[6] = c.r[30] | c.r[30];
    c.lr = 0x801d342cu;
    f_801cbe0c(c);
R_801d342c:
    wp::compare_unsigned(c, 0, c.r[31], c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801d3438;
    goto L_801d343c;
L_801d3438:
    c.r[30] = 0x0u;
L_801d343c:
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

void f_801d3458(wp::Cpu& c) {
    WP_ENTER(0x801d3458u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d34a0u: goto R_801d34a0;
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
    ea = c.r[3] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[6] + c.r[5];
    wp::compare_unsigned(c, 0, c.r[0], c.r[7]);
    c.r[31] = c.r[7] - c.r[6];
    if (wp::cr_get(c, 1)) goto L_801d348c;
    c.r[31] = c.r[5] | c.r[5];
L_801d348c:
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[6], 1) & 0xfffffffeu;
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[3] + c.r[0];
    c.lr = 0x801d34a0u;
    f_801d12a0(c);
R_801d34a0:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x8u;
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

void f_801d34c4(wp::Cpu& c) {
    WP_ENTER(0x801d34c4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d3534u: goto R_801d3534;
        case 0x801d3578u: goto R_801d3578;
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
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801d3500;
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
L_801d3500:
    c.r[31] = 0x80230000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[31] = c.r[31] + 0xcd0u;
    c.r[4] = 0x1u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[31] + 0x50u;
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
    c.lr = 0x801d3534u;
    f_801d37f0(c);
R_801d3534:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 1)) goto L_801d3544;
    c.r[3] = 0xffffffffu;
    goto L_801d3578;
L_801d3544:
    c.r[4] = c.r[1] + 0x88u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[5] = 0x1000000u;
    c.r[3] = 0x801d0000u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[5]);
    c.r[6] = c.r[1] + 0x68u;
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[3] + 0x3400u;
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[31] + 0x50u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d3578u;
    f_801d2a74(c);
L_801d3578:
R_801d3578:
    ea = c.r[1] + 0x84u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x78u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x80u;
    return;
}

void f_801d3590(wp::Cpu& c) {
    WP_ENTER(0x801d3590u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d363cu: goto R_801d363c;
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
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x84u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x80u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 6)) goto L_801d35d8;
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
L_801d35d8:
    c.r[12] = c.r[1] + 0x98u;
    c.r[0] = c.r[1] + 0x8u;
    c.r[30] = 0x3000000u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[7]);
    c.r[31] = 0x0u;
    c.r[7] = c.r[1] + 0x74u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    c.r[6] = c.r[7] | c.r[7];
    c.r[11] = 0x801d0000u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[11] + 0x3458u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x68u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x78u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x7cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x70u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801d363cu;
    f_801d2a74(c);
R_801d363c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d3668;
    wp::compare_unsigned(c, 0, c.r[3], c.r[29]);
    if (!wp::cr_get(c, 0)) goto L_801d3658;
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[28] + c.r[0];
    wp::wr16(ea, c.r[31]);
    goto L_801d3668;
L_801d3658:
    c.r[0] = wp::rotl(c.r[29], 1) & 0xfffffffeu;
    c.r[3] = 0xffffffffu;
    c.r[4] = c.r[28] + c.r[0];
    ea = c.r[4] + 0xfffffffeu;
    wp::wr16(ea, c.r[31]);
L_801d3668:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x88u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x84u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x80u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801d3688(wp::Cpu& c) {
    WP_ENTER(0x801d3688u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d36ccu: goto R_801d36cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x801d0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[7] + 0x3458u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801d36ccu;
    f_801d2a74(c);
R_801d36cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d36f8;
    wp::compare_unsigned(c, 0, c.r[3], c.r[30]);
    if (!wp::cr_get(c, 0)) goto L_801d36e8;
    c.r[0] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    ea = c.r[29] + c.r[0];
    wp::wr16(ea, c.r[31]);
    goto L_801d36f8;
L_801d36e8:
    c.r[0] = wp::rotl(c.r[30], 1) & 0xfffffffeu;
    c.r[3] = 0xffffffffu;
    c.r[4] = c.r[29] + c.r[0];
    ea = c.r[4] + 0xfffffffeu;
    wp::wr16(ea, c.r[31]);
L_801d36f8:
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

void f_801d3714(wp::Cpu& c) {
    WP_ENTER(0x801d3714u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[3] + 0xfffffffeu;
    c.r[3] = 0xffffffffu;
L_801d371c:
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[4] = ea;
    c.r[3] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d371c;
    }
    return;
}

void f_801d3730(wp::Cpu& c) {
    WP_ENTER(0x801d3730u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] + 0xfffffffeu;
    c.r[5] = c.r[3] + 0xfffffffeu;
L_801d3738:
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[4] = ea;
    ea = c.r[5] + 0x2u;
    wp::wr16(ea, c.r[0]);
    c.r[5] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d3738;
    }
    return;
}

void f_801d374c(wp::Cpu& c) {
    WP_ENTER(0x801d374cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[4] + 0xfffffffeu;
    c.r[6] = c.r[3] + 0xfffffffeu;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801d3784;
L_801d375c:
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[4] = ea;
    ea = c.r[6] + 0x2u;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d3784;
    c.r[0] = 0x0u;
    goto L_801d3778;
L_801d3774:
    ea = c.r[6] + 0x2u;
    wp::wr16(ea, c.r[0]);
    c.r[6] = ea;
L_801d3778:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d3774;
    }
    return;
L_801d3784:
    c.r[5] = wp::add_carry(c, c.r[5], 0xffffffffu, 0);
    wp::record(c, c.r[5]);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d375c;
    }
    return;
}

void f_801d3790(wp::Cpu& c) {
    WP_ENTER(0x801d3790u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = c.r[3] + 0xfffffffeu;
    c.r[4] = c.r[4] + 0xfffffffeu;
    goto L_801d37ac;
L_801d379c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d37ac;
    c.r[3] = 0x0u;
    return;
L_801d37ac:
    ea = c.r[5] + 0x2u;
    c.r[3] = wp::rd16(ea);
    c.r[5] = ea;
    ea = c.r[4] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[4] = ea;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d379c;
    }
    c.r[3] = c.r[3] - c.r[0];
    return;
}

void f_801d37c4(wp::Cpu& c) {
    WP_ENTER(0x801d37c4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] + 0xfffffffeu;
    goto L_801d37d4;
L_801d37cc:
    wp::compare_unsigned(c, 0, c.r[0], c.r[4]);
    if (wp::cr_get(c, 2)) return;
L_801d37d4:
    ea = c.r[3] + 0x2u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = ea;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d37cc;
    }
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.r[3] = 0x0u;
    return;
}

void f_801d37f0(wp::Cpu& c) {
    WP_ENTER(0x801d37f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3804;
    ea = c.r[3] + 0x4u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[5], 10) & 0x7u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d380c;
L_801d3804:
    c.r[3] = 0x0u;
    return;
L_801d380c:
    c.r[0] = wp::rotl(c.r[5], 12) & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d3828;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d3854;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d385c;
    goto L_801d3860;
L_801d3828:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d3840;
    c.r[0] = 0x2u;
    c.r[5] = (wp::rotl(c.r[0], 20) & 0x300000u) | (c.r[5] & 0xffcfffffu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[5]);
    goto L_801d3860;
L_801d3840:
    if (!wp::cr_get(c, 0)) goto L_801d3860;
    c.r[0] = 0x1u;
    c.r[5] = (wp::rotl(c.r[0], 20) & 0x300000u) | (c.r[5] & 0xffcfffffu);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[5]);
    goto L_801d3860;
L_801d3854:
    c.r[4] = 0x1u;
    goto L_801d3860;
L_801d385c:
    c.r[4] = 0xffffffffu;
L_801d3860:
    c.r[3] = c.r[4] | c.r[4];
    return;
}

void f_801d3868(wp::Cpu& c) {
    WP_ENTER(0x801d3868u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d3898u: goto R_801d3898;
        case 0x801d38bcu: goto R_801d38bc;
        case 0x801d38e8u: goto R_801d38e8;
        case 0x801d3914u: goto R_801d3914;
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
    c.lr = 0x801d3898u;
    f_801354e0(c);
R_801d3898:
    c.r[0] = c.r[3] & 0x20000000u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d3900;
    ea = c.r[13] + 0xffff9448u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d38cc;
    c.r[3] = 0x10000u;
    c.r[3] = c.r[3] + 0xffffe100u;
    c.lr = 0x801d38bcu;
    f_80197be0(c);
R_801d38bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d38cc;
    c.r[0] = 0x1u;
    ea = c.r[13] + 0xffff9448u;
    wp::wr32(ea, c.r[0]);
L_801d38cc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d38dc;
    c.r[3] = 0x1u;
    goto L_801d3918;
L_801d38dc:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801d38e8u;
    f_80197c30(c);
R_801d38e8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3900;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x1u;
    goto L_801d3918;
L_801d3900:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.lr = 0x801d3914u;
    f_801db6a0(c);
R_801d3914:
    c.r[3] = 0x0u;
L_801d3918:
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

void f_801d3938(wp::Cpu& c) {
    WP_ENTER(0x801d3938u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_801d3940(wp::Cpu& c) {
    WP_ENTER(0x801d3940u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d3954u: goto R_801d3954;
        case 0x801d3964u: goto R_801d3964;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d3954u;
    f_801cf2ec(c);
R_801d3954:
    c.r[0] = 0x1u;
    ea = c.r[13] + 0xffff9450u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x1u;
    c.lr = 0x801d3964u;
    f_80143650(c);
R_801d3964:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d3974(wp::Cpu& c) {
    WP_ENTER(0x801d3974u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff9458u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_801d398c(wp::Cpu& c) {
    WP_ENTER(0x801d398cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d39a8u: goto R_801d39a8;
        case 0x801d39b8u: goto R_801d39b8;
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
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d39a8u;
    f_801d77ec(c);
R_801d39a8:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[0] + c.r[31];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x801d39b8u;
    f_801d7874(c);
R_801d39b8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d39cc(wp::Cpu& c) {
    WP_ENTER(0x801d39ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d39f0u: goto R_801d39f0;
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
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    c.lr = 0x801d39f0u;
    f_801ccbac(c);
R_801d39f0:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 1)) goto L_801d3a00;
    c.f[1] = c.f[31];
    goto L_801d3a6c;
L_801d3a00:
    ea = c.r[2] + 0xffff9920u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[31], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801d3a14;
    c.r[31] = 0x1u;
    c.f[31] = -c.f[31];
L_801d3a14:
    c.f[0] = wp::convert_to_int(c.f[31], true);
    c.r[0] = 0x43300000u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9938u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[2] + 0xffff9928u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.f[1] = wp::round_single(c.f[1] - c.f[2]);
    c.ps1[1] = c.f[1];
    c.f[1] = wp::round_single(c.f[31] - c.f[1]);
    c.ps1[1] = c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    c.f[1] = wp::round_single(c.f[31] - c.f[1]);
    c.ps1[1] = c.f[1];
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_801d3a60;
    ea = c.r[2] + 0xffff9930u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] + c.f[0];
    c.f[1] = wp::round_single(c.f[1]);
    c.ps1[1] = c.f[1];
L_801d3a60:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d3a6c;
    c.f[1] = -c.f[1];
L_801d3a6c:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d3a88(wp::Cpu& c) {
    WP_ENTER(0x801d3a88u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d3c44u: goto R_801d3c44;
        case 0x801d3c84u: goto R_801d3c84;
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
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = 0x3ff00000u;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[4] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d3af8;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xc0100000u;
    c.r[0] = c.r[3] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d3ae4;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d3adc;
    ea = c.r[2] + 0xffff9940u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d3d34;
L_801d3adc:
    ea = c.r[2] + 0xffff9948u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d3d34;
L_801d3ae4:
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x5d18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    goto L_801d3d34;
L_801d3af8:
    c.r[0] = 0x3fe00000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d3bb4;
    c.r[0] = 0x3c600000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d3b18;
    ea = c.r[2] + 0xffff9950u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d3d34;
L_801d3b18:
    c.f[12] = c.f[1] * c.f[1];
    ea = c.r[2] + 0xffff9980u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99a8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9978u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9970u;
    c.f[10] = wp::rdf64(ea);
    c.f[4] = c.f[0] * c.f[12];
    ea = c.r[2] + 0xffff99a0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] * c.f[12];
    ea = c.r[2] + 0xffff9998u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9968u;
    c.f[9] = wp::rdf64(ea);
    c.f[3] = c.f[3] + c.f[4];
    ea = c.r[2] + 0xffff9990u;
    c.f[4] = wp::rdf64(ea);
    c.f[0] = c.f[0] + c.f[2];
    c.f[11] = c.f[12] * c.f[3];
    ea = c.r[2] + 0xffff9960u;
    c.f[8] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9988u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[12] * c.f[0];
    ea = c.r[2] + 0xffff9958u;
    c.f[7] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99b0u;
    c.f[2] = wp::rdf64(ea);
    c.f[10] = c.f[10] + c.f[11];
    ea = c.r[2] + 0xffff9950u;
    c.f[0] = wp::rdf64(ea);
    c.f[5] = c.f[5] + c.f[6];
    c.f[6] = c.f[12] * c.f[10];
    c.f[5] = c.f[12] * c.f[5];
    c.f[6] = c.f[9] + c.f[6];
    c.f[4] = c.f[4] + c.f[5];
    c.f[5] = c.f[12] * c.f[6];
    c.f[4] = c.f[12] * c.f[4];
    c.f[5] = c.f[8] + c.f[5];
    c.f[4] = c.f[3] + c.f[4];
    c.f[3] = c.f[12] * c.f[5];
    c.f[3] = c.f[7] + c.f[3];
    c.f[3] = c.f[12] * c.f[3];
    c.f[3] = c.f[3] / c.f[4];
    c.f[3] = c.f[1] * c.f[3];
    c.f[2] = c.f[2] - c.f[3];
    c.f[1] = c.f[1] - c.f[2];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d3d34;
L_801d3bb4:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d3c6c;
    ea = c.r[2] + 0xffff9988u;
    c.f[11] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99b8u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[11] + c.f[1];
    ea = c.r[2] + 0xffff9980u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9978u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99a0u;
    c.f[3] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[1];
    ea = c.r[2] + 0xffff99a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9970u;
    c.f[8] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9998u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9968u;
    c.f[7] = wp::rdf64(ea);
    c.f[10] = c.f[4] * c.f[1];
    ea = c.r[2] + 0xffff9960u;
    c.f[6] = wp::rdf64(ea);
    c.f[4] = c.f[0] * c.f[1];
    ea = c.r[2] + 0xffff9990u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9958u;
    c.f[5] = wp::rdf64(ea);
    c.f[9] = c.f[9] + c.f[10];
    c.f[3] = c.f[3] + c.f[4];
    c.f[4] = c.f[1] * c.f[9];
    c.f[3] = c.f[1] * c.f[3];
    c.f[4] = c.f[8] + c.f[4];
    c.f[2] = c.f[2] + c.f[3];
    c.f[3] = c.f[1] * c.f[4];
    c.f[2] = c.f[1] * c.f[2];
    c.f[3] = c.f[7] + c.f[3];
    c.f[0] = c.f[0] + c.f[2];
    c.f[2] = c.f[1] * c.f[3];
    c.f[0] = c.f[1] * c.f[0];
    c.f[2] = c.f[6] + c.f[2];
    c.f[30] = c.f[11] + c.f[0];
    c.f[0] = c.f[1] * c.f[2];
    c.f[0] = c.f[5] + c.f[0];
    c.f[31] = c.f[1] * c.f[0];
    c.lr = 0x801d3c44u;
    f_801d7e8c(c);
R_801d3c44:
    c.f[4] = c.f[31] / c.f[30];
    ea = c.r[2] + 0xffff99b0u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99c0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9948u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[4] * c.f[1];
    c.f[3] = c.f[4] - c.f[3];
    c.f[1] = c.f[1] + c.f[3];
    c.f[1] = c.f[2] * c.f[1];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d3d34;
L_801d3c6c:
    ea = c.r[2] + 0xffff9988u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99b8u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] - c.f[1];
    c.f[31] = c.f[0] * c.f[1];
    c.f[1] = c.f[31];
    c.lr = 0x801d3c84u;
    f_801d7e8c(c);
R_801d3c84:
    ea = c.r[2] + 0xffff9980u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[1]);
    c.f[4] = c.f[2] * c.f[31];
    ea = c.r[2] + 0xffff99a8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9978u;
    c.f[3] = wp::rdf64(ea);
    c.f[2] = c.f[0] * c.f[31];
    ea = c.r[2] + 0xffff99a0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.f[3] = c.f[3] + c.f[4];
    ea = c.r[1] + 0x10u;
    c.f[11] = wp::rdf64(ea);
    c.f[0] = c.f[0] + c.f[2];
    c.f[10] = c.f[11] * c.f[11];
    ea = c.r[2] + 0xffff9970u;
    c.f[6] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9968u;
    c.f[8] = wp::rdf64(ea);
    c.f[2] = c.f[31] * c.f[3];
    ea = c.r[2] + 0xffff9998u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9960u;
    c.f[7] = wp::rdf64(ea);
    c.f[5] = c.f[31] * c.f[0];
    ea = c.r[2] + 0xffff9990u;
    c.f[3] = wp::rdf64(ea);
    c.f[0] = c.f[6] + c.f[2];
    ea = c.r[2] + 0xffff9958u;
    c.f[6] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9988u;
    c.f[2] = wp::rdf64(ea);
    c.f[10] = c.f[31] - c.f[10];
    c.f[9] = c.f[31] * c.f[0];
    ea = c.r[2] + 0xffff99c0u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[4] + c.f[5];
    c.f[5] = c.f[8] + c.f[9];
    c.f[4] = c.f[31] * c.f[4];
    c.f[5] = c.f[31] * c.f[5];
    c.f[3] = c.f[3] + c.f[4];
    c.f[8] = c.f[1] + c.f[11];
    c.f[4] = c.f[7] + c.f[5];
    c.f[3] = c.f[31] * c.f[3];
    c.f[4] = c.f[31] * c.f[4];
    c.f[3] = c.f[2] + c.f[3];
    c.f[5] = c.f[10] / c.f[8];
    c.f[2] = c.f[6] + c.f[4];
    c.f[2] = c.f[31] * c.f[2];
    c.f[2] = c.f[2] / c.f[3];
    c.f[1] = c.f[2] * c.f[1];
    c.f[1] = c.f[5] + c.f[1];
    c.f[1] = c.f[11] + c.f[1];
    c.f[1] = c.f[0] * c.f[1];
L_801d3d34:
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
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801d3d54(wp::Cpu& c) {
    WP_ENTER(0x801d3d54u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d3f20u: goto R_801d3f20;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x3ff00000u;
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x28u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[31] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d3dd4;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0xc0100000u;
    c.r[0] = c.r[3] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d3dc0;
    ea = c.r[2] + 0xffff99c8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99d0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] * c.f[1];
    c.f[0] = c.f[0] * c.f[1];
    c.f[1] = c.f[2] + c.f[0];
    goto L_801d3fbc;
L_801d3dc0:
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x5d18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    goto L_801d3fbc;
L_801d3dd4:
    c.r[0] = 0x3fe00000u;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d3e90;
    c.r[0] = 0x3e400000u;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d3e04;
    ea = c.r[2] + 0xffff99d8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99e0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d3e08;
    goto L_801d3fbc;
L_801d3e04:
    c.f[31] = c.f[1] * c.f[1];
L_801d3e08:
    ea = c.r[2] + 0xffff9a10u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a30u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[2] * c.f[31];
    ea = c.r[2] + 0xffff9a08u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a00u;
    c.f[8] = wp::rdf64(ea);
    c.f[2] = c.f[0] * c.f[31];
    ea = c.r[2] + 0xffff9a28u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99f8u;
    c.f[7] = wp::rdf64(ea);
    c.f[4] = c.f[3] + c.f[4];
    ea = c.r[2] + 0xffff9a20u;
    c.f[3] = wp::rdf64(ea);
    c.f[0] = c.f[0] + c.f[2];
    ea = c.r[2] + 0xffff9a18u;
    c.f[2] = wp::rdf64(ea);
    c.f[9] = c.f[31] * c.f[4];
    ea = c.r[2] + 0xffff99f0u;
    c.f[6] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99e8u;
    c.f[5] = wp::rdf64(ea);
    c.f[4] = c.f[31] * c.f[0];
    ea = c.r[2] + 0xffff99e0u;
    c.f[0] = wp::rdf64(ea);
    c.f[8] = c.f[8] + c.f[9];
    c.f[3] = c.f[3] + c.f[4];
    c.f[4] = c.f[31] * c.f[8];
    c.f[3] = c.f[31] * c.f[3];
    c.f[4] = c.f[7] + c.f[4];
    c.f[2] = c.f[2] + c.f[3];
    c.f[3] = c.f[31] * c.f[4];
    c.f[2] = c.f[31] * c.f[2];
    c.f[3] = c.f[6] + c.f[3];
    c.f[2] = c.f[0] + c.f[2];
    c.f[0] = c.f[31] * c.f[3];
    c.f[0] = c.f[5] + c.f[0];
    c.f[0] = c.f[31] * c.f[0];
    c.f[0] = c.f[0] / c.f[2];
    c.f[0] = c.f[1] * c.f[0];
    c.f[1] = c.f[1] + c.f[0];
    goto L_801d3fbc;
L_801d3e90:
    c.f[1] = std::fabs(c.f[1]);
    ea = c.r[2] + 0xffff99e0u;
    c.f[11] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a38u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a10u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[11] - c.f[1];
    ea = c.r[2] + 0xffff9a30u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a08u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a00u;
    c.f[8] = wp::rdf64(ea);
    c.f[31] = c.f[2] * c.f[3];
    ea = c.r[2] + 0xffff9a28u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a20u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99f8u;
    c.f[7] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99f0u;
    c.f[6] = wp::rdf64(ea);
    c.f[10] = c.f[0] * c.f[31];
    ea = c.r[2] + 0xffff9a18u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[1] * c.f[31];
    ea = c.r[2] + 0xffff99e8u;
    c.f[5] = wp::rdf64(ea);
    c.f[9] = c.f[9] + c.f[10];
    c.f[1] = c.f[31];
    c.f[3] = c.f[3] + c.f[4];
    c.f[4] = c.f[31] * c.f[9];
    c.f[3] = c.f[31] * c.f[3];
    c.f[4] = c.f[8] + c.f[4];
    c.f[2] = c.f[2] + c.f[3];
    c.f[3] = c.f[31] * c.f[4];
    c.f[2] = c.f[31] * c.f[2];
    c.f[3] = c.f[7] + c.f[3];
    c.f[0] = c.f[0] + c.f[2];
    c.f[2] = c.f[31] * c.f[3];
    c.f[0] = c.f[31] * c.f[0];
    c.f[2] = c.f[6] + c.f[2];
    c.f[29] = c.f[11] + c.f[0];
    c.f[0] = c.f[31] * c.f[2];
    c.f[0] = c.f[5] + c.f[0];
    c.f[30] = c.f[31] * c.f[0];
    c.lr = 0x801d3f20u;
    f_801d7e8c(c);
R_801d3f20:
    c.r[3] = 0x3fef0000u;
    c.r[0] = c.r[3] + 0x3333u;
    wp::compare_signed(c, 0, c.r[30], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d3f58;
    c.f[4] = c.f[30] / c.f[29];
    ea = c.r[2] + 0xffff9a40u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99d0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff99c8u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[1] * c.f[4];
    c.f[1] = c.f[1] + c.f[4];
    c.f[1] = c.f[3] * c.f[1];
    c.f[1] = c.f[1] - c.f[2];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d3fac;
L_801d3f58:
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = 0x0u;
    ea = c.r[2] + 0xffff9a40u;
    c.f[5] = wp::rdf64(ea);
    c.f[8] = c.f[30] / c.f[29];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff99d0u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[7] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a48u;
    c.f[2] = wp::rdf64(ea);
    c.f[4] = c.f[5] * c.f[1];
    c.f[0] = c.f[7] * c.f[7];
    c.f[6] = c.f[1] + c.f[7];
    c.f[4] = c.f[4] * c.f[8];
    c.f[1] = c.f[31] - c.f[0];
    c.f[0] = c.f[5] * c.f[7];
    c.f[1] = c.f[1] / c.f[6];
    c.f[1] = c.f[5] * c.f[1];
    c.f[1] = c.f[3] - c.f[1];
    c.f[3] = c.f[2] - c.f[0];
    c.f[0] = c.f[4] - c.f[1];
    c.f[0] = c.f[0] - c.f[3];
    c.f[1] = c.f[2] - c.f[0];
L_801d3fac:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d3fb8;
    goto L_801d3fbc;
L_801d3fb8:
    c.f[1] = -c.f[1];
L_801d3fbc:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x28u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x20u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801d3fec(wp::Cpu& c) {
    WP_ENTER(0x801d3fecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d4068u: goto R_801d4068;
        case 0x801d41d4u: goto R_801d41d4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x7ff00000u;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x14u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0u - c.r[8];
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[8] | c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[6] = c.r[4] & 0x7fffffffu;
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[6] | c.r[0];
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    ea = c.r[1] + 0xcu;
    c.r[9] = wp::rd32(ea);
    c.r[7] = c.r[5] & 0x7fffffffu;
    if (wp::cr_get(c, 1)) goto L_801d4050;
    c.r[0] = 0u - c.r[9];
    c.r[0] = c.r[9] | c.r[0];
    c.r[0] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[7] | c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_801d4058;
L_801d4050:
    c.f[1] = c.f[2] + c.f[1];
    goto L_801d4230;
L_801d4058:
    c.r[0] = c.r[4] + 0xc0100000u;
    c.r[0] = c.r[0] | c.r[8];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d406c;
    c.lr = 0x801d4068u;
    f_801d722c(c);
R_801d4068:
    goto L_801d4230;
L_801d406c:
    c.r[0] = c.r[7] | c.r[9];
    wp::record(c, c.r[0]);
    c.r[31] = wp::rotl(c.r[4], 2) & 0x2u;
    c.r[31] = (wp::rotl(c.r[5], 1) & 0x1u) | (c.r[31] & 0xfffffffeu);
    if (!wp::cr_get(c, 2)) goto L_801d40ac;
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d4230;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d409c;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d40a4;
    goto L_801d40ac;
    goto L_801d4230;
L_801d409c:
    ea = c.r[2] + 0xffff9a50u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d40a4:
    ea = c.r[2] + 0xffff9a58u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d40ac:
    c.r[0] = c.r[6] | c.r[8];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d40cc;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d40c4;
    ea = c.r[2] + 0xffff9a60u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d40c4:
    ea = c.r[2] + 0xffff9a68u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d40cc:
    c.r[0] = c.r[6] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d416c;
    c.r[0] = c.r[7] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4128;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d4108;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d4110;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d4118;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d4120;
    goto L_801d416c;
L_801d4108:
    ea = c.r[2] + 0xffff9a70u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4110:
    ea = c.r[2] + 0xffff9a78u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4118:
    ea = c.r[2] + 0xffff9a80u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4120:
    ea = c.r[2] + 0xffff9a88u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4128:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d414c;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d4154;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d415c;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d4164;
    goto L_801d416c;
L_801d414c:
    ea = c.r[2] + 0xffff9a90u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4154:
    ea = c.r[2] + 0xffff9a98u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d415c:
    ea = c.r[2] + 0xffff9a50u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4164:
    ea = c.r[2] + 0xffff9a58u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d416c:
    c.r[0] = c.r[7] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4190;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4188;
    ea = c.r[2] + 0xffff9a60u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4188:
    ea = c.r[2] + 0xffff9a68u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d4190:
    c.r[0] = c.r[7] - c.r[6];
    c.r[0] = wp::sraw(c, c.r[0], 20);
    wp::compare_signed(c, 0, c.r[0], 0x3cu);
    if (!wp::cr_get(c, 1)) goto L_801d41ac;
    ea = c.r[2] + 0xffff9a68u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[1]);
    goto L_801d41d8;
L_801d41ac:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d41c8;
    wp::compare_signed(c, 0, c.r[0], 0xffffffc4u);
    if (!wp::cr_get(c, 0)) goto L_801d41c8;
    ea = c.r[2] + 0xffff9a90u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[1]);
    goto L_801d41d8;
L_801d41c8:
    c.f[0] = c.f[1] / c.f[2];
    c.f[1] = std::fabs(c.f[0]);
    c.lr = 0x801d41d4u;
    f_801d722c(c);
R_801d41d4:
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[1]);
L_801d41d8:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d4230;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d41f8;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d420c;
    goto L_801d4220;
    goto L_801d4230;
L_801d41f8:
    ea = c.r[1] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d4230;
L_801d420c:
    ea = c.r[2] + 0xffff9aa0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a50u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] - c.f[2];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d4230;
L_801d4220:
    ea = c.r[2] + 0xffff9aa0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9a50u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] - c.f[2];
    c.f[1] = c.f[1] - c.f[0];
L_801d4230:
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x2cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d4244(wp::Cpu& c) {
    WP_ENTER(0x801d4244u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[3] = 0x40860000u;
    c.r[5] = 0x80200000u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = c.r[3] + 0x2e42u;
    c.r[5] = c.r[5] + 0x7ba8u;
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[6] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[4] = c.r[4] & 0x7fffffffu;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d42d0;
    c.r[0] = 0x7ff00000u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d42a8;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[4] & 0xfffffu;
    c.r[0] = c.r[3] | c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d4294;
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d446c;
L_801d4294:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d42a0;
    goto L_801d446c;
L_801d42a0:
    ea = c.r[2] + 0xffff9aa8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d446c;
L_801d42a8:
    ea = c.r[2] + 0xffff9ab0u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d42bc;
    ea = c.r[2] + 0xffff9ab8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d446c;
L_801d42bc:
    ea = c.r[2] + 0xffff9ac0u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801d42d0;
    ea = c.r[2] + 0xffff9aa8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d446c;
L_801d42d0:
    c.r[3] = 0x3fd60000u;
    c.r[0] = c.r[3] + 0x2e42u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d4374;
    c.r[3] = 0x3ff10000u;
    c.r[0] = c.r[3] + 0xffffa2b2u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d4318;
    c.r[4] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[3] = c.r[5] + 0x10u;
    ea = c.r[3] + c.r[4];
    c.f[0] = wp::rdf64(ea);
    c.r[3] = c.r[5] + 0x20u;
    c.r[0] = wp::rotl(c.r[6], 1) & 0xfffffffeu;
    ea = c.r[3] + c.r[4];
    c.f[8] = wp::rdf64(ea);
    c.f[7] = c.f[1] - c.f[0];
    c.r[3] = 0u - c.r[0];
    c.r[4] = c.r[3] + 0x1u;
    goto L_801d436c;
L_801d4318:
    ea = c.r[2] + 0xffff9ac8u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x43300000u;
    c.r[4] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[3] = c.r[5] + 0x0u;
    c.f[3] = c.f[0] * c.f[1];
    ea = c.r[3] + c.r[4];
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9b18u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[5] + 0x10u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[3] + c.f[0];
    ea = c.r[5] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = wp::convert_to_int(c.f[3], true);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] ^ 0x80000000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    c.f[3] = wp::rdf64(ea);
    c.f[3] = c.f[3] - c.f[4];
    c.f[2] = c.f[3] * c.f[2];
    c.f[8] = c.f[3] * c.f[0];
    c.f[7] = c.f[1] - c.f[2];
L_801d436c:
    c.f[1] = c.f[7] - c.f[8];
    goto L_801d43a0;
L_801d4374:
    c.r[0] = 0x3e300000u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d439c;
    ea = c.r[2] + 0xffff9ad0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9ad8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d43a0;
    c.f[1] = c.f[0] + c.f[1];
    goto L_801d446c;
L_801d439c:
    c.r[4] = 0x0u;
L_801d43a0:
    c.f[6] = c.f[1] * c.f[1];
    ea = c.r[2] + 0xffff9b00u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9af8u;
    c.f[4] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[2] + 0xffff9af0u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9ae8u;
    c.f[2] = wp::rdf64(ea);
    c.f[5] = c.f[0] * c.f[6];
    ea = c.r[2] + 0xffff9ae0u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[4] + c.f[5];
    c.f[4] = c.f[6] * c.f[4];
    c.f[3] = c.f[3] + c.f[4];
    c.f[3] = c.f[6] * c.f[3];
    c.f[2] = c.f[2] + c.f[3];
    c.f[2] = c.f[6] * c.f[2];
    c.f[0] = c.f[0] + c.f[2];
    c.f[0] = c.f[6] * c.f[0];
    c.f[4] = c.f[1] - c.f[0];
    if (!wp::cr_get(c, 2)) goto L_801d4408;
    ea = c.r[2] + 0xffff9b08u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[1] * c.f[4];
    ea = c.r[2] + 0xffff9ad8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[4] - c.f[2];
    c.f[2] = c.f[3] / c.f[2];
    c.f[1] = c.f[2] - c.f[1];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d446c;
L_801d4408:
    ea = c.r[2] + 0xffff9b08u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[1] * c.f[4];
    ea = c.r[2] + 0xffff9ad8u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[4], 0xfffffc03u);
    c.f[1] = c.f[2] - c.f[4];
    c.f[1] = c.f[3] / c.f[1];
    c.f[1] = c.f[8] - c.f[1];
    c.f[1] = c.f[1] - c.f[7];
    c.f[0] = c.f[0] - c.f[1];
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    if (wp::cr_get(c, 0)) goto L_801d444c;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[4], 20) & 0xfff00000u;
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d446c;
L_801d444c:
    c.r[0] = c.r[4] + 0x3e8u;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 20) & 0xfff00000u;
    ea = c.r[2] + 0xffff9b10u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = c.r[3] + c.r[0];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] * c.f[0];
L_801d446c:
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d4474(wp::Cpu& c) {
    WP_ENTER(0x801d4474u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x7fffffffu;
    c.r[4] = c.r[7] & 0x80000000u;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[0] | c.r[6];
    wp::record(c, c.r[3]);
    c.r[8] = c.r[7] ^ c.r[4];
    if (wp::cr_get(c, 2)) goto L_801d44c8;
    c.r[7] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[8], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801d44c8;
    c.r[3] = 0u - c.r[6];
    c.r[3] = c.r[6] | c.r[3];
    c.r[3] = wp::rotl(c.r[3], 1) & 0x1u;
    c.r[3] = c.r[0] | c.r[3];
    wp::compare_unsigned(c, 0, c.r[3], c.r[7]);
    if (!wp::cr_get(c, 1)) goto L_801d44d4;
L_801d44c8:
    c.f[0] = c.f[1] * c.f[2];
    c.f[1] = c.f[0] / c.f[0];
    goto L_801d47ec;
L_801d44d4:
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d4504;
    if (wp::cr_get(c, 0)) goto L_801d47ec;
    wp::compare_unsigned(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801d44ec;
    goto L_801d47ec;
L_801d44ec:
    if (!wp::cr_get(c, 2)) goto L_801d4504;
    c.r[3] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[4], 4) & 0x8u;
    c.r[3] = c.r[3] + 0x7bd8u;
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    goto L_801d47ec;
L_801d4504:
    c.r[3] = 0x100000u;
    wp::compare_signed(c, 0, c.r[8], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_801d4558;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4538;
    c.r[3] = c.r[5] | c.r[5];
    c.r[11] = 0xfffffbedu;
    goto L_801d452c;
L_801d4524:
    c.r[3] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[11] = c.r[11] + 0xffffffffu;
L_801d452c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d4524;
    }
    goto L_801d4560;
L_801d4538:
    c.r[3] = wp::rotl(c.r[8], 11) & 0xfffff800u;
    c.r[11] = 0xfffffc02u;
    goto L_801d454c;
L_801d4544:
    c.r[3] = wp::rotl(c.r[3], 1) & 0xfffffffeu;
    c.r[11] = c.r[11] + 0xffffffffu;
L_801d454c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d4544;
    }
    goto L_801d4560;
L_801d4558:
    c.r[3] = wp::sraw(c, c.r[8], 20);
    c.r[11] = c.r[3] + 0xfffffc01u;
L_801d4560:
    c.r[3] = 0x100000u;
    wp::compare_signed(c, 0, c.r[0], c.r[3]);
    if (!wp::cr_get(c, 0)) goto L_801d45b4;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4594;
    c.r[7] = c.r[6] | c.r[6];
    c.r[3] = 0xfffffbedu;
    goto L_801d4588;
L_801d4580:
    c.r[7] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0xffffffffu;
L_801d4588:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d4580;
    }
    goto L_801d45bc;
L_801d4594:
    c.r[7] = wp::rotl(c.r[0], 11) & 0xfffff800u;
    c.r[3] = 0xfffffc02u;
    goto L_801d45a8;
L_801d45a0:
    c.r[7] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    c.r[3] = c.r[3] + 0xffffffffu;
L_801d45a8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d45a0;
    }
    goto L_801d45bc;
L_801d45b4:
    c.r[3] = wp::sraw(c, c.r[0], 20);
    c.r[3] = c.r[3] + 0xfffffc01u;
L_801d45bc:
    wp::compare_signed(c, 0, c.r[11], 0xfffffc02u);
    if (wp::cr_get(c, 0)) goto L_801d45d0;
    c.r[7] = c.r[8] & 0xfffffu;
    c.r[9] = c.r[7] | 0x100000u;
    goto L_801d4600;
L_801d45d0:
    c.r[9] = wp::sub_carry(c, c.r[11], 0xfffffc02u);
    wp::compare_signed(c, 0, c.r[9], 0x1fu);
    if (wp::cr_get(c, 1)) goto L_801d45f4;
    c.r[7] = wp::sub_carry(c, c.r[9], 0x20u);
    c.r[8] = wp::slw(c.r[8], c.r[9]);
    c.r[7] = wp::srw(c.r[5], c.r[7]);
    c.r[5] = wp::slw(c.r[5], c.r[9]);
    c.r[9] = c.r[8] | c.r[7];
    goto L_801d4600;
L_801d45f4:
    c.r[7] = c.r[9] + 0xffffffe0u;
    c.r[9] = wp::slw(c.r[5], c.r[7]);
    c.r[5] = 0x0u;
L_801d4600:
    wp::compare_signed(c, 0, c.r[3], 0xfffffc02u);
    if (wp::cr_get(c, 0)) goto L_801d4614;
    c.r[0] = c.r[0] & 0xfffffu;
    c.r[10] = c.r[0] | 0x100000u;
    goto L_801d4644;
L_801d4614:
    c.r[10] = wp::sub_carry(c, c.r[3], 0xfffffc02u);
    wp::compare_signed(c, 0, c.r[10], 0x1fu);
    if (wp::cr_get(c, 1)) goto L_801d4638;
    c.r[7] = wp::sub_carry(c, c.r[10], 0x20u);
    c.r[8] = wp::slw(c.r[0], c.r[10]);
    c.r[0] = wp::srw(c.r[6], c.r[7]);
    c.r[6] = wp::slw(c.r[6], c.r[10]);
    c.r[10] = c.r[8] | c.r[0];
    goto L_801d4644;
L_801d4638:
    c.r[0] = c.r[10] + 0xffffffe0u;
    c.r[10] = wp::slw(c.r[6], c.r[0]);
    c.r[6] = 0x0u;
L_801d4644:
    c.r[7] = c.r[11] - c.r[3];
    wp::record(c, c.r[7]);
    c.r[11] = c.r[7] + 0x2u;
    c.r[8] = wp::srw(c.r[6], c.r[11]);
    c.ctr = c.r[7];
    if (wp::cr_get(c, 2)) goto L_801d46dc;
L_801d4658:
    c.r[7] = c.r[9] - c.r[10];
    wp::record(c, c.r[7]);
    c.r[12] = c.r[5] - c.r[6];
    if (!wp::cr_get(c, 2)) goto L_801d4684;
    c.r[0] = wp::srw(c.r[5], c.r[11]);
    wp::compare_unsigned(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 2)) goto L_801d4684;
    c.r[3] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[4], 4) & 0x8u;
    c.r[3] = c.r[3] + 0x7bd8u;
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    goto L_801d47ec;
L_801d4684:
    wp::compare_unsigned(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801d4690;
    c.r[7] = c.r[7] + 0xffffffffu;
L_801d4690:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d46ac;
    c.r[7] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[0] = wp::rotl(c.r[9], 1) & 0xfffffffeu;
    c.r[9] = c.r[7] + c.r[0];
    c.r[5] = c.r[5] + c.r[5];
    goto L_801d46d8;
L_801d46ac:
    c.r[0] = c.r[7] | c.r[12];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d46c8;
    c.r[3] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[4], 4) & 0x8u;
    c.r[3] = c.r[3] + 0x7bd8u;
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    goto L_801d47ec;
L_801d46c8:
    c.r[5] = wp::rotl(c.r[12], 1) & 0x1u;
    c.r[0] = wp::rotl(c.r[7], 1) & 0xfffffffeu;
    c.r[9] = c.r[5] + c.r[0];
    c.r[5] = wp::rotl(c.r[12], 1) & 0xfffffffeu;
L_801d46d8:
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d4658;
    }
L_801d46dc:
    c.r[7] = c.r[9] - c.r[10];
    wp::record(c, c.r[7]);
    c.r[10] = c.r[5] - c.r[6];
    if (!wp::cr_get(c, 2)) goto L_801d4708;
    c.r[0] = wp::srw(c.r[5], c.r[11]);
    wp::compare_unsigned(c, 0, c.r[0], c.r[8]);
    if (!wp::cr_get(c, 2)) goto L_801d4708;
    c.r[3] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[4], 4) & 0x8u;
    c.r[3] = c.r[3] + 0x7bd8u;
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    goto L_801d47ec;
L_801d4708:
    wp::compare_unsigned(c, 0, c.r[5], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801d4714;
    c.r[7] = c.r[7] + 0xffffffffu;
L_801d4714:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d4724;
    c.r[9] = c.r[7] | c.r[7];
    c.r[5] = c.r[10] | c.r[10];
L_801d4724:
    c.r[0] = c.r[9] | c.r[5];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4740;
    c.r[3] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[4], 4) & 0x8u;
    c.r[3] = c.r[3] + 0x7bd8u;
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    goto L_801d47ec;
L_801d4740:
    c.r[0] = 0x100000u;
    goto L_801d475c;
L_801d4748:
    c.r[7] = wp::rotl(c.r[5], 1) & 0x1u;
    c.r[6] = wp::rotl(c.r[9], 1) & 0xfffffffeu;
    c.r[9] = c.r[7] + c.r[6];
    c.r[5] = c.r[5] + c.r[5];
    c.r[3] = c.r[3] + 0xffffffffu;
L_801d475c:
    wp::compare_signed(c, 0, c.r[9], c.r[0]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d4748;
    }
    wp::compare_signed(c, 0, c.r[3], 0xfffffc02u);
    if (wp::cr_get(c, 0)) goto L_801d478c;
    c.r[0] = c.r[3] + 0x3ffu;
    c.r[3] = c.r[9] + 0xfff00000u;
    c.r[0] = wp::rotl(c.r[0], 20) & 0xfff00000u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    c.r[0] = c.r[3] | c.r[0];
    c.r[0] = c.r[0] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    goto L_801d47e8;
L_801d478c:
    c.r[6] = wp::sub_carry(c, c.r[3], 0xfffffc02u);
    wp::compare_signed(c, 0, c.r[6], 0x14u);
    if (wp::cr_get(c, 1)) goto L_801d47b0;
    c.r[0] = wp::sub_carry(c, c.r[6], 0x20u);
    c.r[3] = wp::srw(c.r[5], c.r[6]);
    c.r[0] = wp::slw(c.r[9], c.r[0]);
    c.r[9] = wp::sraw(c, c.r[9], c.r[6]);
    c.r[3] = c.r[3] | c.r[0];
    goto L_801d47dc;
L_801d47b0:
    wp::compare_signed(c, 0, c.r[6], 0x1fu);
    if (wp::cr_get(c, 1)) goto L_801d47d0;
    c.r[3] = wp::sub_carry(c, c.r[6], 0x20u);
    c.r[0] = wp::srw(c.r[5], c.r[6]);
    c.r[3] = wp::slw(c.r[9], c.r[3]);
    c.r[9] = c.r[4] | c.r[4];
    c.r[3] = c.r[3] | c.r[0];
    goto L_801d47dc;
L_801d47d0:
    c.r[0] = c.r[6] + 0xffffffe0u;
    c.r[3] = wp::sraw(c, c.r[9], c.r[0]);
    c.r[9] = c.r[4] | c.r[4];
L_801d47dc:
    c.r[0] = c.r[9] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
L_801d47e8:
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
L_801d47ec:
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d47f4(wp::Cpu& c) {
    WP_ENTER(0x801d47f4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = 0x100000u;
    c.r[7] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d4864;
    c.r[0] = c.r[8] & 0x7fffffffu;
    c.r[0] = c.r[0] | c.r[3];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4830;
    ea = c.r[2] + 0xffff9b20u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[13] + 0xffff9460u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d4aa0;
L_801d4830:
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4850;
    c.f[1] = c.f[1] - c.f[1];
    ea = c.r[13] + 0xffff9460u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d4aa0;
L_801d4850:
    ea = c.r[2] + 0xffff9b28u;
    c.f[0] = wp::rdf64(ea);
    c.r[7] = 0xffffffcau;
    c.f[1] = c.f[1] * c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[8] = wp::rd32(ea);
L_801d4864:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[8], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d4878;
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d4aa0;
L_801d4878:
    c.r[5] = wp::sraw(c, c.r[8], 20);
    c.r[8] = c.r[8] & 0xfffffu;
    c.r[3] = c.r[8] + 0x90000u;
    ea = c.r[2] + 0xffff9b30u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[3] + 0x5f64u;
    c.r[0] = c.r[8] + 0x2u;
    c.r[3] = c.r[4] & 0x100000u;
    c.r[5] = c.r[7] + c.r[5];
    c.r[3] = c.r[3] ^ 0x3ff00000u;
    c.r[0] = c.r[0] & 0xfffffu;
    c.r[3] = c.r[8] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    c.r[7] = c.r[5] + 0xfffffc01u;
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[4], 12) & 0x1u;
    c.r[7] = c.r[7] + c.r[0];
    c.f[0] = c.f[1] - c.f[0];
    if (!wp::cr_get(c, 0)) goto L_801d4974;
    ea = c.r[13] + 0xffff9460u;
    c.f[1] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[1]);
    if (!wp::cr_get(c, 2)) goto L_801d4910;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d48dc;
    goto L_801d4aa0;
L_801d48dc:
    c.r[3] = c.r[7] ^ 0x80000000u;
    c.r[0] = 0x43300000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[2] + 0xffff9b98u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9b38u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b40u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] - c.f[3];
    c.f[1] = c.f[1] * c.f[2];
    c.f[0] = c.f[0] * c.f[2];
    c.f[1] = c.f[1] + c.f[0];
    goto L_801d4aa0;
L_801d4910:
    ea = c.r[2] + 0xffff9b50u;
    c.f[3] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[0];
    ea = c.r[2] + 0xffff9b48u;
    c.f[2] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    c.f[3] = c.f[3] * c.f[0];
    c.f[2] = c.f[2] - c.f[3];
    c.f[5] = c.f[2] * c.f[1];
    if (!wp::cr_get(c, 2)) goto L_801d4938;
    c.f[1] = c.f[0] - c.f[5];
    goto L_801d4aa0;
L_801d4938:
    c.r[3] = c.r[7] ^ 0x80000000u;
    c.r[0] = 0x43300000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[2] + 0xffff9b98u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9b40u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b38u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[3] - c.f[4];
    c.f[1] = c.f[1] * c.f[3];
    c.f[2] = c.f[2] * c.f[3];
    c.f[1] = c.f[5] - c.f[1];
    c.f[0] = c.f[1] - c.f[0];
    c.f[1] = c.f[2] - c.f[0];
    goto L_801d4aa0;
L_801d4974:
    ea = c.r[2] + 0xffff9b58u;
    c.f[1] = wp::rdf64(ea);
    c.r[5] = c.r[7] ^ 0x80000000u;
    c.r[4] = 0x43300000u;
    c.r[3] = 0x70000u;
    c.f[1] = c.f[1] + c.f[0];
    c.r[6] = c.r[8] + 0xfffa0000u;
    c.r[0] = c.r[3] + 0xffffb851u;
    ea = c.r[2] + 0xffff9b90u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b88u;
    c.f[4] = wp::rdf64(ea);
    c.r[0] = c.r[0] - c.r[8];
    c.f[1] = c.f[0] / c.f[1];
    c.r[6] = c.r[6] + 0xffffeb86u;
    ea = c.r[2] + 0xffff9b70u;
    c.f[8] = wp::rdf64(ea);
    c.r[6] = c.r[6] | c.r[0];
    wp::record(c, c.r[6]);
    ea = c.r[2] + 0xffff9b68u;
    c.f[7] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b80u;
    c.f[3] = wp::rdf64(ea);
    c.f[11] = c.f[1] * c.f[1];
    ea = c.r[2] + 0xffff9b60u;
    c.f[6] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b78u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[2] + 0xffff9b98u;
    c.f[10] = wp::rdf64(ea);
    c.f[12] = c.f[11] * c.f[11];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    c.f[9] = wp::rdf64(ea);
    c.f[5] = c.f[5] * c.f[12];
    c.f[8] = c.f[8] * c.f[12];
    c.f[4] = c.f[4] + c.f[5];
    c.f[9] = c.f[9] - c.f[10];
    c.f[5] = c.f[7] + c.f[8];
    c.f[4] = c.f[12] * c.f[4];
    c.f[5] = c.f[12] * c.f[5];
    c.f[3] = c.f[3] + c.f[4];
    c.f[4] = c.f[6] + c.f[5];
    c.f[3] = c.f[12] * c.f[3];
    c.f[4] = c.f[12] * c.f[4];
    c.f[2] = c.f[2] + c.f[3];
    c.f[2] = c.f[11] * c.f[2];
    c.f[3] = c.f[2] + c.f[4];
    if (!wp::cr_get(c, 1)) goto L_801d4a64;
    ea = c.r[2] + 0xffff9b48u;
    c.f[2] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    c.f[2] = c.f[2] * c.f[0];
    c.f[5] = c.f[2] * c.f[0];
    if (!wp::cr_get(c, 2)) goto L_801d4a38;
    c.f[2] = c.f[5] + c.f[3];
    c.f[1] = c.f[1] * c.f[2];
    c.f[1] = c.f[5] - c.f[1];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d4aa0;
L_801d4a38:
    c.f[3] = c.f[5] + c.f[3];
    ea = c.r[2] + 0xffff9b40u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b38u;
    c.f[4] = wp::rdf64(ea);
    c.f[2] = c.f[2] * c.f[9];
    c.f[1] = c.f[1] * c.f[3];
    c.f[3] = c.f[4] * c.f[9];
    c.f[1] = c.f[1] + c.f[2];
    c.f[1] = c.f[5] - c.f[1];
    c.f[0] = c.f[1] - c.f[0];
    c.f[1] = c.f[3] - c.f[0];
    goto L_801d4aa0;
L_801d4a64:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4a7c;
    c.f[2] = c.f[0] - c.f[3];
    c.f[1] = c.f[1] * c.f[2];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d4aa0;
L_801d4a7c:
    c.f[3] = c.f[0] - c.f[3];
    ea = c.r[2] + 0xffff9b40u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9b38u;
    c.f[4] = wp::rdf64(ea);
    c.f[2] = c.f[2] * c.f[9];
    c.f[1] = c.f[1] * c.f[3];
    c.f[3] = c.f[4] * c.f[9];
    c.f[1] = c.f[1] - c.f[2];
    c.f[0] = c.f[1] - c.f[0];
    c.f[1] = c.f[3] - c.f[0];
L_801d4aa0:
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d4aa8(wp::Cpu& c) {
    WP_ENTER(0x801d4aa8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d4b88u: goto R_801d4b88;
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
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = 0x100000u;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d4b2c;
    c.r[0] = c.r[5] & 0x7fffffffu;
    c.r[0] = c.r[0] | c.r[3];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4af8;
    ea = c.r[2] + 0xffff9ba0u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9468u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d4ba8;
L_801d4af8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4b18;
    c.f[1] = c.f[1] - c.f[1];
    ea = c.r[13] + 0xffff9468u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d4ba8;
L_801d4b18:
    ea = c.r[2] + 0xffff9ba8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = 0xffffffcau;
    c.f[1] = c.f[1] * c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
L_801d4b2c:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d4b40;
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d4ba8;
L_801d4b40:
    c.r[3] = wp::sraw(c, c.r[5], 20);
    c.r[0] = 0x43300000u;
    c.r[3] = c.r[4] + c.r[3];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[3] + 0xfffffc01u;
    ea = c.r[2] + 0xffff9bc8u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = wp::rotl(c.r[4], 1) & 0x1u;
    c.r[0] = c.r[4] + c.r[3];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::sub_carry(c, c.r[3], 0x3ffu);
    ea = c.r[1] + 0x10u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[0], 20) & 0xfff00000u;
    c.r[0] = (wp::rotl(c.r[5], 0) & 0xfffffu) | (c.r[0] & 0xfff00000u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.f[31] = c.f[0] - c.f[1];
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801d4b88u;
    f_801d47f4(c);
R_801d4b88:
    ea = c.r[2] + 0xffff9bb8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9bb0u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[0] * c.f[1];
    ea = c.r[2] + 0xffff9bc0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] * c.f[31];
    c.f[0] = c.f[0] * c.f[31];
    c.f[1] = c.f[1] + c.f[3];
    c.f[1] = c.f[1] + c.f[0];
L_801d4ba8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.f[31] = wp::rdf64(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d4bbc(wp::Cpu& c) {
    WP_ENTER(0x801d4bbcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d4da8u: goto R_801d4da8;
        case 0x801d5374u: goto R_801d5374;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff40u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xc4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xb0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0xb8u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0xa8u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    wp::wrf64(ea, c.f[29]);
    ea = c.r[1] + 0x98u;
    wp::store_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    wp::wrf64(ea, c.f[28]);
    ea = c.r[1] + 0x88u;
    wp::store_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    wp::wrf64(ea, c.f[27]);
    ea = c.r[1] + 0x78u;
    wp::store_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x60u;
    wp::wrf64(ea, c.f[26]);
    ea = c.r[1] + 0x68u;
    wp::store_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[2]);
    c.r[3] = 0x80200000u;
    c.r[3] = c.r[3] + 0x7be8u;
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x14u;
    c.r[11] = wp::rd32(ea);
    c.r[7] = c.r[5] & 0x7fffffffu;
    ea = c.r[1] + 0x8u;
    c.r[9] = wp::rd32(ea);
    c.r[0] = c.r[7] | c.r[11];
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0xcu;
    c.r[10] = wp::rd32(ea);
    c.r[6] = c.r[9] & 0x7fffffffu;
    if (!wp::cr_get(c, 2)) goto L_801d4c30;
    ea = c.r[2] + 0xffff9bd0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4c30:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d4c70;
    c.r[0] = c.r[6] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4c50;
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4c70;
L_801d4c50:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d4c70;
    c.r[0] = c.r[7] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4c78;
    wp::compare_signed(c, 0, c.r[11], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d4c78;
L_801d4c70:
    c.f[1] = c.f[1] + c.f[2];
    goto L_801d5390;
L_801d4c78:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    c.r[4] = 0x0u;
    if (!wp::cr_get(c, 0)) goto L_801d4cf8;
    c.r[0] = 0x43400000u;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d4c98;
    c.r[4] = 0x2u;
    goto L_801d4cf8;
L_801d4c98:
    c.r[0] = 0x3ff00000u;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d4cf8;
    c.r[8] = wp::sraw(c, c.r[7], 20);
    c.r[0] = c.r[8] + 0xfffffc01u;
    wp::compare_signed(c, 0, c.r[0], 0x14u);
    if (!wp::cr_get(c, 1)) goto L_801d4cd4;
    c.r[0] = wp::sub_carry(c, c.r[0], 0x34u);
    c.r[8] = wp::srw(c.r[11], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    wp::compare_unsigned(c, 0, c.r[11], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4cf8;
    c.r[0] = c.r[8] & 0x1u;
    c.r[4] = wp::sub_carry(c, c.r[0], 0x2u);
    goto L_801d4cf8;
L_801d4cd4:
    wp::compare_signed(c, 0, c.r[11], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4cf8;
    c.r[0] = wp::sub_carry(c, c.r[0], 0x14u);
    c.r[8] = wp::sraw(c, c.r[7], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4cf8;
    c.r[0] = c.r[8] & 0x1u;
    c.r[4] = wp::sub_carry(c, c.r[0], 0x2u);
L_801d4cf8:
    wp::compare_signed(c, 0, c.r[11], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4dac;
    c.r[0] = c.r[7] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4d5c;
    c.r[0] = c.r[6] + 0xc0100000u;
    c.r[0] = c.r[0] | c.r[10];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4d20;
    c.f[1] = c.f[2] - c.f[2];
    goto L_801d5390;
L_801d4d20:
    c.r[0] = 0x3ff00000u;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d4d44;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d4d3c;
    c.f[1] = c.f[2];
    goto L_801d5390;
L_801d4d3c:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4d44:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4d54;
    c.f[1] = -c.f[2];
    goto L_801d5390;
L_801d4d54:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4d5c:
    c.r[0] = c.r[7] + 0xc0100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4d7c;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d5390;
    ea = c.r[2] + 0xffff9bd0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] / c.f[1];
    goto L_801d5390;
L_801d4d7c:
    c.r[0] = c.r[5] + 0xc0000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4d90;
    c.f[1] = c.f[1] * c.f[1];
    goto L_801d5390;
L_801d4d90:
    c.r[0] = c.r[5] + 0xc0200000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4dac;
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d4dac;
    c.lr = 0x801d4da8u;
    f_801d7e8c(c);
R_801d4da8:
    goto L_801d5390;
L_801d4dac:
    c.f[0] = std::fabs(c.f[1]);
    wp::compare_signed(c, 0, c.r[10], 0x0u);
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4e20;
    c.r[0] = c.r[6] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d4ddc;
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d4ddc;
    c.r[0] = c.r[6] + 0xc0100000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d4e20;
L_801d4ddc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4dec;
    ea = c.r[2] + 0xffff9bd0u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] / c.f[0];
L_801d4dec:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4e18;
    c.r[0] = c.r[6] + 0xc0100000u;
    c.r[0] = c.r[0] | c.r[4];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d4e0c;
    c.f[0] = c.f[0] - c.f[0];
    c.f[0] = c.f[0] / c.f[0];
    goto L_801d4e18;
L_801d4e0c:
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d4e18;
    c.f[0] = -c.f[0];
L_801d4e18:
    c.f[1] = c.f[0];
    goto L_801d5390;
L_801d4e20:
    c.r[8] = wp::sraw(c, c.r[9], 31);
    c.r[0] = c.r[8] + 0x1u;
    c.r[8] = c.r[0] | c.r[4];
    wp::record(c, c.r[8]);
    if (!wp::cr_get(c, 2)) goto L_801d4e44;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x5d18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    goto L_801d5390;
L_801d4e44:
    c.r[8] = 0x41e00000u;
    wp::compare_signed(c, 0, c.r[7], c.r[8]);
    if (!wp::cr_get(c, 1)) goto L_801d4f48;
    c.r[3] = 0x43f00000u;
    wp::compare_signed(c, 0, c.r[7], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_801d4e98;
    c.r[0] = 0x3ff00000u;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d4e80;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4e78;
    ea = c.r[2] + 0xffff9be0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4e78:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4e80:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d4e90;
    ea = c.r[2] + 0xffff9be0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4e90:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4e98:
    c.r[3] = 0x3ff00000u;
    c.r[7] = c.r[3] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[6], c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801d4ec0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d4eb8;
    ea = c.r[2] + 0xffff9be0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4eb8:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4ec0:
    wp::compare_signed(c, 0, c.r[6], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_801d4ee0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d4ed8;
    ea = c.r[2] + 0xffff9be0u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4ed8:
    ea = c.r[2] + 0xffff9bd8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d5390;
L_801d4ee0:
    ea = c.r[2] + 0xffff9bd0u;
    c.f[3] = wp::rdf64(ea);
    c.r[3] = 0x0u;
    ea = c.r[2] + 0xffff9bf8u;
    c.f[0] = wp::rdf64(ea);
    c.f[8] = c.f[1] - c.f[3];
    ea = c.r[2] + 0xffff9c08u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9bf0u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9c00u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[0] * c.f[8];
    ea = c.r[2] + 0xffff9be8u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9c10u;
    c.f[0] = wp::rdf64(ea);
    c.f[7] = c.f[8] * c.f[8];
    c.f[5] = c.f[5] - c.f[6];
    c.f[6] = c.f[3] * c.f[8];
    c.f[5] = c.f[8] * c.f[5];
    c.f[1] = c.f[1] * c.f[8];
    c.f[3] = c.f[4] - c.f[5];
    c.f[3] = c.f[7] * c.f[3];
    c.f[0] = c.f[0] * c.f[3];
    c.f[1] = c.f[1] - c.f[0];
    c.f[0] = c.f[6] + c.f[1];
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[6];
    c.f[0] = c.f[1] - c.f[0];
    goto L_801d5150;
L_801d4f48:
    c.r[5] = 0x100000u;
    c.r[11] = 0x0u;
    wp::compare_signed(c, 0, c.r[6], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_801d4f6c;
    ea = c.r[2] + 0xffff9c18u;
    c.f[1] = wp::rdf64(ea);
    c.r[11] = 0xffffffcbu;
    c.f[0] = c.f[0] * c.f[1];
    ea = c.r[1] + 0x48u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x48u;
    c.r[6] = wp::rd32(ea);
L_801d4f6c:
    c.r[5] = 0x40000u;
    c.r[8] = c.r[6] & 0xfffffu;
    c.r[5] = c.r[5] + 0xffff988eu;
    c.r[6] = wp::sraw(c, c.r[6], 20);
    wp::compare_signed(c, 0, c.r[8], c.r[5]);
    c.r[7] = c.r[8] | 0x3ff00000u;
    c.r[5] = c.r[11] + c.r[6];
    c.r[11] = c.r[5] + 0xfffffc01u;
    if (wp::cr_get(c, 1)) goto L_801d4f98;
    c.r[6] = 0x0u;
    goto L_801d4fbc;
L_801d4f98:
    c.r[5] = 0xc0000u;
    c.r[5] = c.r[5] + 0xffffb67au;
    wp::compare_signed(c, 0, c.r[8], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_801d4fb0;
    c.r[6] = 0x1u;
    goto L_801d4fbc;
L_801d4fb0:
    c.r[7] = c.r[7] + 0xfff00000u;
    c.r[6] = 0x0u;
    c.r[11] = c.r[11] + 0x1u;
L_801d4fbc:
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[7]);
    c.r[9] = wp::sraw(c, c.r[7], 1);
    c.r[10] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[5] = c.r[3] + 0x0u;
    ea = c.r[5] + c.r[10];
    c.f[8] = wp::rdf64(ea);
    c.r[8] = wp::rotl(c.r[6], 18) & 0xfffc0000u;
    ea = c.r[1] + 0x48u;
    c.f[10] = wp::rdf64(ea);
    c.r[6] = c.r[11] ^ 0x80000000u;
    ea = c.r[2] + 0xffff9bd8u;
    c.f[0] = wp::rdf64(ea);
    c.r[5] = 0x43300000u;
    c.f[3] = c.f[10] + c.f[8];
    ea = c.r[2] + 0xffff9bd0u;
    c.f[1] = wp::rdf64(ea);
    c.f[26] = c.f[10] - c.f[8];
    ea = c.r[2] + 0xffff9c48u;
    c.f[7] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9c38u;
    c.f[6] = wp::rdf64(ea);
    c.r[9] = c.r[9] | 0x20000000u;
    c.f[1] = c.f[1] / c.f[3];
    c.r[8] = c.r[8] + 0x80000u;
    c.r[8] = c.r[9] + c.r[8];
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[2] + 0xffff9c40u;
    c.f[3] = wp::rdf64(ea);
    c.r[9] = 0x0u;
    c.f[4] = c.f[26] * c.f[1];
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[2] + 0xffff9c30u;
    c.f[13] = wp::rdf64(ea);
    c.r[7] = c.r[3] + 0x20u;
    ea = c.r[1] + 0x18u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[4]);
    c.f[5] = c.f[4] * c.f[4];
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[2] + 0xffff9c28u;
    c.f[30] = wp::rdf64(ea);
    c.f[8] = c.f[9] - c.f[8];
    ea = c.r[1] + 0x20u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[6]);
    c.f[7] = c.f[7] * c.f[5];
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[2] + 0xffff9c20u;
    c.f[31] = wp::rdf64(ea);
    c.f[8] = c.f[10] - c.f[8];
    ea = c.r[2] + 0xffff9c50u;
    c.f[12] = wp::rdf64(ea);
    c.f[28] = c.f[0] * c.f[9];
    c.f[7] = c.f[3] + c.f[7];
    ea = c.r[2] + 0xffff9c60u;
    c.f[10] = wp::rdf64(ea);
    c.f[27] = c.f[0] * c.f[8];
    ea = c.r[2] + 0xffff9c68u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9c58u;
    c.f[11] = wp::rdf64(ea);
    c.f[7] = c.f[5] * c.f[7];
    ea = c.r[7] + c.r[10];
    c.f[8] = wp::rdf64(ea);
    c.f[28] = c.f[26] - c.f[28];
    c.f[3] = c.f[0] * c.f[0];
    c.f[29] = c.f[6] + c.f[7];
    ea = c.r[2] + 0xffff9cd8u;
    c.f[7] = wp::rdf64(ea);
    c.f[27] = c.f[28] - c.f[27];
    ea = c.r[1] + 0x58u;
    c.f[6] = wp::rdf64(ea);
    c.f[28] = c.f[5] * c.f[5];
    c.f[29] = c.f[5] * c.f[29];
    c.f[27] = c.f[1] * c.f[27];
    c.f[13] = c.f[13] + c.f[29];
    c.f[1] = c.f[12] + c.f[3];
    c.f[29] = c.f[5] * c.f[13];
    c.f[13] = c.f[0] + c.f[4];
    c.f[30] = c.f[30] + c.f[29];
    c.f[13] = c.f[27] * c.f[13];
    c.f[30] = c.f[5] * c.f[30];
    c.f[5] = c.f[6] - c.f[7];
    c.f[6] = c.f[31] + c.f[30];
    c.f[26] = c.f[28] * c.f[6];
    c.f[26] = c.f[26] + c.f[13];
    c.f[1] = c.f[1] + c.f[26];
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x18u;
    c.f[7] = wp::rdf64(ea);
    c.f[6] = c.f[7] - c.f[12];
    c.f[1] = c.f[27] * c.f[7];
    c.f[3] = c.f[6] - c.f[3];
    c.f[6] = c.f[0] * c.f[7];
    c.f[0] = c.f[26] - c.f[3];
    c.f[0] = c.f[0] * c.f[4];
    c.f[4] = c.f[1] + c.f[0];
    c.f[3] = c.f[6] + c.f[4];
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x40u;
    c.f[3] = wp::rdf64(ea);
    c.f[0] = c.f[3] - c.f[6];
    c.f[1] = c.f[10] * c.f[3];
    c.f[0] = c.f[4] - c.f[0];
    c.f[3] = c.f[11] * c.f[3];
    c.f[0] = c.f[9] * c.f[0];
    c.f[0] = c.f[1] + c.f[0];
    c.f[4] = c.f[8] + c.f[0];
    c.r[3] = c.r[3] + 0x10u;
    c.f[0] = c.f[3] + c.f[4];
    ea = c.r[3] + c.r[10];
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[0] + c.f[1];
    c.f[0] = c.f[5] + c.f[0];
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[5];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[0] - c.f[3];
    c.f[0] = c.f[4] - c.f[0];
L_801d5150:
    c.r[3] = c.r[4] + 0xffffffffu;
    ea = c.r[2] + 0xffff9bd0u;
    c.f[31] = wp::rdf64(ea);
    c.r[0] = c.r[0] | c.r[3];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d5164;
    ea = c.r[2] + 0xffff9c70u;
    c.f[31] = wp::rdf64(ea);
L_801d5164:
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[2]);
    c.r[0] = 0x0u;
    c.f[0] = c.f[2] * c.f[0];
    ea = c.r[1] + 0x30u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x40900000u;
    ea = c.r[1] + 0x38u;
    c.f[3] = wp::rdf64(ea);
    c.f[2] = c.f[2] - c.f[3];
    c.f[3] = c.f[3] * c.f[1];
    c.f[1] = c.f[1] * c.f[2];
    c.f[10] = c.f[1] + c.f[0];
    c.f[0] = c.f[10] + c.f[3];
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x50u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    c.r[5] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d51e8;
    c.r[0] = c.r[6] + 0xbf700000u;
    c.r[0] = c.r[0] | c.r[5];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d51c4;
    ea = c.r[2] + 0xffff9c78u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] * c.f[31];
    c.f[1] = c.f[1] * c.f[0];
    goto L_801d5390;
L_801d51c4:
    ea = c.r[2] + 0xffff9c80u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[3];
    c.f[1] = c.f[1] + c.f[10];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d523c;
    ea = c.r[2] + 0xffff9c78u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] * c.f[31];
    c.f[1] = c.f[1] * c.f[0];
    goto L_801d5390;
L_801d51e8:
    c.r[3] = 0x40910000u;
    c.r[4] = c.r[6] & 0x7fffffffu;
    c.r[0] = c.r[3] + 0xffffcc00u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d523c;
    c.r[3] = c.r[6] + 0x3f6f0000u;
    c.r[0] = c.r[3] + 0x3400u;
    c.r[0] = c.r[0] | c.r[5];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d521c;
    ea = c.r[2] + 0xffff9c88u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] * c.f[31];
    c.f[1] = c.f[1] * c.f[0];
    goto L_801d5390;
L_801d521c:
    c.f[0] = c.f[0] - c.f[3];
    wp::compare_float(c, 0, c.f[10], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 0) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_801d523c;
    ea = c.r[2] + 0xffff9c88u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] * c.f[31];
    c.f[1] = c.f[1] * c.f[0];
    goto L_801d5390;
L_801d523c:
    c.r[3] = c.r[6] & 0x7fffffffu;
    c.r[0] = 0x3fe00000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    c.r[4] = wp::rotl(c.r[6], 12) & 0x7ffu;
    c.r[3] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d52ac;
    c.r[3] = 0x100000u;
    c.r[0] = c.r[4] + 0xfffffc02u;
    c.r[0] = wp::sraw(c, c.r[3], c.r[0]);
    ea = c.r[2] + 0xffff9bd8u;
    c.f[0] = wp::rdf64(ea);
    c.r[7] = c.r[6] + c.r[0];
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[0]);
    c.r[0] = c.r[7] & 0x7fffffffu;
    c.r[3] = c.r[3] + 0xffffffffu;
    c.r[4] = wp::sraw(c, c.r[0], 20);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    c.r[5] = c.r[4] + 0xfffffc01u;
    c.r[0] = c.r[7] & 0xfffffu;
    c.r[4] = wp::sraw(c, c.r[3], c.r[5]);
    c.r[3] = c.r[0] | 0x100000u;
    c.r[0] = wp::sub_carry(c, c.r[5], 0x14u);
    c.r[4] = c.r[7] & ~c.r[4];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = wp::sraw(c, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d52a4;
    c.r[3] = 0u - c.r[3];
L_801d52a4:
    ea = c.r[1] + 0x28u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[3] - c.f[0];
L_801d52ac:
    c.f[0] = c.f[10] + c.f[3];
    c.r[0] = 0x0u;
    ea = c.r[2] + 0xffff9c98u;
    c.f[2] = wp::rdf64(ea);
    c.r[4] = wp::rotl(c.r[3], 20) & 0xfff00000u;
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[2] + 0xffff9ca0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0xffff9c90u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[1] + 0x28u;
    c.f[8] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9cc8u;
    c.f[6] = wp::rdf64(ea);
    c.f[3] = c.f[8] - c.f[3];
    ea = c.r[2] + 0xffff9cc0u;
    c.f[1] = wp::rdf64(ea);
    c.f[7] = c.f[0] * c.f[8];
    ea = c.r[2] + 0xffff9cb8u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9cb0u;
    c.f[4] = wp::rdf64(ea);
    c.f[0] = c.f[10] - c.f[3];
    c.f[10] = c.f[9] * c.f[8];
    ea = c.r[2] + 0xffff9ca8u;
    c.f[3] = wp::rdf64(ea);
    c.f[8] = c.f[2] * c.f[0];
    ea = c.r[2] + 0xffff9cd0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9bd0u;
    c.f[0] = wp::rdf64(ea);
    c.f[11] = c.f[8] + c.f[7];
    c.f[9] = c.f[10] + c.f[11];
    c.f[7] = c.f[9] * c.f[9];
    c.f[8] = c.f[9] - c.f[10];
    c.f[6] = c.f[6] * c.f[7];
    c.f[8] = c.f[11] - c.f[8];
    c.f[6] = c.f[1] + c.f[6];
    c.f[1] = c.f[9] * c.f[8];
    c.f[6] = c.f[7] * c.f[6];
    c.f[1] = c.f[8] + c.f[1];
    c.f[5] = c.f[5] + c.f[6];
    c.f[5] = c.f[7] * c.f[5];
    c.f[4] = c.f[4] + c.f[5];
    c.f[4] = c.f[7] * c.f[4];
    c.f[3] = c.f[3] + c.f[4];
    c.f[3] = c.f[7] * c.f[3];
    c.f[4] = c.f[9] - c.f[3];
    c.f[3] = c.f[9] * c.f[4];
    c.f[2] = c.f[4] - c.f[2];
    c.f[2] = c.f[3] / c.f[2];
    c.f[1] = c.f[2] - c.f[1];
    c.f[1] = c.f[1] - c.f[9];
    c.f[1] = c.f[0] - c.f[1];
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x50u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[4];
    c.r[0] = wp::sraw(c, c.r[0], 20);
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d537c;
    c.lr = 0x801d5374u;
    f_801d398c(c);
R_801d5374:
    ea = c.r[1] + 0x50u;
    wp::wrf64(ea, c.f[1]);
    goto L_801d5388;
L_801d537c:
    ea = c.r[1] + 0x50u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[4];
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[0]);
L_801d5388:
    ea = c.r[1] + 0x50u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[31] * c.f[0];
L_801d5390:
    ea = c.r[1] + 0xc4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xb8u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0xb0u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0xa8u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0xa0u;
    c.f[30] = wp::rdf64(ea);
    ea = c.r[1] + 0x98u;
    wp::load_quantized(c, 29, ea, 0, 0, q);
    ea = c.r[1] + 0x90u;
    c.f[29] = wp::rdf64(ea);
    ea = c.r[1] + 0x88u;
    wp::load_quantized(c, 28, ea, 0, 0, q);
    ea = c.r[1] + 0x80u;
    c.f[28] = wp::rdf64(ea);
    ea = c.r[1] + 0x78u;
    wp::load_quantized(c, 27, ea, 0, 0, q);
    ea = c.r[1] + 0x70u;
    c.f[27] = wp::rdf64(ea);
    ea = c.r[1] + 0x68u;
    wp::load_quantized(c, 26, ea, 0, 0, q);
    ea = c.r[1] + 0x60u;
    c.f[26] = wp::rdf64(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xc0u;
    return;
}

void f_801d53d0(wp::Cpu& c) {
    WP_ENTER(0x801d53d0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d5718u: goto R_801d5718;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x3fe90000u;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] + 0x21fbu;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[6] = c.r[31] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d5418;
    ea = c.r[2] + 0xffff9ce0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    c.r[3] = 0x0u;
    goto L_801d573c;
L_801d5418:
    c.r[4] = 0x40030000u;
    c.r[0] = c.r[4] + 0xffffd97cu;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d54e0;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d5488;
    ea = c.r[2] + 0xffff9ce8u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = c.r[6] + 0xc0070000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x21fbu);
    c.f[2] = c.f[1] - c.f[0];
    if (wp::cr_get(c, 2)) goto L_801d5460;
    ea = c.r[2] + 0xffff9cf0u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[2] - c.f[1];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = c.f[0] - c.f[1];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    goto L_801d5480;
L_801d5460:
    ea = c.r[2] + 0xffff9cf8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d00u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[2] - c.f[0];
    c.f[0] = c.f[2] - c.f[1];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = c.f[0] - c.f[1];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
L_801d5480:
    c.r[3] = 0x1u;
    goto L_801d573c;
L_801d5488:
    ea = c.r[2] + 0xffff9ce8u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = c.r[6] + 0xc0070000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x21fbu);
    c.f[2] = c.f[0] + c.f[1];
    if (wp::cr_get(c, 2)) goto L_801d54b8;
    ea = c.r[2] + 0xffff9cf0u;
    c.f[1] = wp::rdf64(ea);
    c.f[0] = c.f[1] + c.f[2];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    goto L_801d54d8;
L_801d54b8:
    ea = c.r[2] + 0xffff9cf8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d00u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[2] + c.f[0];
    c.f[0] = c.f[1] + c.f[2];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
L_801d54d8:
    c.r[3] = 0xffffffffu;
    goto L_801d573c;
L_801d54e0:
    c.r[4] = 0x41390000u;
    c.r[0] = c.r[4] + 0x21fbu;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d5634;
    c.f[5] = std::fabs(c.f[1]);
    ea = c.r[2] + 0xffff9d10u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x43300000u;
    ea = c.r[2] + 0xffff9d08u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[0]);
    c.f[4] = c.f[0] * c.f[5];
    ea = c.r[2] + 0xffff9d30u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9ce8u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9cf0u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] + c.f[4];
    c.f[2] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x34u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = c.r[5] ^ 0x80000000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[5], 0x20u);
    ea = c.r[1] + 0x38u;
    c.f[2] = wp::rdf64(ea);
    c.f[6] = c.f[2] - c.f[3];
    c.f[1] = c.f[1] * c.f[6];
    c.f[2] = c.f[0] * c.f[6];
    c.f[4] = c.f[5] - c.f[1];
    if (!wp::cr_get(c, 0)) goto L_801d5570;
    c.r[0] = c.r[5] + 0xffffffffu;
    c.r[4] = 0x80200000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[4] = c.r[4] + 0x7d20u;
    ea = c.r[4] + c.r[0];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d5570;
    c.f[0] = c.f[4] - c.f[2];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    goto L_801d55fc;
L_801d5570:
    c.f[0] = c.f[4] - c.f[2];
    c.r[4] = wp::sraw(c, c.r[6], 20);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 12) & 0x7ffu;
    c.r[0] = c.r[4] - c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x10u);
    if (!wp::cr_get(c, 1)) goto L_801d55fc;
    ea = c.r[2] + 0xffff9cf8u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[4];
    ea = c.r[2] + 0xffff9d00u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[1] * c.f[6];
    c.f[1] = c.f[0] * c.f[6];
    c.f[4] = c.f[4] - c.f[3];
    c.f[0] = c.f[2] - c.f[4];
    c.f[0] = c.f[0] - c.f[3];
    c.f[2] = c.f[1] - c.f[0];
    c.f[0] = c.f[4] - c.f[2];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 12) & 0x7ffu;
    c.r[0] = c.r[4] - c.r[0];
    wp::compare_signed(c, 0, c.r[0], 0x31u);
    if (!wp::cr_get(c, 1)) goto L_801d55fc;
    ea = c.r[2] + 0xffff9d18u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[4];
    ea = c.r[2] + 0xffff9d20u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[1] * c.f[6];
    c.f[1] = c.f[0] * c.f[6];
    c.f[4] = c.f[4] - c.f[3];
    c.f[0] = c.f[2] - c.f[4];
    c.f[0] = c.f[0] - c.f[3];
    c.f[2] = c.f[1] - c.f[0];
    c.f[0] = c.f[4] - c.f[2];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
L_801d55fc:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.f[0] = c.f[4] - c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    if (!wp::cr_get(c, 0)) goto L_801d562c;
    c.f[1] = -c.f[1];
    c.f[0] = -c.f[0];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    c.r[3] = 0u - c.r[5];
    goto L_801d573c;
L_801d562c:
    c.r[3] = c.r[5] | c.r[5];
    goto L_801d573c;
L_801d5634:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d5654;
    c.f[0] = c.f[1] - c.f[1];
    ea = c.r[3] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.r[3] = 0x0u;
    goto L_801d573c;
L_801d5654:
    c.r[3] = wp::sraw(c, c.r[6], 20);
    c.r[0] = 0x43300000u;
    c.r[5] = c.r[3] + 0xfffffbeau;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 20) & 0xfff00000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    c.r[3] = c.r[6] - c.r[3];
    ea = c.r[2] + 0xffff9d30u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x30u;
    ea = c.r[2] + 0xffff9d28u;
    c.f[3] = wp::rdf64(ea);
    c.r[6] = 0x3u;
    ea = c.r[1] + 0x10u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.f[0] = wp::convert_to_int(c.f[2], true);
    ea = c.r[2] + 0xffff9ce0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x38u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x3cu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x30u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[4];
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[2] = c.f[3] * c.f[0];
    c.f[0] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x4cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x48u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[4];
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = c.f[3] * c.f[0];
    ea = c.r[1] + 0x28u;
    wp::wrf64(ea, c.f[0]);
    goto L_801d56f4;
L_801d56ec:
    c.r[3] = c.r[3] + 0xfffffff8u;
    c.r[6] = c.r[6] + 0xffffffffu;
L_801d56f4:
    ea = c.r[3] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d56ec;
    }
    c.r[8] = 0x80200000u;
    c.r[4] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x18u;
    c.r[7] = 0x2u;
    c.r[8] = c.r[8] + 0x7c18u;
    c.lr = 0x801d5718u;
    f_801d5864(c);
R_801d5718:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d573c;
    ea = c.r[30] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = 0u - c.r[3];
    ea = c.r[30] + 0x8u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = -c.f[1];
    c.f[0] = -c.f[0];
    ea = c.r[30] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[30] + 0x8u;
    wp::wrf64(ea, c.f[0]);
L_801d573c:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x5cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_801d5754(wp::Cpu& c) {
    WP_ENTER(0x801d5754u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = 0x3e400000u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[3] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d578c;
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d578c;
    ea = c.r[2] + 0xffff9d38u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d585c;
L_801d578c:
    c.f[8] = c.f[1] * c.f[1];
    ea = c.r[2] + 0xffff9d68u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = 0x3fd30000u;
    ea = c.r[2] + 0xffff9d60u;
    c.f[6] = wp::rdf64(ea);
    c.r[0] = c.r[3] + 0x3333u;
    ea = c.r[2] + 0xffff9d58u;
    c.f[5] = wp::rdf64(ea);
    c.f[7] = c.f[0] * c.f[8];
    ea = c.r[2] + 0xffff9d50u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d48u;
    c.f[3] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    ea = c.r[2] + 0xffff9d40u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[7];
    c.f[6] = c.f[8] * c.f[6];
    c.f[5] = c.f[5] + c.f[6];
    c.f[5] = c.f[8] * c.f[5];
    c.f[4] = c.f[4] + c.f[5];
    c.f[4] = c.f[8] * c.f[4];
    c.f[3] = c.f[3] + c.f[4];
    c.f[3] = c.f[8] * c.f[3];
    c.f[0] = c.f[0] + c.f[3];
    c.f[3] = c.f[8] * c.f[0];
    if (!wp::cr_get(c, 0)) goto L_801d5808;
    c.f[3] = c.f[8] * c.f[3];
    ea = c.r[2] + 0xffff9d70u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d38u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] * c.f[2];
    c.f[2] = c.f[4] * c.f[8];
    c.f[1] = c.f[3] - c.f[1];
    c.f[1] = c.f[2] - c.f[1];
    c.f[1] = c.f[0] - c.f[1];
    goto L_801d585c;
L_801d5808:
    c.r[0] = 0x3fe90000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d5820;
    ea = c.r[2] + 0xffff9d78u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    goto L_801d5830;
L_801d5820:
    c.r[3] = c.r[4] + 0xffe00000u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
L_801d5830:
    ea = c.r[2] + 0xffff9d70u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[8] * c.f[3];
    ea = c.r[1] + 0x10u;
    c.f[5] = wp::rdf64(ea);
    c.f[6] = c.f[0] * c.f[8];
    ea = c.r[2] + 0xffff9d38u;
    c.f[4] = wp::rdf64(ea);
    c.f[0] = c.f[1] * c.f[2];
    c.f[2] = c.f[6] - c.f[5];
    c.f[1] = c.f[4] - c.f[5];
    c.f[0] = c.f[3] - c.f[0];
    c.f[0] = c.f[2] - c.f[0];
    c.f[1] = c.f[1] - c.f[0];
L_801d585c:
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d5864(wp::Cpu& c) {
    WP_ENTER(0x801d5864u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d5878u: goto R_801d5878;
        case 0x801d5e9cu: goto R_801d5e9c;
        case 0x801d5ea8u: goto R_801d5ea8;
        case 0x801d5fe8u: goto R_801d5fe8;
        case 0x801d6410u: goto R_801d6410;
        case 0x801d64acu: goto R_801d64ac;
        case 0x801d6f08u: goto R_801d6f08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffc90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x374u;
    wp::wr32(ea, c.r[0]);
    c.r[11] = c.r[1] + 0x370u;
    c.lr = 0x801d5878u;
    f_801c8310(c);
R_801d5878:
    ea = c.r[1] + 0x2e0u;
    for (uint32_t k = 14; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[9] = 0x2aab0000u;
    c.r[12] = 0x43300000u;
    c.r[0] = c.r[5] + 0xfffffffdu;
    c.r[10] = 0x80200000u;
    c.r[9] = c.r[9] + 0xffffaaabu;
    c.r[11] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[0] = wp::mulhw(c.r[9], c.r[0]);
    c.r[10] = c.r[10] + 0x7da0u;
    c.r[17] = c.r[4] | c.r[4];
    ea = c.r[10] + c.r[11];
    c.r[21] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    wp::wr32(ea, c.r[12]);
    c.r[16] = c.r[3] | c.r[3];
    c.r[0] = wp::sraw(c, c.r[0], 2);
    ea = c.r[1] + 0x248u;
    wp::wr32(ea, c.r[12]);
    c.r[4] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[22] = c.r[6] + 0xffffffffu;
    c.r[10] = c.r[0] + c.r[4];
    wp::record(c, c.r[10]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[7]);
    if (!wp::cr_get(c, 0)) goto L_801d58cc;
    c.r[10] = 0x0u;
L_801d58cc:
    c.r[0] = c.r[10] + 0x1u;
    c.r[9] = c.r[22] + c.r[21];
    wp::record(c, c.r[9]);
    c.r[6] = c.r[0] * 0x18u;
    c.r[7] = c.r[10] - c.r[22];
    ea = c.r[2] + 0xffff9db8u;
    c.f[1] = wp::rdf64(ea);
    c.r[4] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[19] = c.r[5] - c.r[6];
    c.r[0] = c.r[9] + 0x1u;
    c.r[4] = c.r[8] + c.r[4];
    c.r[5] = c.r[1] + 0x1a0u;
    c.ctr = c.r[0];
    if (wp::cr_get(c, 0)) goto L_801d5934;
L_801d58fc:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d590c;
    ea = c.r[2] + 0xffff9d80u;
    c.f[0] = wp::rdf64(ea);
    goto L_801d5920;
L_801d590c:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x240u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[1];
L_801d5920:
    ea = c.r[5] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.r[5] = c.r[5] + 0x8u;
    c.r[4] = c.r[4] + 0x4u;
    c.r[7] = c.r[7] + 0x1u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d58fc;
    }
L_801d5934:
    c.r[0] = c.r[22] + 0x1u;
    c.r[5] = c.r[1] + 0x60u;
    c.r[25] = c.r[22] & 0x80000000u;
    c.r[12] = c.r[1] + 0x1a0u;
    c.r[24] = c.r[0] & 0x80000000u;
    c.r[9] = 0x0u;
    c.r[4] = 0x80000000u;
    goto L_801d5b18;
L_801d5954:
    wp::compare_signed(c, 1, c.r[22], 0x0u);
    ea = c.r[2] + 0xffff9d80u;
    c.f[6] = wp::rdf64(ea);
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d5b0c;
    c.r[0] = c.r[22] + 0x1u;
    c.r[14] = c.r[22] + 0xfffffff8u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d5ac8;
    c.r[6] = 0x0u;
    c.r[11] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d5990;
    c.r[0] = c.r[4] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[22], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d5990;
    c.r[11] = 0x1u;
L_801d5990:
    wp::compare_signed(c, 0, c.r[11], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d59bc;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    c.r[0] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d59b0;
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d59b0;
    c.r[0] = 0x0u;
L_801d59b0:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d59bc;
    c.r[6] = 0x1u;
L_801d59bc:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d5ac8;
    c.r[11] = c.r[14] + 0x8u;
    c.r[6] = c.r[16] | c.r[16];
    c.r[11] = wp::rotl(c.r[11], 29) & 0x1fffffffu;
    c.r[0] = c.r[22] + c.r[9];
    c.ctr = c.r[11];
    wp::compare_signed(c, 0, c.r[14], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d5ac8;
L_801d59e0:
    c.r[11] = c.r[0] - c.r[7];
    c.r[14] = c.r[7] + 0x1u;
    c.r[15] = wp::rotl(c.r[11], 3) & 0xfffffff8u;
    ea = c.r[6] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[12] + c.r[15];
    c.f[0] = wp::rdf64(ea);
    c.r[14] = c.r[0] - c.r[14];
    c.r[15] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.r[11] = c.r[7] + 0x2u;
    c.f[2] = c.f[1] * c.f[0];
    c.r[14] = c.r[0] - c.r[11];
    ea = c.r[12] + c.r[15];
    c.f[0] = wp::rdf64(ea);
    c.r[15] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    ea = c.r[6] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.r[11] = c.r[7] + 0x3u;
    c.f[3] = c.f[1] * c.f[0];
    c.r[14] = c.r[0] - c.r[11];
    ea = c.r[6] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.r[14] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    c.f[6] = c.f[6] + c.f[2];
    ea = c.r[12] + c.r[15];
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[1] * c.f[0];
    c.r[11] = c.r[7] + 0x4u;
    ea = c.r[12] + c.r[14];
    c.f[0] = wp::rdf64(ea);
    c.r[11] = c.r[0] - c.r[11];
    c.f[6] = c.f[6] + c.f[3];
    ea = c.r[6] + 0x18u;
    c.f[1] = wp::rdf64(ea);
    c.r[18] = wp::rotl(c.r[11], 3) & 0xfffffff8u;
    c.f[1] = c.f[1] * c.f[0];
    c.r[11] = c.r[7] + 0x5u;
    c.r[14] = c.r[7] + 0x6u;
    c.f[6] = c.f[6] + c.f[2];
    c.r[11] = c.r[0] - c.r[11];
    c.r[15] = wp::rotl(c.r[11], 3) & 0xfffffff8u;
    c.r[11] = c.r[7] + 0x7u;
    c.f[6] = c.f[6] + c.f[1];
    c.r[14] = c.r[0] - c.r[14];
    ea = c.r[6] + 0x20u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[12] + c.r[18];
    c.f[0] = wp::rdf64(ea);
    c.r[11] = c.r[0] - c.r[11];
    ea = c.r[6] + 0x28u;
    c.f[1] = wp::rdf64(ea);
    c.f[5] = c.f[2] * c.f[0];
    ea = c.r[12] + c.r[15];
    c.f[0] = wp::rdf64(ea);
    c.r[14] = wp::rotl(c.r[14], 3) & 0xfffffff8u;
    ea = c.r[6] + 0x30u;
    c.f[3] = wp::rdf64(ea);
    c.f[4] = c.f[1] * c.f[0];
    ea = c.r[12] + c.r[14];
    c.f[2] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[5];
    c.r[11] = wp::rotl(c.r[11], 3) & 0xfffffff8u;
    ea = c.r[6] + 0x38u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[3] * c.f[2];
    ea = c.r[12] + c.r[11];
    c.f[0] = wp::rdf64(ea);
    c.r[7] = c.r[7] + 0x8u;
    c.f[6] = c.f[6] + c.f[4];
    c.r[6] = c.r[6] + 0x40u;
    c.f[0] = c.f[1] * c.f[0];
    c.f[6] = c.f[6] + c.f[2];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d59e0;
    }
L_801d5ac8:
    c.r[0] = c.r[22] + 0x1u;
    c.r[6] = wp::rotl(c.r[7], 3) & 0xfffffff8u;
    c.r[0] = c.r[0] - c.r[7];
    c.r[11] = c.r[22] + c.r[9];
    c.r[6] = c.r[3] + c.r[6];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[7], c.r[22]);
    if (wp::cr_get(c, 1)) goto L_801d5b0c;
L_801d5ae8:
    c.r[0] = c.r[11] - c.r[7];
    ea = c.r[6] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[6] = c.r[6] + 0x8u;
    ea = c.r[12] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.r[7] = c.r[7] + 0x1u;
    c.f[0] = c.f[1] * c.f[0];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d5ae8;
    }
L_801d5b0c:
    ea = c.r[5] + 0x0u;
    wp::wrf64(ea, c.f[6]);
    c.r[5] = c.r[5] + 0x8u;
    c.r[9] = c.r[9] + 0x1u;
L_801d5b18:
    wp::compare_signed(c, 0, c.r[9], c.r[21]);
    if (!wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d5954;
    }
    c.r[28] = wp::sub_carry(c, c.r[19], 0x18u);
    c.r[5] = 0u - c.r[21];
    c.r[4] = wp::rotl(c.r[10], 2) & 0xfffffffcu;
    c.r[0] = wp::sub_carry(c, c.r[19], 0x17u);
    c.r[3] = wp::rotl(c.r[22], 3) & 0xfffffff8u;
    c.r[26] = c.r[1] + 0x1a0u;
    ea = c.r[2] + 0xffff9d88u;
    c.f[24] = wp::rdf64(ea);
    c.r[23] = c.r[21] | c.r[21];
    ea = c.r[2] + 0xffff9db8u;
    c.f[25] = wp::rdf64(ea);
    c.r[14] = c.r[5] & 0x80000000u;
    ea = c.r[2] + 0xffff9d90u;
    c.f[26] = wp::rdf64(ea);
    c.r[27] = c.r[8] + c.r[4];
    ea = c.r[1] + 0x2d0u;
    wp::wr32(ea, c.r[0]);
    c.r[26] = c.r[26] + c.r[3];
    ea = c.r[2] + 0xffff9da0u;
    c.f[27] = wp::rdf64(ea);
    c.r[29] = c.r[1] + 0x10u;
    ea = c.r[2] + 0xffff9d98u;
    c.f[28] = wp::rdf64(ea);
    c.r[15] = c.r[1] + 0x1a0u;
    ea = c.r[2] + 0xffff9da8u;
    c.f[29] = wp::rdf64(ea);
    c.r[30] = 0x1000000u;
    ea = c.r[2] + 0xffff9db0u;
    c.f[30] = wp::rdf64(ea);
    c.r[31] = 0x80000000u;
    ea = c.r[2] + 0xffff9d80u;
    c.f[31] = wp::rdf64(ea);
L_801d5b7c:
    c.r[0] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[3] = c.r[1] + 0x60u;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    ea = c.r[3] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[23] | c.r[23];
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d5e94;
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d5e24;
    wp::compare_signed(c, 0, c.r[23], 0xffffffffu);
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d5bb4;
    c.r[0] = 0x1u;
L_801d5bb4:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d5e24;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[7] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[3] = c.r[1] + 0x60u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[3] = c.r[3] + c.r[7];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d5e24;
L_801d5bdc:
    c.f[0] = c.f[24] * c.f[1];
    c.r[0] = c.r[5] + 0x1u;
    c.r[9] = c.r[5] + 0x2u;
    c.r[8] = c.r[5] + 0x3u;
    c.r[7] = c.r[5] + 0x4u;
    ea = c.r[3] + 0xfffffff8u;
    c.f[4] = wp::rdf64(ea);
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[3] + 0xfffffff0u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[3] + 0xffffffe8u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x250u;
    wp::wrf64(ea, c.f[0]);
    c.r[9] = wp::rotl(c.r[9], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x254u;
    c.r[10] = wp::rd32(ea);
    c.r[8] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    ea = c.r[3] + 0xffffffe0u;
    c.f[0] = wp::rdf64(ea);
    c.r[7] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    c.r[10] = c.r[10] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x248u;
    c.f[5] = wp::rdf64(ea);
    c.f[5] = c.f[5] - c.f[25];
    c.f[6] = c.f[5] + c.f[4];
    c.f[5] = c.f[26] * c.f[5];
    c.f[4] = c.f[24] * c.f[6];
    c.f[5] = c.f[1] - c.f[5];
    c.f[1] = wp::convert_to_int(c.f[4], true);
    c.f[4] = wp::convert_to_int(c.f[5], true);
    ea = c.r[1] + 0x260u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x264u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x258u;
    wp::wrf64(ea, c.f[4]);
    c.r[10] = c.r[10] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x25cu;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[29] + c.r[6];
    wp::wr32(ea, c.r[10]);
    c.f[1] = c.f[1] - c.f[25];
    c.f[4] = c.f[1] + c.f[3];
    c.f[3] = c.f[26] * c.f[1];
    c.f[1] = c.f[24] * c.f[4];
    c.f[3] = c.f[6] - c.f[3];
    c.f[1] = wp::convert_to_int(c.f[1], true);
    c.f[3] = wp::convert_to_int(c.f[3], true);
    ea = c.r[1] + 0x270u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x274u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x268u;
    wp::wrf64(ea, c.f[3]);
    c.r[10] = c.r[10] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x26cu;
    c.r[10] = wp::rd32(ea);
    ea = c.r[1] + 0x248u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[29] + c.r[0];
    wp::wr32(ea, c.r[10]);
    c.f[1] = c.f[1] - c.f[25];
    c.f[3] = c.f[1] + c.f[2];
    c.f[2] = c.f[26] * c.f[1];
    c.f[1] = c.f[24] * c.f[3];
    c.f[2] = c.f[4] - c.f[2];
    c.f[1] = wp::convert_to_int(c.f[1], true);
    c.f[2] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x280u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x284u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x278u;
    wp::wrf64(ea, c.f[2]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x27cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[29] + c.r[9];
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] - c.f[25];
    c.f[2] = c.f[1] + c.f[0];
    c.f[1] = c.f[26] * c.f[1];
    c.f[0] = c.f[24] * c.f[2];
    c.f[1] = c.f[3] - c.f[1];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    c.f[1] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x290u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x294u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x288u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x248u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[29] + c.r[8];
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[0] - c.f[25];
    c.f[0] = c.f[26] * c.f[1];
    c.f[0] = c.f[2] - c.f[0];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x298u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x29cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + c.r[7];
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0xffffffd8u;
    c.f[0] = wp::rdf64(ea);
    c.r[8] = c.r[5] + 0x5u;
    c.r[0] = c.r[5] + 0x7u;
    c.r[7] = c.r[5] + 0x6u;
    c.f[5] = c.f[1] + c.f[0];
    c.r[9] = wp::rotl(c.r[8], 2) & 0xfffffffcu;
    c.r[8] = wp::rotl(c.r[7], 2) & 0xfffffffcu;
    ea = c.r[3] + 0xffffffd0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[3] + 0xffffffc8u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.f[3] = c.f[24] * c.f[5];
    ea = c.r[3] + 0xffffffc0u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = ea;
    c.r[5] = c.r[5] + 0x8u;
    c.r[6] = c.r[6] + 0x20u;
    c.r[4] = c.r[4] + 0xfffffff8u;
    c.f[3] = wp::convert_to_int(c.f[3], true);
    ea = c.r[1] + 0x2a0u;
    wp::wrf64(ea, c.f[3]);
    ea = c.r[1] + 0x2a4u;
    c.r[7] = wp::rd32(ea);
    c.r[7] = c.r[7] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x240u;
    c.f[3] = wp::rdf64(ea);
    c.f[3] = c.f[3] - c.f[25];
    c.f[4] = c.f[3] + c.f[2];
    c.f[3] = c.f[26] * c.f[3];
    c.f[2] = c.f[24] * c.f[4];
    c.f[3] = c.f[5] - c.f[3];
    c.f[2] = wp::convert_to_int(c.f[2], true);
    c.f[3] = wp::convert_to_int(c.f[3], true);
    ea = c.r[1] + 0x2b0u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x2b4u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x2a8u;
    wp::wrf64(ea, c.f[3]);
    c.r[7] = c.r[7] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2acu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x248u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[29] + c.r[9];
    wp::wr32(ea, c.r[7]);
    c.f[2] = c.f[2] - c.f[25];
    c.f[3] = c.f[2] + c.f[1];
    c.f[2] = c.f[26] * c.f[2];
    c.f[1] = c.f[24] * c.f[3];
    c.f[2] = c.f[4] - c.f[2];
    c.f[1] = wp::convert_to_int(c.f[1], true);
    c.f[2] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x2c0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x2c4u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x2b8u;
    wp::wrf64(ea, c.f[2]);
    c.r[7] = c.r[7] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2bcu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[29] + c.r[8];
    wp::wr32(ea, c.r[7]);
    c.f[1] = c.f[1] - c.f[25];
    c.f[2] = c.f[26] * c.f[1];
    c.f[1] = c.f[1] + c.f[0];
    c.f[0] = c.f[3] - c.f[2];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x2c8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2ccu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[29] + c.r[0];
    wp::wr32(ea, c.r[7]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d5bdc;
    }
L_801d5e24:
    c.r[3] = wp::rotl(c.r[5], 2) & 0xfffffffcu;
    c.r[5] = c.r[1] + 0x10u;
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[6] = c.r[1] + 0x60u;
    c.r[5] = c.r[5] + c.r[3];
    c.r[6] = c.r[6] + c.r[0];
    c.ctr = c.r[4];
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d5e94;
L_801d5e48:
    c.f[2] = c.f[24] * c.f[1];
    ea = c.r[6] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.r[6] = ea;
    c.r[4] = c.r[4] + 0xffffffffu;
    c.f[2] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x2c8u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x2ccu;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x248u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[2] - c.f[25];
    c.f[2] = c.f[26] * c.f[3];
    c.f[2] = c.f[1] - c.f[2];
    c.f[1] = c.f[3] + c.f[0];
    c.f[0] = wp::convert_to_int(c.f[2], true);
    ea = c.r[1] + 0x2c0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2c4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d5e48;
    }
L_801d5e94:
    c.r[3] = c.r[19] | c.r[19];
    c.lr = 0x801d5e9cu;
    f_801d398c(c);
R_801d5e9c:
    c.f[23] = c.f[1];
    c.f[1] = c.f[27] * c.f[1];
    c.lr = 0x801d5ea8u;
    f_801d769c(c);
R_801d5ea8:
    c.f[0] = c.f[28] * c.f[1];
    wp::compare_signed(c, 0, c.r[19], 0x0u);
    c.r[18] = 0x0u;
    c.f[23] = c.f[23] - c.f[0];
    c.f[0] = wp::convert_to_int(c.f[23], true);
    ea = c.r[1] + 0x2c8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2ccu;
    c.r[20] = wp::rd32(ea);
    c.r[0] = c.r[20] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x240u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[25];
    c.f[23] = c.f[23] - c.f[0];
    if (!wp::cr_get(c, 1)) goto L_801d5f08;
    c.r[0] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[4] = c.r[29] + c.r[0];
    ea = c.r[4] + 0xfffffffcu;
    c.r[3] = wp::rd32(ea);
    c.r[5] = wp::sraw(c, c.r[3], c.r[28]);
    c.r[0] = wp::slw(c.r[5], c.r[28]);
    c.r[3] = c.r[3] - c.r[0];
    ea = c.r[1] + 0x2d0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[4] + 0xfffffffcu;
    wp::wr32(ea, c.r[3]);
    c.r[20] = c.r[20] + c.r[5];
    c.r[18] = wp::sraw(c, c.r[3], c.r[0]);
    goto L_801d5f30;
L_801d5f08:
    if (!wp::cr_get(c, 2)) goto L_801d5f20;
    c.r[0] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[3] = c.r[29] + c.r[0];
    ea = c.r[3] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    c.r[18] = wp::sraw(c, c.r[0], 23);
    goto L_801d5f30;
L_801d5f20:
    wp::compare_float(c, 0, c.f[23], c.f[29]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_801d5f30;
    c.r[18] = 0x2u;
L_801d5f30:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d5fec;
    c.r[5] = c.r[1] + 0x10u;
    c.r[4] = c.r[30] + 0xffffffffu;
    c.r[0] = 0x0u;
    c.ctr = c.r[23];
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[20] = c.r[20] + 0x1u;
    if (!wp::cr_get(c, 1)) goto L_801d5f88;
L_801d5f54:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd32(ea);
    if (!wp::cr_get(c, 2)) goto L_801d5f78;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d5f80;
    c.r[0] = c.r[30] - c.r[3];
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x1u;
    goto L_801d5f80;
L_801d5f78:
    c.r[3] = c.r[4] - c.r[3];
    ea = c.r[5] + 0x0u;
    wp::wr32(ea, c.r[3]);
L_801d5f80:
    c.r[5] = c.r[5] + 0x4u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d5f54;
    }
L_801d5f88:
    wp::compare_signed(c, 0, c.r[19], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d5f9c;
    wp::compare_signed(c, 0, c.r[19], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d5fb4;
    goto L_801d5fc8;
L_801d5f9c:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[4] = c.r[29] + c.r[3];
    ea = c.r[4] + 0xfffffffcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] & 0x7fffffu;
    ea = c.r[4] + 0xfffffffcu;
    wp::wr32(ea, c.r[3]);
    goto L_801d5fc8;
L_801d5fb4:
    c.r[3] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[4] = c.r[29] + c.r[3];
    ea = c.r[4] + 0xfffffffcu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] & 0x3fffffu;
    ea = c.r[4] + 0xfffffffcu;
    wp::wr32(ea, c.r[3]);
L_801d5fc8:
    wp::compare_signed(c, 0, c.r[18], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d5fec;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    c.f[23] = c.f[30] - c.f[23];
    if (wp::cr_get(c, 2)) goto L_801d5fec;
    c.f[1] = c.f[30];
    c.r[3] = c.r[19] | c.r[19];
    c.lr = 0x801d5fe8u;
    f_801d398c(c);
R_801d5fe8:
    c.f[23] = c.f[23] - c.f[1];
L_801d5fec:
    wp::compare_float(c, 0, c.f[31], c.f[23]);
    if (!wp::cr_get(c, 2)) goto L_801d63c4;
    c.r[10] = c.r[23] + 0xffffffffu;
    c.r[9] = 0x0u;
    wp::compare_signed(c, 1, c.r[10], c.r[21]);
    if (wp::cr_get(c, 4)) goto L_801d6184;
    c.r[7] = c.r[10] - c.r[21];
    c.r[0] = c.r[21] + 0x8u;
    c.r[8] = c.r[7] + 0x1u;
    wp::compare_signed(c, 0, c.r[8], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6150;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[12] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d6040;
    c.r[11] = c.r[31] + 0x1u;
    wp::compare_signed(c, 0, c.r[21], c.r[11]);
    if (wp::cr_get(c, 0)) goto L_801d6040;
    c.r[12] = 0x1u;
L_801d6040:
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d605c;
    c.r[12] = c.r[23] + 0xffffffffu;
    c.r[11] = c.r[31] + 0x1u;
    wp::compare_signed(c, 0, c.r[12], c.r[11]);
    if (wp::cr_get(c, 0)) goto L_801d605c;
    c.r[6] = 0x1u;
L_801d605c:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6074;
    c.r[6] = c.r[21] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6074;
    c.r[5] = 0x1u;
L_801d6074:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d60ac;
    c.r[5] = c.r[23] + 0xffffffffu;
    c.r[6] = 0x1u;
    c.r[11] = c.r[5] & 0x80000000u;
    wp::compare_signed(c, 0, c.r[11], c.r[14]);
    if (!wp::cr_get(c, 2)) goto L_801d60a0;
    c.r[5] = c.r[7] & 0x80000000u;
    wp::compare_signed(c, 0, c.r[11], c.r[5]);
    if (wp::cr_get(c, 2)) goto L_801d60a0;
    c.r[6] = 0x0u;
L_801d60a0:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d60ac;
    c.r[4] = 0x1u;
L_801d60ac:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d60d8;
    c.r[4] = c.r[7] & 0x80000000u;
    wp::record(c, c.r[4]);
    c.r[5] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d60cc;
    c.r[4] = c.r[8] & 0x80000000u;
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) goto L_801d60cc;
    c.r[5] = 0x0u;
L_801d60cc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d60d8;
    c.r[3] = 0x1u;
L_801d60d8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6150;
    c.r[4] = c.r[10] + 0x8u;
    c.r[5] = wp::rotl(c.r[10], 2) & 0xfffffffcu;
    c.r[4] = c.r[4] - c.r[0];
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[4], 29) & 0x1fffffffu;
    c.r[3] = c.r[3] + c.r[5];
    c.ctr = c.r[4];
    wp::compare_signed(c, 0, c.r[10], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d6150;
L_801d6104:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[10] = c.r[10] + 0xfffffff8u;
    ea = c.r[3] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[4];
    ea = c.r[3] + 0xfffffff8u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[0];
    ea = c.r[3] + 0xfffffff4u;
    c.r[0] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[4];
    ea = c.r[3] + 0xfffffff0u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[0];
    ea = c.r[3] + 0xffffffecu;
    c.r[0] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[4];
    ea = c.r[3] + 0xffffffe8u;
    c.r[4] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[0];
    ea = c.r[3] + 0xffffffe4u;
    c.r[0] = wp::rd32(ea);
    c.r[9] = c.r[9] | c.r[4];
    c.r[3] = c.r[3] + 0xffffffe0u;
    c.r[9] = c.r[9] | c.r[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6104;
    }
L_801d6150:
    c.r[0] = c.r[10] + 0x1u;
    c.r[3] = wp::rotl(c.r[10], 2) & 0xfffffffcu;
    c.r[4] = c.r[1] + 0x10u;
    c.r[0] = c.r[0] - c.r[21];
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[10], c.r[21]);
    if (wp::cr_get(c, 0)) goto L_801d6184;
L_801d6170:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + 0xfffffffcu;
    c.r[10] = c.r[10] + 0xffffffffu;
    c.r[9] = c.r[9] | c.r[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6170;
    }
L_801d6184:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d63c4;
    c.r[18] = 0x1u;
    goto L_801d6198;
L_801d6194:
    c.r[18] = c.r[18] + 0x1u;
L_801d6198:
    c.r[0] = c.r[21] - c.r[18];
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    ea = c.r[29] + c.r[0];
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d6194;
    }
    c.r[12] = c.r[23] + 0x1u;
    c.r[7] = c.r[1] + 0x60u;
    c.r[3] = wp::rotl(c.r[12], 3) & 0xfffffff8u;
    c.r[8] = c.r[23] + c.r[18];
    c.r[0] = wp::rotl(c.r[12], 2) & 0xfffffffcu;
    c.r[5] = c.r[27] + c.r[0];
    c.r[6] = c.r[26] + c.r[3];
    c.r[7] = c.r[7] + c.r[3];
    goto L_801d63b4;
L_801d61d0:
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 1, c.r[22], 0x0u);
    ea = c.r[2] + 0xffff9d80u;
    c.f[0] = wp::rdf64(ea);
    c.r[11] = 0x0u;
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x248u;
    c.f[1] = wp::rdf64(ea);
    c.f[1] = c.f[1] - c.f[25];
    ea = c.r[6] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    if (wp::cr_get(c, 4)) goto L_801d63a0;
    c.r[0] = c.r[22] + 0x1u;
    c.r[3] = c.r[22] + 0xfffffff8u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d635c;
    c.r[4] = 0x0u;
    c.r[9] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d6224;
    c.r[0] = c.r[31] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[22], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d6224;
    c.r[9] = 0x1u;
L_801d6224:
    wp::compare_signed(c, 0, c.r[9], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6250;
    wp::compare_signed(c, 0, c.r[25], 0x0u);
    c.r[0] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d6244;
    wp::compare_signed(c, 0, c.r[24], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6244;
    c.r[0] = 0x0u;
L_801d6244:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6250;
    c.r[4] = 0x1u;
L_801d6250:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d635c;
    c.r[0] = c.r[3] + 0x8u;
    c.r[9] = c.r[16] | c.r[16];
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[10] = c.r[22] + c.r[12];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d635c;
L_801d6274:
    c.r[0] = c.r[10] - c.r[11];
    c.r[4] = c.r[11] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[11] + 0x2u;
    ea = c.r[9] + 0x0u;
    c.f[2] = wp::rdf64(ea);
    c.r[3] = c.r[10] - c.r[3];
    ea = c.r[15] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[10] - c.r[4];
    c.r[0] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[20] = c.r[11] + 0x7u;
    c.f[3] = c.f[2] * c.f[1];
    ea = c.r[9] + 0x8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[15] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[11] + 0x3u;
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[20] = c.r[10] - c.r[20];
    c.f[4] = c.f[2] * c.f[1];
    c.r[0] = c.r[10] - c.r[4];
    ea = c.r[15] + c.r[3];
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[11] + 0x4u;
    c.f[0] = c.f[0] + c.f[3];
    ea = c.r[9] + 0x10u;
    c.f[2] = wp::rdf64(ea);
    c.f[3] = c.f[2] * c.f[1];
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[15] + c.r[0];
    c.f[1] = wp::rdf64(ea);
    c.r[4] = c.r[10] - c.r[4];
    c.f[0] = c.f[0] + c.f[4];
    ea = c.r[9] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.r[3] = c.r[11] + 0x5u;
    c.r[0] = c.r[11] + 0x6u;
    c.f[0] = c.f[0] + c.f[3];
    c.r[3] = c.r[10] - c.r[3];
    c.f[2] = c.f[2] * c.f[1];
    c.r[4] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[0] = c.r[10] - c.r[0];
    ea = c.r[9] + 0x20u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[15] + c.r[4];
    c.f[1] = wp::rdf64(ea);
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.f[6] = c.f[3] * c.f[1];
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    ea = c.r[15] + c.r[3];
    c.f[1] = wp::rdf64(ea);
    c.r[20] = wp::rotl(c.r[20], 3) & 0xfffffff8u;
    c.f[0] = c.f[0] + c.f[2];
    ea = c.r[9] + 0x28u;
    c.f[2] = wp::rdf64(ea);
    c.f[5] = c.f[2] * c.f[1];
    ea = c.r[9] + 0x30u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[15] + c.r[0];
    c.f[3] = wp::rdf64(ea);
    c.r[11] = c.r[11] + 0x8u;
    c.f[0] = c.f[0] + c.f[6];
    ea = c.r[9] + 0x38u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[15] + c.r[20];
    c.f[1] = wp::rdf64(ea);
    c.f[3] = c.f[4] * c.f[3];
    c.r[9] = c.r[9] + 0x40u;
    c.f[0] = c.f[0] + c.f[5];
    c.f[1] = c.f[2] * c.f[1];
    c.f[0] = c.f[0] + c.f[3];
    c.f[0] = c.f[0] + c.f[1];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6274;
    }
L_801d635c:
    c.r[4] = c.r[22] + 0x1u;
    c.r[3] = wp::rotl(c.r[11], 3) & 0xfffffff8u;
    c.r[4] = c.r[4] - c.r[11];
    c.r[0] = c.r[22] + c.r[12];
    c.r[3] = c.r[16] + c.r[3];
    c.ctr = c.r[4];
    wp::compare_signed(c, 0, c.r[11], c.r[22]);
    if (wp::cr_get(c, 1)) goto L_801d63a0;
L_801d637c:
    c.r[4] = c.r[0] - c.r[11];
    ea = c.r[3] + 0x0u;
    c.f[2] = wp::rdf64(ea);
    c.r[4] = wp::rotl(c.r[4], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + 0x8u;
    ea = c.r[15] + c.r[4];
    c.f[1] = wp::rdf64(ea);
    c.r[11] = c.r[11] + 0x1u;
    c.f[1] = c.f[2] * c.f[1];
    c.f[0] = c.f[0] + c.f[1];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d637c;
    }
L_801d63a0:
    ea = c.r[7] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    c.r[5] = c.r[5] + 0x4u;
    c.r[6] = c.r[6] + 0x8u;
    c.r[7] = c.r[7] + 0x8u;
    c.r[12] = c.r[12] + 0x1u;
L_801d63b4:
    wp::compare_signed(c, 0, c.r[12], c.r[8]);
    if (!wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d61d0;
    }
    c.r[23] = c.r[23] + c.r[18];
    WP_POLL(c);
    goto L_801d5b7c;
L_801d63c4:
    ea = c.r[2] + 0xffff9d80u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[23]);
    if (!wp::cr_get(c, 2)) goto L_801d6404;
    c.r[23] = c.r[23] + 0xffffffffu;
    c.r[3] = c.r[1] + 0x10u;
    c.r[0] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[19] = c.r[19] + 0xffffffe8u;
    c.r[3] = c.r[3] + c.r[0];
    goto L_801d63f4;
L_801d63e8:
    c.r[3] = c.r[3] + 0xfffffffcu;
    c.r[23] = c.r[23] + 0xffffffffu;
    c.r[19] = c.r[19] + 0xffffffe8u;
L_801d63f4:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d63e8;
    }
    goto L_801d64a0;
L_801d6404:
    c.f[1] = c.f[23];
    c.r[3] = 0u - c.r[19];
    c.lr = 0x801d6410u;
    f_801d398c(c);
R_801d6410:
    ea = c.r[2] + 0xffff9d90u;
    c.f[3] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[1], c.f[3]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_801d6488;
    ea = c.r[2] + 0xffff9d88u;
    c.f[0] = wp::rdf64(ea);
    c.r[5] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[23] = c.r[23] + 0x1u;
    ea = c.r[2] + 0xffff9db8u;
    c.f[2] = wp::rdf64(ea);
    c.f[0] = c.f[0] * c.f[1];
    c.r[4] = c.r[1] + 0x10u;
    c.r[0] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[19] = c.r[19] + 0x18u;
    c.f[0] = wp::convert_to_int(c.f[0], true);
    ea = c.r[1] + 0x2c8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2ccu;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x240u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] - c.f[2];
    c.f[2] = c.f[3] * c.f[0];
    c.f[0] = wp::convert_to_int(c.f[0], true);
    c.f[1] = c.f[1] - c.f[2];
    ea = c.r[1] + 0x2b8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2bcu;
    c.r[3] = wp::rd32(ea);
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x2c0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2c4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[4] + c.r[5];
    wp::wr32(ea, c.r[6]);
    ea = c.r[4] + c.r[0];
    wp::wr32(ea, c.r[3]);
    goto L_801d64a0;
L_801d6488:
    c.f[0] = wp::convert_to_int(c.f[1], true);
    c.r[0] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x2c8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x2ccu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[4]);
L_801d64a0:
    ea = c.r[2] + 0xffff9db0u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = c.r[19] | c.r[19];
    c.lr = 0x801d64acu;
    f_801d398c(c);
R_801d64ac:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[3] = c.r[23] | c.r[23];
    if (wp::cr_get(c, 0)) goto L_801d66ac;
    c.r[0] = c.r[23] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6650;
    wp::compare_signed(c, 0, c.r[23], 0xffffffffu);
    c.r[4] = 0x0u;
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d64d8;
    c.r[0] = 0x1u;
L_801d64d8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6508;
    c.r[0] = c.r[23] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[5] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d64fc;
    c.r[0] = c.r[23] + 0x1u;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d64fc;
    c.r[5] = 0x0u;
L_801d64fc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6508;
    c.r[4] = 0x1u;
L_801d6508:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6650;
    c.r[5] = wp::rotl(c.r[23], 2) & 0xfffffffcu;
    c.r[6] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[7] = c.r[1] + 0x60u;
    c.r[0] = wp::rotl(c.r[23], 29) & 0x1fffffffu;
    c.r[6] = c.r[6] + c.r[5];
    c.r[7] = c.r[7] + c.r[4];
    ea = c.r[2] + 0xffff9db8u;
    c.f[9] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d88u;
    c.f[8] = wp::rdf64(ea);
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (wp::cr_get(c, 0)) goto L_801d6650;
L_801d6540:
    ea = c.r[6] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xfffffff8u;
    ea = c.r[6] + 0xfffffffcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[0] ^ 0x80000000u;
    ea = c.r[6] + 0xfffffff8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x248u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[0] ^ 0x80000000u;
    c.f[0] = c.f[0] - c.f[9];
    ea = c.r[6] + 0xfffffff4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x240u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[4]);
    c.f[5] = c.f[1] * c.f[0];
    ea = c.r[1] + 0x248u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0xfffffff0u;
    c.r[0] = wp::rd32(ea);
    c.f[3] = c.f[2] - c.f[9];
    c.f[4] = c.f[0] - c.f[9];
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.f[7] = c.f[1] * c.f[3];
    ea = c.r[1] + 0x240u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[6] + 0xffffffecu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x0u;
    wp::wrf64(ea, c.f[5]);
    c.f[3] = c.f[2] - c.f[9];
    ea = c.r[1] + 0x248u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[1] * c.f[4];
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[6] + 0xffffffe8u;
    c.r[0] = wp::rd32(ea);
    c.f[4] = c.f[0] - c.f[9];
    c.r[4] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[6] + 0xffffffe4u;
    c.r[0] = wp::rd32(ea);
    c.f[5] = c.f[1] * c.f[3];
    ea = c.r[1] + 0x240u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[7] + 0xfffffff8u;
    wp::wrf64(ea, c.f[7]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[1] + 0x248u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[2] - c.f[9];
    ea = c.r[7] + 0xfffffff0u;
    wp::wrf64(ea, c.f[6]);
    c.f[4] = c.f[1] * c.f[4];
    c.r[6] = c.r[6] + 0xffffffe0u;
    ea = c.r[7] + 0xffffffe8u;
    wp::wrf64(ea, c.f[5]);
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[1] + 0x244u;
    wp::wr32(ea, c.r[0]);
    c.f[2] = c.f[0] - c.f[9];
    ea = c.r[1] + 0x240u;
    c.f[0] = wp::rdf64(ea);
    c.f[3] = c.f[1] * c.f[3];
    ea = c.r[7] + 0xffffffe0u;
    wp::wrf64(ea, c.f[4]);
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[7] + 0xffffffd8u;
    wp::wrf64(ea, c.f[3]);
    c.f[0] = c.f[0] - c.f[9];
    c.f[2] = c.f[1] * c.f[2];
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[7] + 0xffffffd0u;
    wp::wrf64(ea, c.f[2]);
    c.f[0] = c.f[1] * c.f[0];
    c.f[1] = c.f[1] * c.f[8];
    ea = c.r[7] + 0xffffffc8u;
    wp::wrf64(ea, c.f[0]);
    c.r[7] = c.r[7] + 0xffffffc0u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6540;
    }
L_801d6650:
    c.r[5] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    c.r[6] = c.r[1] + 0x10u;
    c.r[4] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[7] = c.r[1] + 0x60u;
    c.r[0] = c.r[3] + 0x1u;
    c.r[6] = c.r[6] + c.r[5];
    c.r[7] = c.r[7] + c.r[4];
    ea = c.r[2] + 0xffff9db8u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9d88u;
    c.f[0] = wp::rdf64(ea);
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d66ac;
L_801d6680:
    ea = c.r[6] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[6] + 0xfffffffcu;
    c.r[0] = c.r[0] ^ 0x80000000u;
    ea = c.r[1] + 0x24cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x248u;
    c.f[2] = wp::rdf64(ea);
    c.f[2] = c.f[2] - c.f[3];
    c.f[2] = c.f[1] * c.f[2];
    c.f[1] = c.f[1] * c.f[0];
    ea = c.r[7] + 0x0u;
    wp::wrf64(ea, c.f[2]);
    c.r[7] = c.r[7] + 0xfffffff8u;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6680;
    }
L_801d66ac:
    c.r[0] = c.r[23] + 0x1u;
    c.r[8] = c.r[23] | c.r[23];
    c.r[4] = c.r[1] + 0x100u;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[5] = 0x80200000u;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d6728;
L_801d66cc:
    c.r[6] = c.r[1] + 0x60u;
    ea = c.r[2] + 0xffff9d80u;
    c.f[2] = wp::rdf64(ea);
    c.r[6] = c.r[6] + c.r[3];
    c.r[7] = c.r[5] + 0x7db0u;
    c.r[0] = c.r[23] - c.r[8];
    c.r[9] = 0x0u;
    goto L_801d6704;
L_801d66e8:
    ea = c.r[7] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[7] = c.r[7] + 0x8u;
    ea = c.r[6] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.r[6] = c.r[6] + 0x8u;
    c.r[9] = c.r[9] + 0x1u;
    c.f[0] = c.f[1] * c.f[0];
    c.f[2] = c.f[2] + c.f[0];
L_801d6704:
    wp::compare_signed(c, 0, c.r[9], c.r[21]);
    if (wp::cr_get(c, 1)) goto L_801d6714;
    wp::compare_signed(c, 0, c.r[9], c.r[0]);
    if (!wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d66e8;
    }
L_801d6714:
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[3] + 0xfffffff8u;
    ea = c.r[4] + c.r[0];
    wp::wrf64(ea, c.f[2]);
    c.r[8] = c.r[8] + 0xffffffffu;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d66cc;
    }
L_801d6728:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d685c;
    c.r[0] = c.r[3] | c.r[3];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d674c;
    wp::compare_signed(c, 0, c.r[0], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801d6ad4;
    goto L_801d6efc;
L_801d674c:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    ea = c.r[2] + 0xffff9d80u;
    c.f[6] = wp::rdf64(ea);
    if (wp::cr_get(c, 0)) goto L_801d6844;
    c.r[0] = c.r[23] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6818;
    wp::compare_signed(c, 0, c.r[23], 0xffffffffu);
    c.r[3] = 0x0u;
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d6778;
    c.r[0] = 0x1u;
L_801d6778:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d67a8;
    c.r[0] = c.r[23] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[4] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d679c;
    c.r[0] = c.r[23] + 0x1u;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d679c;
    c.r[4] = 0x0u;
L_801d679c:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d67a8;
    c.r[3] = 0x1u;
L_801d67a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6818;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = wp::rotl(c.r[23], 29) & 0x1fffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (wp::cr_get(c, 0)) goto L_801d6818;
L_801d67cc:
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[23] = c.r[23] + 0xfffffff8u;
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[1];
    ea = c.r[4] + 0xfffffff0u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe8u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe0u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[0];
    ea = c.r[4] + 0xffffffd8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffd0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffc8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xffffffc0u;
    c.f[6] = c.f[6] + c.f[5];
    c.f[6] = c.f[6] + c.f[4];
    c.f[6] = c.f[6] + c.f[3];
    c.f[6] = c.f[6] + c.f[2];
    c.f[6] = c.f[6] + c.f[1];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d67cc;
    }
L_801d6818:
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = c.r[23] + 0x1u;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d6844;
L_801d6834:
    ea = c.r[4] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xfffffff8u;
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6834;
    }
L_801d6844:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6850;
    goto L_801d6854;
L_801d6850:
    c.f[6] = -c.f[6];
L_801d6854:
    ea = c.r[17] + 0x0u;
    wp::wrf64(ea, c.f[6]);
    goto L_801d6efc;
L_801d685c:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    ea = c.r[2] + 0xffff9d80u;
    c.f[6] = wp::rdf64(ea);
    c.r[5] = c.r[23] | c.r[23];
    if (wp::cr_get(c, 0)) goto L_801d6958;
    c.r[0] = c.r[23] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d692c;
    wp::compare_signed(c, 0, c.r[23], 0xffffffffu);
    c.r[3] = 0x0u;
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d688c;
    c.r[0] = 0x1u;
L_801d688c:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d68bc;
    c.r[0] = c.r[23] & 0x80000000u;
    wp::record(c, c.r[0]);
    c.r[4] = 0x1u;
    if (!wp::cr_get(c, 2)) goto L_801d68b0;
    c.r[0] = c.r[23] + 0x1u;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d68b0;
    c.r[4] = 0x0u;
L_801d68b0:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d68bc;
    c.r[3] = 0x1u;
L_801d68bc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d692c;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = wp::rotl(c.r[23], 29) & 0x1fffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (wp::cr_get(c, 0)) goto L_801d692c;
L_801d68e0:
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[5] = c.r[5] + 0xfffffff8u;
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[1];
    ea = c.r[4] + 0xfffffff0u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe8u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe0u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[0];
    ea = c.r[4] + 0xffffffd8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffd0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffc8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xffffffc0u;
    c.f[6] = c.f[6] + c.f[5];
    c.f[6] = c.f[6] + c.f[4];
    c.f[6] = c.f[6] + c.f[3];
    c.f[6] = c.f[6] + c.f[2];
    c.f[6] = c.f[6] + c.f[1];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d68e0;
    }
L_801d692c:
    c.r[3] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d6958;
L_801d6948:
    ea = c.r[4] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xfffffff8u;
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6948;
    }
L_801d6958:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6968;
    c.f[1] = c.f[6];
    goto L_801d696c;
L_801d6968:
    c.f[1] = -c.f[6];
L_801d696c:
    ea = c.r[1] + 0x100u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_signed(c, 1, c.r[23], 0x1u);
    ea = c.r[17] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    c.r[8] = 0x1u;
    c.f[6] = c.f[0] - c.f[6];
    if (wp::cr_get(c, 4)) goto L_801d6abc;
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    c.r[4] = c.r[23] + 0xfffffff8u;
    if (!wp::cr_get(c, 1)) goto L_801d6a8c;
    c.r[5] = 0x0u;
    c.r[6] = 0x0u;
    c.r[7] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d69b4;
    c.r[3] = 0x80000000u;
    c.r[0] = c.r[3] + 0xfffffffeu;
    wp::compare_signed(c, 0, c.r[23], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d69b4;
    c.r[7] = 0x1u;
L_801d69b4:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d69f0;
    c.r[7] = c.r[23] & 0x80000000u;
    c.r[3] = 0x1u;
    c.r[0] = c.r[7] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d69e4;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d69e4;
    c.r[3] = 0x0u;
L_801d69e4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d69f0;
    c.r[6] = 0x1u;
L_801d69f0:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6a20;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[3] = 0x1u;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d6a14;
    c.r[0] = c.r[23] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d6a14;
    c.r[3] = 0x0u;
L_801d6a14:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6a20;
    c.r[5] = 0x1u;
L_801d6a20:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6a8c;
    c.r[0] = c.r[4] + 0x7u;
    c.r[3] = c.r[1] + 0x108u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[4], 0x1u);
    if (wp::cr_get(c, 0)) goto L_801d6a8c;
L_801d6a40:
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[8] = c.r[8] + 0x8u;
    ea = c.r[3] + 0x8u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[1];
    ea = c.r[3] + 0x10u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[3] + 0x18u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[3] + 0x20u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[0];
    ea = c.r[3] + 0x28u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[3] + 0x30u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[3] + 0x38u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = c.r[3] + 0x40u;
    c.f[6] = c.f[6] + c.f[5];
    c.f[6] = c.f[6] + c.f[4];
    c.f[6] = c.f[6] + c.f[3];
    c.f[6] = c.f[6] + c.f[2];
    c.f[6] = c.f[6] + c.f[1];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6a40;
    }
L_801d6a8c:
    c.r[0] = c.r[23] + 0x1u;
    c.r[3] = wp::rotl(c.r[8], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = c.r[0] - c.r[8];
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[8], c.r[23]);
    if (wp::cr_get(c, 1)) goto L_801d6abc;
L_801d6aac:
    ea = c.r[4] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0x8u;
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6aac;
    }
L_801d6abc:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6ac8;
    goto L_801d6acc;
L_801d6ac8:
    c.f[6] = -c.f[6];
L_801d6acc:
    ea = c.r[17] + 0x8u;
    wp::wrf64(ea, c.f[6]);
    goto L_801d6efc;
L_801d6ad4:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    c.r[5] = c.r[23] | c.r[23];
    if (!wp::cr_get(c, 1)) goto L_801d6c08;
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6bd0;
    wp::compare_signed(c, 0, c.r[23], 0xffffffffu);
    c.r[0] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d6af8;
    c.r[0] = 0x1u;
L_801d6af8:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6bd0;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6bd0;
L_801d6b20:
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.r[5] = c.r[5] + 0xfffffff8u;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xfffffff0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xfffffff8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffe8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xfffffff0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffe0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffe8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffd8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xffffffe0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffd0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffd8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xffffffd0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffc8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc0u;
    wp::wrf64(ea, c.f[1]);
    c.r[4] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6b20;
    }
L_801d6bd0:
    c.r[0] = wp::rotl(c.r[5], 3) & 0xfffffff8u;
    c.r[3] = c.r[1] + 0x100u;
    c.r[3] = c.r[3] + c.r[0];
    c.ctr = c.r[5];
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d6c08;
L_801d6be8:
    ea = c.r[3] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[3] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[3] + 0xfffffff8u;
    wp::wrf64(ea, c.f[2]);
    c.r[3] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6be8;
    }
L_801d6c08:
    wp::compare_signed(c, 1, c.r[23], 0x1u);
    c.r[6] = c.r[23] | c.r[23];
    if (!wp::cr_get(c, 5)) goto L_801d6d80;
    c.r[0] = c.r[23] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6d44;
    c.r[3] = 0x0u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d6c30;
    c.r[0] = 0x1u;
L_801d6c30:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6c6c;
    c.r[5] = c.r[23] & 0x80000000u;
    c.r[4] = 0x1u;
    c.r[0] = c.r[5] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6c60;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::compare_signed(c, 0, c.r[5], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d6c60;
    c.r[4] = 0x0u;
L_801d6c60:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6c6c;
    c.r[3] = 0x1u;
L_801d6c6c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6d44;
    c.r[0] = c.r[23] + 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x9u);
    if (!wp::cr_get(c, 1)) goto L_801d6d44;
L_801d6c94:
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.r[6] = c.r[6] + 0xfffffff8u;
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xfffffff0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xfffffff8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffe8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xfffffff0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffe0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffe8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffd8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xffffffe0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffd0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffd8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc8u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0xffffffd0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] + c.f[2];
    c.f[0] = c.f[0] - c.f[1];
    c.f[0] = c.f[2] + c.f[0];
    ea = c.r[4] + 0xffffffc8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xffffffc0u;
    wp::wrf64(ea, c.f[1]);
    c.r[4] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6c94;
    }
L_801d6d44:
    c.r[3] = wp::rotl(c.r[6], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = c.r[6] + 0xffffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[6], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d6d80;
L_801d6d60:
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] + c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    c.f[0] = c.f[1] + c.f[0];
    ea = c.r[4] + 0x0u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[4] + 0xfffffff8u;
    wp::wrf64(ea, c.f[2]);
    c.r[4] = ea;
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6d60;
    }
L_801d6d80:
    wp::compare_signed(c, 1, c.r[23], 0x2u);
    ea = c.r[2] + 0xffff9d80u;
    c.f[6] = wp::rdf64(ea);
    if (wp::cr_get(c, 4)) goto L_801d6ebc;
    c.r[0] = c.r[23] + 0xffffffffu;
    wp::compare_signed(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 1)) goto L_801d6e90;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 4)) goto L_801d6dac;
    c.r[0] = 0x1u;
L_801d6dac:
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6de8;
    c.r[6] = c.r[23] & 0x80000000u;
    c.r[5] = 0x1u;
    c.r[0] = c.r[6] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6ddc;
    c.r[0] = c.r[23] + 0xfffffffeu;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::compare_signed(c, 0, c.r[6], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d6ddc;
    c.r[5] = 0x0u;
L_801d6ddc:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6de8;
    c.r[4] = 0x1u;
L_801d6de8:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6e1c;
    c.r[0] = c.r[23] + 0xfffffffeu;
    c.r[4] = 0x1u;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d6e10;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[0] = c.r[0] & 0x80000000u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d6e10;
    c.r[4] = 0x0u;
L_801d6e10:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6e1c;
    c.r[3] = 0x1u;
L_801d6e1c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d6e90;
    c.r[0] = c.r[23] + 0xfffffffeu;
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = wp::rotl(c.r[0], 29) & 0x1fffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0xau);
    if (wp::cr_get(c, 0)) goto L_801d6e90;
L_801d6e44:
    ea = c.r[4] + 0x0u;
    c.f[1] = wp::rdf64(ea);
    c.r[23] = c.r[23] + 0xfffffff8u;
    ea = c.r[4] + 0xfffffff8u;
    c.f[0] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[1];
    ea = c.r[4] + 0xfffffff0u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe8u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffe0u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[0];
    ea = c.r[4] + 0xffffffd8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffd0u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[4] + 0xffffffc8u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xffffffc0u;
    c.f[6] = c.f[6] + c.f[5];
    c.f[6] = c.f[6] + c.f[4];
    c.f[6] = c.f[6] + c.f[3];
    c.f[6] = c.f[6] + c.f[2];
    c.f[6] = c.f[6] + c.f[1];
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6e44;
    }
L_801d6e90:
    c.r[3] = wp::rotl(c.r[23], 3) & 0xfffffff8u;
    c.r[4] = c.r[1] + 0x100u;
    c.r[0] = c.r[23] + 0xffffffffu;
    c.r[4] = c.r[4] + c.r[3];
    c.ctr = c.r[0];
    wp::compare_signed(c, 0, c.r[23], 0x2u);
    if (wp::cr_get(c, 0)) goto L_801d6ebc;
L_801d6eac:
    ea = c.r[4] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.r[4] = c.r[4] + 0xfffffff8u;
    c.f[6] = c.f[6] + c.f[0];
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d6eac;
    }
L_801d6ebc:
    wp::compare_signed(c, 0, c.r[18], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6edc;
    ea = c.r[1] + 0x100u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x108u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[17] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[17] + 0x8u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[17] + 0x10u;
    wp::wrf64(ea, c.f[6]);
    goto L_801d6efc;
L_801d6edc:
    ea = c.r[1] + 0x100u;
    c.f[2] = wp::rdf64(ea);
    c.f[0] = -c.f[6];
    ea = c.r[1] + 0x108u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = -c.f[2];
    ea = c.r[17] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    c.f[0] = -c.f[1];
    ea = c.r[17] + 0x0u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[17] + 0x8u;
    wp::wrf64(ea, c.f[0]);
L_801d6efc:
    c.r[11] = c.r[1] + 0x370u;
    c.r[3] = c.r[20] & 0x7u;
    c.lr = 0x801d6f08u;
    f_801c835c(c);
R_801d6f08:
    ea = c.r[1] + 0x2e0u;
    for (uint32_t k = 14; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x374u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x370u;
    return;
}

void f_801d6f1c(wp::Cpu& c) {
    WP_ENTER(0x801d6f1cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = 0x3e400000u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[4] = c.r[4] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d6f50;
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d6f50;
    goto L_801d6fd4;
L_801d6f50:
    c.f[7] = c.f[1] * c.f[1];
    ea = c.r[2] + 0xffff9de0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9dd8u;
    c.f[5] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[2] + 0xffff9dd0u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9dc8u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[0] * c.f[7];
    ea = c.r[2] + 0xffff9dc0u;
    c.f[0] = wp::rdf64(ea);
    c.f[8] = c.f[7] * c.f[1];
    c.f[5] = c.f[5] + c.f[6];
    c.f[5] = c.f[7] * c.f[5];
    c.f[4] = c.f[4] + c.f[5];
    c.f[4] = c.f[7] * c.f[4];
    c.f[3] = c.f[3] + c.f[4];
    c.f[3] = c.f[7] * c.f[3];
    c.f[0] = c.f[0] + c.f[3];
    if (!wp::cr_get(c, 2)) goto L_801d6fac;
    c.f[2] = c.f[7] * c.f[0];
    ea = c.r[2] + 0xffff9de8u;
    c.f[0] = wp::rdf64(ea);
    c.f[0] = c.f[0] + c.f[2];
    c.f[0] = c.f[8] * c.f[0];
    c.f[1] = c.f[1] + c.f[0];
    goto L_801d6fd4;
L_801d6fac:
    ea = c.r[2] + 0xffff9df0u;
    c.f[4] = wp::rdf64(ea);
    c.f[3] = c.f[8] * c.f[0];
    ea = c.r[2] + 0xffff9de8u;
    c.f[0] = wp::rdf64(ea);
    c.f[4] = c.f[4] * c.f[2];
    c.f[0] = c.f[0] * c.f[8];
    c.f[3] = c.f[4] - c.f[3];
    c.f[3] = c.f[7] * c.f[3];
    c.f[2] = c.f[3] - c.f[2];
    c.f[0] = c.f[2] - c.f[0];
    c.f[1] = c.f[1] - c.f[0];
L_801d6fd4:
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d6fdc(wp::Cpu& c) {
    WP_ENTER(0x801d6fdcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x40u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x48u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    wp::wrf64(ea, c.f[30]);
    ea = c.r[1] + 0x38u;
    wp::store_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[0] = 0x3e300000u;
    ea = c.r[1] + 0x8u;
    c.r[8] = wp::rd32(ea);
    c.r[7] = c.r[8] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d7058;
    c.f[0] = wp::convert_to_int(c.f[1], true);
    ea = c.r[1] + 0x20u;
    wp::wrf64(ea, c.f[0]);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d7058;
    c.r[4] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] | c.r[7];
    c.r[0] = c.r[4] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7040;
    c.f[1] = std::fabs(c.f[1]);
    ea = c.r[2] + 0xffff9df8u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] / c.f[1];
    goto L_801d7214;
L_801d7040:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d704c;
    goto L_801d7214;
L_801d704c:
    ea = c.r[2] + 0xffff9e00u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] / c.f[1];
    goto L_801d7214;
L_801d7058:
    c.r[4] = 0x3fe60000u;
    c.r[0] = c.r[4] + 0xffff9428u;
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d7090;
    wp::compare_signed(c, 0, c.r[8], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d7078;
    c.f[1] = -c.f[1];
    c.f[2] = -c.f[2];
L_801d7078:
    ea = c.r[2] + 0xffff9e08u;
    c.f[3] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e10u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[3] - c.f[1];
    c.f[0] = c.f[0] - c.f[2];
    ea = c.r[2] + 0xffff9e18u;
    c.f[2] = wp::rdf64(ea);
    c.f[1] = c.f[1] + c.f[0];
L_801d7090:
    c.f[0] = c.f[1] * c.f[1];
    c.r[6] = 0x80200000u;
    c.r[5] = c.r[6] + 0x7df0u;
    c.r[4] = 0x3fe60000u;
    c.r[0] = c.r[4] + 0xffff9428u;
    ea = c.r[5] + 0x60u;
    c.f[5] = wp::rdf64(ea);
    c.f[3] = c.f[0] * c.f[0];
    ea = c.r[5] + 0x58u;
    c.f[8] = wp::rdf64(ea);
    ea = c.r[5] + 0x50u;
    c.f[6] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    ea = c.r[5] + 0x48u;
    c.f[10] = wp::rdf64(ea);
    c.f[4] = c.f[0] * c.f[1];
    c.f[7] = c.f[3] * c.f[5];
    ea = c.r[6] + 0x7df0u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[5] + 0x40u;
    c.f[9] = wp::rdf64(ea);
    c.f[11] = c.f[3] * c.f[8];
    ea = c.r[5] + 0x38u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[5] + 0x30u;
    c.f[8] = wp::rdf64(ea);
    c.f[6] = c.f[6] + c.f[7];
    ea = c.r[5] + 0x28u;
    c.f[13] = wp::rdf64(ea);
    c.f[30] = c.f[10] + c.f[11];
    ea = c.r[5] + 0x20u;
    c.f[7] = wp::rdf64(ea);
    c.f[5] = c.f[5] * c.f[4];
    ea = c.r[5] + 0x18u;
    c.f[12] = wp::rdf64(ea);
    c.f[10] = c.f[3] * c.f[6];
    ea = c.r[5] + 0x10u;
    c.f[6] = wp::rdf64(ea);
    ea = c.r[5] + 0x8u;
    c.f[11] = wp::rdf64(ea);
    c.f[30] = c.f[3] * c.f[30];
    c.f[9] = c.f[9] + c.f[10];
    c.f[10] = c.f[31] + c.f[30];
    c.f[9] = c.f[3] * c.f[9];
    c.f[10] = c.f[3] * c.f[10];
    c.f[8] = c.f[8] + c.f[9];
    c.f[9] = c.f[13] + c.f[10];
    c.f[8] = c.f[3] * c.f[8];
    c.f[9] = c.f[3] * c.f[9];
    c.f[7] = c.f[7] + c.f[8];
    c.f[8] = c.f[12] + c.f[9];
    c.f[7] = c.f[3] * c.f[7];
    c.f[8] = c.f[3] * c.f[8];
    c.f[3] = c.f[6] + c.f[7];
    c.f[6] = c.f[11] + c.f[8];
    c.f[3] = c.f[0] * c.f[3];
    c.f[3] = c.f[6] + c.f[3];
    c.f[3] = c.f[4] * c.f[3];
    c.f[3] = c.f[2] + c.f[3];
    c.f[0] = c.f[0] * c.f[3];
    c.f[6] = c.f[2] + c.f[0];
    c.f[6] = c.f[6] + c.f[5];
    c.f[4] = c.f[1] + c.f[6];
    if (wp::cr_get(c, 0)) goto L_801d71bc;
    c.r[4] = 0x43300000u;
    c.r[0] = c.r[3] ^ 0x80000000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[8], 2) & 0x2u;
    ea = c.r[2] + 0xffff9e28u;
    c.f[5] = wp::rdf64(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x1u);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[0] ^ 0x80000000u;
    c.f[3] = c.f[4] * c.f[4];
    ea = c.r[2] + 0xffff9e20u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x20u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    c.f[7] = c.f[2] - c.f[5];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.f[2] = c.f[4] + c.f[7];
    ea = c.r[1] + 0x28u;
    c.f[4] = wp::rdf64(ea);
    c.f[4] = c.f[4] - c.f[5];
    c.f[2] = c.f[3] / c.f[2];
    c.f[2] = c.f[2] - c.f[6];
    c.f[1] = c.f[1] - c.f[2];
    c.f[0] = c.f[0] * c.f[1];
    c.f[0] = c.f[7] - c.f[0];
    c.f[1] = c.f[4] * c.f[0];
    goto L_801d7214;
L_801d71bc:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d71cc;
    c.f[1] = c.f[4];
    goto L_801d7214;
L_801d71cc:
    ea = c.r[2] + 0xffff9e00u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wrf64(ea, c.f[4]);
    c.f[5] = c.f[0] / c.f[4];
    ea = c.r[2] + 0xffff9df8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[5]);
    c.f[0] = c.f[4] - c.f[1];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.f[3] = wp::rdf64(ea);
    c.f[0] = c.f[6] - c.f[0];
    c.f[1] = c.f[3] * c.f[4];
    c.f[0] = c.f[3] * c.f[0];
    c.f[1] = c.f[2] + c.f[1];
    c.f[0] = c.f[1] + c.f[0];
    c.f[0] = c.f[5] * c.f[0];
    c.f[1] = c.f[3] + c.f[0];
L_801d7214:
    ea = c.r[1] + 0x48u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x40u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x38u;
    wp::load_quantized(c, 30, ea, 0, 0, q);
    ea = c.r[1] + 0x30u;
    c.f[30] = wp::rdf64(ea);
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801d722c(wp::Cpu& c) {
    WP_ENTER(0x801d722cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[5] = 0x80200000u;
    c.r[0] = 0x44100000u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.r[5] = c.r[5] + 0x7e58u;
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[4] = c.r[6] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d726c;
    c.r[0] = 0x3fdc0000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d72f0;
    c.r[0] = 0x3e200000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d72e8;
    goto L_801d72d0;
L_801d726c:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d7280;
    if (!wp::cr_get(c, 0)) goto L_801d728c;
    goto L_801d7294;
L_801d7280:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d7294;
L_801d728c:
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d7454;
L_801d7294:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d72b4;
    c.r[4] = c.r[5] + 0x0u;
    c.r[3] = c.r[5] + 0x20u;
    ea = c.r[4] + 0x18u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[3] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] + c.f[0];
    goto L_801d7454;
L_801d72b4:
    c.r[4] = c.r[5] + 0x0u;
    c.r[3] = c.r[5] + 0x20u;
    ea = c.r[4] + 0x18u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[3] + 0x18u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = -c.f[1];
    c.f[1] = c.f[1] - c.f[0];
    goto L_801d7454;
L_801d72d0:
    ea = c.r[2] + 0xffff9e30u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e38u;
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[2], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d72e8;
    goto L_801d7454;
L_801d72e8:
    c.r[0] = 0xffffffffu;
    goto L_801d7380;
L_801d72f0:
    c.r[0] = 0x3ff30000u;
    c.f[3] = std::fabs(c.f[1]);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d7344;
    c.r[0] = 0x3fe60000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d732c;
    ea = c.r[2] + 0xffff9e40u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x0u;
    ea = c.r[2] + 0xffff9e38u;
    c.f[1] = wp::rdf64(ea);
    c.f[2] = c.f[0] * c.f[3];
    c.f[0] = c.f[0] + c.f[3];
    c.f[1] = c.f[2] - c.f[1];
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d7380;
L_801d732c:
    ea = c.r[2] + 0xffff9e38u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x1u;
    c.f[1] = c.f[3] - c.f[0];
    c.f[0] = c.f[0] + c.f[3];
    c.f[1] = c.f[1] / c.f[0];
    goto L_801d7380;
L_801d7344:
    c.r[3] = 0x40040000u;
    c.r[0] = c.r[3] + 0xffff8000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d7374;
    ea = c.r[2] + 0xffff9e48u;
    c.f[2] = wp::rdf64(ea);
    c.r[0] = 0x2u;
    ea = c.r[2] + 0xffff9e38u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] * c.f[3];
    c.f[2] = c.f[3] - c.f[2];
    c.f[0] = c.f[0] + c.f[1];
    c.f[1] = c.f[2] / c.f[0];
    goto L_801d7380;
L_801d7374:
    ea = c.r[2] + 0xffff9e50u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0x3u;
    c.f[1] = c.f[0] / c.f[3];
L_801d7380:
    c.f[0] = c.f[1] * c.f[1];
    c.r[3] = c.r[5] + 0x40u;
    ea = c.r[3] + 0x50u;
    c.f[3] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[3] + 0x48u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[3] + 0x40u;
    c.f[11] = wp::rdf64(ea);
    c.f[13] = c.f[0] * c.f[0];
    ea = c.r[3] + 0x38u;
    c.f[5] = wp::rdf64(ea);
    ea = c.r[3] + 0x30u;
    c.f[10] = wp::rdf64(ea);
    ea = c.r[3] + 0x28u;
    c.f[4] = wp::rdf64(ea);
    ea = c.r[3] + 0x20u;
    c.f[9] = wp::rdf64(ea);
    c.f[12] = c.f[13] * c.f[3];
    ea = c.r[3] + 0x18u;
    c.f[3] = wp::rdf64(ea);
    c.f[6] = c.f[13] * c.f[2];
    ea = c.r[3] + 0x10u;
    c.f[8] = wp::rdf64(ea);
    ea = c.r[3] + 0x8u;
    c.f[2] = wp::rdf64(ea);
    c.f[11] = c.f[11] + c.f[12];
    ea = c.r[5] + 0x40u;
    c.f[7] = wp::rdf64(ea);
    c.f[5] = c.f[5] + c.f[6];
    c.f[6] = c.f[13] * c.f[11];
    c.f[5] = c.f[13] * c.f[5];
    c.f[6] = c.f[10] + c.f[6];
    c.f[4] = c.f[4] + c.f[5];
    c.f[5] = c.f[13] * c.f[6];
    c.f[4] = c.f[13] * c.f[4];
    c.f[5] = c.f[9] + c.f[5];
    c.f[3] = c.f[3] + c.f[4];
    c.f[4] = c.f[13] * c.f[5];
    c.f[3] = c.f[13] * c.f[3];
    c.f[4] = c.f[8] + c.f[4];
    c.f[2] = c.f[2] + c.f[3];
    c.f[3] = c.f[13] * c.f[4];
    c.f[4] = c.f[13] * c.f[2];
    c.f[2] = c.f[7] + c.f[3];
    c.f[0] = c.f[0] * c.f[2];
    if (!wp::cr_get(c, 0)) goto L_801d7420;
    c.f[0] = c.f[0] + c.f[4];
    c.f[0] = c.f[1] * c.f[0];
    c.f[1] = c.f[1] - c.f[0];
    goto L_801d7454;
L_801d7420:
    c.f[0] = c.f[0] + c.f[4];
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[3] = c.r[5] + 0x20u;
    c.r[4] = c.r[5] + 0x0u;
    ea = c.r[3] + c.r[0];
    c.f[2] = wp::rdf64(ea);
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    c.f[3] = c.f[1] * c.f[0];
    ea = c.r[4] + c.r[0];
    c.f[0] = wp::rdf64(ea);
    c.f[2] = c.f[3] - c.f[2];
    c.f[1] = c.f[2] - c.f[1];
    c.f[1] = c.f[0] - c.f[1];
    if (!wp::cr_get(c, 0)) goto L_801d7454;
    c.f[1] = -c.f[1];
L_801d7454:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d745c(wp::Cpu& c) {
    WP_ENTER(0x801d745cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 12) & 0x7ffu;
    c.r[7] = c.r[3] + 0xfffffc01u;
    wp::compare_signed(c, 0, c.r[7], 0x34u);
    if (!wp::cr_get(c, 0)) goto L_801d7490;
    wp::compare_signed(c, 1, c.r[7], 0x14u);
    if (!wp::cr_get(c, 4)) goto L_801d7530;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d74d8;
    goto L_801d749c;
L_801d7490:
    wp::compare_signed(c, 0, c.r[7], 0x400u);
    if (wp::cr_get(c, 2)) goto L_801d7524;
    goto L_801d75a0;
L_801d749c:
    ea = c.r[2] + 0xffff9e58u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e60u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d7594;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d74c4;
    c.r[5] = 0x80000000u;
    c.r[6] = 0x0u;
    goto L_801d7594;
L_801d74c4:
    c.r[0] = c.r[5] | c.r[6];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d7594;
    c.r[5] = 0x3ff00000u;
    c.r[6] = 0x0u;
    goto L_801d7594;
L_801d74d8:
    c.r[3] = 0x100000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[4] = wp::sraw(c, c.r[0], c.r[7]);
    c.r[0] = c.r[5] & c.r[4];
    c.r[0] = c.r[6] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d74f4;
    goto L_801d75a0;
L_801d74f4:
    ea = c.r[2] + 0xffff9e58u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e60u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d7594;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d7518;
    c.r[0] = wp::sraw(c, c.r[3], c.r[7]);
    c.r[5] = c.r[5] + c.r[0];
L_801d7518:
    c.r[5] = c.r[5] & ~c.r[4];
    c.r[6] = 0x0u;
    goto L_801d7594;
L_801d7524:
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d75a0;
    goto L_801d75a0;
L_801d7530:
    c.r[0] = c.r[7] + 0xffffffecu;
    c.r[3] = 0xffffffffu;
    c.r[4] = wp::srw(c.r[3], c.r[0]);
    c.r[0] = c.r[6] & c.r[4];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7548;
    goto L_801d75a0;
L_801d7548:
    ea = c.r[2] + 0xffff9e58u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e60u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d7594;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d7590;
    if (!wp::cr_get(c, 6)) goto L_801d7570;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801d7590;
L_801d7570:
    c.r[0] = wp::sub_carry(c, c.r[7], 0x34u);
    c.r[3] = 0x1u;
    c.r[0] = wp::slw(c.r[3], c.r[0]);
    c.r[0] = c.r[6] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801d758c;
    c.r[5] = c.r[5] + 0x1u;
L_801d758c:
    c.r[6] = c.r[0] | c.r[0];
L_801d7590:
    c.r[6] = c.r[6] & ~c.r[4];
L_801d7594:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
L_801d75a0:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d75a8(wp::Cpu& c) {
    WP_ENTER(0x801d75a8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[2]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x80000000u;
    c.r[0] = (wp::rotl(c.r[3], 0) & 0x7fffffffu) | (c.r[0] & 0x80000000u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d75d4(wp::Cpu& c) {
    WP_ENTER(0x801d75d4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d7604u: goto R_801d7604;
        case 0x801d7624u: goto R_801d7624;
        case 0x801d764cu: goto R_801d764c;
        case 0x801d7660u: goto R_801d7660;
        case 0x801d7674u: goto R_801d7674;
        case 0x801d768cu: goto R_801d768c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x3fe90000u;
    ea = c.r[2] + 0xffff9e68u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x21fbu;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d7608;
    c.lr = 0x801d7604u;
    f_801d5754(c);
R_801d7604:
    goto L_801d768c;
L_801d7608:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d761c;
    c.f[1] = c.f[1] - c.f[1];
    goto L_801d768c;
L_801d761c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801d7624u;
    f_801d53d0(c);
R_801d7624:
    c.r[0] = c.r[3] & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d7640;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d7650;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d7668;
    goto L_801d767c;
L_801d7640:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d764cu;
    f_801d5754(c);
R_801d764c:
    goto L_801d768c;
L_801d7650:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7660u;
    f_801d6f1c(c);
R_801d7660:
    c.f[1] = -c.f[1];
    goto L_801d768c;
L_801d7668:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7674u;
    f_801d5754(c);
R_801d7674:
    c.f[1] = -c.f[1];
    goto L_801d768c;
L_801d767c:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d768cu;
    f_801d6f1c(c);
L_801d768c:
R_801d768c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d769c(wp::Cpu& c) {
    WP_ENTER(0x801d769cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 12) & 0x7ffu;
    c.r[7] = c.r[3] + 0xfffffc01u;
    wp::compare_signed(c, 0, c.r[7], 0x34u);
    if (!wp::cr_get(c, 0)) goto L_801d76d0;
    wp::compare_signed(c, 1, c.r[7], 0x14u);
    if (!wp::cr_get(c, 4)) goto L_801d7774;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d771c;
    goto L_801d76dc;
L_801d76d0:
    wp::compare_signed(c, 0, c.r[7], 0x400u);
    if (wp::cr_get(c, 2)) goto L_801d7768;
    goto L_801d77e4;
L_801d76dc:
    ea = c.r[2] + 0xffff9e70u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e78u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d77d8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 0)) goto L_801d7704;
    c.r[6] = 0x0u;
    c.r[5] = 0x0u;
    goto L_801d77d8;
L_801d7704:
    c.r[0] = c.r[5] & 0x7fffffffu;
    c.r[0] = c.r[0] | c.r[6];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d77d8;
    c.r[5] = 0xbff00000u;
    c.r[6] = 0x0u;
    goto L_801d77d8;
L_801d771c:
    c.r[3] = 0x100000u;
    c.r[0] = c.r[3] + 0xffffffffu;
    c.r[4] = wp::sraw(c, c.r[0], c.r[7]);
    c.r[0] = c.r[5] & c.r[4];
    c.r[0] = c.r[6] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7738;
    goto L_801d77e4;
L_801d7738:
    ea = c.r[2] + 0xffff9e70u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e78u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d77d8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d775c;
    c.r[0] = wp::sraw(c, c.r[3], c.r[7]);
    c.r[5] = c.r[5] + c.r[0];
L_801d775c:
    c.r[5] = c.r[5] & ~c.r[4];
    c.r[6] = 0x0u;
    goto L_801d77d8;
L_801d7768:
    c.f[1] = c.f[1] + c.f[1];
    goto L_801d77e4;
    goto L_801d77e4;
L_801d7774:
    c.r[0] = c.r[7] + 0xffffffecu;
    c.r[3] = 0xffffffffu;
    c.r[4] = wp::srw(c.r[3], c.r[0]);
    c.r[0] = c.r[6] & c.r[4];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d778c;
    goto L_801d77e4;
L_801d778c:
    ea = c.r[2] + 0xffff9e70u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[2] + 0xffff9e78u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[2] + c.f[1];
    wp::compare_float(c, 0, c.f[1], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d77d8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d77d4;
    if (!wp::cr_get(c, 6)) goto L_801d77b4;
    c.r[5] = c.r[5] + 0x1u;
    goto L_801d77d4;
L_801d77b4:
    c.r[0] = wp::sub_carry(c, c.r[7], 0x34u);
    c.r[3] = 0x1u;
    c.r[0] = wp::slw(c.r[3], c.r[0]);
    c.r[0] = c.r[6] + c.r[0];
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (!wp::cr_get(c, 0)) goto L_801d77d0;
    c.r[5] = c.r[5] + 0x1u;
L_801d77d0:
    c.r[6] = c.r[0] | c.r[0];
L_801d77d4:
    c.r[6] = c.r[6] & ~c.r[4];
L_801d77d8:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
L_801d77e4:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d77ec(wp::Cpu& c) {
    WP_ENTER(0x801d77ecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[4] = 0x0u;
    c.r[0] = 0x7ff00000u;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[5] & 0x7fffffffu;
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d786c;
    c.r[0] = c.r[4] | c.r[6];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7820;
    goto L_801d786c;
L_801d7820:
    c.r[0] = 0x100000u;
    wp::compare_signed(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d7848;
    ea = c.r[2] + 0xffff9e80u;
    c.f[0] = wp::rdf64(ea);
    c.r[0] = 0xffffffcau;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] * c.f[0];
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[5] & 0x7fffffffu;
L_801d7848:
    c.r[0] = c.r[5] & 0x800fffffu;
    ea = c.r[3] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = wp::sraw(c, c.r[4], 20);
    c.r[0] = c.r[0] | 0x3fe00000u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + c.r[5];
    c.r[0] = c.r[4] + 0xfffffc02u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
L_801d786c:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d7874(wp::Cpu& c) {
    WP_ENTER(0x801d7874u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d7898u: goto R_801d7898;
        case 0x801d7934u: goto R_801d7934;
        case 0x801d7984u: goto R_801d7984;
        case 0x801d799cu: goto R_801d799c;
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
    c.f[31] = c.f[1];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    c.lr = 0x801d7898u;
    f_801ccc24(c);
R_801d7898:
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (!wp::cr_get(c, 1)) goto L_801d78ac;
    ea = c.r[2] + 0xffff9e88u;
    c.f[0] = wp::rdf64(ea);
    wp::compare_float(c, 0, c.f[0], c.f[31]);
    if (!wp::cr_get(c, 2)) goto L_801d78b4;
L_801d78ac:
    c.f[1] = c.f[31];
    goto L_801d79c8;
L_801d78b4:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[5], 12) & 0x7ffu;
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 2)) goto L_801d790c;
    c.r[0] = c.r[5] & 0x7fffffffu;
    c.r[0] = c.r[3] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d78d8;
    c.f[1] = c.f[31];
    goto L_801d79c8;
L_801d78d8:
    ea = c.r[2] + 0xffff9e90u;
    c.f[0] = wp::rdf64(ea);
    c.r[3] = 0xffff0000u;
    c.r[0] = c.r[3] + 0x3cb0u;
    c.f[31] = c.f[31] * c.f[0];
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[5], 12) & 0x7ffu;
    c.r[4] = c.r[3] + 0xffffffcau;
    if (!wp::cr_get(c, 0)) goto L_801d790c;
    ea = c.r[2] + 0xffff9e98u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[31];
    goto L_801d79c8;
L_801d790c:
    wp::compare_signed(c, 0, c.r[4], 0x7ffu);
    if (!wp::cr_get(c, 2)) goto L_801d791c;
    c.f[1] = c.f[31] + c.f[31];
    goto L_801d79c8;
L_801d791c:
    c.r[4] = c.r[4] + c.r[31];
    wp::compare_signed(c, 0, c.r[4], 0x7feu);
    if (!wp::cr_get(c, 1)) goto L_801d7940;
    c.f[2] = c.f[31];
    ea = c.r[2] + 0xffff9ea0u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801d7934u;
    f_801d75a8(c);
R_801d7934:
    ea = c.r[2] + 0xffff9ea0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[1];
    goto L_801d79c8;
L_801d7940:
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d7960;
    c.r[3] = c.r[5] & 0x800fffffu;
    c.r[0] = wp::rotl(c.r[4], 20) & 0xfff00000u;
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d79c8;
L_801d7960:
    wp::compare_signed(c, 0, c.r[4], 0xffffffcau);
    if (wp::cr_get(c, 1)) goto L_801d79a8;
    c.r[3] = 0x10000u;
    c.r[0] = c.r[3] + 0xffffc350u;
    wp::compare_signed(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d7990;
    c.f[2] = c.f[31];
    ea = c.r[2] + 0xffff9ea0u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801d7984u;
    f_801d75a8(c);
R_801d7984:
    ea = c.r[2] + 0xffff9ea0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[1];
    goto L_801d79c8;
L_801d7990:
    c.f[2] = c.f[31];
    ea = c.r[2] + 0xffff9e98u;
    c.f[1] = wp::rdf64(ea);
    c.lr = 0x801d799cu;
    f_801d75a8(c);
R_801d799c:
    ea = c.r[2] + 0xffff9e98u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[0] * c.f[1];
    goto L_801d79c8;
L_801d79a8:
    c.r[0] = c.r[4] + 0x36u;
    c.r[3] = c.r[5] & 0x800fffffu;
    c.r[0] = wp::rotl(c.r[0], 20) & 0xfff00000u;
    ea = c.r[2] + 0xffff9ea8u;
    c.f[1] = wp::rdf64(ea);
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] * c.f[0];
L_801d79c8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.f[31] = wp::rdf64(ea);
    ea = c.r[1] + 0x14u;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d79e0(wp::Cpu& c) {
    WP_ENTER(0x801d79e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.r[4] = wp::rotl(c.r[5], 12) & 0x7ffu;
    c.r[7] = c.r[4] + 0xfffffc01u;
    wp::compare_signed(c, 0, c.r[7], 0x14u);
    if (!wp::cr_get(c, 0)) goto L_801d7a6c;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 0)) goto L_801d7a1c;
    c.r[4] = c.r[5] & 0x80000000u;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_801d7ad4;
L_801d7a1c:
    c.r[4] = 0x100000u;
    c.r[0] = c.r[4] + 0xffffffffu;
    c.r[4] = wp::sraw(c, c.r[0], c.r[7]);
    c.r[0] = c.r[5] & c.r[4];
    c.r[0] = c.r[6] | c.r[0];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7a50;
    c.r[4] = c.r[5] & 0x80000000u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d7ad4;
L_801d7a50:
    c.r[4] = c.r[5] & ~c.r[4];
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] - c.f[0];
    goto L_801d7ad4;
L_801d7a6c:
    wp::compare_signed(c, 0, c.r[7], 0x33u);
    if (!wp::cr_get(c, 1)) goto L_801d7a90;
    c.r[4] = c.r[5] & 0x80000000u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d7ad4;
L_801d7a90:
    c.r[0] = c.r[7] + 0xffffffecu;
    c.r[4] = 0xffffffffu;
    c.r[4] = wp::srw(c.r[4], c.r[0]);
    c.r[0] = c.r[6] & c.r[4];
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d7ac0;
    c.r[4] = c.r[5] & 0x80000000u;
    c.r[0] = 0x0u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.f[1] = wp::rdf64(ea);
    goto L_801d7ad4;
L_801d7ac0:
    c.r[0] = c.r[6] & ~c.r[4];
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x0u;
    c.f[0] = wp::rdf64(ea);
    c.f[1] = c.f[1] - c.f[0];
L_801d7ad4:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d7adc(wp::Cpu& c) {
    WP_ENTER(0x801d7adcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d7b10u: goto R_801d7b10;
        case 0x801d7b30u: goto R_801d7b30;
        case 0x801d7b5cu: goto R_801d7b5c;
        case 0x801d7b6cu: goto R_801d7b6c;
        case 0x801d7b80u: goto R_801d7b80;
        case 0x801d7b94u: goto R_801d7b94;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x3fe90000u;
    ea = c.r[2] + 0xffff9eb0u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x21fbu;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d7b14;
    c.r[3] = 0x0u;
    c.lr = 0x801d7b10u;
    f_801d6f1c(c);
R_801d7b10:
    goto L_801d7b98;
L_801d7b14:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d7b28;
    c.f[1] = c.f[1] - c.f[1];
    goto L_801d7b98;
L_801d7b28:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801d7b30u;
    f_801d53d0(c);
R_801d7b30:
    c.r[0] = c.r[3] & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d7b4c;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d7b60;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d7b70;
    goto L_801d7b88;
L_801d7b4c:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7b5cu;
    f_801d6f1c(c);
R_801d7b5c:
    goto L_801d7b98;
L_801d7b60:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7b6cu;
    f_801d5754(c);
R_801d7b6c:
    goto L_801d7b98;
L_801d7b70:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    c.r[3] = 0x1u;
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7b80u;
    f_801d6f1c(c);
R_801d7b80:
    c.f[1] = -c.f[1];
    goto L_801d7b98;
L_801d7b88:
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.lr = 0x801d7b94u;
    f_801d5754(c);
R_801d7b94:
    c.f[1] = -c.f[1];
L_801d7b98:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d7ba8(wp::Cpu& c) {
    WP_ENTER(0x801d7ba8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d7bdcu: goto R_801d7bdc;
        case 0x801d7bfcu: goto R_801d7bfc;
        case 0x801d7c10u: goto R_801d7c10;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x3fe90000u;
    ea = c.r[2] + 0xffff9eb8u;
    c.f[2] = wp::rdf64(ea);
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[3] + 0x21fbu;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[3] = c.r[3] & 0x7fffffffu;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d7be0;
    c.r[3] = 0x1u;
    c.lr = 0x801d7bdcu;
    f_801d6fdc(c);
R_801d7bdc:
    goto L_801d7c10;
L_801d7be0:
    c.r[0] = 0x7ff00000u;
    wp::compare_signed(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801d7bf4;
    c.f[1] = c.f[1] - c.f[1];
    goto L_801d7c10;
L_801d7bf4:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801d7bfcu;
    f_801d53d0(c);
R_801d7bfc:
    c.r[0] = wp::rotl(c.r[3], 1) & 0x2u;
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
    ea = c.r[1] + 0x18u;
    c.f[2] = wp::rdf64(ea);
    c.r[3] = wp::sub_carry(c, c.r[0], 0x1u);
    c.lr = 0x801d7c10u;
    f_801d6fdc(c);
L_801d7c10:
R_801d7c10:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d7c20(wp::Cpu& c) {
    WP_ENTER(0x801d7c20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d3a88(c);
    return;
}

void f_801d7c24(wp::Cpu& c) {
    WP_ENTER(0x801d7c24u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d3d54(c);
    return;
}

void f_801d7c28(wp::Cpu& c) {
    WP_ENTER(0x801d7c28u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d3fec(c);
    return;
}

void f_801d7c2c(wp::Cpu& c) {
    WP_ENTER(0x801d7c2cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d4244(c);
    return;
}

void f_801d7c30(wp::Cpu& c) {
    WP_ENTER(0x801d7c30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d4474(c);
    return;
}

void f_801d7c34(wp::Cpu& c) {
    WP_ENTER(0x801d7c34u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d47f4(c);
    return;
}

void f_801d7c38(wp::Cpu& c) {
    WP_ENTER(0x801d7c38u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d4aa8(c);
    return;
}

void f_801d7c3c(wp::Cpu& c) {
    WP_ENTER(0x801d7c3cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d4bbc(c);
    return;
}

void f_801d7c40(wp::Cpu& c) {
    WP_ENTER(0x801d7c40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x8u;
    wp::wrf64(ea, c.f[1]);
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[6] & 0x7ff00000u;
    c.r[3] = c.r[3] + 0x80100000u;
    wp::compare_unsigned(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d7c74;
    c.f[0] = c.f[1] * c.f[1];
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    c.f[1] = c.f[1] + c.f[0];
    goto L_801d7e80;
L_801d7c74:
    wp::compare_signed(c, 1, c.r[6], 0x0u);
    if (wp::cr_get(c, 5)) goto L_801d7ca4;
    c.r[3] = c.r[6] & 0x7fffffffu;
    c.r[3] = c.r[0] | c.r[3];
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801d7c8c;
    goto L_801d7e80;
L_801d7c8c:
    if (!wp::cr_get(c, 4)) goto L_801d7ca4;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x21u;
    ea = c.r[13] + 0xffff9440u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x5d18u;
    c.f[1] = wp::rdf32(ea);
    c.ps1[1] = c.f[1];
    goto L_801d7e80;
L_801d7ca4:
    c.r[3] = wp::sraw(c, c.r[6], 20);
    wp::record(c, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801d7cf8;
    goto L_801d7cc0;
L_801d7cb0:
    c.r[4] = wp::rotl(c.r[0], 21) & 0x1fffffu;
    c.r[0] = wp::rotl(c.r[0], 21) & 0xffe00000u;
    c.r[6] = c.r[6] | c.r[4];
    c.r[3] = c.r[3] + 0xffffffebu;
L_801d7cc0:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d7cb0;
    }
    c.r[7] = 0x0u;
    goto L_801d7cd8;
L_801d7cd0:
    c.r[6] = wp::rotl(c.r[6], 1) & 0xfffffffeu;
    c.r[7] = c.r[7] + 0x1u;
L_801d7cd8:
    c.r[4] = c.r[6] & 0x100000u;
    wp::record(c, c.r[4]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d7cd0;
    }
    c.r[4] = wp::sub_carry(c, c.r[7], 0x20u);
    c.r[5] = c.r[7] + 0xffffffffu;
    c.r[4] = wp::srw(c.r[0], c.r[4]);
    c.r[0] = wp::slw(c.r[0], c.r[7]);
    c.r[3] = c.r[3] - c.r[5];
    c.r[6] = c.r[6] | c.r[4];
L_801d7cf8:
    c.r[4] = c.r[3] + 0xfffffc01u;
    c.r[5] = c.r[6] & 0xfffffu;
    c.r[4] = c.r[4] & 0x1u;
    wp::record(c, c.r[4]);
    c.r[6] = c.r[5] | 0x100000u;
    if (wp::cr_get(c, 2)) goto L_801d7d1c;
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[6];
    c.r[6] = c.r[5] + c.r[4];
    c.r[0] = c.r[0] + c.r[0];
L_801d7d1c:
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[6];
    c.r[6] = c.r[5] + c.r[4];
    c.r[0] = c.r[0] + c.r[0];
    c.r[9] = 0x0u;
    c.r[11] = 0x0u;
    c.r[10] = 0x0u;
    c.r[12] = 0x0u;
    c.r[7] = 0x200000u;
    goto L_801d7d70;
L_801d7d44:
    c.r[4] = c.r[11] + c.r[7];
    wp::compare_signed(c, 0, c.r[4], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_801d7d5c;
    c.r[11] = c.r[4] + c.r[7];
    c.r[6] = c.r[6] - c.r[4];
    c.r[12] = c.r[12] + c.r[7];
L_801d7d5c:
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[6];
    c.r[6] = c.r[5] + c.r[4];
    c.r[0] = c.r[0] + c.r[0];
    c.r[7] = wp::rotl(c.r[7], 31) & 0x7fffffffu;
L_801d7d70:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d7d44;
    }
    c.r[7] = 0x80000000u;
    goto L_801d7de8;
L_801d7d80:
    wp::compare_signed(c, 0, c.r[11], c.r[6]);
    c.r[5] = c.r[11] | c.r[11];
    c.r[8] = c.r[9] + c.r[7];
    if (wp::cr_get(c, 0)) goto L_801d7d9c;
    if (!wp::cr_get(c, 2)) goto L_801d7dd4;
    wp::compare_unsigned(c, 0, c.r[8], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801d7dd4;
L_801d7d9c:
    c.r[4] = c.r[8] & 0x80000000u;
    c.r[9] = c.r[8] + c.r[7];
    c.r[4] = c.r[4] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[4], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d7dbc;
    c.r[4] = c.r[9] & 0x80000000u;
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 2)) goto L_801d7dbc;
    c.r[11] = c.r[11] + 0x1u;
L_801d7dbc:
    wp::compare_unsigned(c, 0, c.r[0], c.r[8]);
    c.r[6] = c.r[6] - c.r[5];
    if (!wp::cr_get(c, 0)) goto L_801d7dcc;
    c.r[6] = c.r[6] + 0xffffffffu;
L_801d7dcc:
    c.r[0] = c.r[0] - c.r[8];
    c.r[10] = c.r[10] + c.r[7];
L_801d7dd4:
    c.r[5] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[4] = c.r[6] + c.r[6];
    c.r[6] = c.r[5] + c.r[4];
    c.r[0] = c.r[0] + c.r[0];
    c.r[7] = wp::rotl(c.r[7], 31) & 0x7fffffffu;
L_801d7de8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d7d80;
    }
    c.r[0] = c.r[6] | c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d7e4c;
    ea = c.r[2] + 0xffff9ec0u;
    c.f[0] = wp::rdf64(ea);
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    wp::compare_float(c, 0, c.f[0], c.f[0]);
    wp::cr_set(c, 2, wp::cr_get(c, 1) || wp::cr_get(c, 2));
    if (!wp::cr_get(c, 2)) goto L_801d7e4c;
    c.r[0] = c.r[10] + 0x10000u;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[0]);
    wp::compare_unsigned(c, 0, c.r[0], 0xffffu);
    if (!wp::cr_get(c, 2)) goto L_801d7e28;
    c.r[10] = 0x0u;
    c.r[12] = c.r[12] + 0x1u;
    goto L_801d7e4c;
L_801d7e28:
    wp::compare_float(c, 0, c.f[0], c.f[0]);
    if (!wp::cr_get(c, 1)) goto L_801d7e44;
    wp::compare_unsigned(c, 0, c.r[0], 0xfffeu);
    if (!wp::cr_get(c, 2)) goto L_801d7e3c;
    c.r[12] = c.r[12] + 0x1u;
L_801d7e3c:
    c.r[10] = c.r[10] + 0x2u;
    goto L_801d7e4c;
L_801d7e44:
    c.r[0] = c.r[10] & 0x1u;
    c.r[10] = c.r[10] + c.r[0];
L_801d7e4c:
    c.r[0] = c.r[12] & 0x1u;
    c.r[4] = wp::sraw(c, c.r[12], 1);
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    c.r[5] = wp::rotl(c.r[10], 31) & 0x7fffffffu;
    c.r[4] = c.r[4] + 0x3fe00000u;
    if (!wp::cr_get(c, 2)) goto L_801d7e68;
    c.r[5] = c.r[5] | 0x80000000u;
L_801d7e68:
    c.r[0] = c.r[3] + 0xfffffc01u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[0] = wp::rotl(c.r[0], 19) & 0xfff00000u;
    c.r[4] = c.r[4] + c.r[0];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x10u;
    c.f[1] = wp::rdf64(ea);
L_801d7e80:
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d7e88(wp::Cpu& c) {
    WP_ENTER(0x801d7e88u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_801d7e8c(wp::Cpu& c) {
    WP_ENTER(0x801d7e8cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d7c40(c);
    return;
}

void f_801d7e90(wp::Cpu& c) {
    WP_ENTER(0x801d7e90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = 0x80230000u;
    c.r[5] = c.r[5] + 0x1128u;
    ea = c.r[5] + 0x38u;
    c.r[6] = wp::rd32(ea);
L_801d7e9c:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[5] = 0x1u;
    c.r[3] = c.r[3] + 0x1u;
    c.r[7] = wp::sign_extend8(c.r[0]);
    wp::compare_unsigned(c, 0, c.r[7], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801d7eb8;
    c.r[5] = 0x0u;
L_801d7eb8:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d7ec4;
    goto L_801d7ecc;
L_801d7ec4:
    ea = c.r[6] + 0x10u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[7];
    c.r[7] = wp::rd8(ea);
L_801d7ecc:
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    c.r[7] = wp::sign_extend8(c.r[7]);
    c.r[5] = 0x1u;
    c.r[4] = c.r[4] + 0x1u;
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::compare_unsigned(c, 0, c.r[0], 0xffu);
    if (wp::cr_get(c, 1)) goto L_801d7eec;
    c.r[5] = 0x0u;
L_801d7eec:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d7ef8;
    goto L_801d7f00;
L_801d7ef8:
    ea = c.r[6] + 0x10u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[5] + c.r[0];
    c.r[0] = wp::rd8(ea);
L_801d7f00:
    c.r[0] = wp::sign_extend8(c.r[0]);
    wp::compare_signed(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d7f14;
    c.r[3] = 0xffffffffu;
    return;
L_801d7f14:
    if (!wp::cr_get(c, 1)) goto L_801d7f20;
    c.r[3] = 0x1u;
    return;
L_801d7f20:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d7e9c;
    }
    c.r[3] = 0x0u;
    return;
}

void f_801d7f30(wp::Cpu& c) {
    WP_ENTER(0x801d7f30u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::trap(c, 0x801d7f30u);
    return;
    wp::trap(c, 0x801d7f38u);
    return;
    wp::trap(c, 0x801d7f40u);
    return;
    wp::trap(c, 0x801d7f48u);
    return;
}

void f_801d7f50(wp::Cpu& c) {
    WP_ENTER(0x801d7f50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d7f60u: goto R_801d7f60;
        case 0x801d7f78u: goto R_801d7f78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d7f60u;
    f_801c6de8(c);
R_801d7f60:
    c.r[3] = 0x802f0000u;
    c.r[4] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x3478u;
    c.r[5] = 0x500u;
    c.r[4] = c.r[4] + 0x2f78u;
    c.lr = 0x801d7f78u;
    f_801d820c(c);
R_801d7f78:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d7f8c(wp::Cpu& c) {
    WP_ENTER(0x801d7f8cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_801d7f94(wp::Cpu& c) {
    WP_ENTER(0x801d7f94u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff9470u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d7fa8;
    c.r[3] = 0xffffd8ebu;
    return;
L_801d7fa8:
    c.r[0] = 0x1u;
    ea = c.r[13] + 0xffff9470u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    return;
}

void f_801d7fb8(wp::Cpu& c) {
    WP_ENTER(0x801d7fb8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_801d7fc0(wp::Cpu& c) {
    WP_ENTER(0x801d7fc0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8000u: goto R_801d8000;
        case 0x801d8018u: goto R_801d8018;
        case 0x801d8034u: goto R_801d8034;
        case 0x801d803cu: goto R_801d803c;
        case 0x801d805cu: goto R_801d805c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffae0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x524u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50cu;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[3] | c.r[3];
    c.r[28] = c.r[4] | c.r[4];
    c.r[30] = 0x0u;
    ea = c.r[13] + 0xffff9470u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d7ff0;
    c.r[3] = 0xffffd8efu;
    goto L_801d8060;
L_801d7ff0:
    c.r[31] = 0x802f0000u;
    goto L_801d8034;
L_801d7ff8:
    c.r[30] = 0x0u;
    c.lr = 0x801d8000u;
    f_801c6e98(c);
R_801d8000:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d8034;
    c.r[4] = c.r[28] | c.r[28];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d8018u;
    f_801c6f3c(c);
R_801d8018:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d8034;
    c.r[5] = c.r[29] | c.r[29];
    c.r[3] = c.r[31] + 0x3478u;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801d8034u;
    f_801d8230(c);
L_801d8034:
R_801d8034:
    c.r[3] = c.r[31] + 0x3478u;
    c.lr = 0x801d803cu;
    f_801d8204(c);
R_801d803c:
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d7ff8;
    }
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d805c;
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[31] + 0x3478u;
    c.lr = 0x801d805cu;
    f_801d8338(c);
L_801d805c:
R_801d805c:
    c.r[3] = c.r[30] | c.r[30];
L_801d8060:
    ea = c.r[1] + 0x50cu;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x524u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x520u;
    return;
}

void f_801d8074(wp::Cpu& c) {
    WP_ENTER(0x801d8074u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d80b4u: goto R_801d80b4;
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
    ea = c.r[13] + 0xffff9470u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d80c4;
    c.r[3] = 0xffffd8efu;
    goto L_801d80d0;
    goto L_801d80c4;
L_801d80a8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] | c.r[31];
    c.lr = 0x801d80b4u;
    f_801c6fbc(c);
R_801d80b4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d80cc;
    c.r[30] = c.r[30] + c.r[3];
    c.r[31] = c.r[31] - c.r[3];
L_801d80c4:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d80a8;
    }
L_801d80cc:
    c.r[3] = 0x0u;
L_801d80d0:
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

void f_801d80e8(wp::Cpu& c) {
    WP_ENTER(0x801d80e8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d80f8u: goto R_801d80f8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d80f8u;
    f_801c70d0(c);
R_801d80f8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d810c(wp::Cpu& c) {
    WP_ENTER(0x801d810cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d811cu: goto R_801d811c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d811cu;
    f_801c70cc(c);
R_801d811c:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8130(wp::Cpu& c) {
    WP_ENTER(0x801d8130u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8144u: goto R_801d8144;
        case 0x801d8164u: goto R_801d8164;
        case 0x801d8180u: goto R_801d8180;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffaf0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x514u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x50cu;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801d8144u;
    f_801c6e98(c);
R_801d8144:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 1)) goto L_801d8158;
    c.r[3] = 0x0u;
    goto L_801d8190;
L_801d8158:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d8164u;
    f_801c6f3c(c);
R_801d8164:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d8184;
    c.r[3] = 0x802f0000u;
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[3] + 0x3478u;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801d8180u;
    f_801d8230(c);
R_801d8180:
    goto L_801d818c;
L_801d8184:
    c.r[3] = 0xffffd8e7u;
    goto L_801d8190;
L_801d818c:
    c.r[3] = c.r[31] | c.r[31];
L_801d8190:
    ea = c.r[1] + 0x514u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x50cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x510u;
    return;
}

void f_801d81a4(wp::Cpu& c) {
    WP_ENTER(0x801d81a4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d81b4u: goto R_801d81b4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d81b4u;
    f_801c6e44(c);
R_801d81b4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d81c8(wp::Cpu& c) {
    WP_ENTER(0x801d81c8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_801d81cc(wp::Cpu& c) {
    WP_ENTER(0x801d81ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d81e4u: goto R_801d81e4;
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
    c.lr = 0x801d81e4u;
    f_8013c030(c);
R_801d81e4:
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d81fc(wp::Cpu& c) {
    WP_ENTER(0x801d81fcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    f_8013c070(c);
    return;
}

void f_801d8204(wp::Cpu& c) {
    WP_ENTER(0x801d8204u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x10u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_801d820c(wp::Cpu& c) {
    WP_ENTER(0x801d820cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x10u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x14u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = c.r[3] + 0x18u;
    f_801d81c8(c);
    return;
}

void f_801d8230(wp::Cpu& c) {
    WP_ENTER(0x801d8230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8274u: goto R_801d8274;
        case 0x801d829cu: goto R_801d829c;
        case 0x801d82b8u: goto R_801d82b8;
        case 0x801d82c8u: goto R_801d82c8;
        case 0x801d8314u: goto R_801d8314;
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
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d826c;
    c.r[3] = 0xffffffffu;
    goto L_801d8318;
L_801d826c:
    c.r[3] = c.r[3] + 0x18u;
    c.lr = 0x801d8274u;
    f_801d81cc(c);
R_801d8274:
    ea = c.r[30] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[3] - c.r[4];
    c.r[29] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[29], c.r[31]);
    if (wp::cr_get(c, 0)) goto L_801d82ac;
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801d829cu;
    f_800043c4(c);
R_801d829c:
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_801d82d8;
L_801d82ac:
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.lr = 0x801d82b8u;
    f_800043c4(c);
R_801d82b8:
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[28] + c.r[29];
    c.r[5] = c.r[31] - c.r[29];
    c.lr = 0x801d82c8u;
    f_800043c4(c);
R_801d82c8:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[31];
    c.r[0] = c.r[0] - c.r[29];
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801d82d8:
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d82f4;
    ea = c.r[30] + 0x4u;
    wp::wr32(ea, c.r[4]);
L_801d82f4:
    ea = c.r[30] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0x18u;
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] - c.r[31];
    ea = c.r[30] + 0x14u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d8314u;
    f_801d81fc(c);
R_801d8314:
    c.r[3] = 0x0u;
L_801d8318:
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

void f_801d8338(wp::Cpu& c) {
    WP_ENTER(0x801d8338u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d837cu: goto R_801d837c;
        case 0x801d83a4u: goto R_801d83a4;
        case 0x801d83c0u: goto R_801d83c0;
        case 0x801d83d0u: goto R_801d83d0;
        case 0x801d841cu: goto R_801d841c;
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
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[4] | c.r[4];
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801d8374;
    c.r[3] = 0xffffffffu;
    goto L_801d8420;
L_801d8374:
    c.r[3] = c.r[3] + 0x18u;
    c.lr = 0x801d837cu;
    f_801d81cc(c);
R_801d837c:
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[4] - c.r[3];
    c.r[29] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[31], c.r[29]);
    if (!wp::cr_get(c, 0)) goto L_801d83b4;
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801d83a4u;
    f_800043c4(c);
R_801d83a4:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d83e0;
L_801d83b4:
    c.r[3] = c.r[28] | c.r[28];
    c.r[5] = c.r[29] | c.r[29];
    c.lr = 0x801d83c0u;
    f_800043c4(c);
R_801d83c0:
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] + c.r[29];
    c.r[5] = c.r[31] - c.r[29];
    c.lr = 0x801d83d0u;
    f_800043c4(c);
R_801d83d0:
    ea = c.r[30] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[31];
    c.r[0] = c.r[0] - c.r[29];
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d83e0:
    ea = c.r[30] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d83fc;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[4]);
L_801d83fc:
    ea = c.r[30] + 0x14u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[30] + 0x18u;
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd32(ea);
    c.r[4] = c.r[4] + c.r[31];
    ea = c.r[30] + 0x14u;
    wp::wr32(ea, c.r[4]);
    c.r[0] = c.r[0] - c.r[31];
    ea = c.r[30] + 0x10u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d841cu;
    f_801d81fc(c);
R_801d841c:
    c.r[3] = 0x0u;
L_801d8420:
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

void f_801d8440(wp::Cpu& c) {
    WP_ENTER(0x801d8440u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = 0xffff0000u;
    c.r[5] = c.r[5] | 0xfff1u;
    c.r[5] = c.r[5] & c.r[3];
    c.r[3] = c.r[3] - c.r[5];
    c.r[4] = c.r[4] + c.r[3];
L_801d8454:
    c.r[5] = wp::add_carry(c, c.r[5], 0x8u, 0);
    c.r[4] = wp::add_carry(c, c.r[4], 0xfffffff8u, 0);
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d8454;
    }
    return;
}

void f_801d8478(wp::Cpu& c) {
    WP_ENTER(0x801d8478u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8488u: goto R_801d8488;
        case 0x801d8498u: goto R_801d8498;
        case 0x801d849cu: goto R_801d849c;
        case 0x801d84a0u: goto R_801d84a0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d8488u;
    f_801d9210(c);
R_801d8488:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[13] + 0xffff9478u;
    wp::wr32(ea, c.r[3]);
    if (!wp::cr_get(c, 2)) goto L_801d849c;
    c.lr = 0x801d8498u;
    f_801d92e0(c);
R_801d8498:
    c.lr = 0x801d849cu;
    f_801d84b4(c);
L_801d849c:
R_801d849c:
    c.lr = 0x801d84a0u;
    f_801d92bc(c);
R_801d84a0:
    ea = c.r[13] + 0xffff9478u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d84b4(wp::Cpu& c) {
    WP_ENTER(0x801d84b4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d84dcu: goto R_801d84dc;
        case 0x801d851cu: goto R_801d851c;
        case 0x801d8520u: goto R_801d8520;
        case 0x801d8534u: goto R_801d8534;
        case 0x801d853cu: goto R_801d853c;
        case 0x801d8544u: goto R_801d8544;
        case 0x801d8568u: goto R_801d8568;
        case 0x801d8570u: goto R_801d8570;
        case 0x801d857cu: goto R_801d857c;
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
    c.r[30] = 0x0u;
    goto L_801d8580;
L_801d84d4:
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d84dcu;
    f_801d9098(c);
R_801d84dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d8548;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[30] = 0x0u;
    c.r[0] = c.r[3] + 0xfffffffdu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801d852c;
    wp::compare_signed(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801d8514;
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801d8524;
    wp::compare_signed(c, 0, c.r[3], 0x5u);
    if (wp::cr_get(c, 2)) goto L_801d8538;
    goto L_801d853c;
L_801d8514:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d851cu;
    f_801d9f64(c);
R_801d851c:
    c.lr = 0x801d8520u;
    f_801d8804(c);
R_801d8520:
    goto L_801d853c;
L_801d8524:
    c.r[31] = 0x1u;
    goto L_801d853c;
L_801d852c:
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d8534u;
    f_801dc3f0(c);
R_801d8534:
    goto L_801d853c;
L_801d8538:
    c.lr = 0x801d853cu;
    f_801dc918(c);
L_801d853c:
R_801d853c:
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d8544u;
    f_801d9208(c);
R_801d8544:
    goto L_801d8580;
L_801d8548:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d8560;
    ea = c.r[13] + 0xffff9498u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d856c;
L_801d8560:
    c.r[30] = 0x1u;
    c.lr = 0x801d8568u;
    f_801d942c(c);
R_801d8568:
    goto L_801d8580;
L_801d856c:
    c.lr = 0x801d8570u;
    f_801dcb0c(c);
R_801d8570:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d857c;
    c.lr = 0x801d857cu;
    f_801d9ae8(c);
L_801d857c:
R_801d857c:
    c.r[30] = 0x0u;
L_801d8580:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d84d4;
    }
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

void f_801d85a0(wp::Cpu& c) {
    WP_ENTER(0x801d85a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[9] = 0xffu;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d86cc;
    c.r[0] = wp::rotl(c.r[5], 31) & 0x7fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801d8674;
L_801d85c8:
    c.r[12] = c.r[30] & 0xfffffffcu;
    c.r[11] = c.r[4] & 0xfffffffcu;
    c.r[0] = c.r[30] - c.r[12];
    ea = c.r[11] + 0x0u;
    c.r[7] = wp::rd32(ea);
    c.r[10] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[6] = c.r[4] - c.r[11];
    c.r[0] = wp::sub_carry(c, c.r[6], 0x3u);
    c.r[4] = c.r[4] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[31] = wp::rotl(c.r[10], 3) & 0xfffffff8u;
    c.r[0] = wp::srw(c.r[7], c.r[0]);
    c.r[11] = c.r[4] & 0xfffffffcu;
    c.r[0] = c.r[0] & 0xffu;
    ea = c.r[12] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[10] = wp::slw(c.r[9], c.r[31]);
    c.r[6] = c.r[4] - c.r[11];
    c.r[0] = wp::slw(c.r[0], c.r[31]);
    c.r[30] = c.r[30] + 0x1u;
    c.r[7] = c.r[8] & ~c.r[10];
    c.r[4] = c.r[4] + 0x1u;
    c.r[0] = c.r[10] & c.r[0];
    c.r[0] = c.r[7] | c.r[0];
    ea = c.r[12] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[12] = c.r[30] & 0xfffffffcu;
    c.r[0] = c.r[30] - c.r[12];
    ea = c.r[11] + 0x0u;
    c.r[7] = wp::rd32(ea);
    c.r[10] = wp::sub_carry(c, c.r[0], 0x3u);
    ea = c.r[12] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[6], 0x3u);
    c.r[30] = c.r[30] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[31] = wp::rotl(c.r[10], 3) & 0xfffffff8u;
    c.r[0] = wp::srw(c.r[7], c.r[0]);
    c.r[0] = c.r[0] & 0xffu;
    c.r[10] = wp::slw(c.r[9], c.r[31]);
    c.r[0] = wp::slw(c.r[0], c.r[31]);
    c.r[7] = c.r[8] & ~c.r[10];
    c.r[0] = c.r[10] & c.r[0];
    c.r[0] = c.r[7] | c.r[0];
    ea = c.r[12] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d85c8;
    }
    c.r[5] = c.r[5] & 0x1u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) goto L_801d86cc;
L_801d8674:
    c.ctr = c.r[5];
L_801d8678:
    c.r[12] = c.r[30] & 0xfffffffcu;
    c.r[11] = c.r[4] & 0xfffffffcu;
    c.r[0] = c.r[30] - c.r[12];
    ea = c.r[11] + 0x0u;
    c.r[7] = wp::rd32(ea);
    c.r[10] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[6] = c.r[4] - c.r[11];
    c.r[0] = wp::sub_carry(c, c.r[6], 0x3u);
    ea = c.r[12] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[31] = wp::rotl(c.r[10], 3) & 0xfffffff8u;
    c.r[0] = wp::srw(c.r[7], c.r[0]);
    c.r[4] = c.r[4] + 0x1u;
    c.r[0] = c.r[0] & 0xffu;
    c.r[10] = wp::slw(c.r[9], c.r[31]);
    c.r[0] = wp::slw(c.r[0], c.r[31]);
    c.r[30] = c.r[30] + 0x1u;
    c.r[7] = c.r[8] & ~c.r[10];
    c.r[0] = c.r[10] & c.r[0];
    c.r[0] = c.r[7] | c.r[0];
    ea = c.r[12] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d8678;
    }
L_801d86cc:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d86dc(wp::Cpu& c) {
    WP_ENTER(0x801d86dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[8] = c.r[4] & 0xffu;
    c.r[7] = c.r[3] | c.r[3];
    c.r[6] = 0xffu;
    if (wp::cr_get(c, 2)) return;
    c.r[0] = wp::rotl(c.r[5], 30) & 0x3fffffffu;
    wp::record(c, c.r[0]);
    c.ctr = c.r[0];
    if (wp::cr_get(c, 2)) goto L_801d87c8;
L_801d86fc:
    c.r[10] = c.r[7] & 0xfffffffcu;
    c.r[0] = c.r[7] - c.r[10];
    ea = c.r[10] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[9] = wp::slw(c.r[6], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[4] = c.r[4] & ~c.r[9];
    c.r[0] = c.r[9] & c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[10] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[10] = c.r[7] & 0xfffffffcu;
    c.r[0] = c.r[7] - c.r[10];
    ea = c.r[10] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[9] = wp::slw(c.r[6], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[4] = c.r[4] & ~c.r[9];
    c.r[0] = c.r[9] & c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[10] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[10] = c.r[7] & 0xfffffffcu;
    c.r[0] = c.r[7] - c.r[10];
    ea = c.r[10] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[9] = wp::slw(c.r[6], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[4] = c.r[4] & ~c.r[9];
    c.r[0] = c.r[9] & c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[10] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[10] = c.r[7] & 0xfffffffcu;
    c.r[0] = c.r[7] - c.r[10];
    ea = c.r[10] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[9] = wp::slw(c.r[6], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[4] = c.r[4] & ~c.r[9];
    c.r[0] = c.r[9] & c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[10] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d86fc;
    }
    c.r[5] = c.r[5] & 0x3u;
    wp::record(c, c.r[5]);
    if (wp::cr_get(c, 2)) return;
L_801d87c8:
    c.ctr = c.r[5];
L_801d87cc:
    c.r[10] = c.r[7] & 0xfffffffcu;
    c.r[0] = c.r[7] - c.r[10];
    ea = c.r[10] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[7] = c.r[7] + 0x1u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[9] = wp::slw(c.r[6], c.r[0]);
    c.r[0] = wp::slw(c.r[8], c.r[0]);
    c.r[4] = c.r[4] & ~c.r[9];
    c.r[0] = c.r[9] & c.r[0];
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[10] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.ctr--;
    if (c.ctr != 0) {
    WP_POLL(c);
    goto L_801d87cc;
    }
    return;
}

void f_801d8804(wp::Cpu& c) {
    WP_ENTER(0x801d8804u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8828u: goto R_801d8828;
        case 0x801d8854u: goto R_801d8854;
        case 0x801d8864u: goto R_801d8864;
        case 0x801d8874u: goto R_801d8874;
        case 0x801d8884u: goto R_801d8884;
        case 0x801d8894u: goto R_801d8894;
        case 0x801d88a4u: goto R_801d88a4;
        case 0x801d88b4u: goto R_801d88b4;
        case 0x801d88c4u: goto R_801d88c4;
        case 0x801d88d4u: goto R_801d88d4;
        case 0x801d88e4u: goto R_801d88e4;
        case 0x801d88f4u: goto R_801d88f4;
        case 0x801d8904u: goto R_801d8904;
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
    c.r[31] = 0x500u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.lr = 0x801d8828u;
    f_801d9fd8(c);
R_801d8828:
    ea = c.r[30] + 0x10u;
    c.r[0] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1au);
    if (wp::cr_get(c, 1)) goto L_801d8908;
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x1640u;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801d884cu: goto L_801d884c;
    case 0x801d885cu: goto L_801d885c;
    case 0x801d886cu: goto L_801d886c;
    case 0x801d887cu: goto L_801d887c;
    case 0x801d888cu: goto L_801d888c;
    case 0x801d889cu: goto L_801d889c;
    case 0x801d88acu: goto L_801d88ac;
    case 0x801d88bcu: goto L_801d88bc;
    case 0x801d88ccu: goto L_801d88cc;
    case 0x801d88dcu: goto L_801d88dc;
    case 0x801d88ecu: goto L_801d88ec;
    case 0x801d88fcu: goto L_801d88fc;
    case 0x801d8908u: goto L_801d8908;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801d884c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8854u;
    f_801da6bc(c);
R_801d8854:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d885c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8864u;
    f_801da72c(c);
R_801d8864:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d886c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8874u;
    f_801da7b4(c);
R_801d8874:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d887c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8884u;
    f_801da820(c);
R_801d8884:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d888c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8894u;
    f_801da88c(c);
R_801d8894:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d889c:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88a4u;
    f_801daac0(c);
R_801d88a4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88ac:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88b4u;
    f_801dacd0(c);
R_801d88b4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88bc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88c4u;
    f_801daecc(c);
R_801d88c4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88cc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88d4u;
    f_801db16c(c);
R_801d88d4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88dc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88e4u;
    f_801db230(c);
R_801d88e4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88ec:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d88f4u;
    f_801db4b4(c);
R_801d88f4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801d8908;
L_801d88fc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801d8904u;
    f_801db56c(c);
R_801d8904:
    c.r[31] = c.r[3] | c.r[3];
L_801d8908:
    c.r[3] = c.r[31] | c.r[31];
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

void f_801d8924(wp::Cpu& c) {
    WP_ENTER(0x801d8924u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8974u: goto R_801d8974;
        case 0x801d899cu: goto R_801d899c;
        default: wp::bad_resume(c);
        }
    }
    c.r[1] = c.r[1] + 0xfffffffcu;
    ea = c.r[1] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] | 0x5008u;
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    ea = c.r[1] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x4u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[1]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.lr;
    ea = c.r[3] + 0x84u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x80u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = wp::mfcr(c);
    ea = c.r[3] + 0x88u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.msr;
    c.r[3] = c.r[4] | 0x8000u;
    c.r[3] = c.r[3] ^ 0x8000u;
    c.msr = c.r[3];
    c.spr[27] = c.r[4];
    c.lr = 0x801d8974u;
    f_801d9b1c(c);
R_801d8974:
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] | 0x5008u;
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.r[0] = 0x0u;
    c.spr[1010] = c.r[0];
    c.spr[1013] = c.r[0];
    c.r[1] = 0x80300000u;
    c.r[1] = c.r[1] | 0xa808u;
    c.r[3] = c.r[5] | c.r[5];
    c.lr = 0x801d899cu;
    f_801d8d08(c);
R_801d899c:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d89b4;
    ea = c.r[3] + 0x84u;
    c.r[4] = wp::rd32(ea);
    c.lr = c.r[4];
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    return;
L_801d89b4:
    f_801d8478(c);
    return;
    return;
}

void f_801d89bc(wp::Cpu& c) {
    WP_ENTER(0x801d89bcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8a08u: goto R_801d8a08;
        case 0x801d8a30u: goto R_801d8a30;
        default: wp::bad_resume(c);
        }
    }
    c.r[1] = c.r[1] + 0xfffffffcu;
    ea = c.r[1] + 0x0u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] | 0x5008u;
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    ea = c.r[1] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[1] = c.r[1] + 0x4u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[1]);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.lr;
    ea = c.r[3] + 0x84u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x80u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = wp::mfcr(c);
    ea = c.r[3] + 0x88u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.msr;
    c.r[3] = c.r[4] | 0x8000u;
    c.msr = c.r[3];
    c.spr[27] = c.r[4];
    c.lr = 0x801d8a08u;
    f_801d9b1c(c);
R_801d8a08:
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] | 0x5008u;
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.r[0] = 0x0u;
    c.spr[1010] = c.r[0];
    c.spr[1013] = c.r[0];
    c.r[1] = 0x80300000u;
    c.r[1] = c.r[1] | 0xa808u;
    c.r[3] = 0x2u;
    c.lr = 0x801d8a30u;
    f_801d8d08(c);
R_801d8a30:
    wp::compare_signed(c, 0, c.r[3], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d8a48;
    ea = c.r[3] + 0x84u;
    c.r[4] = wp::rd32(ea);
    c.lr = c.r[4];
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    return;
L_801d8a48:
    f_801d8478(c);
    return;
    return;
}

void f_801d8a50(wp::Cpu& c) {
    WP_ENTER(0x801d8a50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    f_801d8e98(c);
    return;
}

void f_801d8a54(wp::Cpu& c) {
    WP_ENTER(0x801d8a54u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff9480u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    if (wp::cr_get(c, 0)) goto L_801d8a80;
    c.r[0] = c.r[4] + 0x4000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d8a80;
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x5008u;
    ea = c.r[4] + 0x238u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x3u;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) return;
L_801d8a80:
    c.r[0] = 0x3000000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d8a98;
    c.r[0] = c.r[3] & 0x3fffffffu;
    c.r[3] = c.r[0] | 0x80000000u;
    return;
L_801d8a98:
    c.r[0] = 0x10000000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) return;
    c.r[0] = 0x1c000000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) return;
    c.r[0] = c.r[3] & 0x3fffffffu;
    c.r[3] = c.r[0] | 0x90000000u;
    return;
}

void f_801d8abc(wp::Cpu& c) {
    WP_ENTER(0x801d8abcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8bc0u: goto R_801d8bc0;
        case 0x801d8bccu: goto R_801d8bcc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    ea = c.r[13] + 0xffff9480u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], 0x44u);
    if (wp::cr_get(c, 1)) goto L_801d8b00;
    c.r[0] = c.r[3] + 0x4000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x44u);
    if (!wp::cr_get(c, 1)) goto L_801d8b00;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[3] + 0x238u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d8b00;
    c.r[3] = 0x44u;
    goto L_801d8b08;
L_801d8b00:
    c.r[3] = 0x80000000u;
    c.r[3] = c.r[3] + 0x44u;
L_801d8b08:
    c.r[31] = 0x80230000u;
    c.r[24] = 0x802f0000u;
    c.r[28] = 0x80000000u;
    ea = c.r[3] + 0x0u;
    c.r[29] = wp::rd32(ea);
    c.r[31] = c.r[31] + 0x16b0u;
    c.r[24] = c.r[24] + 0x5008u;
    c.r[28] = c.r[28] + 0x4744u;
    c.r[30] = 0x0u;
    c.r[25] = 0x3000000u;
    c.r[27] = 0x1c000000u;
    c.r[26] = 0x10000000u;
    c.r[23] = 0x1u;
L_801d8b38:
    c.r[0] = wp::slw(c.r[23], c.r[30]);
    c.r[0] = c.r[29] & c.r[0];
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d8bcc;
    wp::compare_signed(c, 0, c.r[30], 0x4u);
    if (wp::cr_get(c, 2)) goto L_801d8bcc;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[13] + 0xffff9480u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[3]);
    if (wp::cr_get(c, 0)) goto L_801d8b7c;
    c.r[0] = c.r[3] + 0x4000u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d8b7c;
    ea = c.r[24] + 0x238u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x3u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801d8b7c;
    c.r[22] = c.r[4] | c.r[4];
    goto L_801d8bb0;
L_801d8b7c:
    wp::compare_unsigned(c, 0, c.r[4], c.r[25]);
    if (!wp::cr_get(c, 0)) goto L_801d8b90;
    c.r[0] = c.r[4] & 0x3fffffffu;
    c.r[22] = c.r[0] | 0x80000000u;
    goto L_801d8bb0;
L_801d8b90:
    wp::compare_unsigned(c, 0, c.r[4], c.r[26]);
    if (wp::cr_get(c, 0)) goto L_801d8bac;
    wp::compare_unsigned(c, 0, c.r[4], c.r[27]);
    if (!wp::cr_get(c, 0)) goto L_801d8bac;
    c.r[0] = c.r[4] & 0x3fffffffu;
    c.r[22] = c.r[0] | 0x90000000u;
    goto L_801d8bb0;
L_801d8bac:
    c.r[22] = c.r[4] | c.r[4];
L_801d8bb0:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = c.r[28] + c.r[4];
    c.r[5] = 0x100u;
    c.lr = 0x801d8bc0u;
    f_801d85a0(c);
R_801d8bc0:
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x100u;
    c.lr = 0x801d8bccu;
    f_801d8440(c);
L_801d8bcc:
R_801d8bcc:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0xeu);
    if (!wp::cr_get(c, 1)) {
    WP_POLL(c);
    goto L_801d8b38;
    }
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 22; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801d8bf0(wp::Cpu& c) {
    WP_ENTER(0x801d8bf0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8c14u: goto R_801d8c14;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x802f0000u;
    c.r[31] = c.r[31] + 0x4f60u;
    ea = c.r[31] + 0x98u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d8c14u;
    f_801db7c4(c);
R_801d8c14:
    ea = c.r[31] + 0x8cu;
    wp::wr32(ea, c.r[3]);
    c.r[0] = 0xe0000000u;
    c.r[3] = 0x0u;
    ea = c.r[13] + 0xffff9480u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8c38(wp::Cpu& c) {
    WP_ENTER(0x801d8c38u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    c.r[4] = 0x0u;
    c.r[5] = 0x0u;
    f_8013e990(c);
    return;
}

void f_801d8c48(wp::Cpu& c) {
    WP_ENTER(0x801d8c48u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[1] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[2] = wp::rd32(ea);
    ea = c.r[3] + 0x1a2u;
    c.r[5] = wp::rd16(ea);
    c.r[6] = c.r[5] & 0x2u;
    wp::record(c, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_801d8c70;
    c.r[5] = c.r[5] & 0xfffffffdu;
    ea = c.r[3] + 0x1a2u;
    wp::wr16(ea, c.r[5]);
    ea = c.r[3] + 0x14u;
    for (uint32_t k = 5; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    goto L_801d8c74;
L_801d8c70:
    ea = c.r[3] + 0x34u;
    for (uint32_t k = 13; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
L_801d8c74:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[4] | c.r[4];
    ea = c.r[31] + 0x80u;
    c.r[4] = wp::rd32(ea);
    wp::mtcrf(c, 0xff, c.r[4]);
    ea = c.r[31] + 0x84u;
    c.r[4] = wp::rd32(ea);
    c.lr = c.r[4];
    ea = c.r[31] + 0x88u;
    c.r[4] = wp::rd32(ea);
    c.ctr = c.r[4];
    ea = c.r[31] + 0x8cu;
    c.r[4] = wp::rd32(ea);
    wp::mtxer(c, c.r[4]);
    c.r[4] = c.msr;
    c.r[4] = c.r[4] & 0xffff7fffu;
    c.r[4] = c.r[4] & 0xfffffffdu;
    c.msr = c.r[4];
    c.spr[273] = c.r[2];
    ea = c.r[31] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.spr[274] = c.r[4];
    ea = c.r[31] + 0x10u;
    c.r[4] = wp::rd32(ea);
    c.spr[275] = c.r[4];
    ea = c.r[31] + 0x198u;
    c.r[2] = wp::rd32(ea);
    ea = c.r[31] + 0x19cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[31] + 0x7cu;
    c.r[31] = wp::rd32(ea);
    f_801dbff0(c);
    return;
}

void f_801d8cd0(wp::Cpu& c) {
    WP_ENTER(0x801d8cd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8ce8u: goto R_801d8ce8;
        case 0x801d8cf4u: goto R_801d8cf4;
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
    c.lr = 0x801d8ce8u;
    f_8013f7e0(c);
R_801d8ce8:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = 0x500u;
    c.lr = 0x801d8cf4u;
    f_801d8c48(c);
R_801d8cf4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8d08(wp::Cpu& c) {
    WP_ENTER(0x801d8d08u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8d34u: goto R_801d8d34;
        case 0x801d8d48u: goto R_801d8d48;
        case 0x801d8d74u: goto R_801d8d74;
        case 0x801d8e0cu: goto R_801d8e0c;
        case 0x801d8e18u: goto R_801d8e18;
        case 0x801d8e24u: goto R_801d8e24;
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
    c.r[4] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = 0x80230000u;
    c.r[3] = c.r[30] + 0x16f0u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8d34u;
    f_80138880(c);
R_801d8d34:
    c.r[30] = c.r[30] + 0x16f0u;
    c.r[4] = 0x40u;
    c.r[3] = c.r[30] + 0x15u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8d48u;
    f_80138880(c);
R_801d8d48:
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    c.r[0] = 0x0u;
    ea = c.r[13] + 0xffff9488u;
    wp::wr8(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d8d60;
    c.r[3] = 0x0u;
    goto L_801d8e28;
L_801d8d60:
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801d8dfc;
    c.r[3] = c.r[30] + 0x3au;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8d74u;
    f_80138880(c);
R_801d8d74:
    c.r[3] = 0x802f0000u;
    c.r[30] = 0x801d0000u;
    c.r[31] = 0x801d0000u;
    c.r[11] = 0x801d0000u;
    c.r[10] = 0x801d0000u;
    c.r[9] = 0x801e0000u;
    c.r[8] = 0x801d0000u;
    c.r[7] = 0x801e0000u;
    c.r[6] = 0x801e0000u;
    c.r[5] = 0x801e0000u;
    c.r[4] = 0x801e0000u;
    c.r[30] = c.r[30] + 0x7f50u;
    c.r[12] = c.r[3] + 0x3498u;
    c.r[31] = c.r[31] + 0x7f94u;
    c.r[11] = c.r[11] + 0x7fb8u;
    c.r[10] = c.r[10] + 0x7fc0u;
    c.r[9] = c.r[9] + 0xffff8074u;
    c.r[8] = c.r[8] + 0x7f8cu;
    c.r[7] = c.r[7] + 0xffff8130u;
    c.r[6] = c.r[6] + 0xffff80e8u;
    c.r[5] = c.r[5] + 0xffff810cu;
    c.r[4] = c.r[4] + 0xffff81a4u;
    ea = c.r[3] + 0x3498u;
    wp::wr32(ea, c.r[30]);
    c.r[3] = 0x0u;
    ea = c.r[12] + 0x18u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[12] + 0x1cu;
    wp::wr32(ea, c.r[11]);
    ea = c.r[12] + 0x10u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[12] + 0x14u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[12] + 0x8u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[12] + 0xcu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[12] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[12] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[12] + 0x4u;
    wp::wr32(ea, c.r[4]);
    goto L_801d8e28;
L_801d8dfc:
    c.r[4] = c.r[31] | c.r[31];
    c.r[3] = c.r[30] + 0x5bu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8e0cu;
    f_80138880(c);
R_801d8e0c:
    c.r[3] = c.r[30] + 0x86u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8e18u;
    f_80138880(c);
R_801d8e18:
    c.r[3] = c.r[30] + 0xb5u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d8e24u;
    f_80138880(c);
R_801d8e24:
    c.r[3] = 0x1u;
L_801d8e28:
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

void f_801d8e40(wp::Cpu& c) {
    WP_ENTER(0x801d8e40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    return;
}

void f_801d8e44(wp::Cpu& c) {
    WP_ENTER(0x801d8e44u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8e70u: goto R_801d8e70;
        case 0x801d8e80u: goto R_801d8e80;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x801e0000u;
    c.r[3] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[4] + 0xffff8cd0u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x802f0000u;
    ea = c.r[31] + 0x3498u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801d8e70u;
    wp::call(c, c.ctr);
R_801d8e70:
    c.r[3] = c.r[31] + 0x3498u;
    ea = c.r[3] + 0x18u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801d8e80u;
    wp::call(c, c.ctr);
R_801d8e80:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8e98(wp::Cpu& c) {
    WP_ENTER(0x801d8e98u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff9488u;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) return;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x3498u;
    ea = c.r[3] + 0x4u;
    c.r[12] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[12], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
    return;
}

void f_801d8ec4(wp::Cpu& c) {
    WP_ENTER(0x801d8ec4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x3498u;
    ea = c.r[3] + 0xcu;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_801d8ed8(wp::Cpu& c) {
    WP_ENTER(0x801d8ed8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8ef8u: goto R_801d8ef8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x802f0000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + 0x3498u;
    ea = c.r[5] + 0x10u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801d8ef8u;
    wp::call(c, c.ctr);
R_801d8ef8:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::sraw(c, c.r[0], 31);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8f14(wp::Cpu& c) {
    WP_ENTER(0x801d8f14u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8f34u: goto R_801d8f34;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x802f0000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[5] = c.r[5] + 0x3498u;
    ea = c.r[5] + 0x14u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    c.lr = 0x801d8f34u;
    wp::call(c, c.ctr);
R_801d8f34:
    c.r[0] = 0u - c.r[3];
    c.r[0] = c.r[0] | c.r[3];
    c.r[3] = wp::sraw(c, c.r[0], 31);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8f50(wp::Cpu& c) {
    WP_ENTER(0x801d8f50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x3498u;
    ea = c.r[3] + 0x24u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_801d8f64(wp::Cpu& c) {
    WP_ENTER(0x801d8f64u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x3498u;
    ea = c.r[3] + 0x20u;
    c.r[12] = wp::rd32(ea);
    c.ctr = c.r[12];
    wp::call(c, c.ctr);
    return;
}

void f_801d8f78(wp::Cpu& c) {
    WP_ENTER(0x801d8f78u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = 0x80230000u;
    c.r[4] = c.r[3] | c.r[3];
    c.r[5] = c.r[5] + 0x16f0u;
    c.r[3] = c.r[5] + 0xddu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    f_80138880(c);
    return;
}

void f_801d8f90(wp::Cpu& c) {
    WP_ENTER(0x801d8f90u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d8fb8u: goto R_801d8fb8;
        case 0x801d8fc4u: goto R_801d8fc4;
        case 0x801d8fd0u: goto R_801d8fd0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = c.r[2] + 0xffff9ec8u;
    c.r[5] = 0x4u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x80130000u;
    c.r[31] = c.r[31] + 0x51a0u;
    c.r[3] = c.r[31] + 0x4u;
    c.lr = 0x801d8fb8u;
    f_801d85a0(c);
R_801d8fb8:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x4u;
    c.lr = 0x801d8fc4u;
    f_80137a90(c);
R_801d8fc4:
    c.r[3] = c.r[31] + 0x4u;
    c.r[4] = 0x4u;
    c.lr = 0x801d8fd0u;
    f_80137970(c);
R_801d8fd0:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d8fe4(wp::Cpu& c) {
    WP_ENTER(0x801d8fe4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9008u: goto R_801d9008;
        case 0x801d9024u: goto R_801d9024;
        case 0x801d9030u: goto R_801d9030;
        case 0x801d903cu: goto R_801d903c;
        case 0x801d9050u: goto R_801d9050;
        case 0x801d9058u: goto R_801d9058;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0xcu;
    c.lr = 0x801d9008u;
    f_801d9ec8(c);
R_801d9008:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d9058;
    wp::compare_signed(c, 0, c.r[30], 0x90u);
    if (!wp::cr_get(c, 2)) goto L_801d9028;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9024u;
    f_801dc44c(c);
R_801d9024:
    goto L_801d9030;
L_801d9028:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9030u;
    f_801dc64c(c);
L_801d9030:
R_801d9030:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x801d903cu;
    f_801d96b8(c);
R_801d903c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d9050;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9050u;
    f_801d9f88(c);
L_801d9050:
R_801d9050:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9058u;
    f_801d9f88(c);
L_801d9058:
R_801d9058:
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

void f_801d9074(wp::Cpu& c) {
    WP_ENTER(0x801d9074u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[5] = 0x0u;
    c.r[4] = c.r[3] + 0x34c0u;
    c.r[0] = 0x100u;
    ea = c.r[3] + 0x34c0u;
    wp::wr32(ea, c.r[5]);
    c.r[3] = 0x0u;
    ea = c.r[4] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + 0x20u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_801d9098(wp::Cpu& c) {
    WP_ENTER(0x801d9098u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d90dcu: goto R_801d90dc;
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
    c.r[30] = 0x802f0000u;
    ea = c.r[30] + 0x34c0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 1)) goto L_801d9108;
    c.r[31] = c.r[30] + 0x34c0u;
    c.r[5] = 0xcu;
    ea = c.r[31] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] * 0xcu;
    c.r[4] = c.r[31] + c.r[0];
    c.r[4] = c.r[4] + 0x8u;
    c.lr = 0x801d90dcu;
    f_801d85a0(c);
R_801d90dc:
    ea = c.r[31] + 0x4u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x34c0u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    c.r[0] = c.r[4] + 0xffffffffu;
    ea = c.r[30] + 0x34c0u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801d9104;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801d9104:
    c.r[4] = 0x1u;
L_801d9108:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d9124(wp::Cpu& c) {
    WP_ENTER(0x801d9124u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9160u: goto R_801d9160;
        case 0x801d9198u: goto R_801d9198;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x802f0000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[4] + 0x34c0u;
    c.r[6] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[6], 0x2u);
    if (!wp::cr_get(c, 2)) goto L_801d9164;
    c.r[3] = 0x80230000u;
    c.r[31] = 0x100u;
    c.r[3] = c.r[3] + 0x17d8u;
    c.lr = 0x801d9160u;
    f_80138880(c);
R_801d9160:
    goto L_801d91d0;
L_801d9164:
    c.r[30] = c.r[4] + 0x34c0u;
    c.r[4] = c.r[3] | c.r[3];
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[5] = 0xcu;
    c.r[0] = c.r[0] + c.r[6];
    c.r[3] = wp::rotl(c.r[0], 1) & 0x1u;
    c.r[0] = c.r[0] & 0x1u;
    c.r[0] = c.r[0] ^ c.r[3];
    c.r[0] = c.r[0] - c.r[3];
    c.r[29] = c.r[0] * 0xcu;
    c.r[3] = c.r[30] + c.r[29];
    c.r[3] = c.r[3] + 0x8u;
    c.lr = 0x801d9198u;
    f_801d85a0(c);
R_801d9198:
    c.r[3] = c.r[30] + c.r[29];
    ea = c.r[30] + 0x20u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x20u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[30] + 0x20u;
    wp::wr32(ea, c.r[0]);
    wp::compare_unsigned(c, 0, c.r[0], 0x100u);
    if (!wp::cr_get(c, 0)) goto L_801d91c0;
    c.r[0] = 0x100u;
    ea = c.r[30] + 0x20u;
    wp::wr32(ea, c.r[0]);
L_801d91c0:
    c.r[4] = 0x802f0000u;
    ea = c.r[4] + 0x34c0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[4] + 0x34c0u;
    wp::wr32(ea, c.r[0]);
L_801d91d0:
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

void f_801d91f0(wp::Cpu& c) {
    WP_ENTER(0x801d91f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[5] = 0x0u;
    c.r[0] = 0xffffffffu;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_801d9208(wp::Cpu& c) {
    WP_ENTER(0x801d9208u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0x8u;
    c.r[3] = wp::rd32(ea);
    f_801d9f88(c);
    return;
}

void f_801d9210(wp::Cpu& c) {
    WP_ENTER(0x801d9210u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9228u: goto R_801d9228;
        case 0x801d9238u: goto R_801d9238;
        case 0x801d9248u: goto R_801d9248;
        case 0x801d9250u: goto R_801d9250;
        case 0x801d925cu: goto R_801d925c;
        case 0x801d926cu: goto R_801d926c;
        case 0x801d9288u: goto R_801d9288;
        case 0x801d9294u: goto R_801d9294;
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
    c.lr = 0x801d9228u;
    f_801d92ec(c);
R_801d9228:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d923c;
    c.lr = 0x801d9238u;
    f_801d9074(c);
R_801d9238:
    c.r[31] = c.r[3] | c.r[3];
L_801d923c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d924c;
    c.lr = 0x801d9248u;
    f_801d9ea8(c);
R_801d9248:
    c.r[31] = c.r[3] | c.r[3];
L_801d924c:
    c.lr = 0x801d9250u;
    f_801d8f90(c);
R_801d9250:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9260;
    c.lr = 0x801d925cu;
    f_801d9498(c);
R_801d925c:
    c.r[31] = c.r[3] | c.r[3];
L_801d9260:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9270;
    c.lr = 0x801d926cu;
    f_801d8bf0(c);
R_801d926c:
    c.r[31] = c.r[3] | c.r[3];
L_801d9270:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d92a0;
    c.r[3] = 0x1u;
    c.r[4] = 0x0u;
    c.r[5] = c.r[13] + 0xffff9498u;
    c.lr = 0x801d9288u;
    f_801d8e44(c);
R_801d9288:
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[13] + 0xffff9498u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9294u;
    f_801dcf40(c);
R_801d9294:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d92a0;
    c.r[31] = c.r[30] | c.r[30];
L_801d92a0:
    c.r[3] = c.r[31] | c.r[31];
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

void f_801d92bc(wp::Cpu& c) {
    WP_ENTER(0x801d92bcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d92ccu: goto R_801d92cc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d92ccu;
    f_801d94a0(c);
R_801d92cc:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d92e0(wp::Cpu& c) {
    WP_ENTER(0x801d92e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x17f8u;
    f_801d8f78(c);
    return;
}

void f_801d92ec(wp::Cpu& c) {
    WP_ENTER(0x801d92ecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[3] = 0x12u;
    c.r[5] = 0x34u;
    c.r[4] = 0x56u;
    c.r[0] = 0x78u;
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[3]);
    c.r[6] = 0x1u;
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[4]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[13] + 0xffff9490u;
    wp::wr32(ea, c.r[6]);
    c.r[0] = c.r[4] + 0xedcc0000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x5678u);
    if (!wp::cr_get(c, 2)) goto L_801d9334;
    ea = c.r[13] + 0xffff9490u;
    wp::wr32(ea, c.r[6]);
    goto L_801d9358;
L_801d9334:
    c.r[0] = c.r[4] + 0x87aa0000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x3412u);
    if (!wp::cr_get(c, 2)) goto L_801d9348;
    c.r[0] = 0x0u;
    ea = c.r[13] + 0xffff9490u;
    wp::wr32(ea, c.r[0]);
L_801d9348:
    c.r[0] = c.r[4] + 0x87aa0000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x3412u);
    if (wp::cr_get(c, 2)) goto L_801d9358;
    c.r[3] = 0x1u;
L_801d9358:
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d9360(wp::Cpu& c) {
    WP_ENTER(0x801d9360u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9374u: goto R_801d9374;
        case 0x801d9390u: goto R_801d9390;
        case 0x801d93a0u: goto R_801d93a0;
        case 0x801d93acu: goto R_801d93ac;
        case 0x801d93c4u: goto R_801d93c4;
        case 0x801d93dcu: goto R_801d93dc;
        case 0x801d93f4u: goto R_801d93f4;
        case 0x801d9400u: goto R_801d9400;
        case 0x801d9410u: goto R_801d9410;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffff720u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x8e4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8dcu;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801d9374u;
    f_801d8ec4(c);
R_801d9374:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 1)) goto L_801d9384;
    c.r[3] = 0xffffffffu;
    goto L_801d9418;
L_801d9384:
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801d9390u;
    f_801d9ec8(c);
R_801d9390:
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = 0x0u;
    c.lr = 0x801d93a0u;
    f_801d9fd8(c);
R_801d93a0:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x40u;
    c.lr = 0x801d93acu;
    f_801d8ed8(c);
R_801d93ac:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9408;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0x40u;
    c.lr = 0x801d93c4u;
    f_801da300(c);
R_801d93c4:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.r[4] = wp::add_carry(c, c.r[3], 0xffffffc0u, 0);
    wp::record(c, c.r[4]);
    if (!wp::cr_get(c, 1)) goto L_801d9414;
    c.r[3] = c.r[1] + 0x50u;
    c.lr = 0x801d93dcu;
    f_801d8ed8(c);
R_801d93dc:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d93f8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.lr = 0x801d93f4u;
    f_801da300(c);
R_801d93f4:
    goto L_801d9414;
L_801d93f8:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801d9400u;
    f_801d9f88(c);
R_801d9400:
    c.r[31] = 0xffffffffu;
    goto L_801d9414;
L_801d9408:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801d9410u;
    f_801d9f88(c);
R_801d9410:
    c.r[31] = 0xffffffffu;
L_801d9414:
    c.r[3] = c.r[31] | c.r[31];
L_801d9418:
    ea = c.r[1] + 0x8e4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8dcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x8e0u;
    return;
}

void f_801d942c(wp::Cpu& c) {
    WP_ENTER(0x801d942cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d943cu: goto R_801d943c;
        case 0x801d9448u: goto R_801d9448;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d943cu;
    f_801d9360(c);
R_801d943c:
    wp::compare_signed(c, 0, c.r[3], 0xffffffffu);
    if (wp::cr_get(c, 2)) goto L_801d9448;
    c.lr = 0x801d9448u;
    f_801d9458(c);
L_801d9448:
R_801d9448:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d9458(wp::Cpu& c) {
    WP_ENTER(0x801d9458u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9478u: goto R_801d9478;
        case 0x801d9484u: goto R_801d9484;
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
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d9478u;
    f_801d91f0(c);
R_801d9478:
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801d9484u;
    f_801d9124(c);
R_801d9484:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d9498(wp::Cpu& c) {
    WP_ENTER(0x801d9498u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_801d94a0(wp::Cpu& c) {
    WP_ENTER(0x801d94a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x0u;
    return;
}

void f_801d94a8(wp::Cpu& c) {
    WP_ENTER(0x801d94a8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = c.r[3] + 0xffffffffu;
    c.r[3] = 0xffffffffu;
L_801d94b0:
    ea = c.r[4] + 0x1u;
    c.r[0] = wp::rd8(ea);
    c.r[4] = ea;
    c.r[3] = c.r[3] + 0x1u;
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d94b0;
    }
    return;
}

void f_801d94c4(wp::Cpu& c) {
    WP_ENTER(0x801d94c4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d952cu: goto R_801d952c;
        case 0x801d9580u: goto R_801d9580;
        case 0x801d9590u: goto R_801d9590;
        case 0x801d95b4u: goto R_801d95b4;
        case 0x801d95d4u: goto R_801d95d4;
        case 0x801d95e8u: goto R_801d95e8;
        case 0x801d961cu: goto R_801d961c;
        case 0x801d962cu: goto R_801d962c;
        case 0x801d9658u: goto R_801d9658;
        case 0x801d9664u: goto R_801d9664;
        case 0x801d9670u: goto R_801d9670;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 19; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[24] = c.r[3] | c.r[3];
    c.r[25] = c.r[4] | c.r[4];
    c.r[26] = c.r[5] | c.r[5];
    c.r[27] = c.r[6] | c.r[6];
    c.r[28] = c.r[7] | c.r[7];
    c.r[29] = c.r[8] | c.r[8];
    if (wp::cr_get(c, 2)) goto L_801d9500;
    ea = c.r[5] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9508;
L_801d9500:
    c.r[3] = 0x2u;
    goto L_801d96a4;
L_801d9508:
    c.r[30] = 0x0u;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[30]);
    c.r[31] = 0x0u;
    c.r[23] = 0x0u;
    goto L_801d9674;
L_801d951c:
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801d952cu;
    f_801d86dc(c);
R_801d952c:
    ea = c.r[26] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[21] = 0x800u;
    c.r[0] = c.r[0] - c.r[31];
    wp::compare_unsigned(c, 0, c.r[0], 0x800u);
    if (wp::cr_get(c, 1)) goto L_801d9544;
    c.r[21] = c.r[0] | c.r[0];
L_801d9544:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[0] = 0xd0u;
    if (wp::cr_get(c, 2)) goto L_801d9554;
    c.r[0] = 0xd1u;
L_801d9554:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = 0x40u;
    if (!wp::cr_get(c, 2)) goto L_801d9568;
    c.r[0] = c.r[21] + 0x40u;
L_801d9568:
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[24]);
    ea = c.r[1] + 0x24u;
    wp::wr16(ea, c.r[21]);
    c.lr = 0x801d9580u;
    f_801d9ec8(c);
R_801d9580:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.r[5] = 0x40u;
    c.lr = 0x801d9590u;
    f_801da300(c);
R_801d9590:
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d95b8;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d95b8;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[5] = c.r[21] | c.r[21];
    c.r[4] = c.r[25] + c.r[31];
    c.lr = 0x801d95b4u;
    f_801da300(c);
R_801d95b4:
    c.r[23] = c.r[3] | c.r[3];
L_801d95b8:
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9668;
    wp::compare_signed(c, 0, c.r[28], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d965c;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x801d95d4u;
    f_801d96b8(c);
R_801d95d4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d95ec;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d95e8u;
    f_801d9f64(c);
R_801d95e8:
    c.r[22] = c.r[3] | c.r[3];
L_801d95ec:
    ea = c.r[22] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[29], 0x0u);
    ea = c.r[22] + 0x20u;
    c.r[19] = wp::rd16(ea);
    c.r[20] = c.r[0] & 0xffu;
    if (wp::cr_get(c, 2)) goto L_801d963c;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d963c;
    wp::compare_unsigned(c, 0, c.r[19], c.r[21]);
    if (wp::cr_get(c, 1)) goto L_801d963c;
    c.r[3] = c.r[22] | c.r[22];
    c.r[4] = 0x40u;
    c.lr = 0x801d961cu;
    f_801d9fd8(c);
R_801d961c:
    c.r[3] = c.r[22] | c.r[22];
    c.r[5] = c.r[19] | c.r[19];
    c.r[4] = c.r[25] + c.r[31];
    c.lr = 0x801d962cu;
    f_801da534(c);
R_801d962c:
    wp::compare_signed(c, 0, c.r[3], 0x302u);
    c.r[23] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d963c;
    c.r[23] = 0x0u;
L_801d963c:
    wp::compare_unsigned(c, 0, c.r[19], c.r[21]);
    if (wp::cr_get(c, 2)) goto L_801d964c;
    c.r[21] = c.r[19] | c.r[19];
    c.r[30] = 0x1u;
L_801d964c:
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[20]);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9658u;
    f_801d9f88(c);
R_801d9658:
    goto L_801d9668;
L_801d965c:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9664u;
    f_801d9e44(c);
R_801d9664:
    c.r[23] = c.r[3] | c.r[3];
L_801d9668:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9670u;
    f_801d9f88(c);
R_801d9670:
    c.r[31] = c.r[31] + c.r[21];
L_801d9674:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d969c;
    ea = c.r[26] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801d969c;
    wp::compare_signed(c, 0, c.r[23], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d969c;
    ea = c.r[27] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d951c;
    }
L_801d969c:
    ea = c.r[26] + 0x0u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[23] | c.r[23];
L_801d96a4:
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 19; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801d96b8(wp::Cpu& c) {
    WP_ENTER(0x801d96b8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d96d0u: goto R_801d96d0;
        case 0x801d96e8u: goto R_801d96e8;
        case 0x801d96f8u: goto R_801d96f8;
        case 0x801d9704u: goto R_801d9704;
        case 0x801d9718u: goto R_801d9718;
        case 0x801d9748u: goto R_801d9748;
        case 0x801d979cu: goto R_801d979c;
        case 0x801d97c4u: goto R_801d97c4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[4] | c.r[4];
    c.lr = 0x801d96d0u;
    f_801d9e44(c);
R_801d96d0:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d97a4;
    c.r[27] = 0x0u;
    c.r[31] = 0xffffffffu;
L_801d96e4:
    c.lr = 0x801d96e8u;
    f_801d9360(c);
R_801d96e8:
    wp::compare_signed(c, 0, c.r[3], 0xffffffffu);
    ea = c.r[26] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801d96e4;
    }
    c.lr = 0x801d96f8u;
    f_801d9f64(c);
R_801d96f8:
    c.r[29] = c.r[3] | c.r[3];
    c.r[4] = 0x0u;
    c.lr = 0x801d9704u;
    f_801d9fd8(c);
R_801d9704:
    ea = c.r[29] + 0x10u;
    c.r[28] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[28], 0x80u);
    if (!wp::cr_get(c, 0)) goto L_801d9720;
    ea = c.r[26] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9718u;
    f_801d9458(c);
R_801d9718:
    ea = c.r[26] + 0x0u;
    wp::wr32(ea, c.r[31]);
    WP_POLL(c);
    goto L_801d96e4;
L_801d9720:
    ea = c.r[26] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0xffffffffu);
    if (wp::cr_get(c, 2)) goto L_801d97a4;
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], 0x40u);
    if (!wp::cr_get(c, 0)) goto L_801d974c;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1818u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d9748u;
    f_80138880(c);
R_801d9748:
    c.r[27] = 0x1u;
L_801d974c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9760;
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9760;
    ea = c.r[29] + 0x14u;
    c.r[31] = wp::rd8(ea);
L_801d9760:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9784;
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9784;
    wp::compare_signed(c, 0, c.r[28], 0x80u);
    if (!wp::cr_get(c, 2)) goto L_801d9780;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d9784;
L_801d9780:
    c.r[27] = 0x1u;
L_801d9784:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9794;
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d97a4;
L_801d9794:
    ea = c.r[26] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d979cu;
    f_801d9f88(c);
R_801d979c:
    c.r[0] = 0xffffffffu;
    ea = c.r[26] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d97a4:
    ea = c.r[26] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0xffffffffu);
    if (!wp::cr_get(c, 2)) goto L_801d97c8;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1818u;
    c.r[3] = c.r[3] + 0x1fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801d97c4u;
    f_80138880(c);
R_801d97c4:
    c.r[30] = 0x800u;
L_801d97c8:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d97e0(wp::Cpu& c) {
    WP_ENTER(0x801d97e0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9810u: goto R_801d9810;
        case 0x801d9828u: goto R_801d9828;
        case 0x801d983cu: goto R_801d983c;
        case 0x801d9850u: goto R_801d9850;
        case 0x801d9860u: goto R_801d9860;
        case 0x801d9874u: goto R_801d9874;
        case 0x801d9888u: goto R_801d9888;
        case 0x801d98a8u: goto R_801d98a8;
        case 0x801d98bcu: goto R_801d98bc;
        case 0x801d98d8u: goto R_801d98d8;
        case 0x801d98e0u: goto R_801d98e0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    c.r[3] = c.r[1] + 0x18u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801d9810u;
    f_801d86dc(c);
R_801d9810:
    c.r[0] = 0x0u;
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0xd2u;
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[0]);
    c.lr = 0x801d9828u;
    f_801d94a8(c);
R_801d9828:
    c.r[0] = c.r[3] + 0x41u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[27] | c.r[27];
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[30]);
    c.lr = 0x801d983cu;
    f_801d94a8(c);
R_801d983c:
    c.r[0] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x24u;
    wp::wr16(ea, c.r[0]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801d9850u;
    f_801d9ec8(c);
R_801d9850:
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.r[5] = 0x40u;
    c.lr = 0x801d9860u;
    f_801da300(c);
R_801d9860:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d988c;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x801d9874u;
    f_801d94a8(c);
R_801d9874:
    c.r[5] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[27] | c.r[27];
    c.r[5] = c.r[5] + 0x1u;
    c.lr = 0x801d9888u;
    f_801da300(c);
R_801d9888:
    c.r[31] = c.r[3] | c.r[3];
L_801d988c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d98d8;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d98a8u;
    f_801d96b8(c);
R_801d98a8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d98c0;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d98bcu;
    f_801d9f64(c);
R_801d98bc:
    c.r[30] = c.r[3] | c.r[3];
L_801d98c0:
    ea = c.r[30] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[30] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d98d8u;
    f_801d9f88(c);
L_801d98d8:
R_801d98d8:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d98e0u;
    f_801d9f88(c);
R_801d98e0:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x5cu;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_801d98f8(wp::Cpu& c) {
    WP_ENTER(0x801d98f8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9928u: goto R_801d9928;
        case 0x801d9948u: goto R_801d9948;
        case 0x801d9964u: goto R_801d9964;
        case 0x801d9984u: goto R_801d9984;
        case 0x801d9998u: goto R_801d9998;
        case 0x801d99b4u: goto R_801d99b4;
        case 0x801d99bcu: goto R_801d99bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    c.lr = 0x801d9928u;
    f_801d86dc(c);
R_801d9928:
    c.r[3] = 0xd3u;
    c.r[0] = 0x40u;
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[30]);
    c.lr = 0x801d9948u;
    f_801d9ec8(c);
R_801d9948:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d9968;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.r[5] = 0x40u;
    c.lr = 0x801d9964u;
    f_801da300(c);
R_801d9964:
    c.r[31] = c.r[3] | c.r[3];
L_801d9968:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d99b4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9984u;
    f_801d96b8(c);
R_801d9984:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d999c;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9998u;
    f_801d9f64(c);
R_801d9998:
    c.r[30] = c.r[3] | c.r[3];
L_801d999c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d99ac;
    ea = c.r[30] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d99ac:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d99b4u;
    f_801d9f88(c);
L_801d99b4:
R_801d99b4:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d99bcu;
    f_801d9f88(c);
R_801d99bc:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x6cu;
    c.r[31] = wp::rd32(ea);
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

void f_801d99dc(wp::Cpu& c) {
    WP_ENTER(0x801d99dcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9a18u: goto R_801d9a18;
        case 0x801d9a44u: goto R_801d9a44;
        case 0x801d9a60u: goto R_801d9a60;
        case 0x801d9a88u: goto R_801d9a88;
        case 0x801d9a9cu: goto R_801d9a9c;
        case 0x801d9abcu: goto R_801d9abc;
        case 0x801d9ac4u: goto R_801d9ac4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x6cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[5] | c.r[5];
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x60u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x18u;
    c.lr = 0x801d9a18u;
    f_801d86dc(c);
R_801d9a18:
    c.r[3] = 0xd4u;
    c.r[0] = 0x40u;
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[29] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28u;
    wp::wr8(ea, c.r[31]);
    c.lr = 0x801d9a44u;
    f_801d9ec8(c);
R_801d9a44:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d9a64;
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x18u;
    c.r[5] = 0x40u;
    c.lr = 0x801d9a60u;
    f_801da300(c);
R_801d9a60:
    c.r[31] = c.r[3] | c.r[3];
L_801d9a64:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9abc;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0xffffffffu;
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9a88u;
    f_801d96b8(c);
R_801d9a88:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801d9ab4;
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9a9cu;
    f_801d9f64(c);
R_801d9a9c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d9ab4;
    ea = c.r[3] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801d9ab4:
    ea = c.r[1] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9abcu;
    f_801d9f88(c);
L_801d9abc:
R_801d9abc:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801d9ac4u;
    f_801d9f88(c);
R_801d9ac4:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x6cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x68u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x64u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x60u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_801d9ae8(wp::Cpu& c) {
    WP_ENTER(0x801d9ae8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9afcu: goto R_801d9afc;
        case 0x801d9b00u: goto R_801d9b00;
        case 0x801d9b04u: goto R_801d9b04;
        case 0x801d9b08u: goto R_801d9b08;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801d9afcu;
    f_801dcb1c(c);
R_801d9afc:
    c.lr = 0x801d9b00u;
    f_801d8f64(c);
R_801d9b00:
    c.lr = 0x801d9b04u;
    f_801dc2d8(c);
R_801d9b04:
    c.lr = 0x801d9b08u;
    f_801d8f50(c);
R_801d9b08:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d9b1c(wp::Cpu& c) {
    WP_ENTER(0x801d9b1cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    c.r[16] = c.sr[0];
    c.r[17] = c.sr[1];
    c.r[18] = c.sr[2];
    c.r[19] = c.sr[3];
    c.r[20] = c.sr[4];
    c.r[21] = c.sr[5];
    c.r[22] = c.sr[6];
    c.r[23] = c.sr[7];
    c.r[24] = c.sr[8];
    c.r[25] = c.sr[9];
    c.r[26] = c.sr[10];
    c.r[27] = c.sr[11];
    c.r[28] = c.sr[12];
    c.r[29] = c.sr[13];
    c.r[30] = c.sr[14];
    c.r[31] = c.sr[15];
    ea = c.r[2] + 0x1a8u;
    for (uint32_t k = 16; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = static_cast<uint32_t>(wp::time_base());
    c.r[28] = static_cast<uint32_t>(wp::time_base() >> 32);
    c.r[29] = c.spr[1008];
    c.r[30] = c.spr[1009];
    c.r[31] = c.spr[27];
    ea = c.r[2] + 0x1e8u;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[15] = c.spr[287];
    c.r[16] = c.spr[528];
    c.r[17] = c.spr[529];
    c.r[18] = c.spr[530];
    c.r[19] = c.spr[531];
    c.r[20] = c.spr[532];
    c.r[21] = c.spr[533];
    c.r[22] = c.spr[534];
    c.r[23] = c.spr[535];
    c.r[24] = c.spr[536];
    c.r[25] = c.spr[537];
    c.r[26] = c.spr[538];
    c.r[27] = c.spr[539];
    c.r[28] = c.spr[540];
    c.r[29] = c.spr[541];
    c.r[30] = c.spr[542];
    c.r[31] = c.spr[543];
    ea = c.r[2] + 0x1fcu;
    for (uint32_t k = 15; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[24] = c.spr[560];
    c.r[25] = c.spr[561];
    c.r[26] = c.spr[562];
    c.r[27] = c.spr[563];
    c.r[28] = c.spr[564];
    c.r[29] = c.spr[565];
    c.r[30] = c.spr[566];
    c.r[31] = c.spr[567];
    ea = c.r[2] + 0x240u;
    for (uint32_t k = 24; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[22] = c.spr[25];
    c.r[23] = c.spr[19];
    c.r[24] = c.spr[18];
    c.r[25] = c.spr[272];
    c.r[26] = c.spr[273];
    c.r[27] = c.spr[274];
    c.r[28] = c.spr[275];
    c.r[29] = wp::get_decrementer(c);
    c.r[30] = c.spr[1010];
    c.r[31] = c.spr[282];
    ea = c.r[2] + 0x25cu;
    for (uint32_t k = 22; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[24] = c.spr[1013];
    c.r[25] = c.spr[953];
    c.r[26] = c.spr[954];
    c.r[27] = c.spr[957];
    c.r[28] = c.spr[958];
    c.r[29] = c.spr[955];
    c.r[30] = c.spr[952];
    c.r[31] = c.spr[956];
    ea = c.r[2] + 0x284u;
    for (uint32_t k = 24; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[29] = c.spr[567];
    c.r[30] = c.spr[568];
    c.r[31] = c.spr[569];
    ea = c.r[2] + 0x2a4u;
    for (uint32_t k = 29; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[30] = c.spr[1019];
    c.r[31] = c.spr[1017];
    ea = c.r[2] + 0x2b0u;
    for (uint32_t k = 30; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[16] = c.spr[26];
    ea = c.r[2] + 0x2b8u;
    wp::wr32(ea, c.r[16]);
    c.r[17] = c.spr[570];
    ea = c.r[2] + 0x2bcu;
    wp::wr32(ea, c.r[17]);
    c.r[25] = c.spr[936];
    c.r[26] = c.spr[937];
    c.r[27] = c.spr[938];
    c.r[28] = c.spr[939];
    c.r[29] = c.spr[940];
    c.r[30] = c.spr[941];
    c.r[31] = c.spr[942];
    ea = c.r[2] + 0x2c0u;
    for (uint32_t k = 25; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[25] = c.spr[571];
    c.r[26] = c.spr[572];
    c.r[27] = c.spr[573];
    c.r[28] = c.spr[574];
    c.r[29] = c.spr[575];
    c.r[30] = c.spr[920];
    c.r[31] = c.spr[1011];
    ea = c.r[2] + 0x2dcu;
    for (uint32_t k = 25; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[20] = c.spr[912];
    c.r[21] = c.spr[913];
    c.r[22] = c.spr[914];
    c.r[23] = c.spr[915];
    c.r[24] = c.spr[916];
    c.r[25] = c.spr[917];
    c.r[26] = c.spr[918];
    c.r[27] = c.spr[919];
    c.r[28] = c.spr[920];
    c.r[29] = c.spr[921];
    c.r[30] = c.spr[922];
    c.r[31] = c.spr[923];
    ea = c.r[2] + 0x2fcu;
    for (uint32_t k = 20; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    return;
}

void f_801d9ce0(wp::Cpu& c) {
    WP_ENTER(0x801d9ce0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    c.r[5] = 0x802f0000u;
    c.r[5] = c.r[5] | 0x4e90u;
    ea = c.r[5] + 0x0u;
    c.r[3] = wp::rd8(ea);
    ea = c.r[5] + 0x1u;
    c.r[6] = wp::rd8(ea);
    c.r[0] = 0x0u;
    ea = c.r[5] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[5] + 0x1u;
    wp::wr8(ea, c.r[0]);
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801d9d1c;
    ea = c.r[2] + 0x1e8u;
    c.r[24] = wp::rd32(ea);
    ea = c.r[2] + 0x1ecu;
    c.r[25] = wp::rd32(ea);
    c.spr[284] = c.r[24];
    c.spr[285] = c.r[25];
L_801d9d1c:
    ea = c.r[2] + 0x2fcu;
    for (uint32_t k = 20; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.spr[912] = c.r[20];
    c.spr[913] = c.r[21];
    c.spr[914] = c.r[22];
    c.spr[915] = c.r[23];
    c.spr[916] = c.r[24];
    c.spr[917] = c.r[25];
    c.spr[918] = c.r[26];
    c.spr[919] = c.r[27];
    c.spr[920] = c.r[28];
    c.spr[922] = c.r[30];
    c.spr[923] = c.r[31]; wp::locked_cache_dma(c);
    goto L_801d9d50;
L_801d9d50:
    ea = c.r[2] + 0x284u;
    for (uint32_t k = 19; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.spr[1013] = c.r[19];
    c.spr[953] = c.r[20];
    c.spr[954] = c.r[21];
    c.spr[957] = c.r[22];
    c.spr[958] = c.r[23];
    c.spr[955] = c.r[24];
    c.spr[952] = c.r[25];
    c.spr[956] = c.r[26];
    c.spr[1019] = c.r[30];
    c.spr[1017] = c.r[31];
    goto L_801d9d80;
L_801d9d80:
    ea = c.r[2] + 0x1a8u;
    for (uint32_t k = 16; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.sr[0] = c.r[16];
    c.sr[1] = c.r[17];
    c.sr[2] = c.r[18];
    c.sr[3] = c.r[19];
    c.sr[4] = c.r[20];
    c.sr[5] = c.r[21];
    c.sr[6] = c.r[22];
    c.sr[7] = c.r[23];
    c.sr[8] = c.r[24];
    c.sr[9] = c.r[25];
    c.sr[10] = c.r[26];
    c.sr[11] = c.r[27];
    c.sr[12] = c.r[28];
    c.sr[13] = c.r[29];
    c.sr[14] = c.r[30];
    c.sr[15] = c.r[31];
    ea = c.r[2] + 0x1f0u;
    for (uint32_t k = 12; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.spr[1008] = c.r[12];
    c.spr[1009] = c.r[13];
    c.spr[27] = c.r[14];
    c.spr[287] = c.r[15];
    c.spr[528] = c.r[16];
    c.spr[529] = c.r[17];
    c.spr[530] = c.r[18];
    c.spr[531] = c.r[19];
    c.spr[532] = c.r[20];
    c.spr[533] = c.r[21];
    c.spr[534] = c.r[22];
    c.spr[535] = c.r[23];
    c.spr[536] = c.r[24];
    c.spr[537] = c.r[25];
    c.spr[538] = c.r[26];
    c.spr[539] = c.r[27];
    c.spr[540] = c.r[28];
    c.spr[541] = c.r[29];
    c.spr[542] = c.r[30];
    c.spr[543] = c.r[31];
    ea = c.r[2] + 0x25cu;
    for (uint32_t k = 22; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.spr[25] = c.r[22];
    c.spr[19] = c.r[23];
    c.spr[18] = c.r[24];
    c.spr[272] = c.r[25];
    c.spr[273] = c.r[26];
    c.spr[274] = c.r[27];
    c.spr[275] = c.r[28];
    c.spr[1010] = c.r[30];
    c.spr[282] = c.r[31];
    return;
}

void f_801d9e44(wp::Cpu& c) {
    WP_ENTER(0x801d9e44u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9e7cu: goto R_801d9e7c;
        case 0x801d9e94u: goto R_801d9e94;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[13] + 0xffff94a0u;
    c.r[0] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9e60;
    c.r[0] = 0x1u;
L_801d9e60:
    ea = c.r[3] + 0x12u;
    wp::wr16(ea, c.r[0]);
    c.r[4] = c.r[0] & 0xffffu;
    c.r[0] = c.r[4] + 0x1u;
    ea = c.r[13] + 0xffff94a0u;
    wp::wr16(ea, c.r[0]);
    ea = c.r[3] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0xcu;
    c.lr = 0x801d9e7cu;
    f_801d8f14(c);
R_801d9e7c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[4] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801d9e94;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1860u;
    c.lr = 0x801d9e94u;
    f_80138880(c);
L_801d9e94:
R_801d9e94:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801d9ea8(wp::Cpu& c) {
    WP_ENTER(0x801d9ea8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x0u;
    c.r[4] = c.r[3] + 0x34e8u;
    ea = c.r[3] + 0x34e8u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x0u;
    ea = c.r[4] + 0x88cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[4] + 0x1118u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_801d9ec8(wp::Cpu& c) {
    WP_ENTER(0x801d9ec8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801d9f00u: goto R_801d9f00;
        case 0x801d9f18u: goto R_801d9f18;
        case 0x801d9f4cu: goto R_801d9f4c;
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
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[30] = 0x300u;
    c.r[29] = 0x0u;
    c.r[31] = 0x1u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801d9f30;
L_801d9ef8:
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801d9f00u;
    f_801d9f64(c);
R_801d9f00:
    ea = c.r[3] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801d9f2c;
    c.r[4] = 0x1u;
    c.lr = 0x801d9f18u;
    f_801d9fb0(c);
R_801d9f18:
    ea = c.r[28] + 0x0u;
    wp::wr32(ea, c.r[31]);
    c.r[30] = 0x0u;
    ea = c.r[27] + 0x0u;
    wp::wr32(ea, c.r[28]);
    ea = c.r[26] + 0x0u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = 0x3u;
L_801d9f2c:
    c.r[29] = c.r[29] + 0x1u;
L_801d9f30:
    wp::compare_signed(c, 0, c.r[29], 0x3u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801d9ef8;
    }
    wp::compare_signed(c, 0, c.r[30], 0x300u);
    if (!wp::cr_get(c, 2)) goto L_801d9f4c;
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1888u;
    c.lr = 0x801d9f4cu;
    f_80138880(c);
L_801d9f4c:
R_801d9f4c:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801d9f64(wp::Cpu& c) {
    WP_ENTER(0x801d9f64u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    c.r[0] = 0x0u;
    if (wp::cr_get(c, 1)) goto L_801d9f80;
    c.r[0] = c.r[3] * 0x88cu;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x34e8u;
    c.r[0] = c.r[3] + c.r[0];
L_801d9f80:
    c.r[3] = c.r[0] | c.r[0];
    return;
}

void f_801d9f88(wp::Cpu& c) {
    WP_ENTER(0x801d9f88u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[3], 0xffffffffu);
    if (wp::cr_get(c, 2)) return;
    wp::compare_unsigned(c, 0, c.r[3], 0x2u);
    if (wp::cr_get(c, 1)) return;
    c.r[0] = c.r[3] * 0x88cu;
    c.r[3] = 0x802f0000u;
    c.r[4] = 0x0u;
    c.r[3] = c.r[3] + 0x34e8u;
    ea = c.r[3] + c.r[0];
    wp::wr32(ea, c.r[4]);
    return;
}

void f_801d9fb0(wp::Cpu& c) {
    WP_ENTER(0x801d9fb0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_signed(c, 0, c.r[4], 0x0u);
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) return;
    c.r[4] = 0x0u;
    c.r[5] = 0x880u;
    c.r[3] = c.r[3] + 0xcu;
    f_801d86dc(c);
    return;
    return;
}

void f_801d9fd8(wp::Cpu& c) {
    WP_ENTER(0x801d9fd8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    wp::compare_unsigned(c, 0, c.r[4], 0x880u);
    c.r[5] = 0x0u;
    if (!wp::cr_get(c, 1)) goto L_801d9fec;
    c.r[5] = 0x301u;
    goto L_801da000;
L_801d9fec:
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801da000;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[4]);
L_801da000:
    c.r[3] = c.r[5] | c.r[5];
    return;
}

void f_801da008(wp::Cpu& c) {
    WP_ENTER(0x801da008u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da07cu: goto R_801da07c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
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
    if (!wp::cr_get(c, 2)) goto L_801da03c;
    c.r[3] = 0x0u;
    goto L_801da090;
L_801da03c:
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = wp::sub_carry(c, c.r[0], 0x880u);
    wp::compare_unsigned(c, 0, c.r[6], c.r[5]);
    if (!wp::cr_get(c, 0)) goto L_801da054;
    c.r[31] = 0x301u;
    c.r[30] = c.r[6] | c.r[6];
L_801da054:
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801da06c;
    c.r[3] = c.r[3] + c.r[0];
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801da07c;
L_801da06c:
    c.r[3] = c.r[3] + c.r[0];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[3] + 0xcu;
    c.lr = 0x801da07cu;
    f_801d85a0(c);
L_801da07c:
R_801da07c:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801da090:
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

void f_801da0ac(wp::Cpu& c) {
    WP_ENTER(0x801da0acu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da110u: goto R_801da110;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
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
    if (!wp::cr_get(c, 2)) goto L_801da0e0;
    c.r[3] = 0x0u;
    goto L_801da120;
L_801da0e0:
    ea = c.r[3] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] - c.r[6];
    wp::compare_unsigned(c, 0, c.r[5], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801da0fc;
    c.r[31] = 0x302u;
    c.r[30] = c.r[0] | c.r[0];
L_801da0fc:
    c.r[6] = c.r[29] + c.r[6];
    c.r[3] = c.r[4] | c.r[4];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = c.r[6] + 0xcu;
    c.lr = 0x801da110u;
    f_801d85a0(c);
R_801da110:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801da120:
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

void f_801da13c(wp::Cpu& c) {
    WP_ENTER(0x801da13cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da1dcu: goto R_801da1dc;
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
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801da170;
    c.r[4] = c.r[1] + 0x8u;
    goto L_801da194;
L_801da170:
    ea = c.r[1] + 0xbu;
    c.r[7] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0xcu;
    ea = c.r[1] + 0xau;
    c.r[6] = wp::rd8(ea);
    ea = c.r[1] + 0x9u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xdu;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0xeu;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xfu;
    wp::wr8(ea, c.r[0]);
L_801da194:
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[31] = 0x4u;
    c.r[30] = 0x0u;
    c.r[0] = wp::sub_carry(c, c.r[5], 0x880u);
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_801da1b4;
    c.r[30] = 0x301u;
    c.r[31] = c.r[0] | c.r[0];
L_801da1b4:
    wp::compare_unsigned(c, 0, c.r[31], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801da1cc;
    c.r[3] = c.r[3] + c.r[5];
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801da1dc;
L_801da1cc:
    c.r[3] = c.r[3] + c.r[5];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[3] + 0xcu;
    c.lr = 0x801da1dcu;
    f_801d85a0(c);
L_801da1dc:
R_801da1dc:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
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

void f_801da20c(wp::Cpu& c) {
    WP_ENTER(0x801da20cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da2d0u: goto R_801da2d0;
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
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[5]);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_801da244;
    c.r[4] = c.r[1] + 0x8u;
    goto L_801da288;
L_801da244:
    ea = c.r[1] + 0xfu;
    c.r[11] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0xeu;
    c.r[10] = wp::rd8(ea);
    ea = c.r[1] + 0xdu;
    c.r[9] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[8] = wp::rd8(ea);
    ea = c.r[1] + 0xbu;
    c.r[7] = wp::rd8(ea);
    ea = c.r[1] + 0xau;
    c.r[6] = wp::rd8(ea);
    ea = c.r[1] + 0x9u;
    c.r[5] = wp::rd8(ea);
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[11]);
    ea = c.r[1] + 0x11u;
    wp::wr8(ea, c.r[10]);
    ea = c.r[1] + 0x12u;
    wp::wr8(ea, c.r[9]);
    ea = c.r[1] + 0x13u;
    wp::wr8(ea, c.r[8]);
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0x15u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0x16u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x17u;
    wp::wr8(ea, c.r[0]);
L_801da288:
    ea = c.r[3] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[30] = 0x8u;
    c.r[29] = 0x0u;
    c.r[0] = wp::sub_carry(c, c.r[5], 0x880u);
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 0)) goto L_801da2a8;
    c.r[29] = 0x301u;
    c.r[30] = c.r[0] | c.r[0];
L_801da2a8:
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801da2c0;
    c.r[3] = c.r[3] + c.r[5];
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801da2d0;
L_801da2c0:
    c.r[3] = c.r[3] + c.r[5];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[3] + 0xcu;
    c.lr = 0x801da2d0u;
    f_801d85a0(c);
L_801da2d0:
R_801da2d0:
    ea = c.r[31] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = c.r[0] + c.r[30];
    ea = c.r[31] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[31] + 0x4u;
    wp::wr32(ea, c.r[0]);
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

void f_801da300(wp::Cpu& c) {
    WP_ENTER(0x801da300u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[9] = 0x0u;
    c.r[7] = 0x0u;
    goto L_801da34c;
L_801da30c:
    ea = c.r[3] + 0x8u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[4] + 0x0u;
    c.r[8] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[7], 0x880u);
    if (wp::cr_get(c, 0)) goto L_801da324;
    c.r[7] = 0x301u;
    goto L_801da344;
L_801da324:
    c.r[6] = c.r[3] + c.r[7];
    c.r[0] = c.r[7] + 0x1u;
    ea = c.r[6] + 0xcu;
    wp::wr8(ea, c.r[8]);
    c.r[7] = 0x0u;
    ea = c.r[3] + 0x4u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    ea = c.r[3] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801da344:
    c.r[9] = c.r[9] + 0x1u;
    c.r[4] = c.r[4] + 0x1u;
L_801da34c:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da35c;
    wp::compare_signed(c, 0, c.r[9], c.r[5]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801da30c;
    }
L_801da35c:
    c.r[3] = c.r[7] | c.r[7];
    return;
}

void f_801da364(wp::Cpu& c) {
    WP_ENTER(0x801da364u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da414u: goto R_801da414;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x18u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[29] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[30] = c.r[5] | c.r[5];
    c.r[31] = 0x0u;
    c.r[26] = 0x0u;
    goto L_801da42c;
L_801da38c:
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[27] + 0x0u;
    c.r[3] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801da3a8;
    c.r[4] = c.r[1] + 0xcu;
    goto L_801da3cc;
L_801da3a8:
    ea = c.r[1] + 0xfu;
    c.r[6] = wp::rd8(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[1] + 0xeu;
    c.r[5] = wp::rd8(ea);
    ea = c.r[1] + 0xdu;
    c.r[3] = wp::rd8(ea);
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd8(ea);
    ea = c.r[1] + 0x8u;
    wp::wr8(ea, c.r[6]);
    ea = c.r[1] + 0x9u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xau;
    wp::wr8(ea, c.r[3]);
    ea = c.r[1] + 0xbu;
    wp::wr8(ea, c.r[0]);
L_801da3cc:
    ea = c.r[29] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[28] = 0x4u;
    c.r[26] = 0x0u;
    c.r[0] = wp::sub_carry(c, c.r[3], 0x880u);
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_801da3ec;
    c.r[26] = 0x301u;
    c.r[28] = c.r[0] | c.r[0];
L_801da3ec:
    wp::compare_unsigned(c, 0, c.r[28], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801da404;
    c.r[3] = c.r[29] + c.r[3];
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0xcu;
    wp::wr8(ea, c.r[0]);
    goto L_801da414;
L_801da404:
    c.r[3] = c.r[29] + c.r[3];
    c.r[5] = c.r[28] | c.r[28];
    c.r[3] = c.r[3] + 0xcu;
    c.lr = 0x801da414u;
    f_801d85a0(c);
L_801da414:
R_801da414:
    ea = c.r[29] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[27] = c.r[27] + 0x4u;
    c.r[31] = c.r[31] + 0x1u;
    c.r[0] = c.r[0] + c.r[28];
    ea = c.r[29] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
L_801da42c:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da43c;
    wp::compare_signed(c, 0, c.r[31], c.r[30]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801da38c;
    }
L_801da43c:
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[1] + 0x18u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801da454(wp::Cpu& c) {
    WP_ENTER(0x801da454u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da4bcu: goto R_801da4bc;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[3] | c.r[3];
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801da480;
    c.r[30] = c.r[29] | c.r[29];
    goto L_801da484;
L_801da480:
    c.r[30] = c.r[1] + 0x8u;
L_801da484:
    ea = c.r[3] + 0x8u;
    c.r[4] = wp::rd32(ea);
    c.r[28] = 0x8u;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[31] = 0x0u;
    c.r[0] = c.r[0] - c.r[4];
    wp::compare_unsigned(c, 0, c.r[0], 0x8u);
    if (!wp::cr_get(c, 0)) goto L_801da4a8;
    c.r[31] = 0x302u;
    c.r[28] = c.r[0] | c.r[0];
L_801da4a8:
    c.r[4] = c.r[27] + c.r[4];
    c.r[3] = c.r[30] | c.r[30];
    c.r[5] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + 0xcu;
    c.lr = 0x801da4bcu;
    f_801d85a0(c);
R_801da4bc:
    ea = c.r[27] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[28];
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da51c;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da51c;
    ea = c.r[30] + 0x7u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x6u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x5u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x4u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x3u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x3u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x4u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x2u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x5u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x1u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x6u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[29] + 0x7u;
    wp::wr8(ea, c.r[0]);
L_801da51c:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x1cu;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801da534(wp::Cpu& c) {
    WP_ENTER(0x801da534u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da594u: goto R_801da594;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = 0x0u;
    c.r[30] = 0x0u;
    goto L_801da5a4;
L_801da55c:
    ea = c.r[26] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[31] = 0x1u;
    ea = c.r[26] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[30] = 0x0u;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_801da580;
    c.r[30] = 0x302u;
    c.r[31] = c.r[0] | c.r[0];
L_801da580:
    c.r[4] = c.r[26] + c.r[3];
    c.r[5] = c.r[31] | c.r[31];
    c.r[3] = c.r[27] + c.r[29];
    c.r[4] = c.r[4] + 0xcu;
    c.lr = 0x801da594u;
    f_801d85a0(c);
R_801da594:
    ea = c.r[26] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[29] = c.r[29] + 0x1u;
    c.r[0] = c.r[0] + c.r[31];
    ea = c.r[26] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801da5a4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da5b4;
    wp::compare_signed(c, 0, c.r[29], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801da55c;
    }
L_801da5b4:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x8u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801da5cc(wp::Cpu& c) {
    WP_ENTER(0x801da5ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da644u: goto R_801da644;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 25; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.r[3] | c.r[3];
    c.r[31] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = 0x0u;
    c.r[30] = 0x0u;
    goto L_801da68c;
L_801da5f4:
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801da608;
    c.r[26] = c.r[31] | c.r[31];
    goto L_801da60c;
L_801da608:
    c.r[26] = c.r[1] + 0x8u;
L_801da60c:
    ea = c.r[27] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[25] = 0x4u;
    ea = c.r[27] + 0x4u;
    c.r[0] = wp::rd32(ea);
    c.r[30] = 0x0u;
    c.r[0] = c.r[0] - c.r[3];
    wp::compare_unsigned(c, 0, c.r[0], 0x4u);
    if (!wp::cr_get(c, 0)) goto L_801da630;
    c.r[30] = 0x302u;
    c.r[25] = c.r[0] | c.r[0];
L_801da630:
    c.r[4] = c.r[27] + c.r[3];
    c.r[3] = c.r[26] | c.r[26];
    c.r[5] = c.r[25] | c.r[25];
    c.r[4] = c.r[4] + 0xcu;
    c.lr = 0x801da644u;
    f_801d85a0(c);
R_801da644:
    ea = c.r[27] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] + c.r[25];
    ea = c.r[27] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[13] + 0xffff9490u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da684;
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da684;
    ea = c.r[26] + 0x3u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0x0u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[26] + 0x2u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0x1u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[26] + 0x1u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0x2u;
    wp::wr8(ea, c.r[0]);
    ea = c.r[26] + 0x0u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[31] + 0x3u;
    wp::wr8(ea, c.r[0]);
L_801da684:
    c.r[31] = c.r[31] + 0x4u;
    c.r[29] = c.r[29] + 0x1u;
L_801da68c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da69c;
    wp::compare_signed(c, 0, c.r[29], c.r[28]);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801da5f4;
    }
L_801da69c:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x14u;
    for (uint32_t k = 25; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801da6b4(wp::Cpu& c) {
    WP_ENTER(0x801da6b4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff94acu;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_801da6bc(wp::Cpu& c) {
    WP_ENTER(0x801da6bcu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da6e0u: goto R_801da6e0;
        case 0x801da718u: goto R_801da718;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[13] + 0xffff94acu;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da6e0u;
    f_801d86dc(c);
R_801da6e0:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da718u;
    f_801d8f14(c);
R_801da718:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801da72c(wp::Cpu& c) {
    WP_ENTER(0x801da72cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da754u: goto R_801da754;
        case 0x801da788u: goto R_801da788;
        case 0x801da794u: goto R_801da794;
        case 0x801da79cu: goto R_801da79c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[13] + 0xffff94acu;
    wp::wr32(ea, c.r[31]);
    c.lr = 0x801da754u;
    f_801d86dc(c);
R_801da754:
    ea = c.r[13] + 0xffff94a8u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[3] = 0x40u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[4] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x1cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[1] + 0x20u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da788u;
    f_801d8f14(c);
R_801da788:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x1u;
    c.lr = 0x801da794u;
    f_801d91f0(c);
R_801da794:
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801da79cu;
    f_801d9124(c);
R_801da79c:
    ea = c.r[1] + 0x5cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_801da7b4(wp::Cpu& c) {
    WP_ENTER(0x801da7b4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da7d0u: goto R_801da7d0;
        case 0x801da808u: goto R_801da808;
        case 0x801da80cu: goto R_801da80c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801da7d0u;
    f_801d86dc(c);
R_801da7d0:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da808u;
    f_801d8f14(c);
R_801da808:
    c.lr = 0x801da80cu;
    f_801d8c38(c);
R_801da80c:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801da820(wp::Cpu& c) {
    WP_ENTER(0x801da820u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da83cu: goto R_801da83c;
        case 0x801da874u: goto R_801da874;
        case 0x801da878u: goto R_801da878;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffb0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801da83cu;
    f_801d86dc(c);
R_801da83c:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da874u;
    f_801d8f14(c);
R_801da874:
    c.lr = 0x801da878u;
    f_801d8abc(c);
R_801da878:
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x0u;
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801da88c(wp::Cpu& c) {
    WP_ENTER(0x801da88cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801da8e0u: goto R_801da8e0;
        case 0x801da918u: goto R_801da918;
        case 0x801da954u: goto R_801da954;
        case 0x801da964u: goto R_801da964;
        case 0x801da97cu: goto R_801da97c;
        case 0x801da9b4u: goto R_801da9b4;
        case 0x801da9d4u: goto R_801da9d4;
        case 0x801da9ecu: goto R_801da9ec;
        case 0x801daa58u: goto R_801daa58;
        case 0x801daa8cu: goto R_801daa8c;
        case 0x801daa9cu: goto R_801daa9c;
        default: wp::bad_resume(c);
        }
    }
    c.r[11] = c.r[1] & 0x1fu;
    c.r[12] = c.r[1] | c.r[1];
    c.r[11] = wp::sub_carry(c, c.r[11], 0xfffff6c0u);
    ea = c.r[1] + c.r[11];
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[12] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[12] + 0xfffffffcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[12] + 0xfffffff8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[12] + 0xfffffff4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[12] + 0xfffffff0u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x14u;
    c.r[30] = wp::rd8(ea);
    ea = c.r[3] + 0x1cu;
    c.r[29] = wp::rd32(ea);
    c.r[0] = c.r[30] & 0x2u;
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd16(ea);
    if (wp::cr_get(c, 2)) goto L_801da920;
    c.r[3] = c.r[1] + 0x68u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801da8e0u;
    f_801d86dc(c);
R_801da8e0:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x12u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x68u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x70u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da918u;
    f_801d8f14(c);
R_801da918:
    c.r[3] = 0x0u;
    goto L_801daa9c;
L_801da920:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da9f0;
    c.r[0] = c.r[30] & 0x8u;
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801da93c;
    c.r[6] = 0x0u;
    goto L_801da940;
L_801da93c:
    c.r[6] = 0x1u;
L_801da940:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x100u;
    c.r[5] = c.r[1] + 0x20u;
    c.r[7] = 0x1u;
    c.lr = 0x801da954u;
    f_801db998(c);
R_801da954:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x801da964u;
    f_801d9fb0(c);
R_801da964:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801da9f0;
    c.r[3] = c.r[1] + 0xa8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801da97cu;
    f_801d86dc(c);
R_801da97c:
    ea = c.r[13] + 0xffff94a8u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80u;
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[0] = c.r[6] + 0x1u;
    ea = c.r[1] + 0xb0u;
    wp::wr8(ea, c.r[31]);
    c.r[5] = c.r[4] + 0x40u;
    c.r[4] = c.r[1] + 0xa8u;
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[5]);
    c.r[5] = 0x40u;
    ea = c.r[1] + 0xacu;
    wp::wr8(ea, c.r[7]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801da9b4u;
    f_801da008(c);
R_801da9b4:
    c.r[0] = c.r[30] & 0x40u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801da9dc;
    c.r[0] = c.r[29] & 0x1fu;
    c.r[4] = c.r[1] + 0x100u;
    ea = c.r[1] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[4] + c.r[0];
    c.lr = 0x801da9d4u;
    f_801da008(c);
R_801da9d4:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801da9f0;
L_801da9dc:
    ea = c.r[1] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[1] + 0x100u;
    c.lr = 0x801da9ecu;
    f_801da008(c);
R_801da9ec:
    c.r[31] = c.r[3] | c.r[3];
L_801da9f0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801daa94;
    c.r[0] = c.r[31] + 0xfffff900u;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (wp::cr_get(c, 1)) goto L_801daa44;
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x18b0u;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801daa1cu: goto L_801daa1c;
    case 0x801daa24u: goto L_801daa24;
    case 0x801daa2cu: goto L_801daa2c;
    case 0x801daa34u: goto L_801daa34;
    case 0x801daa3cu: goto L_801daa3c;
    case 0x801daa44u: goto L_801daa44;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801daa1c:
    c.r[31] = 0x15u;
    goto L_801daa48;
L_801daa24:
    c.r[31] = 0x13u;
    goto L_801daa48;
L_801daa2c:
    c.r[31] = 0x21u;
    goto L_801daa48;
L_801daa34:
    c.r[31] = 0x22u;
    goto L_801daa48;
L_801daa3c:
    c.r[31] = 0x20u;
    goto L_801daa48;
L_801daa44:
    c.r[31] = 0x3u;
L_801daa48:
    c.r[3] = c.r[1] + 0x28u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801daa58u;
    f_801d86dc(c);
R_801daa58:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x30u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801daa8cu;
    f_801d8f14(c);
R_801daa8c:
    c.r[3] = 0x0u;
    goto L_801daa9c;
L_801daa94:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801daa9cu;
    f_801d9e44(c);
L_801daa9c:
R_801daa9c:
    ea = c.r[1] + 0x0u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[10] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffffcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff0u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[10] | c.r[10];
    return;
}

void f_801daac0(wp::Cpu& c) {
    WP_ENTER(0x801daac0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dab14u: goto R_801dab14;
        case 0x801dab4cu: goto R_801dab4c;
        case 0x801dab68u: goto R_801dab68;
        case 0x801dab78u: goto R_801dab78;
        case 0x801daba0u: goto R_801daba0;
        case 0x801dabb0u: goto R_801dabb0;
        case 0x801dabc8u: goto R_801dabc8;
        case 0x801dabfcu: goto R_801dabfc;
        case 0x801dac68u: goto R_801dac68;
        case 0x801dac9cu: goto R_801dac9c;
        case 0x801dacacu: goto R_801dacac;
        default: wp::bad_resume(c);
        }
    }
    c.r[11] = c.r[1] & 0x1fu;
    c.r[12] = c.r[1] | c.r[1];
    c.r[11] = wp::sub_carry(c, c.r[11], 0xfffff6c0u);
    ea = c.r[1] + c.r[11];
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[12] + 0x4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[12] + 0xfffffffcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = 0x0u;
    ea = c.r[12] + 0xfffffff8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[12] + 0xfffffff4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[12] + 0xfffffff0u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x14u;
    c.r[30] = wp::rd8(ea);
    ea = c.r[3] + 0x1cu;
    c.r[29] = wp::rd32(ea);
    c.r[0] = c.r[30] & 0x2u;
    wp::record(c, c.r[0]);
    ea = c.r[3] + 0x18u;
    c.r[0] = wp::rd16(ea);
    if (wp::cr_get(c, 2)) goto L_801dab54;
    c.r[3] = c.r[1] + 0x68u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801dab14u;
    f_801d86dc(c);
R_801dab14:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x12u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x6cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x68u;
    ea = c.r[1] + 0x68u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x70u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dab4cu;
    f_801d8f14(c);
R_801dab4c:
    c.r[3] = 0x0u;
    goto L_801dacac;
L_801dab54:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dac00;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x40u;
    c.lr = 0x801dab68u;
    f_801d9fd8(c);
R_801dab68:
    ea = c.r[1] + 0x20u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[1] + 0x100u;
    c.lr = 0x801dab78u;
    f_801da0ac(c);
R_801dab78:
    c.r[0] = c.r[30] & 0x8u;
    wp::record(c, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dab88;
    c.r[6] = 0x0u;
    goto L_801dab8c;
L_801dab88:
    c.r[6] = 0x1u;
L_801dab8c:
    c.r[4] = c.r[29] | c.r[29];
    c.r[3] = c.r[1] + 0x100u;
    c.r[5] = c.r[1] + 0x20u;
    c.r[7] = 0x0u;
    c.lr = 0x801daba0u;
    f_801db998(c);
R_801daba0:
    c.r[31] = c.r[3] | c.r[3];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x801dabb0u;
    f_801d9fb0(c);
R_801dabb0:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dac00;
    c.r[3] = c.r[1] + 0xa8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801dabc8u;
    f_801d86dc(c);
R_801dabc8:
    ea = c.r[13] + 0xffff94a8u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = 0x40u;
    c.r[4] = 0x80u;
    ea = c.r[1] + 0xa8u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0xacu;
    wp::wr8(ea, c.r[4]);
    c.r[4] = c.r[1] + 0xa8u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0xb0u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0xb4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dabfcu;
    f_801da008(c);
R_801dabfc:
    c.r[31] = c.r[3] | c.r[3];
L_801dac00:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801daca4;
    c.r[0] = c.r[31] + 0xfffff900u;
    wp::compare_unsigned(c, 0, c.r[0], 0x6u);
    if (wp::cr_get(c, 1)) goto L_801dac54;
    c.r[3] = 0x80230000u;
    c.r[0] = wp::rotl(c.r[0], 2) & 0xfffffffcu;
    c.r[3] = c.r[3] + 0x18ccu;
    ea = c.r[3] + c.r[0];
    c.r[3] = wp::rd32(ea);
    c.ctr = c.r[3];
    switch (c.ctr) {
    case 0x801dac2cu: goto L_801dac2c;
    case 0x801dac34u: goto L_801dac34;
    case 0x801dac3cu: goto L_801dac3c;
    case 0x801dac44u: goto L_801dac44;
    case 0x801dac4cu: goto L_801dac4c;
    case 0x801dac54u: goto L_801dac54;
    default: wp::unresolved_jump(c, c.ctr);
    }
L_801dac2c:
    c.r[31] = 0x15u;
    goto L_801dac58;
L_801dac34:
    c.r[31] = 0x13u;
    goto L_801dac58;
L_801dac3c:
    c.r[31] = 0x21u;
    goto L_801dac58;
L_801dac44:
    c.r[31] = 0x22u;
    goto L_801dac58;
L_801dac4c:
    c.r[31] = 0x20u;
    goto L_801dac58;
L_801dac54:
    c.r[31] = 0x3u;
L_801dac58:
    c.r[3] = c.r[1] + 0x28u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801dac68u;
    f_801d86dc(c);
R_801dac68:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[3] = c.r[1] + 0x28u;
    ea = c.r[1] + 0x2cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x30u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dac9cu;
    f_801d8f14(c);
R_801dac9c:
    c.r[3] = 0x0u;
    goto L_801dacac;
L_801daca4:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801dacacu;
    f_801d9e44(c);
L_801dacac:
R_801dacac:
    ea = c.r[1] + 0x0u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[10] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffffcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[10] + 0xfffffff0u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[10] | c.r[10];
    return;
}

void f_801dacd0(wp::Cpu& c) {
    WP_ENTER(0x801dacd0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dad04u: goto R_801dad04;
        case 0x801dad3cu: goto R_801dad3c;
        case 0x801dad6cu: goto R_801dad6c;
        case 0x801dad7cu: goto R_801dad7c;
        case 0x801dad94u: goto R_801dad94;
        case 0x801dadb4u: goto R_801dadb4;
        case 0x801dadd4u: goto R_801dadd4;
        case 0x801dadf4u: goto R_801dadf4;
        case 0x801dae74u: goto R_801dae74;
        case 0x801daea8u: goto R_801daea8;
        case 0x801daeb8u: goto R_801daeb8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff20u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0xe4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xdcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x18u;
    c.r[4] = wp::rd16(ea);
    ea = c.r[3] + 0x1cu;
    c.r[0] = wp::rd16(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (!wp::cr_get(c, 1)) goto L_801dad44;
    c.r[3] = c.r[1] + 0x50u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801dad04u;
    f_801d86dc(c);
R_801dad04:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x14u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x54u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x58u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dad3cu;
    f_801d8f14(c);
R_801dad3c:
    c.r[3] = 0x0u;
    goto L_801daeb8;
L_801dad44:
    ea = c.r[13] + 0xffff94a8u;
    c.r[5] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[6] = 0x468u;
    ea = c.r[1] + 0x94u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dad6cu;
    f_801d9fb0(c);
R_801dad6c:
    c.r[3] = c.r[31] | c.r[31];
    c.r[4] = c.r[1] + 0x90u;
    c.r[5] = 0x40u;
    c.lr = 0x801dad7cu;
    f_801da300(c);
R_801dad7c:
    c.r[5] = c.r[31] | c.r[31];
    c.r[6] = c.r[1] + 0x8u;
    c.r[3] = 0x0u;
    c.r[4] = 0x24u;
    c.r[7] = 0x1u;
    c.lr = 0x801dad94u;
    f_801dbae8(c);
R_801dad94:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dadb4;
    c.r[5] = c.r[31] | c.r[31];
    c.r[6] = c.r[1] + 0x8u;
    c.r[3] = 0x0u;
    c.r[4] = 0x21u;
    c.r[7] = 0x1u;
    c.lr = 0x801dadb4u;
    f_801dbbe0(c);
L_801dadb4:
R_801dadb4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dadd4;
    c.r[5] = c.r[31] | c.r[31];
    c.r[6] = c.r[1] + 0x8u;
    c.r[3] = 0x0u;
    c.r[4] = 0x60u;
    c.r[7] = 0x1u;
    c.lr = 0x801dadd4u;
    f_801dbd1c(c);
L_801dadd4:
R_801dadd4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dadf4;
    c.r[5] = c.r[31] | c.r[31];
    c.r[6] = c.r[1] + 0x8u;
    c.r[3] = 0x0u;
    c.r[4] = 0x1fu;
    c.r[7] = 0x1u;
    c.lr = 0x801dadf4u;
    f_801dbe80(c);
L_801dadf4:
R_801dadf4:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801daeb0;
    wp::compare_signed(c, 0, c.r[3], 0x703u);
    if (wp::cr_get(c, 2)) goto L_801dae30;
    wp::compare_signed(c, 0, c.r[3], 0x701u);
    if (wp::cr_get(c, 2)) goto L_801dae38;
    wp::compare_signed(c, 0, c.r[3], 0x702u);
    if (wp::cr_get(c, 2)) goto L_801dae40;
    wp::compare_signed(c, 0, c.r[3], 0x704u);
    if (wp::cr_get(c, 2)) goto L_801dae48;
    wp::compare_signed(c, 0, c.r[3], 0x705u);
    if (wp::cr_get(c, 2)) goto L_801dae50;
    wp::compare_signed(c, 0, c.r[3], 0x706u);
    if (wp::cr_get(c, 2)) goto L_801dae58;
    goto L_801dae60;
L_801dae30:
    c.r[31] = 0x12u;
    goto L_801dae64;
L_801dae38:
    c.r[31] = 0x14u;
    goto L_801dae64;
L_801dae40:
    c.r[31] = 0x15u;
    goto L_801dae64;
L_801dae48:
    c.r[31] = 0x21u;
    goto L_801dae64;
L_801dae50:
    c.r[31] = 0x22u;
    goto L_801dae64;
L_801dae58:
    c.r[31] = 0x20u;
    goto L_801dae64;
L_801dae60:
    c.r[31] = 0x3u;
L_801dae64:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801dae74u;
    f_801d86dc(c);
R_801dae74:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801daea8u;
    f_801d8f14(c);
R_801daea8:
    c.r[3] = 0x0u;
    goto L_801daeb8;
L_801daeb0:
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801daeb8u;
    f_801d9e44(c);
L_801daeb8:
R_801daeb8:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xdcu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_801daecc(wp::Cpu& c) {
    WP_ENTER(0x801daeccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801daf00u: goto R_801daf00;
        case 0x801daf18u: goto R_801daf18;
        case 0x801daf50u: goto R_801daf50;
        case 0x801daf64u: goto R_801daf64;
        case 0x801dafa0u: goto R_801dafa0;
        case 0x801dafc0u: goto R_801dafc0;
        case 0x801dafe0u: goto R_801dafe0;
        case 0x801db000u: goto R_801db000;
        case 0x801db018u: goto R_801db018;
        case 0x801db030u: goto R_801db030;
        case 0x801db064u: goto R_801db064;
        case 0x801db108u: goto R_801db108;
        case 0x801db13cu: goto R_801db13c;
        case 0x801db14cu: goto R_801db14c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff20u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0xe4u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xdcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0xd8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0xd4u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0xd0u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    ea = c.r[3] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[3] + 0x18u;
    c.r[30] = wp::rd16(ea);
    ea = c.r[3] + 0x1cu;
    c.r[29] = wp::rd16(ea);
    c.lr = 0x801daf00u;
    f_801d9fd8(c);
R_801daf00:
    wp::compare_unsigned(c, 0, c.r[30], c.r[29]);
    if (!wp::cr_get(c, 1)) goto L_801daf58;
    c.r[3] = c.r[1] + 0x50u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801daf18u;
    f_801d86dc(c);
R_801daf18:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x14u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x54u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x50u;
    ea = c.r[1] + 0x50u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x58u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801daf50u;
    f_801d8f14(c);
R_801daf50:
    c.r[3] = 0x0u;
    goto L_801db14c;
L_801daf58:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x40u;
    c.lr = 0x801daf64u;
    f_801d9fd8(c);
R_801daf64:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801daf88;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801dafa8;
    wp::compare_signed(c, 0, c.r[31], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801dafc8;
    wp::compare_signed(c, 0, c.r[31], 0x3u);
    if (wp::cr_get(c, 2)) goto L_801dafe8;
    goto L_801db008;
L_801daf88:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.r[6] = c.r[1] + 0x8u;
    c.r[7] = 0x0u;
    c.lr = 0x801dafa0u;
    f_801dbae8(c);
R_801dafa0:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801db00c;
L_801dafa8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.r[6] = c.r[1] + 0x8u;
    c.r[7] = 0x0u;
    c.lr = 0x801dafc0u;
    f_801dbbe0(c);
R_801dafc0:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801db00c;
L_801dafc8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.r[6] = c.r[1] + 0x8u;
    c.r[7] = 0x0u;
    c.lr = 0x801dafe0u;
    f_801dbd1c(c);
R_801dafe0:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801db00c;
L_801dafe8:
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[28] | c.r[28];
    c.r[6] = c.r[1] + 0x8u;
    c.r[7] = 0x0u;
    c.lr = 0x801db000u;
    f_801dbe80(c);
R_801db000:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801db00c;
L_801db008:
    c.r[31] = 0x703u;
L_801db00c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = 0x0u;
    c.lr = 0x801db018u;
    f_801d9fb0(c);
R_801db018:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db068;
    c.r[3] = c.r[1] + 0x90u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db030u;
    f_801d86dc(c);
R_801db030:
    ea = c.r[13] + 0xffff94a8u;
    c.r[6] = wp::rd32(ea);
    c.r[0] = 0x40u;
    c.r[4] = 0x80u;
    ea = c.r[1] + 0x90u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x94u;
    wp::wr8(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x90u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x98u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x9cu;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db064u;
    f_801da008(c);
R_801db064:
    c.r[31] = c.r[3] | c.r[3];
L_801db068:
    wp::compare_signed(c, 0, c.r[31], 0x702u);
    if (wp::cr_get(c, 2)) goto L_801db0d4;
    if (!wp::cr_get(c, 0)) goto L_801db098;
    wp::compare_signed(c, 0, c.r[31], 0x302u);
    if (wp::cr_get(c, 2)) goto L_801db0cc;
    if (!wp::cr_get(c, 0)) goto L_801db08c;
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801db144;
    goto L_801db0f4;
L_801db08c:
    wp::compare_signed(c, 0, c.r[31], 0x701u);
    if (!wp::cr_get(c, 0)) goto L_801db0c4;
    goto L_801db0f4;
L_801db098:
    wp::compare_signed(c, 0, c.r[31], 0x705u);
    if (wp::cr_get(c, 2)) goto L_801db0e4;
    if (!wp::cr_get(c, 0)) goto L_801db0b0;
    wp::compare_signed(c, 0, c.r[31], 0x704u);
    if (!wp::cr_get(c, 0)) goto L_801db0dc;
    goto L_801db0bc;
L_801db0b0:
    wp::compare_signed(c, 0, c.r[31], 0x707u);
    if (!wp::cr_get(c, 0)) goto L_801db0f4;
    goto L_801db0ec;
L_801db0bc:
    c.r[31] = 0x12u;
    goto L_801db0f8;
L_801db0c4:
    c.r[31] = 0x14u;
    goto L_801db0f8;
L_801db0cc:
    c.r[31] = 0x2u;
    goto L_801db0f8;
L_801db0d4:
    c.r[31] = 0x15u;
    goto L_801db0f8;
L_801db0dc:
    c.r[31] = 0x21u;
    goto L_801db0f8;
L_801db0e4:
    c.r[31] = 0x22u;
    goto L_801db0f8;
L_801db0ec:
    c.r[31] = 0x20u;
    goto L_801db0f8;
L_801db0f4:
    c.r[31] = 0x3u;
L_801db0f8:
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db108u;
    f_801d86dc(c);
R_801db108:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[3] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x18u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db13cu;
    f_801d8f14(c);
R_801db13c:
    c.r[3] = 0x0u;
    goto L_801db14c;
L_801db144:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801db14cu;
    f_801d9e44(c);
L_801db14c:
R_801db14c:
    ea = c.r[1] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xdcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0xd8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0xd4u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0xd0u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0xe0u;
    return;
}

void f_801db16c(wp::Cpu& c) {
    WP_ENTER(0x801db16cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db17cu: goto R_801db17c;
        case 0x801db194u: goto R_801db194;
        case 0x801db1ccu: goto R_801db1cc;
        case 0x801db1e4u: goto R_801db1e4;
        case 0x801db21cu: goto R_801db21c;
        case 0x801db220u: goto R_801db220;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff70u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db17cu;
    f_801dcb0c(c);
R_801db17c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db1d4;
    c.r[3] = c.r[1] + 0x48u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db194u;
    f_801d86dc(c);
R_801db194:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x16u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x4cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x48u;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x50u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db1ccu;
    f_801d8f14(c);
R_801db1cc:
    c.r[3] = 0x0u;
    goto L_801db220;
L_801db1d4:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db1e4u;
    f_801d86dc(c);
R_801db1e4:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db21cu;
    f_801d8f14(c);
R_801db21c:
    c.lr = 0x801db220u;
    f_801d9ae8(c);
L_801db220:
R_801db220:
    ea = c.r[1] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x90u;
    return;
}

void f_801db230(wp::Cpu& c) {
    WP_ENTER(0x801db230u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db258u: goto R_801db258;
        case 0x801db2a4u: goto R_801db2a4;
        case 0x801db2dcu: goto R_801db2dc;
        case 0x801db2e8u: goto R_801db2e8;
        case 0x801db308u: goto R_801db308;
        case 0x801db340u: goto R_801db340;
        case 0x801db358u: goto R_801db358;
        case 0x801db390u: goto R_801db390;
        case 0x801db39cu: goto R_801db39c;
        case 0x801db3b4u: goto R_801db3b4;
        case 0x801db3ecu: goto R_801db3ec;
        case 0x801db404u: goto R_801db404;
        case 0x801db43cu: goto R_801db43c;
        case 0x801db478u: goto R_801db478;
        case 0x801db494u: goto R_801db494;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffea0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    ea = c.r[1] + 0x164u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x15cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x158u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    ea = c.r[1] + 0x154u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[1] + 0x150u;
    wp::wr32(ea, c.r[28]);
    c.lr = 0x801db258u;
    f_801d9fd8(c);
R_801db258:
    ea = c.r[30] + 0x14u;
    c.r[31] = wp::rd8(ea);
    ea = c.r[30] + 0x1cu;
    c.r[29] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    ea = c.r[30] + 0x20u;
    c.r[28] = wp::rd32(ea);
    if (wp::cr_get(c, 2)) goto L_801db288;
    wp::compare_signed(c, 0, c.r[31], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801db288;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801db2e4;
    wp::compare_signed(c, 0, c.r[31], 0x11u);
    if (wp::cr_get(c, 2)) goto L_801db2e4;
    goto L_801db348;
L_801db288:
    ea = c.r[30] + 0x18u;
    c.r[30] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[30], 0x1u);
    if (!wp::cr_get(c, 0)) goto L_801db398;
    c.r[3] = c.r[1] + 0x108u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db2a4u;
    f_801d86dc(c);
R_801db2a4:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x11u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x10cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x108u;
    ea = c.r[1] + 0x108u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x110u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x114u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db2dcu;
    f_801d8f14(c);
R_801db2dc:
    c.r[3] = 0x0u;
    goto L_801db494;
L_801db2e4:
    c.lr = 0x801db2e8u;
    f_801dc908(c);
R_801db2e8:
    wp::compare_unsigned(c, 0, c.r[3], c.r[29]);
    if (wp::cr_get(c, 0)) goto L_801db2f8;
    wp::compare_unsigned(c, 0, c.r[3], c.r[28]);
    if (!wp::cr_get(c, 1)) goto L_801db398;
L_801db2f8:
    c.r[3] = c.r[1] + 0xc8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db308u;
    f_801d86dc(c);
R_801db308:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x11u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xccu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0xc8u;
    ea = c.r[1] + 0xc8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0xd0u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0xd4u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db340u;
    f_801d8f14(c);
R_801db340:
    c.r[3] = 0x0u;
    goto L_801db494;
L_801db348:
    c.r[3] = c.r[1] + 0x88u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db358u;
    f_801d86dc(c);
R_801db358:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x12u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x8cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x88u;
    ea = c.r[1] + 0x88u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x90u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x94u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db390u;
    f_801d8f14(c);
R_801db390:
    c.r[3] = 0x0u;
    goto L_801db494;
L_801db398:
    c.lr = 0x801db39cu;
    f_801dcb0c(c);
R_801db39c:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db3f4;
    c.r[3] = c.r[1] + 0x48u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db3b4u;
    f_801d86dc(c);
R_801db3b4:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x16u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0x4cu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x48u;
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x50u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x54u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db3ecu;
    f_801d8f14(c);
R_801db3ec:
    c.r[3] = 0x0u;
    goto L_801db494;
L_801db3f4:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db404u;
    f_801d86dc(c);
R_801db404:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db43cu;
    f_801d8f14(c);
R_801db43c:
    wp::compare_signed(c, 0, c.r[31], 0x0u);
    c.r[3] = 0x0u;
    if (wp::cr_get(c, 2)) goto L_801db464;
    wp::compare_signed(c, 0, c.r[31], 0x10u);
    if (wp::cr_get(c, 2)) goto L_801db464;
    wp::compare_signed(c, 0, c.r[31], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801db47c;
    wp::compare_signed(c, 0, c.r[31], 0x11u);
    if (wp::cr_get(c, 2)) goto L_801db47c;
    goto L_801db494;
L_801db464:
    c.r[0] = c.r[31] + 0xfffffff0u;
    c.r[3] = c.r[30] | c.r[30];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x801db478u;
    f_801dc80c(c);
R_801db478:
    goto L_801db494;
L_801db47c:
    c.r[0] = c.r[31] + 0xffffffefu;
    c.r[3] = c.r[29] | c.r[29];
    c.r[0] = wp::cntlzw(c.r[0]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x801db494u;
    f_801dc894(c);
L_801db494:
R_801db494:
    ea = c.r[1] + 0x164u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x15cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x158u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x154u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x150u;
    c.r[28] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x160u;
    return;
}

void f_801db4b4(wp::Cpu& c) {
    WP_ENTER(0x801db4b4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db4c8u: goto R_801db4c8;
        case 0x801db520u: goto R_801db520;
        case 0x801db554u: goto R_801db554;
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
    c.lr = 0x801db4c8u;
    f_801dcb2c(c);
R_801db4c8:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801db4ec;
    wp::compare_signed(c, 0, c.r[3], 0x704u);
    if (wp::cr_get(c, 2)) goto L_801db4f4;
    wp::compare_signed(c, 0, c.r[3], 0x705u);
    if (wp::cr_get(c, 2)) goto L_801db4fc;
    wp::compare_signed(c, 0, c.r[3], 0x706u);
    if (wp::cr_get(c, 2)) goto L_801db504;
    goto L_801db50c;
L_801db4ec:
    c.r[31] = 0x0u;
    goto L_801db510;
L_801db4f4:
    c.r[31] = 0x21u;
    goto L_801db510;
L_801db4fc:
    c.r[31] = 0x22u;
    goto L_801db510;
L_801db504:
    c.r[31] = 0x20u;
    goto L_801db510;
L_801db50c:
    c.r[31] = 0x1u;
L_801db510:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db520u;
    f_801d86dc(c);
R_801db520:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[5] = c.r[3] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x1u;
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[31]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db554u;
    f_801d8f14(c);
R_801db554:
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801db56c(wp::Cpu& c) {
    WP_ENTER(0x801db56cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db5a0u: goto R_801db5a0;
        case 0x801db5b8u: goto R_801db5b8;
        case 0x801db5ccu: goto R_801db5cc;
        case 0x801db5d4u: goto R_801db5d4;
        case 0x801db5e4u: goto R_801db5e4;
        case 0x801db61cu: goto R_801db61c;
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
    ea = c.r[1] + 0x48u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[3] + 0x14u;
    c.r[0] = wp::rd8(ea);
    ea = c.r[3] + 0x18u;
    c.r[30] = wp::rd8(ea);
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801db5d4;
    c.r[31] = 0x80230000u;
    c.r[3] = c.r[31] + 0x18e8u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801db5a0u;
    f_80138880(c);
R_801db5a0:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801db5bc;
    c.r[3] = c.r[31] + 0x18e8u;
    c.r[3] = c.r[3] + 0x1fu;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801db5b8u;
    f_80138880(c);
R_801db5b8:
    goto L_801db5cc;
L_801db5bc:
    c.r[3] = c.r[31] + 0x18e8u;
    c.r[3] = c.r[3] + 0x27u;
    wp::cr_set(c, 6, wp::cr_get(c, 6) != wp::cr_get(c, 6));
    c.lr = 0x801db5ccu;
    f_80138880(c);
L_801db5cc:
R_801db5cc:
    c.r[3] = c.r[30] | c.r[30];
    c.lr = 0x801db5d4u;
    f_801dcfe8(c);
L_801db5d4:
R_801db5d4:
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    c.lr = 0x801db5e4u;
    f_801d86dc(c);
R_801db5e4:
    ea = c.r[13] + 0xffff94a8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x80u;
    c.r[4] = 0x40u;
    c.r[5] = 0x0u;
    c.r[6] = c.r[3] + 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr8(ea, c.r[0]);
    c.r[0] = c.r[6] + 0x1u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = 0x40u;
    ea = c.r[1] + 0x10u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[13] + 0xffff94a8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801db61cu;
    f_801d8f14(c);
R_801db61c:
    ea = c.r[1] + 0x4cu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x48u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x54u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x50u;
    return;
}

void f_801db638(wp::Cpu& c) {
    WP_ENTER(0x801db638u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db660u: goto R_801db660;
        case 0x801db684u: goto R_801db684;
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
    c.lr = 0x801db660u;
    f_801dcff0(c);
R_801db660:
    c.r[0] = c.r[3] & 0xffu;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801db670;
    c.r[3] = 0x1u;
    goto L_801db684;
L_801db670:
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[3] = 0x0u;
    c.lr = 0x801db684u;
    f_801db708(c);
L_801db684:
R_801db684:
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

void f_801db6a0(wp::Cpu& c) {
    WP_ENTER(0x801db6a0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db6c8u: goto R_801db6c8;
        case 0x801db6ecu: goto R_801db6ec;
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
    c.lr = 0x801db6c8u;
    f_801dcff0(c);
R_801db6c8:
    c.r[0] = c.r[3] & 0xffu;
    wp::record(c, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801db6d8;
    c.r[3] = 0x1u;
    goto L_801db6ec;
L_801db6d8:
    c.r[4] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[31] | c.r[31];
    c.r[3] = 0x1u;
    c.lr = 0x801db6ecu;
    f_801db710(c);
L_801db6ec:
R_801db6ec:
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

void f_801db708(wp::Cpu& c) {
    WP_ENTER(0x801db708u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[7] = 0xd1u;
    f_801db718(c);
    return;
}

void f_801db710(wp::Cpu& c) {
    WP_ENTER(0x801db710u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[7] = 0xd0u;
    f_801db718(c);
    return;
}

void f_801db718(wp::Cpu& c) {
    WP_ENTER(0x801db718u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db748u: goto R_801db748;
        case 0x801db774u: goto R_801db774;
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
    c.r[30] = c.r[5] | c.r[5];
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[28]);
    c.r[28] = c.r[3] | c.r[3];
    c.lr = 0x801db748u;
    f_801da6b4(c);
R_801db748:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db758;
    c.r[3] = 0x1u;
    goto L_801db7a4;
L_801db758:
    ea = c.r[30] + 0x0u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[29] | c.r[29];
    c.r[5] = c.r[1] + 0x8u;
    c.lr = 0x801db774u;
    f_801d7f30(c);
R_801db774:
    c.r[0] = c.r[3] & 0xffu;
    wp::record(c, c.r[0]);
    ea = c.r[1] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[3]);
    if (wp::cr_get(c, 2)) goto L_801db790;
    wp::compare_signed(c, 0, c.r[0], 0x2u);
    if (wp::cr_get(c, 2)) goto L_801db798;
    goto L_801db7a0;
L_801db790:
    c.r[3] = 0x0u;
    goto L_801db7a4;
L_801db798:
    c.r[3] = 0x2u;
    goto L_801db7a4;
L_801db7a0:
    c.r[3] = 0x1u;
L_801db7a4:
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

void f_801db7c4(wp::Cpu& c) {
    WP_ENTER(0x801db7c4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.msr;
    return;
}

void f_801db7cc(wp::Cpu& c) {
    WP_ENTER(0x801db7ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.msr = c.r[3];
    return;
}

void f_801db7d4(wp::Cpu& c) {
    WP_ENTER(0x801db7d4u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db880u: goto R_801db880;
        case 0x801db8acu: goto R_801db8ac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = c.r[4] + c.r[3];
    c.r[6] = 0x700u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] + 0xffffffffu;
    wp::compare_unsigned(c, 0, c.r[31], c.r[3]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[5] | c.r[5];
    if (!wp::cr_get(c, 0)) goto L_801db808;
    c.r[3] = 0x700u;
    goto L_801db8b4;
L_801db808:
    c.r[4] = 0x80200000u;
    c.r[4] = c.r[4] + 0x7ef0u;
    ea = c.r[4] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801db8b0;
    ea = c.r[4] + 0x0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801db8b0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db83c;
    ea = c.r[4] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801db858;
L_801db83c:
    wp::compare_signed(c, 0, c.r[5], 0x1u);
    if (!wp::cr_get(c, 2)) goto L_801db860;
    c.r[4] = 0x80200000u;
    c.r[4] = c.r[4] + 0x7ef0u;
    ea = c.r[4] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db860;
L_801db858:
    c.r[6] = 0x700u;
    goto L_801db8b0;
L_801db860:
    c.r[4] = 0x80200000u;
    c.r[6] = 0x0u;
    ea = c.r[4] + 0x7ef0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801db884;
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = c.r[0] - c.r[3];
    c.lr = 0x801db880u;
    f_801db7d4(c);
R_801db880:
    c.r[6] = c.r[3] | c.r[3];
L_801db884:
    wp::compare_signed(c, 0, c.r[6], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801db8b0;
    c.r[3] = 0x80200000u;
    c.r[3] = c.r[3] + 0x7ef0u;
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[31], c.r[3]);
    if (!wp::cr_get(c, 1)) goto L_801db8b0;
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = c.r[31] - c.r[3];
    c.lr = 0x801db8acu;
    f_801db7d4(c);
R_801db8ac:
    c.r[6] = c.r[3] | c.r[3];
L_801db8b0:
    c.r[3] = c.r[6] | c.r[6];
L_801db8b4:
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

void f_801db8cc(wp::Cpu& c) {
    WP_ENTER(0x801db8ccu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db8f4u: goto R_801db8f4;
        case 0x801db908u: goto R_801db908;
        case 0x801db930u: goto R_801db930;
        case 0x801db984u: goto R_801db984;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x10u;
    for (uint32_t k = 24; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[4] | c.r[4];
    c.r[26] = c.r[5] | c.r[5];
    c.r[27] = c.r[6] | c.r[6];
    c.r[28] = c.r[7] | c.r[7];
    c.lr = 0x801db8f4u;
    f_801db7c4(c);
R_801db8f4:
    c.r[31] = c.r[3] | c.r[3];
    c.r[25] = 0xffu;
    goto L_801db974;
L_801db900:
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801db908u;
    f_801db7cc(c);
R_801db908:
    c.r[3] = c.r[30] & 0xfffffffcu;
    c.r[0] = c.r[30] - c.r[3];
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[0] = wp::srw(c.r[3], c.r[0]);
    c.r[24] = c.r[0] & 0xffu;
    c.r[3] = c.r[27] | c.r[27];
    c.lr = 0x801db930u;
    f_801db7cc(c);
R_801db930:
    c.r[6] = c.r[29] & 0xfffffffcu;
    c.r[0] = c.r[29] - c.r[6];
    ea = c.r[6] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[0] = wp::sub_carry(c, c.r[0], 0x3u);
    c.r[3] = wp::rotl(c.r[3], 3) & 0xfffffff8u;
    c.r[0] = wp::rotl(c.r[0], 3) & 0xfffffff8u;
    c.r[4] = wp::slw(c.r[25], c.r[3]);
    c.r[0] = wp::slw(c.r[24], c.r[0]);
    c.r[3] = c.r[5] & ~c.r[4];
    c.r[0] = c.r[4] & c.r[0];
    c.r[0] = c.r[3] | c.r[0];
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[30] = c.r[30] + 0x1u;
    c.r[29] = c.r[29] + 0x1u;
    c.r[26] = c.r[26] + 0xffffffffu;
L_801db974:
    wp::compare_signed(c, 0, c.r[26], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801db900;
    }
    c.r[3] = c.r[31] | c.r[31];
    c.lr = 0x801db984u;
    f_801db7cc(c);
R_801db984:
    ea = c.r[1] + 0x10u;
    for (uint32_t k = 24; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x34u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x30u;
    return;
}

void f_801db998(wp::Cpu& c) {
    WP_ENTER(0x801db998u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801db9f0u: goto R_801db9f0;
        case 0x801dba04u: goto R_801dba04;
        case 0x801dba1cu: goto R_801dba1c;
        case 0x801dba50u: goto R_801dba50;
        case 0x801dba6cu: goto R_801dba6c;
        case 0x801dba78u: goto R_801dba78;
        case 0x801dba8cu: goto R_801dba8c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[8] = 0x80230000u;
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[8] = c.r[8] + 0x1918u;
    ea = c.r[1] + 0x24u;
    for (uint32_t k = 25; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[4] | c.r[4];
    c.r[31] = c.r[5] | c.r[5];
    c.r[25] = c.r[3] | c.r[3];
    c.r[30] = 0x0u;
    c.r[27] = c.r[7] | c.r[7];
    c.r[3] = c.r[26] | c.r[26];
    ea = c.r[8] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[8] + 0x0u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[8] + 0x4u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[8] + 0x8u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[8] + 0xdu;
    wp::wr8(ea, c.r[30]);
    c.lr = 0x801db9f0u;
    f_801d8a54(c);
R_801db9f0:
    c.r[0] = wp::cntlzw(c.r[27]);
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[28] = c.r[3] | c.r[3];
    c.r[5] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.lr = 0x801dba04u;
    f_801db7d4(c);
R_801dba04:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[29] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801dba18;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[30]);
    goto L_801dba8c;
L_801dba18:
    c.lr = 0x801dba1cu;
    f_801db7c4(c);
R_801dba1c:
    c.r[4] = 0x802f0000u;
    wp::compare_signed(c, 0, c.r[27], 0x0u);
    c.r[4] = c.r[4] + 0x5008u;
    c.r[8] = c.r[3] | c.r[3];
    ea = c.r[4] + 0x1f8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0x10u;
    c.r[7] = c.r[3] | c.r[0];
    if (wp::cr_get(c, 2)) goto L_801dba54;
    ea = c.r[31] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[25] | c.r[25];
    c.r[4] = c.r[28] | c.r[28];
    c.r[6] = c.r[8] | c.r[8];
    c.lr = 0x801dba50u;
    f_801db8cc(c);
R_801dba50:
    goto L_801dba8c;
L_801dba54:
    ea = c.r[31] + 0x0u;
    c.r[5] = wp::rd32(ea);
    c.r[6] = c.r[7] | c.r[7];
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[25] | c.r[25];
    c.r[7] = c.r[8] | c.r[8];
    c.lr = 0x801dba6cu;
    f_801db8cc(c);
R_801dba6c:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    c.lr = 0x801dba78u;
    f_801d8440(c);
R_801dba78:
    wp::compare_unsigned(c, 0, c.r[26], c.r[28]);
    if (wp::cr_get(c, 2)) goto L_801dba8c;
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[26] | c.r[26];
    c.lr = 0x801dba8cu;
    f_801d8440(c);
L_801dba8c:
R_801dba8c:
    c.r[3] = 0x80230000u;
    c.r[3] = c.r[3] + 0x1918u;
    ea = c.r[3] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbaac;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[29] = 0x702u;
L_801dbaac:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[7] + 0x1918u;
    wp::wr32(ea, c.r[6]);
    c.r[7] = ea;
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[7] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x24u;
    for (uint32_t k = 25; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801dbae8(wp::Cpu& c) {
    WP_ENTER(0x801dbae8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dbb74u: goto R_801dbb74;
        case 0x801dbb84u: goto R_801dbb84;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_unsigned(c, 0, c.r[4], 0x24u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 1)) goto L_801dbb10;
    c.r[3] = 0x701u;
    goto L_801dbbc8;
L_801dbb10:
    c.r[12] = 0x80230000u;
    c.r[4] = c.r[4] - c.r[3];
    c.r[12] = c.r[12] + 0x1918u;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    ea = c.r[12] + 0xcu;
    c.r[9] = wp::rd32(ea);
    c.r[8] = 0x802f0000u;
    ea = c.r[12] + 0x0u;
    c.r[11] = wp::rd32(ea);
    c.r[0] = 0x0u;
    ea = c.r[12] + 0x4u;
    c.r[10] = wp::rd32(ea);
    c.r[31] = c.r[4] + 0x1u;
    ea = c.r[12] + 0x8u;
    c.r[7] = wp::rd32(ea);
    c.r[3] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    ea = c.r[12] + 0xdu;
    wp::wr8(ea, c.r[0]);
    c.r[8] = c.r[8] + 0x5008u;
    c.r[0] = wp::rotl(c.r[31], 2) & 0xfffffffcu;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[11]);
    c.r[4] = c.r[8] + c.r[3];
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dbb78;
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801dbb74u;
    f_801da364(c);
R_801dbb74:
    goto L_801dbb84;
L_801dbb78:
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[31] | c.r[31];
    c.lr = 0x801dbb84u;
    f_801da5cc(c);
L_801dbb84:
R_801dbb84:
    c.r[4] = 0x80230000u;
    c.r[4] = c.r[4] + 0x1918u;
    ea = c.r[4] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbba4;
    c.r[0] = 0x0u;
    ea = c.r[30] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x702u;
L_801dbba4:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[7] + 0x1918u;
    wp::wr32(ea, c.r[6]);
    c.r[7] = ea;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[7] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dbbc8:
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

void f_801dbbe0(wp::Cpu& c) {
    WP_ENTER(0x801dbbe0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dbc48u: goto R_801dbc48;
        case 0x801dbc50u: goto R_801dbc50;
        case 0x801dbc74u: goto R_801dbc74;
        case 0x801dbc84u: goto R_801dbc84;
        case 0x801dbc94u: goto R_801dbc94;
        case 0x801dbca4u: goto R_801dbca4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_unsigned(c, 0, c.r[4], 0x21u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    c.r[30] = c.r[7] | c.r[7];
    if (!wp::cr_get(c, 1)) goto L_801dbc14;
    c.r[3] = 0x701u;
    goto L_801dbd08;
L_801dbc14:
    c.r[6] = 0x80230000u;
    c.r[31] = 0x0u;
    c.r[6] = c.r[6] + 0x1918u;
    ea = c.r[6] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[6] + 0x0u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[6] + 0x4u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[6] + 0x8u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[6] + 0xdu;
    wp::wr8(ea, c.r[31]);
    c.lr = 0x801dbc48u;
    f_801db7c4(c);
R_801dbc48:
    c.r[3] = c.r[3] | 0x2000u;
    c.lr = 0x801dbc50u;
    f_801db7cc(c);
R_801dbc50:
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = 0x0u;
    goto L_801dbcb4;
L_801dbc5c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbc88;
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801dbc74u;
    f_801dcd10(c);
R_801dbc74:
    ea = c.r[1] + 0x8u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0xcu;
    c.r[6] = wp::rd32(ea);
    c.lr = 0x801dbc84u;
    f_801da20c(c);
R_801dbc84:
    goto L_801dbca4;
L_801dbc88:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801dbc94u;
    f_801da454(c);
R_801dbc94:
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x8u;
    c.lr = 0x801dbca4u;
    f_801dcd10(c);
L_801dbca4:
R_801dbca4:
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[26] = c.r[26] + 0x1u;
    c.r[0] = c.r[4] + 0x8u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801dbcb4:
    wp::compare_unsigned(c, 0, c.r[26], c.r[27]);
    if (wp::cr_get(c, 1)) goto L_801dbcc4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801dbc5c;
    }
L_801dbcc4:
    c.r[4] = 0x80230000u;
    c.r[4] = c.r[4] + 0x1918u;
    ea = c.r[4] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbce4;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x702u;
L_801dbce4:
    ea = c.r[1] + 0x10u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[7] + 0x1918u;
    wp::wr32(ea, c.r[6]);
    c.r[7] = ea;
    ea = c.r[1] + 0x14u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[7] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dbd08:
    ea = c.r[1] + 0x28u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801dbd1c(wp::Cpu& c) {
    WP_ENTER(0x801dbd1cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dbdb4u: goto R_801dbdb4;
        case 0x801dbe28u: goto R_801dbe28;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_unsigned(c, 0, c.r[4], 0x60u);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[6] | c.r[6];
    if (!wp::cr_get(c, 1)) goto L_801dbd40;
    c.r[3] = 0x701u;
    goto L_801dbe6c;
L_801dbd40:
    c.r[12] = 0x80230000u;
    wp::compare_unsigned(c, 0, c.r[3], c.r[4]);
    c.r[12] = c.r[12] + 0x1918u;
    c.r[0] = 0x0u;
    ea = c.r[12] + 0xcu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[12] + 0x0u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[12] + 0x4u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[12] + 0xdu;
    wp::wr8(ea, c.r[0]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801dbe28;
    c.r[4] = c.r[4] - c.r[3];
    c.r[8] = 0x802f0000u;
    c.r[9] = c.r[4] + 0x1u;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    c.r[7] = wp::rotl(c.r[9], 2) & 0xfffffffcu;
    c.r[8] = c.r[8] + 0x5008u;
    c.r[0] = wp::rotl(c.r[3], 2) & 0xfffffffcu;
    ea = c.r[6] + 0x0u;
    wp::wr32(ea, c.r[7]);
    c.r[3] = c.r[8] + c.r[0];
    c.r[4] = c.r[3] + 0x1a8u;
    if (wp::cr_get(c, 2)) goto L_801dbdb8;
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[9] | c.r[9];
    c.lr = 0x801dbdb4u;
    f_801da364(c);
R_801dbdb4:
    goto L_801dbe28;
L_801dbdb8:
    c.r[0] = c.r[8] + 0x1ecu;
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801dbde4;
    c.r[3] = c.r[4] + c.r[7];
    c.r[0] = c.r[8] + 0x1e8u;
    c.r[3] = c.r[3] + 0xfffffffcu;
    wp::compare_unsigned(c, 0, c.r[3], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801dbde4;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x4e90u;
    wp::wr8(ea, c.r[0]);
L_801dbde4:
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x5008u;
    c.r[6] = c.r[3] + 0x278u;
    wp::compare_unsigned(c, 0, c.r[4], c.r[6]);
    if (wp::cr_get(c, 1)) goto L_801dbe1c;
    c.r[0] = wp::rotl(c.r[9], 2) & 0xfffffffcu;
    c.r[3] = c.r[4] + c.r[0];
    c.r[0] = c.r[3] + 0xfffffffcu;
    wp::compare_unsigned(c, 0, c.r[0], c.r[6]);
    if (wp::cr_get(c, 0)) goto L_801dbe1c;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x1u;
    c.r[3] = c.r[3] + 0x4e90u;
    ea = c.r[3] + 0x1u;
    wp::wr8(ea, c.r[0]);
L_801dbe1c:
    c.r[3] = c.r[5] | c.r[5];
    c.r[5] = c.r[9] | c.r[9];
    c.lr = 0x801dbe28u;
    f_801da5cc(c);
L_801dbe28:
R_801dbe28:
    c.r[4] = 0x80230000u;
    c.r[4] = c.r[4] + 0x1918u;
    ea = c.r[4] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbe48;
    c.r[0] = 0x0u;
    ea = c.r[31] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x702u;
L_801dbe48:
    ea = c.r[1] + 0x8u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[7] + 0x1918u;
    wp::wr32(ea, c.r[6]);
    c.r[7] = ea;
    ea = c.r[1] + 0xcu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x10u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[7] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dbe6c:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x1cu;
    c.r[31] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801dbe80(wp::Cpu& c) {
    WP_ENTER(0x801dbe80u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dbef4u: goto R_801dbef4;
        case 0x801dbf10u: goto R_801dbf10;
        case 0x801dbf24u: goto R_801dbf24;
        case 0x801dbf48u: goto R_801dbf48;
        case 0x801dbf58u: goto R_801dbf58;
        case 0x801dbf68u: goto R_801dbf68;
        case 0x801dbf78u: goto R_801dbf78;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_unsigned(c, 0, c.r[4], 0x1fu);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x28u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = c.r[3] | c.r[3];
    c.r[27] = c.r[4] | c.r[4];
    c.r[28] = c.r[5] | c.r[5];
    c.r[29] = c.r[6] | c.r[6];
    c.r[30] = c.r[7] | c.r[7];
    if (!wp::cr_get(c, 1)) goto L_801dbeb4;
    c.r[3] = 0x701u;
    goto L_801dbfdc;
L_801dbeb4:
    c.r[9] = 0x80230000u;
    c.r[31] = 0x0u;
    c.r[9] = c.r[9] + 0x1918u;
    c.r[3] = c.r[1] + 0x8u;
    ea = c.r[9] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[4] = 0x398u;
    ea = c.r[9] + 0x0u;
    c.r[8] = wp::rd32(ea);
    c.r[5] = 0x1u;
    ea = c.r[9] + 0x4u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[9] + 0x8u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[9] + 0xdu;
    wp::wr8(ea, c.r[31]);
    c.lr = 0x801dbef4u;
    f_801dcb44(c);
R_801dbef4:
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x398u;
    c.r[5] = 0x0u;
    c.r[0] = c.r[0] | 0xa0000000u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dbf10u;
    f_801dcb44(c);
R_801dbf10:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = c.r[1] + 0x8u;
    c.r[4] = 0x390u;
    c.r[5] = 0x0u;
    c.lr = 0x801dbf24u;
    f_801dcb44(c);
R_801dbf24:
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[31]);
    c.r[3] = 0x0u;
    goto L_801dbf88;
L_801dbf30:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbf5c;
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dbf48u;
    f_801dcc20(c);
R_801dbf48:
    ea = c.r[1] + 0x10u;
    c.r[5] = wp::rd32(ea);
    c.r[3] = c.r[28] | c.r[28];
    ea = c.r[1] + 0x14u;
    c.r[6] = wp::rd32(ea);
    c.lr = 0x801dbf58u;
    f_801da20c(c);
R_801dbf58:
    goto L_801dbf78;
L_801dbf5c:
    c.r[3] = c.r[28] | c.r[28];
    c.r[4] = c.r[1] + 0x10u;
    c.lr = 0x801dbf68u;
    f_801da454(c);
R_801dbf68:
    c.r[4] = c.r[26] | c.r[26];
    c.r[5] = c.r[30] | c.r[30];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dbf78u;
    f_801dcc20(c);
L_801dbf78:
R_801dbf78:
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[26] = c.r[26] + 0x1u;
    c.r[0] = c.r[4] + 0x8u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801dbf88:
    wp::compare_unsigned(c, 0, c.r[26], c.r[27]);
    if (wp::cr_get(c, 1)) goto L_801dbf98;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801dbf30;
    }
L_801dbf98:
    c.r[4] = 0x80230000u;
    c.r[4] = c.r[4] + 0x1918u;
    ea = c.r[4] + 0xdu;
    c.r[0] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dbfb8;
    c.r[0] = 0x0u;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = 0x702u;
L_801dbfb8:
    ea = c.r[1] + 0x18u;
    c.r[6] = wp::rd32(ea);
    c.r[7] = 0x80230000u;
    ea = c.r[7] + 0x1918u;
    wp::wr32(ea, c.r[6]);
    c.r[7] = ea;
    ea = c.r[1] + 0x1cu;
    c.r[5] = wp::rd32(ea);
    ea = c.r[1] + 0x20u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[7] + 0x4u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[7] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dbfdc:
    ea = c.r[1] + 0x28u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x44u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801dbff0(wp::Cpu& c) {
    WP_ENTER(0x801dbff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc04cu: goto R_801dc04c;
        case 0x801dc120u: goto R_801dc120;
        default: wp::bad_resume(c);
        }
    }
    c.spr[26] = c.r[2];
    c.spr[27] = c.r[4];
    c.r[4] = c.spr[275];
    c.r[2] = wp::mfcr(c);
    c.spr[275] = c.r[2];
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    ea = c.r[2] + 0x8cu;
    c.r[2] = wp::rd32(ea);
    c.r[2] = c.r[2] | 0x8002u;
    c.r[2] = c.r[2] ^ 0x8002u;
    c.msr = c.r[2];
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x68f0u;
    ea = c.r[2] + 0x0u;
    wp::wr16(ea, c.r[3]);
    wp::compare_signed(c, 0, c.r[3], 0x500u);
    if (!wp::cr_get(c, 2)) goto L_801dc0b8;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    c.r[3] = c.lr;
    ea = c.r[2] + 0x42cu;
    wp::wr32(ea, c.r[3]);
    c.lr = 0x801dc04cu;
    f_801d8e40(c);
R_801dc04c:
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    ea = c.r[2] + 0x42cu;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[3];
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    ea = c.r[2] + 0xa0u;
    c.r[2] = wp::rd32(ea);
    ea = c.r[2] + 0x0u;
    c.r[2] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[2], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc09c;
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    ea = c.r[2] + 0xcu;
    c.r[2] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[2], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801dc09c;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    c.r[3] = 0x1u;
    ea = c.r[2] + 0x9cu;
    wp::wr8(ea, c.r[3]);
    goto L_801dc0b8;
L_801dc09c:
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4eb8u;
    ea = c.r[2] + 0x88u;
    c.r[3] = wp::rd32(ea);
    wp::mtcrf(c, 0xff, c.r[3]);
    ea = c.r[2] + 0xcu;
    c.r[3] = wp::rd32(ea);
    ea = c.r[2] + 0x8u;
    c.r[2] = wp::rd32(ea);
    wp::unsupported_instruction(c, 0x801dc0b4u, "rfi");
L_801dc0b8:
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x68f0u;
    ea = c.r[2] + 0x0u;
    c.r[3] = wp::rd16(ea);
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    ea = c.r[2] + 0xcu;
    c.r[2] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[2], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc184;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    ea = c.r[2] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0x4u;
    wp::wr32(ea, c.r[1]);
    c.r[0] = c.spr[273];
    ea = c.r[2] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0x2f8u;
    wp::wr16(ea, c.r[3]);
    ea = c.r[2] + 0x2fau;
    wp::wr16(ea, c.r[3]);
    c.r[0] = c.spr[274];
    ea = c.r[2] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[2] + 0x10u;
    for (uint32_t k = 4; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[27] = c.spr[26];
    c.r[28] = c.lr;
    c.r[29] = c.spr[275];
    c.r[30] = c.ctr;
    c.r[31] = wp::mfxer(c);
    ea = c.r[2] + 0x80u;
    for (uint32_t k = 27; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.lr = 0x801dc120u;
    f_801d9b1c(c);
R_801dc120:
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    c.r[3] = 0x1u;
    ea = c.r[2] + 0xcu;
    wp::wr8(ea, c.r[3]);
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    ea = c.r[2] + 0x8cu;
    c.r[0] = wp::rd32(ea);
    c.msr = c.r[0];
    ea = c.r[2] + 0x80u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    ea = c.r[2] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.ctr = c.r[0];
    ea = c.r[2] + 0x88u;
    c.r[0] = wp::rd32(ea);
    wp::mtxer(c, c.r[0]);
    ea = c.r[2] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.spr[18] = c.r[0];
    ea = c.r[2] + 0x90u;
    c.r[0] = wp::rd32(ea);
    c.spr[19] = c.r[0];
    ea = c.r[2] + 0xcu;
    for (uint32_t k = 3; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[2] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[2] + 0x4u;
    c.r[1] = wp::rd32(ea);
    ea = c.r[2] + 0x8u;
    c.r[2] = wp::rd32(ea);
    f_801dc220(c);
    return;
L_801dc184:
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    ea = c.r[2] + 0x8u;
    wp::wr16(ea, c.r[3]);
    c.r[3] = c.spr[26];
    ea = c.r[2] + 0x0u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[2] + 0x8u;
    c.r[3] = wp::rd16(ea);
    wp::compare_signed(c, 0, c.r[3], 0x200u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x300u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x400u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x600u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x700u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x800u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x1000u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x1100u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x1200u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    wp::compare_signed(c, 0, c.r[3], 0x1300u);
    if (wp::cr_get(c, 2)) goto L_801dc1f0;
    goto L_801dc1fc;
L_801dc1f0:
    c.r[3] = c.spr[26];
    c.r[3] = c.r[3] + 0x4u;
    c.spr[26] = c.r[3];
L_801dc1fc:
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    c.r[3] = 0x1u;
    ea = c.r[2] + 0xdu;
    wp::wr8(ea, c.r[3]);
    c.r[3] = c.spr[275];
    wp::mtcrf(c, 0xff, c.r[3]);
    c.r[2] = c.spr[273];
    c.r[3] = c.spr[274];
    wp::unsupported_instruction(c, 0x801dc21cu, "rfi");
}

void f_801dc220(wp::Cpu& c) {
    WP_ENTER(0x801dc220u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc294u: goto R_801dc294;
        case 0x801dc2c0u: goto R_801dc2c0;
        case 0x801dc2c8u: goto R_801dc2c8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffe0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x802f0000u;
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[3] = c.r[3] + 0x4f60u;
    ea = c.r[3] + 0x9cu;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc24c;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x9cu;
    wp::wr32(ea, c.r[0]);
    goto L_801dc2c8;
L_801dc24c:
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[3] + 0x2f8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffffu;
    wp::compare_signed(c, 0, c.r[0], 0x700u);
    if (wp::cr_get(c, 2)) goto L_801dc26c;
    wp::compare_signed(c, 0, c.r[0], 0xd00u);
    if (!wp::cr_get(c, 2)) goto L_801dc2b4;
L_801dc26c:
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x4u;
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x80u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0xcu;
    c.r[5] = c.r[1] + 0x8u;
    c.r[6] = 0x0u;
    c.r[7] = 0x1u;
    c.lr = 0x801dc294u;
    f_801db998(c);
R_801dc294:
    ea = c.r[1] + 0xcu;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xf0200000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc2ac;
    c.r[4] = 0x5u;
    goto L_801dc2b8;
L_801dc2ac:
    c.r[4] = 0x3u;
    goto L_801dc2b8;
L_801dc2b4:
    c.r[4] = 0x4u;
L_801dc2b8:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dc2c0u;
    f_801d91f0(c);
R_801dc2c0:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dc2c8u;
    f_801d9124(c);
L_801dc2c8:
R_801dc2c8:
    ea = c.r[1] + 0x24u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x20u;
    return;
}

void f_801dc2d8(wp::Cpu& c) {
    WP_ENTER(0x801dc2d8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc368u: goto R_801dc368;
        default: wp::bad_resume(c);
        }
    }
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] | 0x4f60u;
    ea = c.r[3] + 0x0u;
    for (uint32_t k = 0; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[0] = c.msr;
    ea = c.r[3] + 0x8cu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.lr;
    ea = c.r[3] + 0x80u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.ctr;
    ea = c.r[3] + 0x84u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::mfxer(c);
    ea = c.r[3] + 0x88u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.spr[18];
    ea = c.r[3] + 0x94u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.spr[19];
    ea = c.r[3] + 0x90u;
    wp::wr32(ea, c.r[0]);
    c.r[1] = 0xffff8002u;
    c.r[1] = ~(c.r[1] | c.r[1]);
    c.r[3] = c.msr;
    c.r[3] = c.r[3] & c.r[1];
    c.msr = c.r[3];
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    ea = c.r[2] + 0xa0u;
    c.r[2] = wp::rd32(ea);
    ea = c.r[2] + 0x0u;
    c.r[2] = wp::rd8(ea);
    wp::compare_signed(c, 0, c.r[2], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc354;
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    c.r[3] = 0x1u;
    ea = c.r[2] + 0x9cu;
    wp::wr8(ea, c.r[3]);
    goto L_801dc39c;
L_801dc354:
    c.r[2] = 0x80230000u;
    c.r[2] = c.r[2] | 0x1918u;
    c.r[3] = 0x0u;
    ea = c.r[2] + 0xcu;
    wp::wr8(ea, c.r[3]);
    c.lr = 0x801dc368u;
    f_801d9ce0(c);
R_801dc368:
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x5008u;
    ea = c.r[2] + 0x80u;
    for (uint32_t k = 27; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    c.spr[26] = c.r[27];
    c.lr = c.r[28];
    wp::mtcrf(c, 0xff, c.r[29]);
    c.ctr = c.r[30];
    wp::mtxer(c, c.r[31]);
    ea = c.r[2] + 0xcu;
    for (uint32_t k = 3; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[2] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[2] + 0x4u;
    c.r[1] = wp::rd32(ea);
    ea = c.r[2] + 0x8u;
    c.r[2] = wp::rd32(ea);
    wp::unsupported_instruction(c, 0x801dc398u, "rfi");
L_801dc39c:
    c.r[2] = 0x802f0000u;
    c.r[2] = c.r[2] | 0x4f60u;
    ea = c.r[2] + 0x8cu;
    c.r[0] = wp::rd32(ea);
    c.msr = c.r[0];
    ea = c.r[2] + 0x80u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    ea = c.r[2] + 0x84u;
    c.r[0] = wp::rd32(ea);
    c.ctr = c.r[0];
    ea = c.r[2] + 0x88u;
    c.r[0] = wp::rd32(ea);
    wp::mtxer(c, c.r[0]);
    ea = c.r[2] + 0x94u;
    c.r[0] = wp::rd32(ea);
    c.spr[18] = c.r[0];
    ea = c.r[2] + 0x90u;
    c.r[0] = wp::rd32(ea);
    c.spr[19] = c.r[0];
    ea = c.r[2] + 0xcu;
    for (uint32_t k = 3; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[2] + 0x0u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[2] + 0x4u;
    c.r[1] = wp::rd32(ea);
    ea = c.r[2] + 0x8u;
    c.r[2] = wp::rd32(ea);
    f_801dc220(c);
    return;
}

void f_801dc3f0(wp::Cpu& c) {
    WP_ENTER(0x801dc3f0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc418u: goto R_801dc418;
        case 0x801dc428u: goto R_801dc428;
        case 0x801dc430u: goto R_801dc430;
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
    c.r[31] = 0x0u;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xfffffffdu;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 1)) goto L_801dc434;
    c.lr = 0x801dc418u;
    f_801dc6e8(c);
R_801dc418:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc434;
    c.r[3] = 0x1u;
    c.lr = 0x801dc428u;
    f_801dcb1c(c);
R_801dc428:
    c.r[3] = 0x90u;
    c.lr = 0x801dc430u;
    f_801d8fe4(c);
R_801dc430:
    c.r[31] = c.r[3] | c.r[3];
L_801dc434:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801dc44c(wp::Cpu& c) {
    WP_ENTER(0x801dc44cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc478u: goto R_801dc478;
        case 0x801dc4a4u: goto R_801dc4a4;
        case 0x801dc4b4u: goto R_801dc4b4;
        case 0x801dc4dcu: goto R_801dc4dc;
        case 0x801dc500u: goto R_801dc500;
        case 0x801dc51cu: goto R_801dc51c;
        case 0x801dc540u: goto R_801dc540;
        case 0x801dc54cu: goto R_801dc54c;
        case 0x801dc558u: goto R_801dc558;
        case 0x801dc564u: goto R_801dc564;
        case 0x801dc570u: goto R_801dc570;
        case 0x801dc584u: goto R_801dc584;
        case 0x801dc590u: goto R_801dc590;
        case 0x801dc598u: goto R_801dc598;
        case 0x801dc5a4u: goto R_801dc5a4;
        case 0x801dc5acu: goto R_801dc5ac;
        case 0x801dc5b8u: goto R_801dc5b8;
        case 0x801dc5c0u: goto R_801dc5c0;
        case 0x801dc5ccu: goto R_801dc5cc;
        case 0x801dc5d4u: goto R_801dc5d4;
        case 0x801dc5e0u: goto R_801dc5e0;
        case 0x801dc618u: goto R_801dc618;
        case 0x801dc62cu: goto R_801dc62c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffb90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x474u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x46cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x468u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x464u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x20u;
    c.lr = 0x801dc478u;
    f_801d86dc(c);
R_801dc478:
    c.r[31] = 0x802f0000u;
    c.r[4] = 0x4e8u;
    c.r[31] = c.r[31] + 0x5008u;
    c.r[5] = 0x90u;
    ea = c.r[31] + 0x80u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x14u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x10u;
    ea = c.r[1] + 0x24u;
    wp::wr8(ea, c.r[5]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dc4a4u;
    f_801dcf58(c);
R_801dc4a4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0xe4u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dc4b4u;
    f_801dcf50(c);
R_801dc4b4:
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = 0x4u;
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0x18u;
    ea = c.r[31] + 0x80u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[1] + 0x8u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.r[6] = 0x0u;
    c.r[7] = 0x1u;
    c.lr = 0x801dc4dcu;
    f_801db998(c);
R_801dc4dc:
    ea = c.r[31] + 0x2f8u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    ea = c.r[1] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x20u;
    c.r[0] = c.r[0] & 0xffffu;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[5]);
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dc500u;
    f_801da300(c);
R_801dc500:
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    c.r[30] = c.r[3] | c.r[3];
    if (!wp::cr_get(c, 2)) goto L_801dc574;
    c.r[30] = 0x0u;
L_801dc510:
    ea = c.r[31] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc51cu;
    f_801da13c(c);
R_801dc51c:
    c.r[30] = c.r[30] + 0x1u;
    c.r[31] = c.r[31] + 0x4u;
    wp::compare_signed(c, 0, c.r[30], 0x20u);
    if (wp::cr_get(c, 0)) {
    WP_POLL(c);
    goto L_801dc510;
    }
    c.r[31] = 0x802f0000u;
    c.r[3] = c.r[29] | c.r[29];
    c.r[31] = c.r[31] + 0x5008u;
    ea = c.r[31] + 0x80u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x801dc540u;
    f_801da13c(c);
R_801dc540:
    ea = c.r[31] + 0x84u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc54cu;
    f_801da13c(c);
R_801dc54c:
    ea = c.r[31] + 0x88u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc558u;
    f_801da13c(c);
R_801dc558:
    ea = c.r[31] + 0x8cu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc564u;
    f_801da13c(c);
R_801dc564:
    ea = c.r[31] + 0x90u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc570u;
    f_801da13c(c);
R_801dc570:
    c.r[30] = c.r[3] | c.r[3];
L_801dc574:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc5e4;
    c.r[3] = 0xd4u;
    c.lr = 0x801dc584u;
    f_801dcf50(c);
R_801dc584:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc590u;
    f_801da13c(c);
R_801dc590:
    c.r[3] = 0xd8u;
    c.lr = 0x801dc598u;
    f_801dcf50(c);
R_801dc598:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc5a4u;
    f_801da13c(c);
R_801dc5a4:
    c.r[3] = 0xdcu;
    c.lr = 0x801dc5acu;
    f_801dcf50(c);
R_801dc5ac:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc5b8u;
    f_801da13c(c);
R_801dc5b8:
    c.r[3] = 0xe0u;
    c.lr = 0x801dc5c0u;
    f_801dcf50(c);
R_801dc5c0:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc5ccu;
    f_801da13c(c);
R_801dc5cc:
    c.r[3] = 0xe4u;
    c.lr = 0x801dc5d4u;
    f_801dcf50(c);
R_801dc5d4:
    ea = c.r[3] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[29] | c.r[29];
    c.lr = 0x801dc5e0u;
    f_801da13c(c);
R_801dc5e0:
    c.r[30] = c.r[3] | c.r[3];
L_801dc5e4:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc62c;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x400u;
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x80u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[1] + 0x60u;
    c.r[5] = c.r[1] + 0xcu;
    c.r[6] = 0x0u;
    c.r[4] = c.r[0] & 0xfffffc00u;
    c.r[7] = 0x1u;
    c.lr = 0x801dc618u;
    f_801db998(c);
R_801dc618:
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[29] | c.r[29];
    c.r[4] = c.r[1] + 0x60u;
    c.r[5] = 0x400u;
    c.lr = 0x801dc62cu;
    f_801da008(c);
L_801dc62c:
R_801dc62c:
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x46cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x468u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x464u;
    c.r[29] = wp::rd32(ea);
    ea = c.r[1] + 0x474u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x470u;
    return;
}

void f_801dc64c(wp::Cpu& c) {
    WP_ENTER(0x801dc64cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc674u: goto R_801dc674;
        case 0x801dc6acu: goto R_801dc6ac;
        case 0x801dc6d0u: goto R_801dc6d0;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffa0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[4] = 0x0u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x64u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x5cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x58u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dc674u;
    f_801d86dc(c);
R_801dc674:
    c.r[31] = 0x80230000u;
    c.r[3] = 0x40u;
    ea = c.r[31] + 0x1918u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = 0x91u;
    c.r[0] = 0x4u;
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[1] + 0xcu;
    c.r[6] = 0x0u;
    ea = c.r[1] + 0x14u;
    wp::wr8(ea, c.r[5]);
    c.r[5] = c.r[1] + 0x8u;
    c.r[7] = 0x1u;
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dc6acu;
    f_801db998(c);
R_801dc6ac:
    c.r[3] = c.r[31] + 0x1918u;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd16(ea);
    c.r[3] = c.r[30] | c.r[30];
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x10u;
    c.r[5] = 0x40u;
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[0]);
    c.lr = 0x801dc6d0u;
    f_801da300(c);
R_801dc6d0:
    ea = c.r[1] + 0x64u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x5cu;
    c.r[31] = wp::rd32(ea);
    ea = c.r[1] + 0x58u;
    c.r[30] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x60u;
    return;
}

void f_801dc6e8(wp::Cpu& c) {
    WP_ENTER(0x801dc6e8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc7f4u: goto R_801dc7f4;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[3] = 0x802f0000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[3] + 0x4ea0u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc7f4;
    c.r[4] = 0x802f0000u;
    c.r[5] = 0x1u;
    c.r[4] = c.r[4] + 0x5008u;
    ea = c.r[4] + 0x1f8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xfffffbffu;
    c.r[0] = c.r[0] | 0x8000u;
    ea = c.r[4] + 0x1f8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dc784;
    ea = c.r[4] + 0x2f8u;
    c.r[0] = wp::rd32(ea);
    c.r[0] = c.r[0] & 0xffffu;
    wp::compare_unsigned(c, 0, c.r[0], 0xd00u);
    if (!wp::cr_get(c, 2)) goto L_801dc784;
    c.r[3] = c.r[3] + 0x4ea0u;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc750;
    wp::compare_signed(c, 0, c.r[0], 0x1u);
    if (wp::cr_get(c, 2)) goto L_801dc764;
    goto L_801dc784;
L_801dc750:
    ea = c.r[3] + 0x8u;
    c.r[0] = wp::rd32(ea);
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc784;
    c.r[5] = 0x0u;
    goto L_801dc784;
L_801dc764:
    ea = c.r[4] + 0x80u;
    c.r[4] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 0)) goto L_801dc784;
    ea = c.r[3] + 0x10u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[4], c.r[0]);
    if (wp::cr_get(c, 1)) goto L_801dc784;
    c.r[5] = 0x0u;
L_801dc784:
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc79c;
    c.r[3] = 0x802f0000u;
    c.r[0] = 0x0u;
    ea = c.r[3] + 0x4ea0u;
    wp::wr32(ea, c.r[0]);
    goto L_801dc7f4;
L_801dc79c:
    c.r[5] = 0x802f0000u;
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x5008u;
    c.r[6] = 0x1u;
    c.r[3] = c.r[5] + 0x4ea0u;
    ea = c.r[4] + 0x1f8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x4u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[0] | 0x400u;
    ea = c.r[5] + 0x4ea0u;
    wp::wr32(ea, c.r[6]);
    c.r[0] = c.r[0] & 0xffff7fffu;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    ea = c.r[4] + 0x1f8u;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dc7d8;
    wp::compare_signed(c, 0, c.r[3], 0x10u);
    if (!wp::cr_get(c, 2)) goto L_801dc7ec;
L_801dc7d8:
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x4ea0u;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801dc7ec:
    c.r[3] = 0x0u;
    c.lr = 0x801dc7f4u;
    f_801dcb1c(c);
L_801dc7f4:
R_801dc7f4:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[3] = 0x802f0000u;
    ea = c.r[3] + 0x4ea0u;
    c.r[3] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801dc80c(wp::Cpu& c) {
    WP_ENTER(0x801dc80cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc880u: goto R_801dc880;
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
    if (wp::cr_get(c, 2)) goto L_801dc828;
    c.r[3] = 0x703u;
    goto L_801dc884;
L_801dc828:
    c.r[4] = 0x802f0000u;
    c.r[7] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x5008u;
    c.r[5] = 0x1u;
    ea = c.r[4] + 0x1f8u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[7] + 0x4ea0u;
    c.r[8] = 0x0u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[8]);
    c.r[0] = c.r[0] | 0x400u;
    c.r[0] = c.r[0] & 0xffff7fffu;
    ea = c.r[6] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[7] + 0x4ea0u;
    wp::wr32(ea, c.r[5]);
    ea = c.r[4] + 0x1f8u;
    wp::wr32(ea, c.r[0]);
    goto L_801dc864;
    if (!wp::cr_get(c, 2)) goto L_801dc878;
L_801dc864:
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x4ea0u;
    ea = c.r[4] + 0x8u;
    c.r[3] = wp::rd32(ea);
    c.r[0] = c.r[3] + 0xffffffffu;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801dc878:
    c.r[3] = 0x0u;
    c.lr = 0x801dc880u;
    f_801dcb1c(c);
R_801dc880:
    c.r[3] = 0x0u;
L_801dc884:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801dc894(wp::Cpu& c) {
    WP_ENTER(0x801dc894u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc8f4u: goto R_801dc8f4;
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
    if (wp::cr_get(c, 2)) goto L_801dc8b0;
    c.r[3] = 0x703u;
    goto L_801dc8f8;
L_801dc8b0:
    c.r[5] = 0x802f0000u;
    c.r[7] = 0x802f0000u;
    c.r[5] = c.r[5] + 0x5008u;
    c.r[8] = 0x1u;
    ea = c.r[5] + 0x1f8u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[7] + 0x4ea0u;
    ea = c.r[6] + 0x4u;
    wp::wr32(ea, c.r[8]);
    c.r[0] = c.r[0] | 0x400u;
    c.r[0] = c.r[0] & 0xffff7fffu;
    ea = c.r[6] + 0xcu;
    wp::wr32(ea, c.r[3]);
    ea = c.r[6] + 0x10u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[7] + 0x4ea0u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[5] + 0x1f8u;
    wp::wr32(ea, c.r[0]);
    goto L_801dc8ec;
    ea = c.r[4] + 0x8u;
    wp::wr32(ea, c.r[0]);
L_801dc8ec:
    c.r[3] = 0x0u;
    c.lr = 0x801dc8f4u;
    f_801dcb1c(c);
R_801dc8f4:
    c.r[3] = 0x0u;
L_801dc8f8:
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801dc908(wp::Cpu& c) {
    WP_ENTER(0x801dc908u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[3] + 0x80u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_801dc918(wp::Cpu& c) {
    WP_ENTER(0x801dc918u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dc96cu: goto R_801dc96c;
        case 0x801dc974u: goto R_801dc974;
        case 0x801dc994u: goto R_801dc994;
        case 0x801dc9d4u: goto R_801dc9d4;
        case 0x801dca2cu: goto R_801dca2c;
        case 0x801dca94u: goto R_801dca94;
        case 0x801dcad8u: goto R_801dcad8;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffd0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[7] = 0x802f0000u;
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[0]);
    c.r[7] = c.r[7] + 0x5008u;
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[7] + 0xcu;
    c.r[29] = wp::rd32(ea);
    c.r[0] = c.r[29] + 0xffffff30u;
    wp::compare_unsigned(c, 0, c.r[0], 0x1u);
    if (!wp::cr_get(c, 1)) goto L_801dca6c;
    wp::compare_signed(c, 0, c.r[29], 0xd2u);
    if (wp::cr_get(c, 2)) goto L_801dc97c;
    wp::compare_signed(c, 0, c.r[29], 0xd3u);
    if (wp::cr_get(c, 2)) goto L_801dc9c8;
    wp::compare_signed(c, 0, c.r[29], 0xd4u);
    if (wp::cr_get(c, 2)) goto L_801dca08;
    c.r[3] = c.r[1] + 0x10u;
    c.r[4] = 0x4u;
    c.lr = 0x801dc96cu;
    f_801d91f0(c);
R_801dc96c:
    c.r[3] = c.r[1] + 0x10u;
    c.lr = 0x801dc974u;
    f_801d9124(c);
R_801dc974:
    c.r[3] = 0x0u;
    goto L_801dcaf0;
L_801dc97c:
    ea = c.r[7] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0xcu;
    ea = c.r[7] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[7] + 0x18u;
    c.r[5] = wp::rd32(ea);
    c.r[4] = c.r[0] & 0xffu;
    c.lr = 0x801dc994u;
    f_801d97e0(c);
R_801dc994:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc9b4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc9b4;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dc9b4:
    c.r[3] = 0x802f0000u;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801dcad8;
L_801dc9c8:
    ea = c.r[7] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0xcu;
    c.lr = 0x801dc9d4u;
    f_801d98f8(c);
R_801dc9d4:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dc9f4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dc9f4;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dc9f4:
    c.r[3] = 0x802f0000u;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801dcad8;
L_801dca08:
    ea = c.r[7] + 0x14u;
    c.r[3] = wp::rd32(ea);
    c.r[4] = c.r[1] + 0x8u;
    ea = c.r[7] + 0x18u;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[1] + 0xcu;
    ea = c.r[3] + 0x0u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    c.r[5] = c.r[0] & 0xffu;
    ea = c.r[7] + 0x10u;
    c.r[3] = wp::rd32(ea);
    c.lr = 0x801dca2cu;
    f_801d99dc(c);
R_801dca2c:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dca4c;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dca4c;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dca4c:
    c.r[3] = 0x802f0000u;
    ea = c.r[1] + 0xcu;
    c.r[4] = wp::rd32(ea);
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[1] + 0x8u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[4]);
    ea = c.r[3] + 0x14u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    goto L_801dcad8;
L_801dca6c:
    c.r[0] = c.r[29] + 0xffffff2fu;
    ea = c.r[7] + 0x14u;
    c.r[30] = wp::rd32(ea);
    c.r[0] = wp::cntlzw(c.r[0]);
    ea = c.r[7] + 0x10u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[7] + 0x18u;
    c.r[4] = wp::rd32(ea);
    c.r[5] = c.r[30] | c.r[30];
    c.r[6] = c.r[1] + 0xcu;
    c.r[8] = wp::rotl(c.r[0], 27) & 0x7ffffffu;
    c.r[7] = 0x1u;
    c.lr = 0x801dca94u;
    f_801d94c4(c);
R_801dca94:
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    c.r[31] = c.r[3] | c.r[3];
    wp::compare_signed(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dcab4;
    wp::compare_signed(c, 0, c.r[3], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dcab4;
    c.r[0] = 0x1u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dcab4:
    c.r[3] = 0x802f0000u;
    wp::compare_signed(c, 0, c.r[29], 0xd1u);
    c.r[3] = c.r[3] + 0x5008u;
    ea = c.r[1] + 0xcu;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0xcu;
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801dcad8;
    ea = c.r[3] + 0x18u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[30] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.lr = 0x801dcad8u;
    f_801d8440(c);
L_801dcad8:
R_801dcad8:
    c.r[5] = 0x802f0000u;
    c.r[3] = c.r[31] | c.r[31];
    c.r[5] = c.r[5] + 0x5008u;
    ea = c.r[5] + 0x80u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = c.r[4] + 0x4u;
    ea = c.r[5] + 0x80u;
    wp::wr32(ea, c.r[0]);
L_801dcaf0:
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

void f_801dcb0c(wp::Cpu& c) {
    WP_ENTER(0x801dcb0cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = 0x802f0000u;
    c.r[3] = c.r[3] + 0x4f60u;
    ea = c.r[3] + 0x98u;
    c.r[3] = wp::rd32(ea);
    return;
}

void f_801dcb1c(wp::Cpu& c) {
    WP_ENTER(0x801dcb1cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x4f60u;
    ea = c.r[4] + 0x98u;
    wp::wr32(ea, c.r[3]);
    return;
}

void f_801dcb2c(wp::Cpu& c) {
    WP_ENTER(0x801dcb2cu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = 0x802f0000u;
    c.r[0] = 0x1u;
    c.r[4] = c.r[4] + 0x4f60u;
    c.r[3] = 0x0u;
    ea = c.r[4] + 0x98u;
    wp::wr32(ea, c.r[0]);
    return;
}

void f_801dcb44(wp::Cpu& c) {
    WP_ENTER(0x801dcb44u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dcc04u: goto R_801dcc04;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    c.r[29] = 0x80200000u;
    ea = c.r[29] + 0x7f00u;
    c.r[30] = wp::rd32(ea);
    c.r[29] = ea;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[29] + 0x4u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[29] + 0x8u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[29] + 0xcu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[29] + 0x10u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[29] + 0x14u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[29] + 0x18u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[29] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[29] + 0x20u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[29] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dcbdc;
    c.r[0] = wp::rotl(c.r[4], 6) & 0x3f800u;
    c.r[4] = wp::rotl(c.r[4], 16) & 0x1f0000u;
    c.r[6] = c.r[0] | 0x7c800000u;
    c.r[0] = 0x90830000u;
    c.r[4] = c.r[4] | 0x2a6u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[6] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[0]);
    goto L_801dcbfc;
L_801dcbdc:
    c.r[0] = wp::rotl(c.r[4], 16) & 0x1f0000u;
    c.r[6] = wp::rotl(c.r[4], 6) & 0x3f800u;
    c.r[4] = c.r[6] | 0x7c800000u;
    c.r[0] = c.r[0] | 0x3a6u;
    c.r[6] = 0x80830000u;
    c.r[0] = c.r[4] | c.r[0];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[6]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dcbfc:
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801dcc04u;
    f_801dced8(c);
R_801dcc04:
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

void f_801dcc20(wp::Cpu& c) {
    WP_ENTER(0x801dcc20u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dccacu: goto R_801dccac;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[6] = 0x80200000u;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x44u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = wp::rotl(c.r[4], 21) & 0xffe00000u;
    c.r[4] = c.r[0] | 0xe0030000u;
    ea = c.r[1] + 0x3cu;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x38u;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[6] + 0x7f28u;
    c.r[29] = wp::rd32(ea);
    c.r[6] = ea;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[29]);
    ea = c.r[6] + 0x4u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[6] + 0x8u;
    c.r[31] = wp::rd32(ea);
    ea = c.r[6] + 0xcu;
    c.r[12] = wp::rd32(ea);
    ea = c.r[6] + 0x10u;
    c.r[11] = wp::rd32(ea);
    ea = c.r[6] + 0x14u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[6] + 0x18u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[6] + 0x1cu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[6] + 0x20u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[6] + 0x24u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[30]);
    ea = c.r[1] + 0x10u;
    wp::wr32(ea, c.r[31]);
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[12]);
    ea = c.r[1] + 0x18u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[1] + 0x1cu;
    wp::wr32(ea, c.r[10]);
    ea = c.r[1] + 0x20u;
    wp::wr32(ea, c.r[9]);
    ea = c.r[1] + 0x24u;
    wp::wr32(ea, c.r[8]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[7]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[6]);
    if (wp::cr_get(c, 2)) goto L_801dcca0;
    c.r[4] = c.r[0] | 0xf0030000u;
L_801dcca0:
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801dccacu;
    f_801dced8(c);
R_801dccac:
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

void f_801dccc8(wp::Cpu& c) {
    WP_ENTER(0x801dccc8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x20u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    c.f[31] = wp::fpr_from_bits(0xFFF8000000000000ull | c.fpscr);
    ea = c.r[3] + 0x0u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x20u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x10u;
    c.f[31] = wp::rdf64(ea);
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801dccec(wp::Cpu& c) {
    WP_ENTER(0x801dccecu);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[1] + 0xffffffc0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    ea = c.r[1] + 0x10u;
    wp::wrf64(ea, c.f[31]);
    ea = c.r[1] + 0x20u;
    wp::store_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[3] + 0x0u;
    c.f[31] = wp::rdf64(ea);
    c.fpscr = (c.fpscr & 0x0u) | (static_cast<uint32_t>(wp::fpr_bits(c.f[31])) & 0xffffffffu);
    ea = c.r[1] + 0x20u;
    wp::load_quantized(c, 31, ea, 0, 0, q);
    ea = c.r[1] + 0x10u;
    c.f[31] = wp::rdf64(ea);
    c.r[1] = c.r[1] + 0x40u;
    return;
}

void f_801dcd10(wp::Cpu& c) {
    WP_ENTER(0x801dcd10u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dcdb0u: goto R_801dcdb0;
        case 0x801dcdc8u: goto R_801dcdc8;
        case 0x801dcdd0u: goto R_801dcdd0;
        case 0x801dce9cu: goto R_801dce9c;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xffffff90u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    wp::compare_unsigned(c, 0, c.r[4], 0x20u);
    ea = c.r[1] + 0x74u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[1] + 0x58u;
    for (uint32_t k = 26; k < 32; k++) { wp::wr32(ea, c.r[k]); ea += 4; }
    c.r[26] = 0x80200000u;
    c.r[29] = c.r[3] | c.r[3];
    c.r[30] = c.r[5] | c.r[5];
    c.r[31] = 0x0u;
    ea = c.r[26] + 0x7f50u;
    c.r[27] = wp::rd32(ea);
    c.r[26] = ea;
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[27]);
    ea = c.r[26] + 0x4u;
    c.r[28] = wp::rd32(ea);
    ea = c.r[26] + 0x8u;
    c.r[12] = wp::rd32(ea);
    ea = c.r[26] + 0xcu;
    c.r[11] = wp::rd32(ea);
    ea = c.r[26] + 0x10u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[26] + 0x14u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[26] + 0x18u;
    c.r[8] = wp::rd32(ea);
    ea = c.r[26] + 0x1cu;
    c.r[7] = wp::rd32(ea);
    ea = c.r[26] + 0x20u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[26] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0x34u;
    wp::wr32(ea, c.r[28]);
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
    wp::wr32(ea, c.r[0]);
    if (!wp::cr_get(c, 0)) goto L_801dcdb8;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    c.r[0] = wp::rotl(c.r[4], 21) & 0xffe00000u;
    c.r[3] = c.r[0] | 0xc8030000u;
    if (wp::cr_get(c, 2)) goto L_801dcd9c;
    c.r[3] = c.r[0] | 0xd8030000u;
L_801dcd9c:
    ea = c.r[1] + 0x30u;
    wp::wr32(ea, c.r[3]);
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x30u;
    c.lr = 0x801dcdb0u;
    f_801dced8(c);
R_801dcdb0:
    c.r[31] = c.r[3] | c.r[3];
    goto L_801dcec0;
L_801dcdb8:
    if (!wp::cr_get(c, 2)) goto L_801dcdec;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dcdcc;
    c.lr = 0x801dcdc8u;
    f_801dccc8(c);
R_801dcdc8:
    goto L_801dcdd0;
L_801dcdcc:
    c.lr = 0x801dcdd0u;
    f_801dccec(c);
L_801dcdd0:
R_801dcdd0:
    ea = c.r[29] + 0x4u;
    c.r[4] = wp::rd32(ea);
    c.r[0] = 0x0u;
    c.r[3] = 0xffffffffu;
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[4] & c.r[3];
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[0]);
    goto L_801dcec0;
L_801dcdec:
    wp::compare_unsigned(c, 0, c.r[4], 0x21u);
    if (!wp::cr_get(c, 2)) goto L_801dcec0;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dce04;
    ea = c.r[3] + 0x4u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801dce04:
    c.r[12] = 0x80200000u;
    ea = c.r[12] + 0x7f00u;
    c.r[11] = wp::rd32(ea);
    c.r[12] = ea;
    wp::compare_signed(c, 0, c.r[5], 0x0u);
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[11]);
    ea = c.r[12] + 0x4u;
    c.r[10] = wp::rd32(ea);
    ea = c.r[12] + 0x8u;
    c.r[9] = wp::rd32(ea);
    ea = c.r[12] + 0xcu;
    c.r[8] = wp::rd32(ea);
    ea = c.r[12] + 0x10u;
    c.r[7] = wp::rd32(ea);
    ea = c.r[12] + 0x14u;
    c.r[6] = wp::rd32(ea);
    ea = c.r[12] + 0x18u;
    c.r[5] = wp::rd32(ea);
    ea = c.r[12] + 0x1cu;
    c.r[4] = wp::rd32(ea);
    ea = c.r[12] + 0x20u;
    c.r[3] = wp::rd32(ea);
    ea = c.r[12] + 0x24u;
    c.r[0] = wp::rd32(ea);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[10]);
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
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0x28u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0x2cu;
    wp::wr32(ea, c.r[0]);
    if (wp::cr_get(c, 2)) goto L_801dce78;
    c.r[3] = 0x7c9f0000u;
    c.r[0] = 0x90830000u;
    c.r[3] = c.r[3] + 0xfffffaa6u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
    goto L_801dce8c;
L_801dce78:
    c.r[3] = 0x7c9f0000u;
    c.r[4] = 0x80830000u;
    c.r[0] = c.r[3] + 0xfffffba6u;
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[4]);
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[0]);
L_801dce8c:
    c.r[3] = c.r[29] | c.r[29];
    c.r[5] = c.r[30] | c.r[30];
    c.r[4] = c.r[1] + 0x8u;
    c.lr = 0x801dce9cu;
    f_801dced8(c);
R_801dce9c:
    wp::compare_signed(c, 0, c.r[30], 0x0u);
    c.r[31] = c.r[3] | c.r[3];
    if (wp::cr_get(c, 2)) goto L_801dcec0;
    ea = c.r[29] + 0x0u;
    c.r[4] = wp::rd32(ea);
    c.r[3] = 0xffffffffu;
    c.r[0] = 0x0u;
    c.r[3] = c.r[4] & c.r[3];
    ea = c.r[29] + 0x4u;
    wp::wr32(ea, c.r[3]);
    ea = c.r[29] + 0x0u;
    wp::wr32(ea, c.r[0]);
L_801dcec0:
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[1] + 0x58u;
    for (uint32_t k = 26; k < 32; k++) { c.r[k] = wp::rd32(ea); ea += 4; }
    ea = c.r[1] + 0x74u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x70u;
    return;
}

void f_801dced8(wp::Cpu& c) {
    WP_ENTER(0x801dced8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    if (wp::g_resume_address != 0) [[unlikely]] {
        switch (wp::take_resume_address()) {
        case 0x801dcf0cu: goto R_801dcf0c;
        case 0x801dcf24u: goto R_801dcf24;
        default: wp::bad_resume(c);
        }
    }
    ea = c.r[1] + 0xfffffff0u;
    wp::wr32(ea, c.r[1]);
    c.r[1] = ea;
    c.r[0] = c.lr;
    c.r[5] = 0x4e800000u;
    ea = c.r[1] + 0x14u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = c.r[5] + 0x20u;
    ea = c.r[1] + 0xcu;
    wp::wr32(ea, c.r[31]);
    c.r[31] = c.r[4] | c.r[4];
    ea = c.r[1] + 0x8u;
    wp::wr32(ea, c.r[30]);
    c.r[30] = c.r[3] | c.r[3];
    c.r[3] = c.r[31] | c.r[31];
    ea = c.r[4] + 0x24u;
    wp::wr32(ea, c.r[0]);
    c.r[4] = 0x28u;
    c.lr = 0x801dcf0cu;
    f_801d8440(c);
R_801dcf0c:
    c.r[4] = 0x802f0000u;
    c.r[12] = c.r[31] | c.r[31];
    c.r[3] = c.r[30] | c.r[30];
    c.r[4] = c.r[4] + 0x4f50u;
    c.ctr = c.r[12];
    c.lr = 0x801dcf24u;
    wp::call(c, c.ctr);
R_801dcf24:
    ea = c.r[1] + 0xcu;
    c.r[31] = wp::rd32(ea);
    c.r[3] = 0x0u;
    ea = c.r[1] + 0x8u;
    c.r[30] = wp::rd32(ea);
    ea = c.r[1] + 0x14u;
    c.r[0] = wp::rd32(ea);
    c.lr = c.r[0];
    c.r[1] = c.r[1] + 0x10u;
    return;
}

void f_801dcf40(wp::Cpu& c) {
    WP_ENTER(0x801dcf40u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[4] = 0x802f0000u;
    c.r[4] = c.r[4] + 0x4f60u;
    ea = c.r[4] + 0xa0u;
    wp::wr32(ea, c.r[3]);
    return;
}

void f_801dcf50(wp::Cpu& c) {
    WP_ENTER(0x801dcf50u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = c.r[3] | 0x80000000u;
    return;
}

void f_801dcf58(wp::Cpu& c) {
    WP_ENTER(0x801dcf58u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[0] = 0x1u;
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[0]);
    c.r[0] = 0x0u;
    c.r[5] = 0x80000000u;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[0]);
    ea = c.r[5] + 0xdcu;
    c.r[7] = wp::rd32(ea);
    c.r[0] = c.r[7] + 0x10000u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffffu);
    if (wp::cr_get(c, 2)) return;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) return;
    c.r[0] = c.r[7] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (!wp::cr_get(c, 2)) goto L_801dcf94;
    return;
L_801dcf94:
    c.r[6] = 0x0u;
    goto L_801dcfd8;
L_801dcf9c:
    ea = c.r[5] + 0xe4u;
    c.r[0] = wp::rd32(ea);
    wp::compare_unsigned(c, 0, c.r[7], c.r[0]);
    if (!wp::cr_get(c, 2)) goto L_801dcfac;
    ea = c.r[4] + 0x0u;
    wp::wr32(ea, c.r[6]);
L_801dcfac:
    ea = c.r[7] + 0x2fcu;
    c.r[0] = wp::rd32(ea);
    c.r[6] = c.r[6] + 0x1u;
    c.r[7] = c.r[0] | 0x80000000u;
    c.r[0] = c.r[7] + 0x10000u;
    wp::compare_unsigned(c, 0, c.r[0], 0xffffu);
    if (wp::cr_get(c, 2)) goto L_801dcfe0;
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dcfe0;
    c.r[0] = c.r[7] + 0x80000000u;
    wp::compare_unsigned(c, 0, c.r[0], 0x0u);
    if (wp::cr_get(c, 2)) goto L_801dcfe0;
L_801dcfd8:
    wp::compare_signed(c, 0, c.r[7], 0x0u);
    if (!wp::cr_get(c, 2)) {
    WP_POLL(c);
    goto L_801dcf9c;
    }
L_801dcfe0:
    ea = c.r[3] + 0x0u;
    wp::wr32(ea, c.r[6]);
    return;
}

void f_801dcfe8(wp::Cpu& c) {
    WP_ENTER(0x801dcfe8u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff94b8u;
    wp::wr8(ea, c.r[3]);
    return;
}

void f_801dcff0(wp::Cpu& c) {
    WP_ENTER(0x801dcff0u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[13] + 0xffff94b8u;
    c.r[3] = wp::rd8(ea);
    return;
}

