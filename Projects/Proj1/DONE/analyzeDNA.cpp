// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 7

#include <iostream>
#include <math.h>
using namespace std;

double calcSimScore(string sequence1, string sequence2) //pulls code from 4
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
    double similarityScore = (double(sequence1Length) - hammingDistance) / sequence1Length;
    return similarityScore;
}


double findBestSimScore(string genome, string sequence) //pulls code from 5
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

void findMatchedGenome (string genome1, string genome2, string genome3, string sequence) //pulls code from 6
{
    if(genome1.length() == 0 || genome2.length() == 0 || genome3.length()  == 0 || sequence.length() == 0)                      
    {
        cout << "Genomes or sequence is empty." << endl;
        exit(0);
    }
            
    if(genome1.length() != genome2.length() || genome1.length() != genome3.length() || genome2.length() != genome3.length())    
    {
        cout << "Lengths of genomes are different." << endl;
        exit(0);
    }
            
    double simScore1;
    double simScore2;
    double simScore3;
            
    simScore1 = findBestSimScore(genome1, sequence);                                                                            
    simScore2 = findBestSimScore(genome2, sequence);
    simScore3 = findBestSimScore(genome3, sequence);
            
    if (simScore1 >= simScore2 && simScore1 >= simScore3)                                                                       
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



// Show menu function
void showMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "=== menu ===" << endl;
    cout << "1. Find similarity score" << endl;
    cout << "2. Find the best similarity score" << endl;
    cout << "3. Analyze the genome sequences" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    int choice;
    
    do
    {
        showMenu();
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                string sequence1;
                string sequence2;
                cout << "Enter sequence 1:" << endl;
                cin >> sequence1;
                cout << "Enter sequence 2:" << endl;
                cin >> sequence2;
                double simScoreF = calcSimScore(sequence1, sequence2);
                cout << "Similarity score: " << simScoreF << endl;
                break;
            }
                
            case 2:
            {
                string genome;
                string sequence;
                cout << "Enter genome:" << endl;
                cin >> genome;
                cout << "Enter sequence:" << endl;
                cin >> sequence;
                double bestSimScoreF = findBestSimScore(genome, sequence);
                cout << "Best similarity score: " << bestSimScoreF << endl;
                break;
            }
               
            case 3:
            {
                string genome1;
                string genome2;
                string genome3;
                string sequence;
                cout << "Enter genome 1:" << endl;
                cin >> genome1;
                cout << "Enter genome 2:" << endl;
                cin >> genome2;
                cout << "Enter genome 3:" << endl;
                cin >> genome3;
                cout << "Enter sequence:" << endl;
                cin >> sequence;
                findMatchedGenome(genome1, genome2, genome3, sequence);
                break;
            }
            case 4:
            {
                cout << "Good bye!" << endl;
                break;
            }
            default:
            {
                cout << "Invalid option." << endl;
            }
        }
    }while (choice != 4);
}