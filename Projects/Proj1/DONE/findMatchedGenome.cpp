// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 6

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2)  // Pulls code from 5
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
    int i;                                                      
    i = 0;
    double simScore;
    double maxSimScore;
    maxSimScore = 0;
    while (i < genome.length())                                 
    {
       string substr = genome.substr(i, sequence.length());     
       simScore = calcSimScore(substr, sequence);               
       if (simScore > maxSimScore)                             
       {
            maxSimScore = simScore;
       }
       i++;                                                     
    }
    return maxSimScore; 
}

//New code
void findMatchedGenome (string genome1, string genome2, string genome3, string sequence)
{
    if(genome1.length() == 0 || genome2.length() == 0 || genome3.length()  == 0 || sequence.length() == 0)                      //If no input return below
    {
      cout << "Genomes or sequence is empty." << endl;
      exit(0);
    }
    
    if(genome1.length() != genome2.length() || genome1.length() != genome3.length() || genome2.length() != genome3.length())    //If they are different lengths return below
    {
      cout << "Lengths of genomes are different." << endl;
      exit(0);
    }
    
    double simScore1;
    double simScore2;
    double simScore3;
    
    simScore1 = findBestSimScore(genome1, sequence);                                                                            //Store sim scores for each genome
    simScore2 = findBestSimScore(genome2, sequence);
    simScore3 = findBestSimScore(genome3, sequence);
    
    if (simScore1 >= simScore2 && simScore1 >= simScore3)                                                                       //Find best match with if statements
    {
      cout << "Genome 1 is the best match." << endl;
      exit;
    }
    
    if(simScore2 >= simScore1 && simScore2 >= simScore3)
    {
      cout << "Genome 2 is the best match." << endl;
      exit;
    }
    
    if(simScore3 >= simScore1 && simScore3 >= simScore2)
    {
      cout << "Genome 3 is the best match." << endl;
      exit;
    }
    
}

int main()
{
  //Test Case 1
  findMatchedGenome( "AATGTTTCAC", "GACCGACTAA", "AAGGTGCTCC", "TACTA");
}