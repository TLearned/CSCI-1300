#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include "office.h"



class Company
{
private:
  Employee officeManagers[100];
  Customer companyCustomers[100];
  vector<Office> offices;
  int numberOfEmployees;
  int totalNumberOfEmployees;
public:
  int getTotalNumEmployees() {
    int sum = 0;
    for(int i = 0; i < offices.size(); i++) {
      // sum = sum + offices[i].getNumEmployees();
      Office tempOffice = offices.at(i);
      sum += tempOffice.addEmployee();
    }
    return sum;
  }
};

#endif
