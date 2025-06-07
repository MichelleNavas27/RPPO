#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter a number" << endl;
    cin >> num1;

    cout << "Enter a numer 2" << endl;
    cin >> num2;

    // Comparar los números
    if (num1 > num2)
    {
        cout << num1 << " es mayor que " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " es menor que " << num2 << endl;
    }
    else
    {
        cout << "Ambos números son iguales." << endl;
    }

    return 0;
}