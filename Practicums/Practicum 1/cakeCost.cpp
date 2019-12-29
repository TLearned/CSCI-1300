#include <iostream>
#include <math.h>
using namespace std;

double cakeCost(double baseCostPerCake, int numberOfToppings, double costPerTopping)
{
   double cost;
   if (numberOfToppings <= 5)
   {
       cost = (numberOfToppings * costPerTopping) + baseCostPerCake;
   }
   else
   {
       cost = (10 * costPerTopping) + baseCostPerCake;
   }
return cost;
}


int main()
{
    cout << cakeCost(30, 5, 5) << endl;
    
    cout << cakeCost(30, 7, 5) << endl;
}