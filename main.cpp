#include <iostream>

using namespace std;

int main()
{

    // Declare variable

    int takingNumber;

    // Taking input
    cout << "Enter input" << endl;

    cin >> takingNumber;

    for (int i = 1; i <= takingNumber; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << "#";
        }

        cout << endl;
    }
    for (int i = 1; i <= takingNumber; i++)
    {

        for (int j = takingNumber; j >= i; j--)
        {

            cout << "#";
        }

        cout << endl;
    }

    return 0;
}