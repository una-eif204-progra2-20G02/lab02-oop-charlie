//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "Professor.h"

Professor::Professor():Person(){
monthlySalary=0.0;
commissionRate =0.0;
}

Professor::Professor(double mont, double commi, string n ,string lastN, int id): Person(n,lastN,id){
monthlySalary = mont;
commissionRate = commi;
}

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

double Professor::salary() const{
    return (monthlySalary+commissionRate);
}

string Professor::toString(){
   stringstream s;
    s<<Person::toString();
   
    s<<"Salario con comisiones: "<<salary()<<"\n";
    s<<"Comisiones: "<<commissionRate<<"\n";
    s<<"salario: "<<monthlySalary<<"\n";
    return s.str();
}
