#include "objet.h"

Objet::Objet(Position pos, Taille tail, int points): Element(pos,tail), objpoints(points)
{}




int Objet::getobjpoints() const
{
  return objpoints;
}

string Objet::toString()
{
  ostringstream outflux;
  outflux << Element::toString() << " points:" << objpoints ;
  string s = outflux.str();
  return s;
}
