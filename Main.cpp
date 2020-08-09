//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Person.h"
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {
University* uni=new University("UNA");
Professor* prof1 = new Professor(1575000,0,"Mike", "Guzman", 1234567890);
Professor* prof2 = new Professor(105000,0,"Pedro", "Sanchez", 1286608618);
Administrative* admin1= new Administrative(800000.00,"Marta", "Rojas", 272923934);
Administrative* admin2= new Administrative(500000.00,"Andrea", "Jaramillo", 272923935);

uni->addProfessor(prof1);

system("pause");
return 0;


}