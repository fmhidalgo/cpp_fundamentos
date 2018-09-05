#include <iostream>

using namespace std;

int main()
{
    int *pi = nullptr;
    cout << pi << " - " << &pi << endl;
    
    int i = 0;
    pi = &i;

    cout << i << " - " << &i << endl;
    cout << *pi << " - " << pi << endl;

    *pi = 4;

    cout << i << endl;

    getchar ();

    enum SEMANA
    {
        LUNES = 1,
        MARTES = 5,
        MIERCOLES,
        JUEVES = 0,
        VIERNES,
        SABADO,
        DOMINGO,
    };

    cout << SEMANA::LUNES << endl;

    SEMANA semana{SEMANA::LUNES}; //se puede utilizar () o {} para inicializar, la segunda es la estándar a partir de c++11
    semana = SEMANA::MARTES;

    cout << semana << endl;

    cout << SEMANA::LUNES << endl;
    cout << SEMANA::MARTES << endl;
    cout << SEMANA::MIERCOLES << endl;
    cout << SEMANA::JUEVES << endl;
    cout << SEMANA::VIERNES << endl;
    cout << SEMANA::SABADO << endl;
    cout << SEMANA::DOMINGO << endl;

    getchar ();

    int the_array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << the_array << endl; //Es un puntero!!!
    cout << *the_array << endl;
    cout << the_array[4] << endl;

    getchar();

    return 0;
}