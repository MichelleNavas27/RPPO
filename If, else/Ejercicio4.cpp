#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int note;

    cout << "Enter your rating" << endl;
    cin >> note;

    if (note >= 60)
    {
        cout << "You passed the subject" << endl;
    }

    else {

        cout << "You failed the subject" << endl;
    }

    return 0;
}