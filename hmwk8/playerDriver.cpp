#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    //Test Case 1
    Player stella;
    cout << stella.getName() << endl;
    cout << stella.getPoints() << endl;
    
    //Test Case 2
    Player stella;
    stella.setName("Stella");
    cout << stella.getName() << endl;
}