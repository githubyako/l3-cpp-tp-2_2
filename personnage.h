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

  // accesseurs
  int getpointspers(Personnage const & perso);
  string getnom(Personnage const & perso);
  
  // méthodes
  string toString();
  void ramasser(Objet const & ObjToLoot);
};


#endif
