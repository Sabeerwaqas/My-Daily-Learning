#include <iostream>


using namespace std;


int main(){

    // Declaring variable

    int gettingInput;

    // Showing message to provide input

    cout << "Enter Number" << endl;

    // Getting input

    cin >> gettingInput;

    for ( int i = 0; i <= gettingInput; i++){

        for ( int j = gettingInput; j >= i; j--){


            cout << " ";


        }

        for ( int k = 1; k <= i; k++){

            cout << "* ";

        }

        

        
            cout << endl;
    }

    for ( int i = 0; i <= gettingInput; i++){

        for ( int j = 1; j <= i; j++){


            cout << " ";


        }

        for ( int k = gettingInput; k >= i; k--){

            cout << "* ";

        
        }
        
            cout << endl;
    }





    return 0;
}