#ifndef OBJET_H
#define OBJET_H
#include "element.h"
class Objet: public Element
{
private: 
  int objpoints;
public:
  Objet(Position pos, Taille tail, int points);
  
  int getobjpoints() const;
  
  string toString();
  
};


#endif
