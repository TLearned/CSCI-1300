#include <iostream>
#include <math.h>
using namespace std;

string removeStars(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '*')
        {
           str[i] = '\0';
        }
        
        else
        {
            str[i] = str[i];
        }
    }
    return str;
}

int main()
{
    cout << removeStars("HelloWorld***");
}