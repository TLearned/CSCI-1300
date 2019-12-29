// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Project 1 - Problem 3

#include <iostream>
#include <math.h>
#include <string>

using namespace std;


// showMenu function for problem 3 in proj 1
void printMenu()
{
	int choice;
	double agility;
	double strength;
	double speed;
	double total;
	double hireScore;
	
	agility = 0;
	strength = 0;
	speed = 0;
	
	while(choice != 4)
	{
	
		cout<< "Select a numerical option:"<< endl;			//menu that we are given
		cout<<"=== menu ==="<<endl;
		cout << "1. Fox" << endl;
		cout << "2. Bunny" << endl;
		cout << "3. Sloth" << endl;
		cout << "4. Quit" << endl;
		cin >> choice;
	
    	if (choice == 1)									//If the input is one, enter the two values wanted
    	{
    	    cout << "Enter agility: " << endl;
    	    cin >> agility;
    	    cout << "Enter strength: " << endl;
    	    cin >> strength;
    	    total = (agility * 1.8) + (strength * 2.16);
    	}
    	
    	else if (choice == 2)								//If the input is two, enter the two wanted values
    	{
    	    cout << "Enter agility: " << endl;
    	    cin >> agility;
    	    cout << "Enter speed: " << endl;
    	    cin >> speed;
    	    total = (agility * 1.8) + (speed * 3.24);
    	}
    	
    	else if (choice == 3)								//If the input is 3, enter the two wanted values
    	{
    	    cout << "Enter strength: " << endl;
    	    cin >> strength;
    	    cout << "Enter speed: " << endl;
    	    cin >> speed;
    	    total = (strength * 2.16) + (speed * 3.24);
    	}
    
		else											//if none of the if statements apply
		{
		    break;
		}
    	cout << "Hire Score: " << total << endl;
	}
}

int main()
{
	double choice;
	printMenu();
}