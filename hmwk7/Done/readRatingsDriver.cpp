// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 7 - Problem 4

#include "User.h"
#include <iostream>
#include <fstream>
using namespace std;

int split(string str, char letter, string arr[], int len)   //split function from hw4
{
    string temp = "";                                   
    int arrparts = 0;
    int parts = 0;
    
    if(str == "")                                       
    {
        return 0;
    }
    
    else
    {
        str = str + letter;                             
        for (int i = 0; i < str.length(); i++)          
        {
            if(str[i] != letter)                        
            {
                temp = temp + str[i];
            }
            
            else
            {
                if(temp == "")                          
                {
                    temp =="";
                }
                else
                {
                    arr[arrparts] = temp;               
                    arrparts++;
                    parts++;
                
                    if(parts >= len)                     
                    {
                        return -1;
                    }
                    temp = "";                          
                }
            }
        }
    }
    return arrparts;                                    
}

int readRatings(string fileName, User users[], int numUsersStored, int usersArrSize, int maxColumns)  //from hw5 changed
{
    ifstream myfile;                                                //open file
    myfile.open(fileName);
    string line = "";                                               //initialize string
    string temp[51];
    
    if(numUsersStored == usersArrSize)                                         //if more users than rows return -2
    {
        return -2;
    }
    
    if(!(myfile.is_open()))                                         //if file isn't open return -1
    {
        return -1;
    }
    
    if(myfile.is_open())                                            //if it's open
    {
        while((getline(myfile, line)) && (numUsersStored < usersArrSize))
        {
            if(line != "")
            {
                split(line, ',', temp, 51);                         //call split
                users[numUsersStored].setUsername(temp[0]);                          //initialize temp for users
                for(int a = 1; a < maxColumns + 1; a++)             //counter for columns
                {
                    if(temp[a] != "")                               //if temp isn't empty
                    {
                        users[numUsersStored].setRatingAt(a-1, stoi(temp[a]));   //users array filled
                    }
                }
                numUsersStored++;                                         //move on
            }
        }
        return numUsersStored;                                            //return number of users
    }
}

int main()
{
    //Test Case 1
    User users[100];
    int numUsers = 0;
    int maxRows = 2;
    int maxColumns = 50;
    readRatings("ratings.txt", users, numUsers, maxRows, maxColumns);
    cout << "checking if we can call the function" << endl;
    
    //Test Case 2
    User users[10];
    int numUsers = 0;
    int maxRows = 10;
    int maxColumns = 50;
    cout<<readRatings("file_not_found.txt", users, numUsers, maxRows, maxColumns)<<endl;
}