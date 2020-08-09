//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"
using namespace std;

Person::Person(){
  name= "";
  lastName = "";
  documentId = 0;
}
Person::Person(string n, string lastN, int ID){
  name=n;
  lastName= lastN;
  documentId = ID;
}
Person::~Person(){

}

string Person::getFirstName(){
return name;

}
void Person::setFirstName(string nom){
name=nom;

}
string Person::getLastName(){

  return lastName;
}
void Person::setLastName(string apell){
  lastName=apell;

}
int Person::getDocumentoId(){
  return documentId;
}
void Person::setDocumentoId(int cedul){

documentId=cedul;
}

string Person::toString()const{
stringstream s;

s<<"Nombre"<<name<<"\n";
s<<"Apellidos"<<lastName<<"\n";
s<<"Cedula:"<<documentId<<"\n";

return s.str();

}