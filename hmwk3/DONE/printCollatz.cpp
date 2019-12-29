// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 7

#include <iostream>
#include <math.h>
using namespace std;

/*
This takes a number and writes the rest of the 
Collatz Sequence that starts with that number
*/

void printCollatz (int startNumber)
{
    if (startNumber > 0)
    {
       cout << startNumber << " ";
       while (startNumber > 1)
       {
            if (startNumber % 2 == 0)
            {
                startNumber = startNumber / 2;
            }
            else
            {
                startNumber = (startNumber * 3) + 1;
            }
            cout << startNumber << " ";
        }
    }
    else
    {
        cout << "invalid number";
    }
}
   
int main()
{
    //Test Case 1
    printCollatz(6);
    cout << endl;
    //Test Case 2
    printCollatz(3);
    cout << endl;
}