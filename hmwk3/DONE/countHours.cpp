// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 5

#include <iostream>
#include <math.h>
using namespace std;

/*
function takes month and converts it into how many hours
are in that month and returns the number of hours
*/

int countHours (int month)
{
    int hours = 0;
    switch(month)
    {
        //month with 672 hours
        case 2:
            hours = 672;
            return hours;
            break;
            
        //months with 720 hours
        case 4:
        case 6:
        case 9:
        case 11:
            hours = 720;
            return hours;
            break;
            
        //months with 744 hours
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            hours = 744;
            return hours;
            break;
    }
    
}

int main()
{
    //Test Case 1
    cout << countHours(2) << endl;
    
    //Test Case 2
    cout << countHours(4) << endl;
    
    //Test Case 3
    cout << countHours(1) << endl;
}