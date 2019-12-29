// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 2

#include <iostream>
#include <math.h>
using namespace std;

/*
function will see if any of the numbers 
are the same and will use the statements 
to respond to the user if any of them are the smae
*/

void checkEqual (int number1, int number2, int number3)
{
    if (number1 == number2 && number1 == number3 && number2 == number3)
    {
       cout << "All same" << endl;
    }
   
    else if (number1 != number2 && number1 != number3 && number2 != number3)
    {
       cout <<  "All different" << endl;
    }
    else //Any other combination of numbers
    {
        cout << "Neither" << endl;
    }
}

int main()
{
    //Test Case 1
    checkEqual(1,1,1);
    
    //Test Case 2
    checkEqual(1, 2, 3);
    
     //Test Case 3
    checkEqual(1, 1, 2);
}