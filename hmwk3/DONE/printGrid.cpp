// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 10

#include <iostream>
#include <math.h>
using namespace std;

/*
Print a grid with the same number of columns and rows
*/

void printGrid (int n)
{
    if (n > 0)
    {
        for (int countColumn = 0; countColumn < n; countColumn++)
        {
            for (int countRow = 0; countRow < n; countRow++)
            {
                cout << "+--";
            }
            cout << "+" << endl;
            
            for (int countRow = 0; countRow < (n + 1); countRow++)
            {
                cout << "|  ";
            }
            cout << endl;
        }
        
        for (int countRow = 0; countRow < n; countRow++)
            {
                cout << "+--";
            }
                cout << "+" << endl;
    }
    else
    {
        cout << "The grid can only have a positive number of rows and columns.";
    }
}

int main()
{
    //Test Case 1
    printGrid(2);
    //Test Case 2
    printGrid(3);
    //Test Case 3
    printGrid(-2);
}