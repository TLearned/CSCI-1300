#include <iostream>
#include <cmath>
using namespace std;

string decimalToBinaryIterative(int num)
{
    sting str = "";                                                             //intitalize place to hold binary number
    
    if(num == 0)                                                                //if number passed is 0
    {
        str = "0";                                                              //binary number is 0
    }
    
    for(num; num > 0; num /=2)                                                  //otherwise while number is greater than 0
    {
        int i = (num % 2);                                                      //binary number 1 or 0 which is remainder & is stored in i
        str = to_string(i) + str;                                               //then it is added to string
    }
    
    return str;                                                                 //return string
}

int main()
{
    //Test Case 1
    checkOutput(0);
    
    //Test Case 2
    checkOutput(1);
}