#include <iostream>
using namespace std;

/*
define the vriables
make each choise an if statement
when they choose 4 it exits
*/

void storyGenerator (int choice)
{
    while( choice != 4)
    {
        string noun;
        string name;
        string occupation;
        string place;
        string plural_noun;
        string animal; 
        
        cout << "Which story would you like to play? Enter the number of the story (1, 2, or 3) or type 4 to quit" << endl;
        int choice;
        cin >> choice;
        
        if (choice == 1)
        {
            cout << "Enter a noun: " << endl;
            cin >> noun;
            cout << "Be careful not to vacuum the " + noun + " when you clean under your bed." << endl;
            cout << endl;
        }
        
        else if (choice == 2)
        {
            cout << "Enter a name: " << endl;
            cin >> name;
            cout << "Enter an occupation: " << endl;
            cin >> occupation;
            cout << "Enter a place: " << endl;
            cin >> place;
            cout << name + " is a " + occupation + " who lives in " + place + "." << endl;
            cout << endl;
        }
        
        else if (choice == 3)
        {
            cout << "Enter a plural noun: " << endl;
            cin >> plural_noun;
            cout << "Enter an occupation: " << endl;
            cin >> occupation;
            cout << "Enter an animal: " << endl;
            cin >> animal;
            cout << "Enter a place: " << endl;
            cin >> place;
            cout << "In the book War of the " + plural_noun + ", the main character is an anonymous " + occupation + " who records the arrival of the " + animal + "s in " + place + "." << endl;
            cout << endl;
        }
        else
        {
            cout << "Good bye!";
            break;
        }
    }
}

int main()
{
    int choice;
    storyGenerator(choice);
}