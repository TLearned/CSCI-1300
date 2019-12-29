// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 7

#include <iostream>
#include <math.h>
using namespace std;

/*
define minutes variable
define hours variable

minutes is seconds / 60
seconds left is the remainder
hours is minutes / 60 no remainder
minutes left is the remainder
then prints in order of hours, minutes, seconds
*/

void convertSeconds(int seconds)
{
    int m;                                                                              // Define what type of value minutes is m is minute
    int h;                                                                              // Define what type of value hours is h is hour
    m = seconds / 60;                                                                   // Calculate how many minutes there are
    seconds = seconds % 60;                                                             // Calculate the remaining seconds
    h = m / 60;                                                                         // Calculate hours
    m = m % 60;                                                                         // Calculate remaining minutes
    cout << h <<" hour(s) " << m << " minute(s) " << seconds << " second(s) " << endl;
    
}

int main()
{
    cout << "Test Case 1: " << endl;                                                    // Test Case 1
    convertSeconds(120);
    cout << endl;
    
    cout << "Test Case 2: " << endl;                                                    // Test Case 2
    convertSeconds(3600);
    cout << endl;
    
    cout << "Test Case 3: " << endl;                                                    // Test Case 3
    convertSeconds(3665);
    cout << endl;
    
    cout << "Test Case 4: " << endl;                                                    // Test Case 4
    convertSeconds(65536);
    cout << endl;
} 