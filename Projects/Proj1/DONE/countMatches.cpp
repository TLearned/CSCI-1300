// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 2

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int countMatches(string word, string letters)
{   
   int matches = 0;                                                //Start with zero matches
   
   if (word == "" || letters == "")                                //If both are empty return -1
   {
       matches = -1;
   }
   else
   {
       for(int location = 0; location < word.length(); location++) //start at location 0
       {
            string part = word.substr(location, letters.length()); //define part as a substring of word
            {
                 if(part == letters)                               //compare substring to smaller string input
                 {
                     matches = matches + 1;                        //if they are the same increase matches by 1
                 }
            }
       }
   }
   return  matches;                                               //return the number of matches
}

int main()
{
  //Test Case 1
  cout << countMatches("acdc", "ac") << endl;
  
  //Test Case 2
  cout<< countMatches("acac", "ac") << endl;
  
  //Test Case 2
  cout<< countMatches("acac", "") << endl;
}