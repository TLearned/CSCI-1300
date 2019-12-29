#include "pokemon.h"

Pokemon :: Pokemon()
{
    name = "";                                                                  //varables
    hp = 0;
    attack = 0;
    defense = 0;
    speed = 0;
    max = 0;
}

Pokemon :: Player(string aName, int aHp, int aAttack, int aDefense, int aSpeed, int aMax)
{
    name = aName;                                                               //parameterized constructor
    hp = aHp;
    attack = aAttack;
    defense = aDefense;
    speed = aSpeed;
    max = aMax;
}

void Pokemon :: readFile()
{
    int split(string str, char letter, string arr[], int len)                   //split from earlier
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
    
    ifstream myfile;
    myfile.open ("pokemon.txt");
    
    if(myfile.is_open())
    {
        while(i < 151)                                                          //counter to max pokemon
        {
            while(getline(myfile, line))
            {
                if(line != "")
                {
                    string temp[6];                                             //split to get each part of pokemon
                    split (line, ',', temp, size);
                    pokemon[name].setName(temp[1]);
                    pokemon[hp].sethp(temp[2]);
                    pokemon[attack].setAttack(temp[3]);
                    pokemon[defense].setDefense(temp[4]);
                    pokemon[speed].setSpeed(temp[5]);
                    pokemon[max].setMax(temp[6]);
                    i++
                }
            }
        }
    }
}

string Pokemon :: getName()                                                     //return pokemon name
{
    return name;
}

void Pokemon :: setName(string n)                                               //set pokemon name
{
    name = n;
}

int Pokemon :: get_hp()                                                         //return pokemon hp
{
    return hp;
}

void Pokemon :: set_hp(int hPoints)                                             //set pokemon hp
{
    hp = hPoints;
}

int Pokemon :: getAttack()                                                      //return pokemon attack
{
    return attack;
}

void Pokemon :: setAttack(int a)                                                //set pokemon attack
{
    attack = a;
}

int Pokemon :: getDefense()                                                     //return pokemon defense
{
    return defense;
}

void Pokemon :: setDefense(int d)                                               //set pokemon defense
{
    defense = d;
}

int Pokemon :: getSpeed()                                                       //return pokemonspeed
{
    return speed;
}

void Pokemon :: setSpeed(int s)                                                 //set pokemon speed
{
    speed = s;
}

int Pokemon :: getMax()                                                         //return pokemon max
{
    return max;
}

void Pokemon :: setMax(int m)                                                   //set pokemon max
{
    max = m;
}