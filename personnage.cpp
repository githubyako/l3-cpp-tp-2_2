#include "personnage.h"
using namespace std;
Personnage::Personnage(int x, int y, int w, int h, const string& newnom): Element(x, y, w, h), nompers(newnom), pointspers(0)
{}


int Personnage::getpointspers(const Personnage& perso)
{
  return perso.pointspers;
}


string Personnage::getnom(const Personnage& perso)
{
  return perso.nompers;
}

string Personnage::toString()
{
  ostringstream outflux;
  outflux << Element::toString() << " name: " << nompers << " points: " << pointspers ;
  string s = outflux.str();
  return s;
}

void Personnage::ramasser(Objet const & ObjToLoot)
{
  pointspers += Objet::getobjpoints(ObjToLoot); 
}
