// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - No Favorite TA
// Homework 2 - Problem 10

#include <iostream>
#include <math.h>
using namespace std;

int calculateSalary (int rainy_days , int cold_days, int sunnd_days)
{
    int rainy_hours = 5;
    int cold_hours = 4;
    int sunny_hours = 8;
    
    int pay_per_hour = 10;
    
    int total_hours = (rainy_hours * rainy_days) + (cold_hours * cold_days) + (sunny_hours * sunnd_days);   // Total hours by adding all hours
    int pay = total_hours * pay_per_hour;                                                                   // Total Hours  * Pay for each hour for total pay
    return pay;
}

int main()
{
    cout << "TestCase 1: " << endl;                             // Test Case 1
    cout << calculateSalary(1,2,3) << endl;
    
     cout << "TestCase 2: " << endl;                            // Test Case 2
     cout << calculateSalary(4,5,10) << endl;
    
     cout << "TestCase 3: " << endl;                            // Test Case 3
     cout << calculateSalary(10,4,10) << endl;
}