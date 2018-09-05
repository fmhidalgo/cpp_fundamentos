
#include <iostream>
#include <string>
#include <stdarg.h>

using namespace std;

void f()
{
    cout << "Mi primera funcion" << endl;
}

void print_data(int param)
{
    cout << param << endl;
}
void print_data(float param)
{
    cout << param << endl;
}
void print_data(string param)
{
    cout << param << endl;
}
void print_data(char param)
{
    cout << param << endl;
}

void print_int(int n, ...)
{
    va_list vl;
    va_start(vl, n);
    for (int i = 0; i < n; ++i)
    {
        print_data(va_arg(vl, int));
    }
    va_end(vl);
}

int suma(int a, int b)
{
    return a + b;
}

float suma(float a, float b)
{
    return a + b;
}

//No se necesita especificar el nombre de las variables que se pasan como argumentos.
double suma(double, double);

int functionWithStatic()
{
    static int i = 0; //Solo se inicializa en la declaración la primera vez.
    ++i;
    return i;
}

int main()
{
    f();

    print_data(4.f);
    print_data("hola que pasa");
    print_data('h');
    cout << "=================================" << endl;
    print_int(5, 5, 21, 4, 6, 7);
    cout << "=================================" << endl;
    print_data(5);
    print_data(suma(3, 4));

    print_data(suma(3.f, 4.5f));
    print_data(static_cast<float>(suma(3.5, 4.5)));

    getchar();

    //Static
    for (unsigned int contador = 10; contador < 20; ++contador)
    {
        std::cout << functionWithStatic() << std::endl;
    }

    getchar();
    return 0;
}

double suma(double a, double b)
{
    return a + b;
}