#include "personnage.h"
using namespace std;

// constructeurs
Personnage::Personnage(Position pos, Taille tail, const string& newnom): Element(pos ,tail), nompers(newnom), pointspers(0)
{}

Personnage::Personnage(const Personnage& perstobecpd, const string& newnom): Element(perstobecpd), nompers(newnom), pointspers(0)
{
  /*x = perstobecpd.geteltx();
  y = perstobecpd.getelty();
  w = perstobecpd.geteltw();
  h = perstobecpd.getelth();*/
}

// accesseurs
int Personnage::getpointspers() const
{
  return pointspers;
}


string Personnage::getnom() const
{
  return nompers;
}
// méthodes
string Personnage::toString()
{
  ostringstream outflux;
  outflux << Element::toString() << " name: " << nompers << " points: " << pointspers ;
  string s = outflux.str();
  return s;
}

void Personnage::ramasser(Objet const & ObjToLoot)
{
  pointspers += ObjToLoot.getobjpoints(); 
}
