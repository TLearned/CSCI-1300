// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 6

#include <iostream>
#include <math.h>
using namespace std;

void sphereSurfaceArea(double radius)
{
    double surface_area;                              // Defines what type of value surface_area is
    surface_area = (4) * M_PI * pow(radius, 2);       // Surface Area Function
    cout << "surface area: " << surface_area << endl; // Output Surface Area
    
}
int main()
{
    cout << "Test Case 1: " << endl; // Test Case 1
    sphereSurfaceArea(5);
    
    cout << "Test Case 2: " << endl; // Test Case 2
    sphereSurfaceArea(10);
}