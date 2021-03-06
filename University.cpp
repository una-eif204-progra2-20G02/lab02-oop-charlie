//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(){}
University::University(string nom){
  nombre=nom;
}
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
void University::addProfessor(Professor* pro){
  professorList.push_back(pro);
}
void University::addAdministrative(Administrative* admin){
  administrativeList.push_back(admin);
}

vector<Professor*> University::getProfessorList(){
std::vector<Professor*> professorListReturn;
for (int cont = 0; cont < professorList.size(); cont++) {
professorListReturn.push_back(professorList[cont]);
}
return professorListReturn;
}

vector<Administrative*> University::getAdministrativeList(){
std::vector<Administrative*> administrativeListReturn;
for (int cont = 0; cont < administrativeList.size(); cont++) {
    administrativeListReturn.push_back(administrativeList[cont]);
}
return administrativeListReturn;
}

string University::toString(){
stringstream s;

s<<"Professor list: \n"<<endl;
for (int cont = 0; cont < professorList.size(); cont++) {
s<<professorList[cont]->toString();
s<<endl<<endl;
}
s<<"Admin list: \n"<<endl;
for (int cont = 0; cont < administrativeList.size(); cont++) {
s<<administrativeList[cont]->toString();
s<<endl<<endl;
s<<"\n";
}
return s.str();
}