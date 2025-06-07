#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << " Digita un numero del 1 - 7" << endl;
    cin >> num;

    if (num >= 1 && num <= 5)
    {
        cout << " Es un dia de semana" << endl;
    }

    else if (num >= 6 && num <= 7)
    {
        cout << " Es fin de semana" << endl;
    }
    else
    {
        cout << " Digite un numero dentro del rango" << endl;
    }

    return 0;
}