// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 7 - Problem 4

#include <iostream>
#include <fstream>
using namespace std;

string insensitive(string str)                                                  //hw 6 earlier
{
    string strU = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(islower(str[i]))                                                   
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

int getCountReadBooks(string userName, User users[], int numUsersStored, int numBooksStored)
{
    int countRB = 0;                                                            //initialize
    userName = insensitive(userName);                                           //userName all one case
    if(numBooksStored == 0)                                                     //if zero books return -3
    {
        return -3;
    }
    for(int a = 0; a <numUsersStored; a++)                                      //username all one case
    {
        if(insensitive(users[a].getUsername()) == userName)                     //if username is same go through and add to countRB
        {
            for(int b = 0; b < numBooksStored; b++)
            {
                if(users[a].getRatingAt(b) != 0)
                {
                    countRB++;
                }
            }
            return countRB;                                                     //return RB or get out and return -3
        }
    }
    return -3;
}

int main()
{
    //Test Case 1
    cout << getCountReadBooks("emma",users,5,4) <<endl;
    //Test Case 2
    cout << getCountReadBooks("DaNieL",users,5,4) <<endl;
}