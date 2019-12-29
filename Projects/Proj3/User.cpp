#include "user.h"

User :: User()
{
    username = "";                                                              //variables
    num_pokemon = 0;
    points = 0;
    num_pokeballs = 0;
    location = map[][]
}

User :: User(string aUsername, int aNum_pokemon, int aPoints, int aNum_pokeballs)
{
    username = aUsername;                                                       //parameterized constructor
    numPokemon = aNum_pokemon;
    points = aPoints;
    num_pokeballs = aNum_pokeballs;
}

User :: string getUsername()                                                    //return username
{
    return username;
}

void User :: setUsername(string u)                                              //set username
{
    username = u;
}

int User :: getNum_pokemon()                                                    //return number of pokemon
{
    return num_pokemon;
}

void User :: setNum_pokemon(int pM)                                             //set number of pokemon
{
    num_pookemon = pM;
}

int User :: getPoints()                                                         //return number of points
{
    return points;
}

void User :: setPoints(int p)                                                   //set number of points
{
    points = p;
}

int User :: getNum_pokeballs()                                                  //return number of pokeballs
{
    return num_pokeballs;
}

void User :: setNum_pokeballs(int pB)                                           //set number of pokeballs
{
    num_pokeballs = pB;
}

string User :: move()                                                           //turn funcion
{
    int choice = 0;
    while(choice != 4)
    {
        if( choice == 1)                                                        //Travel
        {
            {
                cout << "You chose to travel." << endl;
                cout << "Choose which way to go." << endl;
                cout <<"1. North" << endl;
                cout <<"2. South" << endl;
                cout <<"3. East" << endl;
                cout <<"4. West" << endl;
                for(int i = 0; i < 1; i++)
                {
                    int choice = 0;
                    if(choice > 0 && choice <= 4)
                    {
                        if(choice == 1)                                         //up 1
                        {
                            y = y++;
                        }
                        else if(choice == 2)                                    //down 1
                        {
                            y = y--;
                        }
                        else if(choice == 3)                                    //right 1
                        {
                            x = x++;
                        }
                        else if(choice == 4)                                    //left 1
                        {
                            x = x--;
                        }
                    }
                    else                                                        //account for user error
                    {
                        cout << "Please enter a valid option." << endl;
                    }
                }
                
            }
        }
        
        else if(choice == 2)
        {
            cout << "You chose to rest" << endl;                                //rest
            pokemon.hp == pokemonhp++;                                          //hp + 1
            num_pokeballs == num_pokeballs--;                                   //num_pokeballs - 1
            location = location;                                                //location same 
        }
        
        else if(choice == 3)
        {
            bool wildencouter == false;                                         //bool set to false
            if(pokemon.location = y+7 || pokemon.location = y-7 || pokemon.location = x+7 || pokemon.location = x-7) // if within 7
            {
                wildencounter == true;                                          //wild encounter
            }
            cout << "You chose to try luck" << endl;
            location = location;                                                //location same
            if(wildencounter == true)                                           //if wild encounter
            {
                int random_num;
                srand(time(NULL));
                cout << my_random(2);                                           // random 1 or 2
                if(random_num == 1);                                            //if one catch and save pokeball
                {
                    center.pokedex + pokemon;
                    pokeballs = pokeballs;
                }
                else                                                            //otherwise catch and use pokeball
                {
                    center.pokedex + pokemon;
                    pokeballs = pokeballs--;
                }
            }
        }
        
        else if(choice == 4)                                                    //end game
        {
            ofstream myfile;                                                    //print to file
            myfile.open ("resultsPoke.txt");
            myfile << username << "                   " << "N" << "                   " << points \n;
            myfile.close();
            Quit;
        }
        
        else                                                                    //user error
        {
            cout << "Enter a valid choice" << endl;
        }
    }
}