//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
private: 
double monthlySalary;
double commisionRate;

public:
Professor();
Professor(doube monthlySalary, double commissionRate);
virtual ~Professor

};

#endif //LAB02_OOP_PROFESSOR_H
