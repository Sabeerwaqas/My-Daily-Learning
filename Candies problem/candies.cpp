#include <iostream>
#include <cmath>

using namespace std;

int solution(int number_of_children, int number_of_candies) {
    
  

    int candy;
    
    candy = number_of_candies / number_of_children;
    
    candy = candy * number_of_children;
    
    candy = round(candy);
    
    return candy;

}


int main (){

    int number_of_children;
    int number_of_candies;
    int answer;

    cout << "Enter the number of childern" << endl;

    // Taking input of number of children

    cin >> number_of_children;

    cout << "Enter number of candies" << endl;

    // Taking number of candies

    cin >> number_of_candies;

    answer = solution(number_of_children, number_of_candies );

    // Showing output

    cout << "The total candies eat by all the children are: " << answer << endl;

    


return 0;

}