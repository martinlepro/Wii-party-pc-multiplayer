#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/threads.h"

extern uint32_t g_mg103_bases[17];
void f_mg103_0106a260(wp::Cpu& c);
void f_mg103_0106a270(wp::Cpu& c);

void f_mg103_0106a260(wp::Cpu& c) {
    WP_ENTER(0x106a260u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    c.r[3] = (((0x802f60c0u + 0x8000u) >> 16) << 16);
    c.r[3] = c.r[3] + wp::sign_extend16(0x802f60c0u & 0xFFFFu);
    return;
}

void f_mg103_0106a270(wp::Cpu& c) {
    WP_ENTER(0x106a270u);
    [[maybe_unused]] uint32_t ea = 0;
    [[maybe_unused]] uint32_t q = 0;
    ea = c.r[3] + 0xcu;
    wp::wrf32(ea, static_cast<float>(c.f[1]));
    return;
}

