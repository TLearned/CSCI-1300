// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 4 - Problem 1

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Temp function
    double temps[10];
    for(int i = 0; i < 10; i++)
    {
        temps[i] = -459.67;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << temps[i] << endl;
    }
    cout << endl;
    
    //Colors function
    string colors[5] {"Red", "Blue", "Green", "Cyan", "Magenta"};
    for(int i = 0; i < 5; i++)
    {
        cout << colors[i] << endl;
    }
    cout << endl;
    
    //Sequence function
    int sequence[100];
    for(int i = 0; i < 100; i++)
    {
        sequence[i] = i + 1;
        cout << sequence[i] << endl;
    }
    cout << endl;
    
    //Letters function
    char letters[52];
    int i = 0;
    char c = 'A';
    char l = 'a';
    while(i <= 50)
    {
        letters[i] = c;
        cout << letters[i] << " ";
        i++;
        letters[i] = l;
        cout << letters[i] << endl;
        i++;
        c++;
        l++;
    }
}