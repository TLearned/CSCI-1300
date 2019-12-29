#include "team.h"

int split(string temp, char delim, string mytemp[], int size)                   //split from before
{
    int x = 0;
    int y = 0;
    string tempS = "";
    
    if(temp == "")
    {
        return 0;
    }
    
    temp = temp + delim;
    
    for(x = 0; x < temp.length(); x++)
    {
        if(temp[x] != delim)
        {
           tempS += temp[x];
        }
        
        else
        {
            mytemp[y] = tempS;
            y++;
            tempS = "";
        }
    }
    return y;
}
    
    Team :: Team()                                                              //Team name empty
    {
        teamName = "";
    }
    
    Team :: Team(string tTeamName)                                              //intialize
    {
        teamName = tTeamName;
    }
    
    void Team :: setTeamname(string tN)                                         //team name to tN
    {
        teamName = tN;
    }
    
    void Team :: readRoster(string fileName)                                    //go through file and get all players
    {
        ifstream myfile;
        myfile.open(fileName);
        string line = "";
        string array[2];
        
        if(myfile.is_open())
        {
            while(getline(myfile,line))                                         //getline for names
            {
                split(temp, ',', array, 2);
                Player play(array[0], stod(array[1]));
                players.push_back(play);
            }
        }
    }
    
    string Team :: getPlayerName(int i)                                         //if index is longer than array error
    {
        if(i < 0 || i >= players.size());
        {
            return "ERROR";
        }
        
        return players[i].getName();                                            //return
    }
    
    double Team :: getPlayerPoints(int i)                                       //more points return -1
    {
        if(i < 0 || i >= players.size())
        {
            return -1;
        }
        
        return players[i].getPoints();                                          //return points
    }
    
   int  Team :: getNumPlayers()                                                 //return num Players
    {
        return numPlayers;
    }
    
    string Team :: getTeamName()                                                //return team name
    {
        return teamName;
    }