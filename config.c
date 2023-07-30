#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"~/.config/dwmblocks/scripts/kb-layout.sh",       600,    19},
    {"~/.config/dwmblocks/scripts/volume.sh",          0,      10},
    {"~/.config/dwmblocks/scripts/battery.sh",			300,    0},
    {"~/.config/dwmblocks/scripts/cpu.load.sh",		2,	    0},
    {"~/.config/dwmblocks/scripts/ram.sh",				2,	    0},
    {"~/.config/dwmblocks/scripts/cpu.temp.sh",		2,	    0},
    {"~/.config/dwmblocks/scripts/disk.sh /home", 		10,	    0},
    {"~/.config/dwmblocks/scripts/weather.sh",         600,    0},
    {"~/.config/dwmblocks/scripts/wlan.sh",            5,      18},
    {"~/.config/dwmblocks/scripts/clock.sh",			1,      0}
};

const unsigned short blockCount = LEN(blocks);
