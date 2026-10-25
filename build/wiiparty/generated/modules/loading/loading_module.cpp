#include "wp/modules.h"
#include "loading.h"

uint32_t g_loading_bases[14];

namespace wp {

const ModuleFunction g_loading_functions[] = {
    {1, 0x0, f_loading_01000000},
    {1, 0x80, f_loading_01000080},
    {1, 0x180, f_loading_01000180},
    {1, 0x190, f_loading_01000190},
    {1, 0x290, f_loading_01000290},
    {1, 0x300, f_loading_01000300},
    {1, 0x3a0, f_loading_010003a0},
    {1, 0x3b0, f_loading_010003b0},
    {1, 0x3c0, f_loading_010003c0},
    {1, 0x3d0, f_loading_010003d0},
    {1, 0x3f0, f_loading_010003f0},
    {1, 0x410, f_loading_01000410},
    {1, 0x430, f_loading_01000430},
    {1, 0x450, f_loading_01000450},
    {1, 0x460, f_loading_01000460},
    {1, 0x470, f_loading_01000470},
};

const ModuleFunction g_loading_resumes[] = {
    {1, 0x30, f_loading_01000000},
    {1, 0x3c, f_loading_01000000},
    {1, 0x48, f_loading_01000000},
    {1, 0x58, f_loading_01000000},
    {1, 0xa0, f_loading_01000080},
    {1, 0xb0, f_loading_01000080},
    {1, 0xc4, f_loading_01000080},
    {1, 0xcc, f_loading_01000080},
    {1, 0xfc, f_loading_01000080},
    {1, 0x100, f_loading_01000080},
    {1, 0x104, f_loading_01000080},
    {1, 0x114, f_loading_01000080},
    {1, 0x11c, f_loading_01000080},
    {1, 0x134, f_loading_01000080},
    {1, 0x13c, f_loading_01000080},
    {1, 0x150, f_loading_01000080},
    {1, 0x154, f_loading_01000080},
    {1, 0x158, f_loading_01000080},
    {1, 0x160, f_loading_01000080},
    {1, 0x1c0, f_loading_01000190},
    {1, 0x1d8, f_loading_01000190},
    {1, 0x1f8, f_loading_01000190},
    {1, 0x218, f_loading_01000190},
    {1, 0x234, f_loading_01000190},
    {1, 0x24c, f_loading_01000190},
    {1, 0x258, f_loading_01000190},
    {1, 0x260, f_loading_01000190},
    {1, 0x268, f_loading_01000190},
    {1, 0x2c4, f_loading_01000290},
    {1, 0x2d8, f_loading_01000290},
    {1, 0x32c, f_loading_01000300},
    {1, 0x338, f_loading_01000300},
    {1, 0x340, f_loading_01000300},
    {1, 0x360, f_loading_01000300},
    {1, 0x390, f_loading_01000300},
};

extern const ModuleDescriptor g_descriptor_loading;
const ModuleDescriptor g_descriptor_loading = {"loading", 2, 0x661c9803u, 14, g_loading_bases, g_loading_functions, 16, g_loading_resumes, 35};

}
