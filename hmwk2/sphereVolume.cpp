// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 5

#include <iostream>
#include <math.h>
using namespace std;

void sphereVolume(double radius)
{
    double volume;                              // Defines what type of value volume is
    volume = (4.0/3.0) * M_PI * pow(radius, 3); // Volume Formula
    cout << "volume: " << volume << endl;       // Output Volume
    
}
int main()
{
    cout << "Test case 1: " << endl; // Test Case 1
    sphereVolume(5);
    
    cout << "Test case 2: " << endl; // Test Case 2
    sphereVolume(15);
}