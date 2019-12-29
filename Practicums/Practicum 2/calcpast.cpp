#include <iostream>
#include<cmath>
using namespace std;

int calcPastries(string fileName)
{
    string name;
    double cost;
    double number;
    double pay = number * cost;
    
    ifstream myfile;                                                //open file
    myfile.open(fileName);
    
    if(!(myfile.is_open()))                                         //if file isn't open return -1
    {
        return -1;
    }
    
    if(myfile.is_open())                                            //if it's open
    {
        while((getline(myfile, line))
        {
            if(line != "")
            {
                string temp[10];                                    //temp length
                split(line, ',', temp, 10);                         //call split
                name[fileName] = temp[0];                          //initialize temp for users
                number[fileName] = temp[1];
                cost[fileName] = temp[2];
                for(int a = 1; a < max_words + 1; a++)             //counter for columns
                {
                    if(temp[a] != "")                               //if temp isn't empty
                    {
                        cout << name << ": " << pay << endl;
                    }
                    int fullpay = pay + pay[a];
                    cout << "Total: " << fullpay << endl;
                }
            }
        }
    }
}

int main()
{
    calcPastries("cake.txt");
}