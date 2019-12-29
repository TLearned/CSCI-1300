// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 5

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2) // Pulls code from 4
{
    int sequence1Length = sequence1.length();
    int sequence2Length = sequence2.length();
    if (sequence1Length != sequence2Length)
    {
        return 0.0;
    }
    if (sequence1Length == 0 || sequence2Length == 0)
    {
        return 0.0;
    }
    
    int hammingDistance = 0;
    for (int i = 0; i < sequence1Length; i++)
    {
        if (sequence1[i] != sequence2[i])
        {
            hammingDistance += 1;
        }
    }
    double simScore = (double(sequence1Length) - hammingDistance) / sequence1Length;
    return simScore;
}

double findBestSimScore(string genome, string sequence)
{
    int i;                                                      //define and initialize variables
    i = 0;
    double simScore;
    double maxSimScore;
    maxSimScore = 0;
    while (i < genome.length())                                 //wile the counter is less than the length
    {
       string substr = genome.substr(i, sequence.length());     //define substring
       simScore = calcSimScore(substr, sequence);               //pull calcSimScore andput values in
       if (simScore > maxSimScore)                              //replace max sim score is simscore is larger
       {
            maxSimScore = simScore;
       }
       i++;                                                     //move counter to next place
    }
    return maxSimScore; 
}

int main()
{
    //Test Case
    cout << findBestSimScore("ACTTAC", "ACT") << endl;
}