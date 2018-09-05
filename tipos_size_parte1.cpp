#include <iostream>

using namespace std;

int main()
{
    bool b = false; // tambien puede ser true
    cout << "bool = " << b << " - size = " << sizeof(b) << endl;
    b = true;
    cout << "bool = " << b << " - size = " << sizeof(b) << endl;

    char c = 0;
    cout << "char = " << c << " - size = " << sizeof(c) << endl;
    c = 'h';
    cout << "char = " << c << " - size = " << sizeof(c) << endl;
    
    wchar_t w = 0;
    cout << "wide char = " << w << " - size = " << sizeof(w) << endl;
    w = 'h';
    cout << "wide char = " << w << " - size = " << sizeof(w) << endl;
    
    int i = 0;
    cout << "integer  = " << i << " - size = " << sizeof(i) << endl;
    i = -1;
    cout << "integer  = " << i << " - size = " << sizeof(i) << endl;

    double d = 0.0;
    cout << "double = " << d << " - size = " << sizeof(d) << endl;
    d = 2.1;
    cout << "double = " << d << " - size = " << sizeof(d) << endl;

    float f{0.f}; //Otra forma de inicializar una variable, al declararla.
    cout << "float = " << f << " - size = " << sizeof(f) << endl;
    f = 2.1f; // Se pone la f al final para decir que sea float, sino por defecto sería double
    cout << "float = " << f << " - size = " << sizeof(f) << endl;

    getchar();

    return 0; //se devuelve 0 si todo ha ido bien.
}