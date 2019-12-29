// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 2

#include <iostream>
#include <math.h>
using namespace std;

void printArrReverse(int arr[], int len)
{
    // i starts at the end and goes to the beginning printing the array in reverse
    for(int i = len - 1; i >= 0; i--)
    {
       cout << arr[i] << endl;
    }
}

int main()
{
    // Test Case 1
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = 10;
    printArrReverse(arr, len);
}