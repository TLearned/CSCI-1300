// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 6

#include <iostream>
#include <math.h>
using namespace std;

int split(string str, char letter, string arr[], int len)
{
    string temp = "";                                   //temp string starts empty
    int arrparts = 0;
    int parts = 0;
    
    if(str == "")                                       //if string is empty return o
    {
        return 0;
    }
    
    else
    {
        str = str + letter;                             //add character to the end of the string
        for (int i = 0; i < str.length(); i++)          //start of string to the end
        {
            if(str[i] != letter)                        //if string and char aren't same the temp string is the temp string plus the part of the string not in it
            {
                temp = temp + str[i];
            }
            
            else
            {
                if(temp == "")                          //if temp string is still empty leave it empty
                {
                    temp =="";
                }
                else
                {
                    arr[arrparts] = temp;               //save it in the array
                    arrparts++;
                    parts++;
                
                    if(parts > len)                     //if there are more parts to string than the length return -1
                    {
                        return -1;
                    }
                    temp = "";                          //empty temp string to start again
                }
            }
        }
    }
    return arrparts;                                    //return parts
}

int main()
{
   //test case 1
    string words[6];
    cout << split('one small step', ' ', words, 6) << endl;
    cout << words << endl;
}