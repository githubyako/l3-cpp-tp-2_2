#ifndef OBJET_H
#define OBJET_H
#include "element.h"
class Objet: public Element
{
private: 
  int objpoints;
public:
  Objet();
  
  int getobjpoints(Objet const & obj);
  
  string toString();
  
};


#endif
