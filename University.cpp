//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(){}
University::University(string){}
University::University(string nom,Professor* prof,Administrative* admin){
nombre=nom;
profe=prof;
adminis=admin;
}

University::~University(){}

string University::getNombre(){}
void University::setNombre(string nom){}
Professor University::getProfessor(){}
void University::setProfessor(Professor* professor){}
Administrative* University::getAdministrative(){}
void University::setAdministrative(Administrative* admin){}
