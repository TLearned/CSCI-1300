// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 1

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void printCharInString(string letters)
{
   int length = letters.length();   //length of string
    if (length == 0)                //if no letters in string return below
    {
        cout << "Given string is empty!" << endl;
    }
    for(int i = 0; i < length; i++) //when there are letters start at zero and print the letters on their own line going forward
    {
        cout << letters.substr(i, 1) << endl;
    }
}

int main()
{
   string Hello;
   
    // Test Case 1
    printCharInString("Hello");
    
    // Test Case 2
    printCharInString("");
}