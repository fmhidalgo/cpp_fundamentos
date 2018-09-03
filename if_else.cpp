#include <iostream>
#include <bitset>
#include <conio.h>

using namespace std;

int main()
{
    int x = 1000;
    if (x == 1000)
        cout << x << endl;

    if (x != 1000)
    {
        //x es 1000 no entra aqui.
        cout << "x es distinto de 1000";
    }

    getchar();

    if (x <= 1000)
    {
        cout << "x es menor o igual que 1000" << endl;
    }

    getchar();

    if (x < 1000)
        cout << "x es menor que 1000" << endl;
    else
        cout << "x es mayor o igual que 1000" << endl;

    getchar ();

    if (x < 1000)
        cout << "x es menor que 1000" << endl;
    else if (x > 1000)
        cout << "x es mayor que 1000" << endl;
    else
        cout << "x es igual que 1000" << endl;

    getchar();

    x = 0;

    switch (x)
    {
        case 1:
            cout << "x es 1" << endl;
            break;
        case 2:
            cout << "x es 2" << endl;
            //No ponemos break, continua
        case 3:
            cout << "x es 2 o 3" << endl;
            break; //Aquí se sale
        case 0:
            cout << "x es 0" << endl;
        default:
            cout << "x no es ni 1 ni 2 ni 3" << endl;
    }

    getchar ();

    return 0;
}