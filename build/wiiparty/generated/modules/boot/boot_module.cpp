#include "wp/modules.h"
#include "boot.h"

uint32_t g_boot_bases[14];

namespace wp {

const ModuleFunction g_boot_functions[] = {
    {1, 0x0, f_boot_01000000},
    {1, 0x150, f_boot_01000150},
    {1, 0x1e0, f_boot_010001e0},
    {1, 0x300, f_boot_01000300},
    {1, 0x370, f_boot_01000370},
};

const ModuleFunction g_boot_resumes[] = {
    {1, 0x14, f_boot_01000000},
    {1, 0x2c, f_boot_01000000},
    {1, 0x54, f_boot_01000000},
    {1, 0x5c, f_boot_01000000},
    {1, 0x78, f_boot_01000000},
    {1, 0x84, f_boot_01000000},
    {1, 0x90, f_boot_01000000},
    {1, 0x98, f_boot_01000000},
    {1, 0xac, f_boot_01000000},
    {1, 0xb8, f_boot_01000000},
    {1, 0xe0, f_boot_01000000},
    {1, 0xe8, f_boot_01000000},
    {1, 0x118, f_boot_01000000},
    {1, 0x124, f_boot_01000000},
    {1, 0x12c, f_boot_01000000},
    {1, 0x134, f_boot_01000000},
    {1, 0x19c, f_boot_01000150},
    {1, 0x1a8, f_boot_01000150},
    {1, 0x1b8, f_boot_01000150},
    {1, 0x204, f_boot_010001e0},
    {1, 0x21c, f_boot_010001e0},
    {1, 0x23c, f_boot_010001e0},
    {1, 0x25c, f_boot_010001e0},
    {1, 0x288, f_boot_010001e0},
    {1, 0x2b8, f_boot_010001e0},
    {1, 0x2c0, f_boot_010001e0},
    {1, 0x2c8, f_boot_010001e0},
    {1, 0x2d0, f_boot_010001e0},
    {1, 0x2dc, f_boot_010001e0},
    {1, 0x334, f_boot_01000300},
    {1, 0x348, f_boot_01000300},
    {1, 0x39c, f_boot_01000370},
    {1, 0x3a8, f_boot_01000370},
    {1, 0x3b0, f_boot_01000370},
    {1, 0x3d0, f_boot_01000370},
    {1, 0x400, f_boot_01000370},
};

extern const ModuleDescriptor g_descriptor_boot;
const ModuleDescriptor g_descriptor_boot = {"boot", 1, 0x71d9f532u, 14, g_boot_bases, g_boot_functions, 5, g_boot_resumes, 36};

}
