#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
  private:
    string employeeName;
    string jobTitle;
    double salary;
    int yearsEmployed;
    int roomNumber;
    //LOCATION?
  public:
    Employee();
    Employee(string, string, double, int, int);

    //-------------------
    string getName();
    //-------------------
    void setName(string);
};

#endif
