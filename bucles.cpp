#include <iostream>

using namespace std;

int main()
{
    for (unsigned contador = 0; contador < 10; contador += 2)
    {
        cout << contador << endl;
    }

    getchar();

    unsigned contador = 0;
    for (; contador < 10;)
    {
        //código
        cout << contador << endl;
        ++contador;
    }
    
    getchar();

    for (unsigned int i : {1, 4, 3, 6, 2})
    {
        cout << i << endl;
    }

    getchar();

    int x = 10; //Cuidado con los unsigned que -1 no es negativo.
    while (x >= 0)
    {
        cout << x << endl;
        --x;
    }
    getchar();

    //x es menor que 0 así que lo usamos sin volver a asignarlo.
    do
    {
        cout << x << endl;
        ++x;
    } while (x < 10);

    getchar();

    //Nueva keyword no vista en el vídeo! continue
    x = -1;
    while (x < 10)
    {
        ++x;
        if (x == 0) 
        {
            /*
            Continue hace que el bucle continue, es decir, 
            hace que la iteración no siga y continue con la siguiente iteración.
            */
            continue; 
        }

        cout << x << endl;
    }
    getchar();

    return 0;
}