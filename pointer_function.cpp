#include <iostream>
#include <functional>//c++11

using namespace std;

void functionName(int x)
{
    cout << "Hola funcion " << x << endl;
}

int main()
{
    //C o C++ 03
    void (*nombrePuntero)(int) = &functionName; //Sin parentesis la función
    nombrePuntero(3);

    //C++11
    std::function<void(int)> pointer11{&functionName};
    pointer11(11);

    getchar();

    return 0;
}