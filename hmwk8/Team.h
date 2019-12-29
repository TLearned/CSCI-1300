#indef SMAPLE_H
#define SMAPLE_H

class Team
{
    private:
        string teamName;                                                        //variables
        vector<Player> players;
    
    public:
        Team();                                                                 //constructors
        Team(string);
        void setTeamName(string);                                               //class functions
        void readRoster(string);
        string getPlayerName(int);
        double getPlayerPoints(int);
        int getNumPlayers();
        string getTeamName();
};

#endif