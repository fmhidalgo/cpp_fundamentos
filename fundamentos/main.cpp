#include <iostream>
#include <bitset>
#include <conio.h>

using namespace std;

int main() 
{
    //if else switch
    int x{ 1 };

    if (x > 0)
    {
        cout << "x is positive" << endl;
    }
    else if (x == 0)
    {
        cout << "x is 0" << endl;
    }
    else
    {
        cout << "x is negative" << endl;
    }
    x = 0;
    auto cadena = x > 0 ? "x is positive" : "x is negative or zero";
    cout << cadena << endl;

    //bucles
    
    bool finishing_bombs = false;

    //while(finishing_bombs == false)
    do
    {
        if (_kbhit())
        {
            auto data = _getch();
            switch (data)
            {
                case '1':
                    cout << "Bomb 1" << endl;
                    break;
                case '2':
                    cout << "Bomb 2" << endl;
                    break;
                case '3':
                    cout << "Bomb 3" << endl;
                    break;
                case '4':
                    cout << "Bomb 4" << endl;
                    break;
                case '5':
                    cout << "Bomb 5" << endl;
                    break;
                case '6':
                    cout << "Bomb 6" << endl;
                    break;
                case '7':
                    cout << "Bomb 7" << endl;
                    break;
                case '8':
                    cout << "Bomb 8" << endl;
                    break;
                case '9':
                    cout << "Bomb 9" << endl;
                    break;
                case '0':
                    cout << "Bomb 0" << endl;
                    break;
                case 27:
                    cout << "bye bye";
                    getchar();
                    finishing_bombs = true;
                    break;
                case 0:
                    break;
                default:
                    cout << "No bomb here" << endl;
            }
        }
    } while (!finishing_bombs);

    for (unsigned i = 0; i < 10; ++i)
    {
        cout << i << endl;
    }

    //std::for_each algorithm include
    //for de rango se vera en clases posteriores

    getchar();
}