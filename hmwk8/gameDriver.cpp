#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

string game(Team t1, Team t2)                                                   //2 teams
{
    double sum1;                                                                //vars
    double sum2;
    
    if(t1.getNumPlayers() < 4 || t2.getNumPlayers() < 4)                        //if less than 4 players forfeit
    {
        return "forfeit";
    }
    
    for(int i = 0; i < 4; i++)                                                  //find team scores
    {
        sum1 = sum1 + t1.getPlayerPoints(i);
        sum2 = sum2 + t2.getPlayerPoints(i);
    }
    
    if(sum1 == sum2)                                                            //same draw
    {
        return "draw";
    }
    
    if(sum1 > sum2)                                                             //1 wins
    {
        return t1.getTeamName();
    }
    
    if(sum1 < sum2)                                                             //2 wins
    {
        return t2.getTeamName();
    }
}

int main()
{
    //Test Case 1
    Team team1("Seg Faultline");
    team1.readRoster("roster1.txt");
    Team team2("Team Maim");
    team2.readRoster("roster2.txt");
    string winner = game(team1, team2);
    cout << "The winner is: " << winner << endl;
    
    //Test Case 2
    Team team3("Hurt Shoebox");
    team3.readRoster("roster0.txt");
    Team team2("Team Maim");
    team2.readRoster("roster2.txt");
    string winner = game(team3, team2);
    cout << "The winner is: " << winner << endl;
}