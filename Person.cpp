//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"


Person::Person(){}

Person::~Person(){

}

string Person::getFirstName(){
return name;

}
void setFirstName(string nom){
name=nom;

}
string getLastName(){

  return lastName
}
void setLastName(string apell){
  lastName=apell;

}
string getDocumentoId(){

  return documentId;
}
void setDocumentoId(int cedul){

documentId=cedul;
}

string Person::toString()const{
stringstream s;

s<<"Nombre"<<name<<"\n";
s<<"Apellidos"<<lastName<<"\n";
s<<"Cedula:"<<documentId<<"\n";

return s.str();

}