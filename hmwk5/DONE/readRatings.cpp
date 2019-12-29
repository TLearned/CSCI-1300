// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 7

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

int readRatings(string fileName, string users[], int ratings[][50], int numUsers, int maxRows, int maxColumns)
{
    ifstream myfile;                                                //open file
    myfile.open(fileName);
    string line = "";                                               //initialize string
    
    if(numUsers >= maxRows)                                         //if more users than rows return -2
    {
        return -2;
    }
    
    if(!(myfile.is_open()))                                         //if file isn't open return -1
    {
        return -1;
    }
    
    if(myfile.is_open())                                            //if it's open
    {
        while((getline(myfile, line)) && (numUsers < maxRows))
        {
            if(line != "")
            {
                string temp[51];                                    //temp length
                split(line, ',', temp, 51);                         //call split
                users[numUsers] = temp[0];                          //initialize temp for users
                for(int a = 1; a < maxColumns + 1; a++)             //counter for columns
                {
                    if(temp[a] != "")                               //if temp isn't empty
                    {
                        ratings[numUsers][a - 1] = stoi(temp[a]);   //ratings array filled
                    }
                }
                numUsers++;                                         //move on
            }
        }
        return numUsers;                                            //return number of users
    }
    return numUsers++;                                              
}

int main()
{
    //Test Case 1
    string users[2];
    int ratings[2][50];
    
    int numUsers = 0;
    int maxRows = 100;
    int maxColumns = 50;
    
    readRatings("ratings.txt", users, ratings, numUsers, 100, 50);
}