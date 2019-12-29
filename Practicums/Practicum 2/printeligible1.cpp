#include <iostream>
#include <math.h>
using namespace std;

string printEligibleAthletes(string names[], double ages[], int idx)
{
    string name = "";
    double age = 0.0;
    int i = 0;
    
    while(i < idx)
    {
        name = names[i];
        age = ages[i];
        cout << name << ", " << age << endl;
        i++;
    }
}

int main()
{
    string names[3] = {"Chloe Kim", "Rene Rinnekangas", "Jake Pates"};
    double ages[3] = {15.75, 16.3, 17.5};
    printEligibleAthletes(names, ages, 3);
}