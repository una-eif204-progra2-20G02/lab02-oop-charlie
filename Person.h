//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H
using namespace std;

#include <string>
#include <ostream>
#include <sstream>

/**
 * Abstract Class of Person
 */
class Person {
private:
string name;
string lastName;
int documentId;


public:
Person();
Person(string name, string lastName, int documentId);
virtual~Person();    
string getFirstName();
void setFirstName(string);
string getLastName();
void setLastName(string);
int getDocumentoId();
void setDocumentoId(int);
virtual double salary() const = 0;
virtual string toString() const;
// Comentario 

};


#endif //LAB02_OOP_PERSON_H
