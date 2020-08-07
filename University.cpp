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

string University::getNombre(){
  return nombre;
}
void University::setNombre(string nom){
  nombre = nom;
}
Professor* University::getProfessor(){
  return profe;
}
void University::setProfessor(Professor* professor){
  profe = professor;
}
Administrative* University::getAdministrative(){
  return adminis;
}
void University::setAdministrative(Administrative* admin){
  adminis = admin;
}
