#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include "element.h"
#include "objet.h"
class Personnage: public Element
{
private:
  // attr
  int pointspers;
  string nompers;
public:
  // constructeurs
  Personnage(int x, int y, int w, int h, const string & newnom);

  Personnage(Personnage const & perstobecpd, const string & newnom);
  // accesseurs
  int getpointspers() const;
  string getnom() const;
  
  // méthodes
  string toString();
  void ramasser(Objet const & ObjToLoot);
};


#endif
