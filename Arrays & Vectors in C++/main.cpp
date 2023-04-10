#include <iostream>
#include <vector>

using namespace std;


int main(){

    // Create a fixed size of array of 10 prime numbers

    int values [10] = {2, 3, 5, 7, 11, 13, 15, 17, 21, 23};

    // Output the 4th (index 3) prime number

    cout << values[3] << endl;

    // Size of the values

    cout << "The size of the int is: " << sizeof(int) << endl;

    // Distance between element 0 and element 6

    int distance = &(values[6]) - &(values[0]);

    cout << "The distance between element 6 & element 0 is: " << distance << endl;  



    

     /*
       We know two facts about an array;
       
       1) Elements are all the same type
       2) The size (number of bytes) of the type is known.
    */


    // Limitations of array

    // All elements in ana array must be the same type
    // => An integer array must contains only integers
    // => a string array must only contains strings
    // Array have a fixed capacity.
    // => Arrays must store their data sequentially in memory.
    // => The capacity of an array is the maximum number of elements that can be stored.
    // => The size of an array is the current number of elements stored in the array.

    // What is std::vector

    /*
    The std::vector implements an array that dynamically grows in size automatically. 
    However, all properties remain true.

    => Array elements are the fixed data type.
    => At any given point, the array has a fixed capacity.
    => The array must be expanded when the capacity is reached.
    */

   vector<int> numbers {1, 2, 3, 4, 5};

   // Examine capacity

   cout << "Initial capacity: " << numbers.capacity() << endl;

   // Add more elemnts

   numbers.push_back(6);
   numbers.push_back(7);
   numbers.push_back(8);
   numbers.push_back(9);
   numbers.push_back(10);

   
    // Now check again capacity

    cout << "Final capacity: " << numbers.capacity() << endl;

    // Check size of the array

   cout << "The size of the array is: " << sizeof(numbers) << endl;


   // Check the memory difference

//    int memoryAddress = &(numbers[7]) - & (numbers[0]);

//    cout << "The numbers of distance between index 7 and index 0 is: " << memoryAddress << endl; 

    int find = 7;

    for( unsigned int i = 0; i <= numbers.size(); i++){

        if (find == numbers[i]){

            cout << "The number found at: " << i << endl;

        }
    }


    return 0;
}