// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 2

#include "planet.h"
#include <iostream>
#include <cmath>
using namespace std;

double maxRadius(Planet objects[], int size)
{
    double maxR = -1000;                                                        //Sets max radius
    int i = 0                                                                   //initialize counter
    if (size <= 0)                                                              //if size is  zero return -1
    {
        return -1;
    }
    for (int t = 0, t < size, t++)                                              //counter number 2
    {
        if(planets[t].getRadius() > maxR)                                       //if radius is bigger than max set as new max
        {
            maxR = planets[t].getRadius();
            t = i;
        }
    }
    return i;                                                                   //return planet, radius, and volume for planet with biggest radius
}

int main()
{
    //Test Case 1
    Planet planets[5];
    planets[0] = Planet("On A Cob Planet",1234);
    planets[1] = Planet("Bird World",4321);
    int idx = maxRadius(planets, 2);
    cout << planets[idx].getName() << endl;
    cout << planets[idx].getRadius() << endl;
    cout << planets[idx].getVolume() << endl;
}