#include "objet.h"

Objet::Objet(int x, int y, int w, int h, int points): Element(x, y, w, h), objpoints(points)
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
