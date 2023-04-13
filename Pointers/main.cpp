#include <iostream>

using namespace std;

int main(){

    // Pointers is the special tyoe of variable that can store address to other
    // variables in out c++ code . All pointers on a given system are going to have the
    // same size for example if you have a pointer to int and the pointer to double
    // the are going to be the same size because  they really store the same thing they stores
    // addresses to variables. 

    // Declare and initialize pointer

    // int* p_number {};   // Initialize with null pointer.
    // double* p_fractional_number {}; 

    // Pointers of the variables are the same size

    // cout << "sizeof(int): " << sizeof(int) << endl;
    // cout << "sizeof(double): " << sizeof(double) << endl;
    // cout << "sizeof(double*): " << sizeof(double*) << endl;
    // cout << "sizeof(int*): " << sizeof(int*) << endl;
    // cout << "sizeof(p_number1): " << sizeof(p_number) << endl;
    // cout << "sizeof(p_fractional_number): " << sizeof(p_fractional_number) << endl;

    // Intializing pointers and assigning them data
    // We know that pointers store addresses of variables

        int int_var {43};

        int* p_int {&int_var};

        cout << int_var << endl;
        
        cout << p_int << endl;




    return 0;
}