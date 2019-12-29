// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 3 - Problem 3

#include <iostream>
#include <math.h>
using namespace std;

/*
Takes one number and one letter
they correspond to a space on the board
then the function returns if it is a 
black (dark) or white (light) space
on the board
*/

void chessBoard (char letter, int number)
{
    if (number > 0 && number < 9) //Make sure the numbers are within the range
    {
        if (letter == 'a' || letter == 'b' || letter == 'c' || letter == 'd' || letter == 'e' || letter == 'f' || letter == 'g'|| letter == 'h')
        {
           if (letter == 'a' || letter == 'c' || letter == 'e' || letter == 'g')
           {
              if (number % 2 == 0) 
              {
                  cout << "white" << endl;
              }
              else
              {
                  cout << "black" << endl;
              }
           }
           else
           {
              if (number % 2 == 0)
              {
                  cout << "black" << endl;
              }
              else
              {
                  cout << "white" << endl;
              }
           }
        }
        else
        {
            cout << "Chessboard squares can only have letters between a-h and numbers between 1-8.";
        }
    }
    else
    {
        cout << "Chessboard squares can only have letters between a-h and numbers between 1-8.";
    }
}

int main()
{
   //Test Case 1
   chessBoard( 'g' , 5 );
   
   //Test Case 2
   chessBoard( 'c', 4 );
}