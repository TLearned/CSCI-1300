#include "gym.h"

Gym :: Gym()
{
    trainer = "";                                                               //variables
    trainer_pokemon = "";
    tp_hp = 0;
    user = "";
    user_pokemon = "";
    up_hp = 0;
}

Gym :: Gym(string aTrainer, string aTrainer_pokemon, int a_tp_hp, string aUser, string aUser_pokemon,int a_up_hp)
{
    trainer = aTrainer;                                                         //parameterized constructor
    trainer_pokemon = aTrainer_pokemon;
    tp_hp = a_tp_hp;
    user = auser;
    user_pokemon = aUser_pokemon;
    up_hp = a_up_hp;
}

string Gym :: getTrainerName()                                                  //return trainers name
{
    return trainer;
}

void Gym :: setTrainerName(string tN)                                           //get random name
{
    int random_name;
    srand (time(NULL));
    cout << my_random(20);
}

string Gym :: getTrainer_pokemon()                                              //return pokemon
{
    return trainer_pokemon;
}

void Gym :: setTrainer_pokemon(string tP)                                       //get random pokemon from list
{
    if(myfile.is_open())
    {
        while(getline(myfile, line) && index < 151)
        {
            if(line != "")
            {
                string temp[16];
                split (line, ',', temp, size);
                gym[pokemon].setPokemon(temp[0]);
                Pokemon++;
            }
        }
    }
    int random_pokemon;
    srand(time(NULL));
    cout << my_random(151);
}

int Gym :: get_tp_hp()                                                          //return trainer pokemon hp
{
    return tp_hp;
}

void Gym :: set_tp_hp(int tHP)                                                  //random trainer pokemon hp
{
    int random_hp;
    srand(time(NULL));
    cout << my_random(100);
}

string Gym :: getUsername()                                                     //return username
{
    return username;
}

void Gym :: setUsername(string u)                                               //set username 
{
    username = u;
}

string Gym :: getUser_pokemon()                                                 //return users pokemon
{
    return user_pokemon;
}

void Gym :: setUser_pokemon(string uP)                                          //set user pokemon
{
    user_pokemon = uP;
}

int Gym :: get_up_hp()                                                          //return user pokemon hp
{
    return up_hp;
}

void Gym :: set_up_hp(int uHP)                                                  //set user pokemon hp
{
    up_hp = uHP;
}