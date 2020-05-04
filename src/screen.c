#include "screen.h"

// void puts(uint8_t row, uint8_t col, uint8_t fgcolor, uint8_t bgcolor, const char *message)
// {
// }

void put(uint8_t row, uint8_t col, uint16_t fgcolor, uint16_t bgcolor)
{

    uint16_t a = 0x1; //blue
    uint16_t b = 0x2; //green

    uint16_t rw = 80 * row + col;
    // no agarra cuando le mando fgcolor , bgcolor

    // a corre tres bits  y una a b y saca el valor que refleja el color de fondo y letra
    uint16_t color = (bgcolor << 4) | (fgcolor);

    uint16_t *p = (uint16_t *)0xb800;
    *(p + rw) = (color << 8) | 'h';
}

void clear_screen(uint8_t bgcolor)
{
}
