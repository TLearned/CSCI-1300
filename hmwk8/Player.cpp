#include "player.h"

Player :: Player()                                                              //set name to empty and points to 0
{
    name = "";
    points = 0.0;
}

Player :: Player(string pName, double pPoints)                                  //initialize
{
    name = pName;
    points = pPoints;
}

string Player :: getName()                                                      //return player name
{
    return name;
}

double Player :: getPoints()                                                    //return player points
{
    return points;
}

void Player :: setName(string n)                                                //set name as n
{
    name = n;
}

void Player :: setPoints(double p)                                              //set points as p
{
    points = p;
}