#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"/opt/dwmblocks-async/scripts/kb-layout.sh",       600,    19},
    {"/opt/dwmblocks-async/scripts/pacman.updates.sh",	6000,   12},
    {"/opt/dwmblocks-async/scripts/volume.sh",          0,      10},
    {"/opt/dwmblocks-async/scripts/battery.sh",			300,    0},
    {"/opt/dwmblocks-async/scripts/cpu.load.sh",		2,	    0},
    {"/opt/dwmblocks-async/scripts/ram.sh",				2,	    0},
    {"/opt/dwmblocks-async/scripts/cpu.temp.sh",		2,	    0},
    {"/opt/dwmblocks-async/scripts/disk.sh /home", 		10,	    0},
    {"/opt/dwmblocks-async/scripts/weather.sh",         600,    0},
    {"/opt/dwmblocks-async/scripts/wlan.sh",            5,      18},
    {"/opt/dwmblocks-async/scripts/clock.sh",			1,      0}
};

const unsigned short blockCount = LEN(blocks);
