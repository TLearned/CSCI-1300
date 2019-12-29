// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 4

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

double readBooks(string fileName, Book objects[], int numBookStored, int size) //hw 5
{
    ifstream myfile;   
    myfile.open(fileName);
    string line = "";
    
    if(numBookStored == size)
    {
        return -2;
    }
    
    if(myfile.is_open())
    {
        while(getline(myfile, line) && numBookStored < size)
        {
            if(line != "")
            {
                string temp[2];
                split (line, ',', temp, size);
                objects[numBookStored].setAuthor(temp[0]);
                objects[numBookStored].setTitle(temp[1]);
                numBookStored++;
            }
        }
    }
    
    else
    {
        return -1;
    }
    return numBookStored;
}

int main()
{
    //Test Case 1
    readBooks("fileName.txt", books, 0, 50);
    cout << "checking if we can call the function" << endl;
}