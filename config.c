#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"dwmblocks_scripts --keyboard-layout", 600,    19},
    {"dwmblocks_scripts --pacman-updates",	6000,   12},
    {"dwmblocks_scripts --volume",          0,      10},
    {"dwmblocks_scripts --battery",         300,    0},
    {"dwmblocks_scripts --cpu-load",		2,	    0},
    {"dwmblocks_scripts --ram",				2,	    0},
    {"dwmblocks_scripts --cpu-temp",		2,	    0},
    {"dwmblocks_scripts --disk /home", 		10,	    0},
    {"dwmblocks_scripts --weather",         600,    0},
    {"dwmblocks_scripts --wlan",            5,      18},
    {"dwmblocks_scripts --clock",			1,      0}
};

const unsigned short blockCount = LEN(blocks);
