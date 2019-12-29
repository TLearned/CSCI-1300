// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 1

#include <iostream>
#include <fstream>
using namespace std;

int getLinesFromFile(string fileName,int arrays[], int len)
{
    string lines;                                   //define lines
    int idx = 0;                                    //counter
    ifstream myfile;                                //input file
    myfile.open(fileName);                          //open it
    if (myfile.is_open())                           //if its open
    {
        while(getline(myfile, lines))
        {
            
            if(lines.length() != 0 && idx < len)    //if length is not 0 and the indes is less than length
            {
                arrays[idx] = stoi(lines);          //array at that index is turned to integer
                idx++;                              //index is increased
            }
        }
        
    }
    else                                            //otherwise return -1
    {
        return -1;
    }
    return idx;
}

int main()
{
    //Test case 1
    int numArray[4];
    getLinesFromFile("numbers.txt", numArray, 4);
    cout << "Function exists" << endl;
    cout << "Function takes 3 parameters" << endl;
}