// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 3

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void stats(double arr[], int len)
{
    cout << fixed << setprecision(2);       //how many decimals should be 2
    double min = arr[0];                    //define vars types and initialize vars
    double max = arr[0];
    double total = 0;
    
    for(int i = 0; i <= len - 1; i++)       //beginning to end
    {
        if (min > arr[i])                   //if value at that array point is less than min re-define min
        {
            min = arr[i];
        }
        
        if (max < arr[i])                   //if value at that array point is greater than max re-define max
        {
            max = arr[i];
        }
        
        total = total + arr[i];             //find total to use for avg
    }
    
    double avg = double (total / len);      //calc avg
    cout << "Min: " << min << endl;         //outputs
    cout << "Max: " << max << endl;
    cout << "Avg: " << avg << endl;
}

int main()
{
    // double arr[] = {0,1,2,3,4,5,6,7,8,9};
    // int len = 10;
    // stats(arr, len);
    
    //Test Case 1
    double arr[] = {1.4, 9.8, 2.6};
    int len = 3;
    stats(arr, len);
}