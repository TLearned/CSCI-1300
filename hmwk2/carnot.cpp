// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 9

#include <iostream>
#include <math.h>
using namespace std;

double carnot(int abscoldtemp, int abshottemp)
{
    double carnotefficiency = (1- ((double)abscoldtemp / (double)abshottemp));
    return (carnotefficiency);
}

int main()
{
    cout << "Test Case 1: " << carnot( 100 , 14 ) << endl;                          //Test Case 1
    
    cout << "Test Case 2: " << carnot( 9 , 16 ) << endl;                           // Test Case 2
}