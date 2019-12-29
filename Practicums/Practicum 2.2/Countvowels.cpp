#include <iostream>
#include <string>

using namespace std;

int CountVowels(string str)
{
    int count = 0;
    char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
    char A = 'A', E = 'E', I = 'I', O = 'O', U = 'U';
    
    if (str.length() == 0)
    {
        return -1;
    }
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == a || str[i] == e || str[i] == i || str[i] == o || str[i] == u || str[i] == A || str[i] == E || str[i] == I || str[i] == O || str[i] == U)
        {
            count++;
        }
    }
    return count;
}