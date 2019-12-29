// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 4

#include <iostream>
#include <math.h>
using namespace std;

/*
Function takes inigers and transfers them into a string 
then counts the number of digits in the string
*/

int countDigits (int number)
{
    if (number < 0) // Determine if the number is negative if it is go through this if statement
    {
       number = (number * -1); // Multiply the number by -1 to make it positive
    }
    
    string numStr = to_string(number);
    int digits = numStr.length();
    return digits;
    
}

int main()
{
    // Test Case 1 Positive Number
    cout << countDigits(123) << endl;
    
    // Test Case 2 Negative Number
    cout << countDigits(-1234) << endl;
}