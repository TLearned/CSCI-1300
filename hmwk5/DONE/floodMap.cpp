// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 5

#include <iostream>
#include <fstream>
using namespace std;

void floodMap(double map[][4] , int rows, double waterLevel)
{
    for(int i = 0; i < rows; i++)               //counter for rows
    {
        for(int a = 0; a < 4; a++)              //counter for columns
        {
            if(map[i][a] > waterLevel)          //if number is above water level print _
            {
                cout << "_";
            }
            if( map[i][a] <= waterLevel)         //if number is lower than or the same as the water level print *
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    //Test Case 1
    double map[1][4] = {{5.0, 7.6, 3.1, 292}}; 
    floodMap(map, 1, 6.0);
}