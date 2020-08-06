//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

using namespace std;

class Professor: public Person {
private: 
double monthlySalary;
double commissionRate;

public:
Professor();
Professor(double monthlySalary, double commissionRate);
Professor(const string name, const string lastName, int documentId, double monthlySalary, double commissionRate);
virtual ~Professor;
double getMonthlySalary();
void setMonthlySalary(double monthlySalary);
double getCommissionRate();
void setCommissionRate(double commissionRate);
double salary();
virtual string toString()const;
};

#endif //LAB02_OOP_PROFESSOR_H
