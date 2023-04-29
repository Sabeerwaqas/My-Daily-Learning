#include <iostream>

using namespace std;

int main()
{

    // Declaring variable

    int provideInput;

    // Showing message to provide input

    cout << "Enter Number" << endl;

    // Getting input in declared variable

    cin >> provideInput;

    for (int i = 1; i <= provideInput; i++)
    {

        // cout << "#";

        for (int j = provideInput; j >= i; j--)
        {

            cout << " ";

            
        }

        for (int k = 1; k <= provideInput; k++)
            {

                cout << "*";
            }

            cout << endl;
    }

    return 0;
}