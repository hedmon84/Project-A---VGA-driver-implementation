#include "screen.h"

// void puts(uint8_t row, uint8_t col, uint8_t fgcolor, uint8_t bgcolor, const char *message)
// {
// }

void puts(uint8_t row, uint8_t col, uint16_t fgcolor, uint16_t bgcolor, char *message) // works perfect
{

    int i = 0;

    uint16_t rw = 80 * row + col;

    // a corre tres bits  y una a b y saca el valor que refleja el color de fondo y letra
    uint16_t color = (bgcolor << 4) | (fgcolor);

    // *(p + rw) = (color << 8) | *message;

    // *(p + rw + 1) = (color << 8) | message[1]; // message[] accessing to the address every char is located
    // *(p + rw + 2) = (color << 8) | message[2]; // message[] accessing to the address every char is located

    uint16_t *p = (uint16_t *)0xb800;

    while (message[i] != 0)
    {

        *(p + rw + i) = (color << 8) | message[i];
        i++;
    }
}

void clear_screen(uint8_t bgcolor)
{
}
