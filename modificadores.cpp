#include <iostream>

using namespace std;

int main()
{
    const int CONSTANTE = 5;
    // CONSTANTE = 7; // Falla

    volatile int vol_int = 100;

    register int reg_int = 5;

    unsigned int ui = -1;
    std::cout << ui << std::endl;

    short int si = -1;
    cout << si << " size - " << sizeof(si) << endl;

    short unsigned int sui = -1;
    cout << sui << " size - " << sizeof(sui) << endl;
    long unsigned int lui = -1;
    cout << lui << " size - " << sizeof(lui) << endl;
    long long unsigned int llui = -1;
    cout << llui << " size - " << sizeof(llui) << endl;


    //Por defecto char es plain char.
    //En las diferentes plataformas los sistemas operativos guardan de una forma u otra los caracteres.
    //Si quieres que en todas las plataformas char sea positivo debes usar unsigned
    //Si quieres que use negativos en todas signed, sino por defecto usara plain y estará adaptado a cada plataforma
    unsigned char uc = 65;
    signed char sc = 65;
    char c = 65;
    cout << "usigned char = " << uc << endl;
    cout << "signed char = " << sc << endl;
    cout << "plain char = " << c << endl;
    //En consola seguimos viendo el mismo valor, independientemente de su signo

    uc = 'B';//B es 66 en codigo ascii
    sc = 'B';
    c = 'B';
    cout << "usigned char = " << uc << endl;
    cout << "signed char = " << sc << endl;
    cout << "plain char = " << c << endl;

    getchar();

    return 0;
}