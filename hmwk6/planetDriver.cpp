// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 1

#include "planet.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Test Case 1
    string name = "Nebraska";
    double radius = 866.23;
    Planet p5 = Planet(name, radius);
    cout << "Planet Name: " << p5.getName() << endl;
    cout << "Planet Radius: " << p5.getRadius() << endl;
    cout << "Planet Volume: " << p5.getVolume() << endl;
}