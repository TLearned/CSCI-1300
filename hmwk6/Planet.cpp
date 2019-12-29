#include "planet.h"
#include <cmath>

Planet::Planet()                                                                //Default Constructor, initialize string to empty and radius to 0.0
{
    planetName = "";
    planetRadius = 0.0;
}

 Planet :: Planet(string planetN, double planetR)                               //Parameterized Constructor
{
    planetName = planetN;
    planetRadius = planetR;
}

string Planet :: getName()                                                      //Returns the name the user input
{
    return planetName;
}

void Planet :: setName(string names)                                            //Sets the planet name
{
     planetName = names;
}

double Planet :: getRadius()                                                    //Returns radius that the user input
{
    return planetRadius;
}

void Planet :: setRadius(double r)                                              //Sets radius
{
     planetRadius = r;
}

double Planet :: getVolume()                                                    //Set get volume function
{
    double volume = (1.333333333333) * (3.141592653589793238462643383279) * pow(planetRadius, 3);
    return volume;
}