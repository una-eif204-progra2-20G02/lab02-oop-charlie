//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"
#include<sstream>

class Administrative: public Person {
private: 
double monthlySalary;

public:
Administrative();
Administrative(double monthlySalary);
Administrative( double monthlySalary, const string name, const string lastName, int documentId);
double getMonthlySalary();
void setMonthlySalary(double);
double salary() const;
string toString();
};


#endif //LAB02_OOP_ADMINISTRATIVE_H
