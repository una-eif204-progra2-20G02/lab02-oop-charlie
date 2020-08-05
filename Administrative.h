//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
private: 
double monthlySalary;

public:
Administrative();
Administrative(double monthlySalary);
Administrative(const string name, const string lastName, int documentId, double monthlySalary);
virtual ~Administrative;
double getMonthlySalary();
void setMonthlySalary(double monthlySalary);
double salary();
string toString();
};


#endif //LAB02_OOP_ADMINISTRATIVE_H
