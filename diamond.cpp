#include <iostream>


using namespace std;


int main() {

    /*
    
        *
       *** 
      *****
     *******   
    
    
    */

   // Declaring variable

   int digit;

    // Showing message to give input

    cout << "Enter Number" << endl;

    // Taking input

    cin >> digit;



    for (int i = 1; i <= digit; i++){

        //           7      7 > 0   
    
        for (int j = digit; j >= i; j--){

            cout << " ";

        }

        

        for (int k = 1; k <= i; k++){

            cout << "* ";

        }

    cout << endl;

    }

    return 0;
}

