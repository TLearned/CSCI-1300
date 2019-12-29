// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 8

#include <iostream>
#include <math.h>
using namespace std;


//While loop to print the numbers that are odd

void printOddNumsWhile (int number)
{
    if (number >= 1)
    {
        if (number % 2 == 0 && number != 1) //Number is even
        {
            int count = 1;
            cout << count << endl;
            while (count < number - 1)
            {
                count = count + 2;
                cout << count << endl;
            }
        }
        else if (number == 1)
        {
            cout << number;
        }
        else
        {
            int count = 1;
            cout << count << endl;
            while (count < number)
            {
                count = count + 2;
                cout << count << endl;
            }
        }
    }
}

int main() 
{
    //Test Case 1
    printOddNumsWhile(2);
    
    //Test Case 2
    printOddNumsWhile(3);
}