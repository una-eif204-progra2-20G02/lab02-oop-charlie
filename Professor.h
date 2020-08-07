//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H

#include "Person.h"

using namespace std;

class Professor: Person {
private: 
double monthlySalary;
double commissionRate;

public:
Professor();
Professor(double, double, string , string, int);
virtual ~Professor();
double getMonthlySalary();
void setMonthlySalary(double monthlySalary);
double getCommissionRate();
void setCommissionRate(double commissionRate);
double salary();
string toString();
};

#endif //LAB02_OOP_PROFESSOR_H
