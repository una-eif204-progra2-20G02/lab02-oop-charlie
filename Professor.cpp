//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "Professor.h"

Professor::Professor(){

}

Professor::Professor(double monthlySalary, double commissionRate):monthlySalary(monthlySalary),commissionRate(commissionRate){}

Professor::~Professor(){}

double Professor::getMonthlySalary(){
    return monthlySalary;
}

void Professor::setMonthlySalary(double Salary) {
    monthlySalary=Salary;
}

double Professor::getCommissionRate(){
    return commissionRate;
}

void Professor::setCommissionRate(double commission) {
    commissionRate=commission;
}

double Professor::salary() const {
    return (monthlySalary+commissionRate);
}

  string Professor::toString()const{
   stringstream s;

    s<<Person::toString();
    s<<"Professor:"<<"\n";
    s<<"Salario con comisiones: "<<salary()<<"\n";
    s<<"Comisiones: "<<commissionRate<<"\n";
    s<<"salario: "<<monthlySalary<<"\n";
    return s.str();
}
