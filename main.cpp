#include <iostream>
#include <cctype>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{

    /*

    Learning about character manipulation and string

    1) Check if character is alphanumeric.
    2) Check if character is alphabetic.
    3) Check if a character is blank.
    4) Check if character is lowercase and uppercase
    5) Check if a character is digit.
    6) Turning a character to lowercase/uppercase using the tolower() and toupper() function.


    */

    // Check if character is alphanumeric

    //    char check;
    //    char check_two;

    //    cout << "Enter the character" << endl;

    //    cin >> check;

    //    cout << "Following is the result of test to check an alphanumeric or not" << endl;

    //    cout << isalnum(check) << " is the alphanumeric" << endl;

    //     cout << "Enter the character" << endl;

    //    cin >> check_two;

    //      cout << "Following is the result of test to check an alphanumeric or not" << endl;

    //    cout << isalnum(check_two) << " is not an alphanumeric" << endl;

    // cout << "isblank" << endl;

    // char message[] = "Hello there. How are you doing? The sun is shining. ";

    // cout << "message: " << message << endl;

    // Find and print blank index

    // for ( int i = 0; i <= sizeof(message); i++ ){

    //     // cout << message[i] << endl;

    //     if (isblank(message[i])){

    //         cout << "Numbers of blanks" << i << endl;

    //     }

    // }

    // append function

    // string s1 = "fam";
    // string s2 = "ily";

    // s1.append(s2);

    // cout << s1 << endl;

    // clear function

    string learnClear = "This is learning about clear.";

    cout << learnClear << endl;

    learnClear.clear();

    cout << learnClear << endl;

    // compare function

    string compare_one = "Hello";
    string compare_two = "World";

    cout << char (compare_one) << endl;

    // cout << compare_one.compare(coclmpare_two) << endl;

    cout << typeid(compare_one).name() << endl;

    

    return 0;
}
