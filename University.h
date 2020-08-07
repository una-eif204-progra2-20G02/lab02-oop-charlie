//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"


class University {

string nombre;
Professor* profe;
Administrative* adminis;

  public:

  University();
  University(string);
  University(string,Professor*const,Administrative* const);
  virtual ~University(); 

  string getNombre();
  void setNombre(string);
  Professor getProfessor();
  void setProfessor(Professor* const);
  Administrative* getAdministrative();
  void setAdministrative(Administrative* const);
  

};


#endif //LAB02_OOP_UNIVERSITY_H
