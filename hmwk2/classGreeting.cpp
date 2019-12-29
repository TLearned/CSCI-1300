// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 3

#include <iostream>
using namespace std;

void classGreeting(int course_number)                           // Define Function
{
    cout <<"Hello, CS " << course_number << " World!" << endl;  // Uses a function to take input and output the same thing as problem 2
}

int main()
{
    cout << "Enter your course number";                         // User enters their course number
    int course_number;
    cin >> course_number;
    
    classGreeting(course_number);
}