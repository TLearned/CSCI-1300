// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 6

#include <iostream>
#include <math.h>
using namespace std;

/*
Takes the year and finds out if it is a leap year
then returns zero if it is not a leap year
and a one if it is a leap year
*/

bool checkLeapYear (int year)
{
    bool leapyr = false;
    if (year % 4 == 0)
    {
       if (year >= 1582)
       {
           if (year % 100 == 0 && year % 400 != 0)
           {
               return false;
           }
       }
    leapyr = true;
    }
    return leapyr;
}

int main()
{
    //Test Case 1
    cout << checkLeapYear(1900) << endl;
    //Test Case 2
    cout << checkLeapYear(2000) << endl;
}