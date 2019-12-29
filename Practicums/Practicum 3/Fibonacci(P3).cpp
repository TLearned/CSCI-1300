#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
        int a = fibonacci(n-1) + fibonacci(n-2);
        return a;
}

int main()
{
    cout << fibonacci(2);
}