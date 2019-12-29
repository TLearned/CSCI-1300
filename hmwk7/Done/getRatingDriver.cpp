// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 7 - Problem 5

#include <iostream>
#include <fstream>
using namespace std;

string insensitive(string str)
{
    string strU = "";
    for(int l = 0; l < str.length(); l++)
    {
        if(islower(str[l]))                                                     //if letter is lowercase
        {
            strU += toupper(str[l] - 32);                                       //make it upper
        }
        else                                                                    //otherwise add it
        {
            strU += str[l];
        }
    }
    return strU;
}

int getRating(string username, string title, User users[], Book books[], int usersSize, int booksSize)
{
    title = insensitive(title);                                                 //make title all upper
    username = insensitive(username);                                           //all upper
    for(int z = 0; z < usersSize; z ++)                                         //go through and if username is the same and title is the same return username and rating for title
    {
        if(insensitive(users[z].getUsername()) == username)
        {
            for(int x = 0; x < booksSize; x++)
            {
                if(insensitive(books[x].getTitle()) == title)
                {
                    return users[z].getRatingAt(x);
                }
            }
        }
    }
return -3;
}

int main()
{
    //Test Case 1
    cout<<getRating("Tom", "The Fountainhead", users, books, 5, 4)<<endl;
    
    //Test Case 2
    cout<<getRating("Daniel", "Three Men In A Boat", users, books, 5, 4)<<endl;

}