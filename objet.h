#ifndef OBJET_H
#define OBJET_H
#include "element.h"
class Objet: public Element
{
private: 
  int objpoints;
public:
  Objet(int x, int y, int w, int h, int points);
  
  int getobjpoints() const;
  
  string toString();
  
};


#endif
