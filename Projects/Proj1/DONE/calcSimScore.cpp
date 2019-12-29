// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 4

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2)
{
    int sequence1Length = sequence1.length();
    int sequence2Length = sequence2.length();
    if (sequence1Length != sequence2Length)                         //if the yaren't the same return zero
    {
        return 0.0;
    }
    if (sequence1Length == 0 || sequence2Length == 0)               //if eithr of them are empty return zero
    {
        return 0.0;
    }
    
    int hammingDistance = 0;                                        //part that it is evaluating
    for (int i = 0; i < sequence1Length; i++)                       //makes the area move
    {
        if (sequence1[i] != sequence2[i])                           //if sequences at that spot are the same add 1
        {
            hammingDistance += 1;
        }
    }
    double similarityScore = (double(sequence1Length) - hammingDistance) / sequence1Length;
    return similarityScore;
    
}

int main()
{
    //Test Case 1
    cout << calcSimScore("ATTA", "ATTA") << endl;
   
    //Test Case 2
    cout << calcSimScore("TACA", "CATA") << endl;
   
    //Test Case 3
    cout << calcSimScore("ACGT", "TGCA") << endl;
}

