#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    int y = x == 5 ? 10 : 5;
    /*
    El operador ternario equivale a:
    int y = 0;
    if  (x == 5)
        y = 10;
    else
        y = 5;
    */
    int z = x != 5 ? 10 : 0;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    getchar();

    return 0;
}