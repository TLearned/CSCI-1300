#include <iostream>
#include <math.h>
using namespace std;

int cardSuit(int number)
{
    switch (number)
    {
        case 0:
        {
        cout << "Suit " << number << ": Clubs" << endl;
        break;
        }
        
        case 1:
        {
        cout << "Suit " << number << ": Diamonds" << endl;
        break;
        }
        
        case 2:
        {
        cout << "Suit " << number << ": Spades" << endl;
        break;
        }
        
        case 3:
        {
        cout << "Suit " << number << ": Hearts" << endl;
        break;
        }
        
    }
}