// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 4

#include <iostream>
#include <math.h>                                       // Import themath library already in C++
using namespace std;

int main(){
    cout << "Enter a radius: " << endl;                 // Asks user to enter a rdius
    double radius;                                      // Defines what type of value radius is
    cin >> radius;
    double volume;                                      // Defines what type of value volume is
    volume = (4.0/3.0) * M_PI * pow(radius, 3);         // Volume Formula
    cout << "volume: " << volume << endl;               // Output Volume
    double surface_area;                                // Defines what type of value volume is
    surface_area = (4) * M_PI * pow(radius, 2);         // Surface area Formula
    cout << "surface area: " << surface_area << endl;   // Output Surface Area
    
}