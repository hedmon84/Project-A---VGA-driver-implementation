#ifndef _SCREEN_H_
#define _SCREEN_H_

#include "system.h"

#define MAX_ROWS 30
#define MAX_COLS 80

#define BLACK 0x000
#define BLUE 0x100
#define GREEN 0x200
#define CYAN 0x300
#define RED 0x400
#define MAGENTA 0x500
#define BROWN 0x600
#define WHITE 0x700
#define GRAY 0x800
#define LIGHT_BLUE 0x900
#define LIGHT_GREEN 0xa00
#define LIGHT_CYAN 0xb00
#define LIGHT_RED 0xc00
#define LIGHT_MAGENTA 0xd00
#define YELLOW 0xe00
#define BRIGHT_WHITE 0xf00

void puts(uint8_t row, uint8_t col, uint8_t fgcolor, uint8_t bgcolor, const char *message);
void put(uint8_t row, uint8_t col, uint16_t fgcolor, uint16_t bgcolor);
void clear_screen(uint8_t bgcolor);

#endif
