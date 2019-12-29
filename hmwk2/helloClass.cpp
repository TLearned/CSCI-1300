// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 2

#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a CS course number: " << endl; // User enters their course number
    cin >> number;
    
    int classnumber = number;
    cout << "Hello, CS " << classnumber << " World!" << endl; // outputs the users course number in a sentence
}