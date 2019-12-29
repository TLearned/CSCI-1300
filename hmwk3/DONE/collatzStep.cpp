// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 1

#include <iostream>
#include <math.h>
using namespace std;

// return the next number in the Collatz Sequence

int collatzStep (int number)
{
    int out;
    if (number < 0)
    {
       out = 0;
    }
   
    if (number % 2 == 0) //Even Numbers 
    {
        out = number / 2; //Even numbers are divided by two
    }
    else
    {
        out = (number * 3) + 1; //All other numbers are multiplied by three and then 1 is added to that
    }
}

int main()
{
    //Test Case 1 Even number
    cout << collatzStep(2) << endl;
    
    //Test Case 2 Odd number
    cout << collatzStep(3) << endl;
}