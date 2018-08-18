#include "ui.hpp"
#include <conio.h>

const char ESCAPE = 27;

char getKey()
{
    char key = 0;
    do
    {
        if (_kbhit())
        {
            key = _getch();
            if (key == ESCAPE)
                exit(1);
        }
    } while (key < 'A'|| key > 'Z' && key < 'a' || key > 'z');

    return key;
}