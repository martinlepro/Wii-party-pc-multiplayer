#pragma once
#include "wp/cpu.h"

extern uint32_t g_boot_bases[14];

void f_boot_01000000(wp::Cpu& c);
void f_boot_01000150(wp::Cpu& c);
void f_boot_010001e0(wp::Cpu& c);
void f_boot_01000300(wp::Cpu& c);
void f_boot_01000370(wp::Cpu& c);
