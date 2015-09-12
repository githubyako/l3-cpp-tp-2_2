#include "objet.h"

Objet::Objet(): Element(x,y ,w ,h), objpoints()
{

}


int Objet::getobjpoints(const Objet& obj)
{
  return obj.objpoints;
}

string Objet::toString()
{
  ostringstream outflux;
  outflux << Element::toString() << " points:" << objpoints ;
  string s = outflux.str();
  return s;
}
