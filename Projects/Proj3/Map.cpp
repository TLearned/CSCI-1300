#include "map.h"

Map :: Map()
{
    ground_tile = a;                                                            //set all tiles to same
    water_tile = a;
    gym_tile = a;
    center_tile = a;
}

Map :: Map(string aGT, string aWT, string aGyT, string aCT)
{
    ground_tile = aGT;                                                          //parameterized constructor
    water_tile = aWT;
    gym_tile = aGyT;
    center_tile = aCT;
}

void Map :: readFile()
{
    int x = 0;                                                                  //x and y values
    int y = 0;
    int split(string str, char letter, string arr[], int len)                   //split from before
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
    myfile.open ("mapPoke.txt");
    
    if(myfile.is_open())                                                        //read file
    {
        while(y < 25)
        {
            while(getline(myfile, line) && x < 16)
            {
                if(line != "")
                {
                    string temp[16];
                    split (line, ',', temp, size);
                    map[location].setTile(temp[0]);
                    x++;
                }
            }
        }
    }
}

char Map :: getGround()                                                         //set ground tiles to *
{
    return "*";
}

void Map :: setGround(char G)                                                   //save location of ground
{
    G = map[x][y]
}

char Map :: getWater()                                                          //set water tiles to ~
{
    return "~";
}

void Map :: setWater(char W)                                                    //save location of water
{
    W = map[x][y]
}

char Map :: getGym()                                                            //set gym tiles to G
{
    return "G";
}

void Map :: setGym(char G)                                                      //save gym location
{
    G = map[x][y]
}

char Map :: getCenter()                                                         //set center tile to C
{
    return "C";
}

void Map :: setCenter(char C)                                                   //save center location
{
    C = map[x][y]
}