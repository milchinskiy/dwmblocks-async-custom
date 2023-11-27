#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X("dwmblocks_scripts --keyboard-layout", 600,    19)  \
    X("dwmblocks_scripts --pacman-updates",	6000,   12)   \
    X("dwmblocks_scripts --volume",          0,      10) \
    X("dwmblocks_scripts --battery",         300,    0) \
    X("dwmblocks_scripts --cpu-load",		2,	    0) \
    X("dwmblocks_scripts --ram",				2,	    0)     \
    X("dwmblocks_scripts --cpu-temp",		2,	    0)  \
    X("dwmblocks_scripts --disk /home", 		10,	    0)  \
    X("dwmblocks_scripts --weather",         600,    0) \
    X("dwmblocks_scripts --wlan",            5,      18) \
    X("dwmblocks_scripts --clock",			1,      0)

#endif  // CONFIG_H
