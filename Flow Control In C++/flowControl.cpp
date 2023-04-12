#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    // Now, I am going to learn about conditional statements in C++.
    // In conditions, we have three keywords: 1) if 2) else 3) else if
    // When we want to check which conditions is true between two
    // conditions we use if statement for 1st conditions & else
    // statement for 2nd condition. If we have more than 2 conditions
    // then simply we add else if for those conditions which we want to check after
    // if statement and before else statement.  

    // Let's have a practical. I am going to initialize two variables. 
    // In first variable I am going to assign true and false in second variable.


    // First variable
    int firstCondition;

    // Second variable
    // bool secondCondition {false};
    
    // Now, I am going to use if & else conditions.


    cout << "Enter the value for first condition " << endl;

    cin >> firstCondition;


    if ( firstCondition <= 5 ){

        cout << boolalpha << endl;

        cout << "The conditi1on is: " << true << endl;

    }

    else {

        cout << boolalpha << endl;

        cout << "The condition is: " << false << endl;

    }





    

    


    return 0;
}