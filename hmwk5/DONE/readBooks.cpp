// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 2

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

double readBooks(string fileName, string titles[], string authors[], int numBookStored, int size)
{
    ifstream myfile;                                                            //open file
    myfile.open(fileName);
    string line = "";                                                           //initialize string
    
    if(numBookStored == size)
    {
        return -2;
    }
    
    if(myfile.is_open())                                                        //if its open
    {
        while(getline(myfile, line) && numBookStored < size)                    //read each line
        {
            if(line != "")                                                      //if line has stuff
            {
                string temp[2];                                                 //temp length
                split (line, ',', temp, size);                                  //call split
                titles [numBookStored] = temp [1];                              //titles array
                authors [numBookStored] = temp [0];                             //authors array
                numBookStored++;                                                //move on
            }
        }
    }
    
    else                                                                        //if line is empty return -1
    {
        return -1;
    }
    return numBookStored;
}

int main()
{
    //Test Case 1
    string titles[10];
    string authors[10];
    readBooks("books.txt", titles, authors, 0, 10);
    cout << "checking if we can call the function" << endl;
}