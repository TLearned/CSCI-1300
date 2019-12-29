//start with num and return factorial of num
//0 factorial is 1
#include <iostream>
using namespace std;

int factorial(int n)
{
    //Base case
    if(n == 0)
    {
        return 1;
    }
    
    //Pattern
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    cout << factorial(2);
    return 0;
}