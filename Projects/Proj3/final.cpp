#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    cout << "Welcome to Pokemon!" << endl;                                      //welcome
    cout << "Please state your name: " << endl;                                 //get name
    cin >> name;
    cout << "Welcome " << name << "! Before you can begin your Pokemon adventure, you must choose a starting Pokemon, courtesy of the Professor. Please choose from the following Pokemon:" << endl; //welcome again
    cout << "1. Bulbasaur" << endl;                                             //choices
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "4. Pikachu" << endl;
    
    int choice = 0;                                                             //reset choice
    string active_pokemon;
    for(int i = 0; i < 1; i++)
    {
        if(choice == 1)                                                         //choices set active pokemon
        {
            cout << "You chose Bulbasaur." << endl;
            active_pokemon == "Bulbasaur";
        }
    
        else if(choice == 2)
        {
            cout << "You chose Charmander." << endl;
            active_pokemon == "Charmander";
        }
    
        else if(choice == 3)
        {
            cout << "You chose Squirtle." << endl;
            active_pokemon == "Squirtle";
        }
    
        else if(choice == 4)
        {
            cout << "You chose Pikachu." << endl;
            active_pokemon == "Pikachu";
        }
    
        else                                                                    //user error
        {
            cout << "Please enter a valid choice" << endl;
        }
    }
}