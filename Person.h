//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H
using namespace std;

#include <string>
#include <ostream>

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
void setFirstName();
string getLastName();
void setLastName();
virtual double salary() const = 0;
virtual string toString() const = 0;
// Comentario 

};


#endif //LAB02_OOP_PERSON_H
