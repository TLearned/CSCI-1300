// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 6

#include <iostream>
#include <fstream>
using namespace std;

int split(string str, char letter, string arr[], int len)   //split function from hw4
{
    string temp = "";                                   
    int arrparts = 0;
    int parts = 0;
    
    if(str == "")                                       
    {
        return 0;
    }
    
    else
    {
        str = str + letter;                             
        for (int i = 0; i < str.length(); i++)          
        {
            if(str[i] != letter)                        
            {
                temp = temp + str[i];
            }
            
            else
            {
                if(temp == "")                          
                {
                    temp =="";
                }
                else
                {
                    arr[arrparts] = temp;               
                    arrparts++;
                    parts++;
                
                    if(parts >= len)                     
                    {
                        return -1;
                    }
                    temp = "";                          
                }
            }
        }
    }
    return arrparts;                                    
}

int readFloatMap(string fileName, double arr[][4] , int numRows)
{
    int i = 0;                                                  //counter for later
    ifstream myfile;                                            //open file
    myfile.open(fileName);
    string line = "";                                           //initialize line
    
    if(myfile.is_open())                                        //if its open
    {
        while(getline(myfile, line))                            //get each line from file and put it into line
        {
            if(line != "")                                      //if its not empty put it into the temp string
            {
                string temp[4];
                split(line, ',', temp, 4);
                for(int x = 0; x < 4; x++)                      //check each spot in all rows and columns
                {
                    arr[i][x] = stod(temp[x]);
                }
                i++;
            }
        }
        return i;                                               //return what is at that position
    }
    else                                                        //otherwise return -1
    {
        return -1;
    }
}

int main()
{
    //Test Case 1
    double floatMap[2][4];
    readFloatMap("testFile.txt", floatMap, 2);
    cout << "Function exists" << endl;
    cout << "Function takes  3 parameters" << endl;
}