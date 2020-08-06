//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative():Person(){
  monthlySalary=0.0;

}

Administrative::Administrative(double montSalary){
  monthlySalary=montSalary;

}

Administrative::Administrative(string firstName,string lastName, int documentId, double Salary):Person(firstName,lastName,documentId),
        monthlySalary(Salary)
{
}


virtual Administrative::~Administrative(){}

double Administrative::getMonthlySalary(){
  return monthlySalary;
}

void Administrative::setMonthlySalary(double _monthlySalary){

  monthlySalary=_monthlySalary;
}

double Administrative::salary(){

  return 0.00;
}

string Administrative::toString(){
stringstream s;

s<<Person::toString();
s<<Salario:<<monthlySalary<<"\t";
return s.str();
}