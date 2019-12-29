// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 5

#include <iostream>
#include <math.h>
using namespace std;

int getWordCount(string str)
{
    int words = 1;                          //start with one word so that with no spaces but somwthing in string it will know there is a word           
    if(str == "")                            //if string is empty return 0
    {
        return 0;
    }
    for(int i = 0; i < str.length(); i++)   //for each space add one to the word count
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }
    return words;                           //return number of matches
}

int main()
{
    //test case 1
    getWordCount("Hello");
}