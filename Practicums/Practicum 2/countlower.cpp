#include <iostream>
using namespace std;

int CountLower(string input)
{
    int lower = 0;
    
    if(input.length() == 0)
    {
        return -1;
    }
    
    if(lower !=0)
    {
        for(int i = 0; i < input.length() - 1; i++)
        {
            if(islower(input[i]))
            {
                lower = lower++;
            }
            return lower;
            
            // if(lower == 0)
            // {
            //     return -2;
            // }
        }
    }
        
    else
    {
        return -2;
    }
}

int main()
{
    cout << CountLower("ALL THE BEST") << endl;
}