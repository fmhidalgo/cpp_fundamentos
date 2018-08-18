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

double suma(double a, double b);

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

    int x = 6;
    auto lambda = [](int n) { return n * n; };
    auto lambda2 = [x](int n) { return n * x; };

    cout << lambda(4) << " - " << lambda2(4);

    getchar();
}

double suma(double a, double b)
{
    return a + b;
}