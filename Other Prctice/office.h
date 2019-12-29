#ifndef OFFICE_H
#define OFFICE_H
#include <string>
#include "employee.h"
#include "room.h"
#include "customer.h"
using namespace std;

class Office
{
  private:
    vector <Employee> officeEmployees;
    vector <Customer> officeCustomers;
    Room officeSpaces[3][3]; //locations within one office Object
    int rows;
    int cols;
  public:
    //Constructors
    //-------------------
    Office() {
      officeSpaces = {{'K', 'A', 'R'},
                      {'P', 'K', 'C'},
                      {'Z', 'A', 'R'}};
      rows = 3;
      cols = 3;
    }
    Office(private variables);
    //-------------------
    int getNumEmployees() {
      return officeEmployees.size();
    }

    void printOffice() {
      
      for(int i = 0; i < rows; i++)
      {
        for(int j = 0; j < cols; j++)
        {
          cout << officeSpaces[i][j].getChar() << endl;
        }
      }

    }

};

#endif
