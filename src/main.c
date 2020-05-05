#include <screen.h>
#include <keypad.h>

int main()
{
    // clear_screen(BLUE);
    puts(10, 10, MAGENTA, BLACK, "Hello");
    puts(10, 16, YELLOW, BLACK, "World");
    // return 0;

    // Example //
    // starting  address  0xb800
    // end address  0xcabe
    //every  column has a length of 80
    //every row has a size of 30
    // puts(0, 5, YELLOW, WHITE, "hola");

    // uint16_t *p = (uint16_t *)0xb800;
    // *(p + 320) = 0x2f00 | 'h';
    //*(p + 1) = 0xcf00 | 'o';
    // *(p + 2) = 0xcf00 | 'l';
    // *(p + 3) = 0xcf00 | 'a';

    return 0;
}
