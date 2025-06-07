#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float amount, result, res;

    cout << "Enter the amount of your purchase" << endl;
    cin >> amount;

    if (amount >= 100)
    {
        result = amount * 0.10;
        res = amount - result;
        cout << "We have applied a 10% discount to your purchase." << endl;
        cout << res << endl;
    }

    else
    {

        cout << "You do not apply to discounts" << endl;
    }

    return 0;
}