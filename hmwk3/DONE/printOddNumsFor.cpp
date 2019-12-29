// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 9

#include <iostream>
#include <math.h>
using namespace std;

// For loop to print odd numbers

void printOddNumsFor (int number)
{
    if (number >= 1)
    {
        if (number % 2 == 0 && number != 1)
        {
            for (int count = 1; count <= number - 1; (count = count + 2))
            {
                cout << count << endl;
            }
        }
        else if (number == 1)
        {
            cout << number << endl;
        }
        else
        {
            for (int count = 1; count <= number; (count = count+2))
            {
                cout << count << endl;
            }
        }
    }
}

int main()
{
    //Test Case 1
    printOddNumsFor(2);
    
    //Test Case 2
    printOddNumsFor(3);
}