#include <iostream>

using namespace std;

int main()
{

    // Declaration of variables
    int age;

    cout << "Enter your age" << endl;
    cin >> age;

    // Calculate whether the person is an adult or a minor
    if (age >= 18)
    {
        cout << "He is of legal age" << endl;
    }
    else
    {

        cout << "He is a minor" << endl;
    }

    return 0;
}