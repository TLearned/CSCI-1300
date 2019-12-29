// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 8

#include <iostream>
#include <math.h>
using namespace std;

int population (int currentpopulation)
{
   //define variable used later
    int secondsinyear = 31536000;
    
    //define the variables
    double birthspersecond = 0.125;
    double deathspersecond = 0.083333333;
    double immigrantspersecond = 0.037037037;
    
    //calculate popultion using variables
    int birthsperyear = birthspersecond * secondsinyear;
    int deathsperyear = deathspersecond * secondsinyear;
    int immigrantsperyear = immigrantspersecond * secondsinyear;
    
    int endpopulation = currentpopulation + birthsperyear - deathsperyear + immigrantsperyear;
    
    return endpopulation;
}

int main()
{
    cout << "Test Case 1: " << endl; // Test Case 1
    int endpopulation = population(2090770);
    cout << endpopulation << endl;
    
    cout << "Test Case 2: " << endl; // Test Case 2
    endpopulation = population(2080390);
    cout << endpopulation << endl;
}