#include "personnage.h"
using namespace std;

// constructeur
Personnage::Personnage(int x, int y, int w, int h, const string& newnom): Element(x, y, w, h), nompers(newnom), pointspers(0)
{}

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
