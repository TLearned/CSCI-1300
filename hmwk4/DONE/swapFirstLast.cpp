// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 4

#include <iostream>
#include <math.h>
using namespace std;

void swapFirstLast (int arr[], int len)
{
    int fn = arr[0];            //fn = first number in array
    int ln = arr[len - 1];      //ln is last number in array
    arr[0] = ln;                //put ln in first spot
    arr[len - 1] = fn;          //put fn in last spot
}

int main()
{
   int num = 3;
   
   int arr[3] = {10, 20, 30};
   swapFirstLast (arr, 3);
   
   for (int i = 0; i < num; i++)    //go through all nums
   {
       cout << arr[i] << endl;
   }
}