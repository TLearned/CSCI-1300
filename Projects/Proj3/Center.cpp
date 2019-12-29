#include "center.h"

Center :: Center()                                                              //default constructor
{
    pokedex[] = {};
    party[] = {};
}

Center :: Center(array, array)                                                  //parameterized constructor
{
    pokedex[] = aPokedex[];
    party[] = aParty[];
}

string get_pokedex()                                                            //display pokedex
{
    for(int i = 0; i < 100; i++)
    {
        return i;
        i++;
    }
}

void Center :: set_pokedex(array)                                               //change pokedex
{
    pokedex[] = pokedex[]
}

string Center :: get_party()                                                    //display 6 pokemon in party
{
    for(int i = 0; i < 6; i++)
    {
        return i;
        i++;
    }
}

void Center :: set_party(array)                                                 //change party
{
    party[] = party[]
}