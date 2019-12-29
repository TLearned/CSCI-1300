#include <iostream>
#include <cmath>
using namespace std;

string decimalToBinaryRecursive(int num)
{
    if(num >= 2)                                                                //if number passed is 2 or greater
    {
        char number = ('0' + num % 2);                                          //initialize character which would be 0 and add the remainder after it is divided by two
        return decimalToBinaryRecursive(num / 2) + number;                      //return the function of the number divided by two and add above
    }
    
    else
    {
        string binary(1, '0' + num);                                            //initialize new string
        return binary;                                                          //return binary number
    }
}

int main()
{
    //Test Case 1
    checkOutput(0);
    
    //Test Case 2
    checkOutput(1);
}