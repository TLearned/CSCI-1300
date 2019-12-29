#include <iostream>
#include <math.h>
using namespace std;

double largestNumber(double num1, double num2, double num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    
    else if( num2 > num1 && num2 > num3)
    {
        return num2;
    }
    
    else if(num3 > num1 && num3 > num2)
    {
        return num3;
    }
}

int main()
{
    cout << largestNumber(1,2,3) << endl;
   
   cout << largestNumber(0,0,1);
}