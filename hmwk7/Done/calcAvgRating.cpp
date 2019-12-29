// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 7 - Problem 5

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

string insensitive(string str)
{
    string strU = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(islower(str[i]))                                                   //if letter is lowercase
        {
            strU += toupper(str[i] - 32);
        }
        else
        {
            strU += str[i];
        }
    }
    return strU;
}

double calcAverageRating(User users[], Book books[], int numUsersStored, int numBooksStored, string title)
{
     double add = 0;                                                            //vars
     double dR = 0;
     double retrn = 0;
     int index = -1;
     title = insensitive(title);                                                //title all one case
     if(numUsersStored == 0 || numBooksStored == 0)                             //if no users and no books return -3
     {
         return -3;
     }
     
     for(int i = 0; i < numBooksStored; i++)                                    //go through and see if titles same 
     {
         if(insensitive(books[i].getTitle()) == title)
         {
             index = i;
         }
     }
     
     for(int j = 0; j < numUsersStored; j++)
     {
         if(users[j].getRatingAt(index) != 0)                                   //is ther is a rating for user at that index add it
         {
             add = add + users[j].getRatingAt(index);
             dR++;
         }
     }
     
     if(numUsersStored == 0 || numBooksStored == 0)                             //if no users or no books return -3
     {
         return -3;
     }
     
     if(index == -1)                                                            //if position is -1 return -3
     {
         return -3;
     }
     
     if(dR == 0)                                                                //if dR is 0 return 0
     {
         return 0;
     }
     
     else                                                                       //otherwise find avg
     {
         retrn = 1.0 * add/dR;
     }
     
     return retrn;                                                              //return avg
}

int main()
{
    //Test Case 1
    cout << calcAverageRating(users,books,5,4,"The Fountainhead") <<endl;
    //Test Case 2
    cout << calcAverageRating(users,books,5,4,"furioUsly haPpy") <<endl;
}