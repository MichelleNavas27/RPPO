#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Ingresa tu edad" << endl;
    cin >> edad;

    if (edad < 5)
    {
        cout << " Entrada gratuita para menores de 5 años " << endl;
    }
    else if (edad >= 5 && edad <= 12)
    {
        cout << " El costo de tu entrada es de $5 " << endl;
    }
    else if (edad > 12)
    {
        cout << " El costo de tu entrada es de $10 " << endl;
    }
    return 0;
}