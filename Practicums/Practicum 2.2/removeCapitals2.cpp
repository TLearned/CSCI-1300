#include <iostream>
#include <math.h>
using namespace std;

string removeCapitals(string str) 
{
    if(str.length() == 0)
    {
        str = "";
    }
    for(int i = 0; i < str.length(); i++)
    { 
        if(str[i] == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' || 'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'U' || 'V' || 'W' || 'X' || 'Y' || 'Z')
        {
           str[i] = '\0';
        }
        
        else
        {
            str[i] = str[i];
        }
        return str;
    }
} 

int main()
{
    cout << removeCapitals("") << endl;
}