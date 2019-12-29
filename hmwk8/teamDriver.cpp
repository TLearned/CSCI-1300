#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    //Test Case 1
    Team team1;
    cout << team1.getTeamName() << endl;
    cout << team1.getNumPlayers() << endl;
    
    //Test Case 2
    Team team2;
    team2.setTeamName("Llamas Pajamas");
    cout << team2.getTeamName() << endl;
    cout << team2.getNumPlayers() << endl;
}