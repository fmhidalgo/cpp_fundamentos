#include "ui.hpp"
#include <conio.h>

const char ESCAPE = 27;

char getKey()
{
    char key = 0;
    do
    {
        key = _getch();
        
        if (key == ESCAPE)
            exit(0);

    } while (key < 'A'|| key > 'Z' && key < 'a' || key > 'z');

    return key;
}