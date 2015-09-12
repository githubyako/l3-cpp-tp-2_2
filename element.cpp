#include "element.h"


/*
 * 
 * ---------------METHODES DE POSITION---------------
 * 
 */

// constructeurs
Position::Position(const int coord1, const int coord2)
:x(coord1), y(coord2)
{}



Position::Position(const Position& PosToCopy)
:x(PosToCopy.x), y(PosToCopy.y)
{

}

// accesseurs
int Position::getx(Position const & pos)
{
  return pos.x;
}

int Position::gety(Position const & pos)
{
  return pos.y;
}

// mutateurs
int Position::changex(int e_newx)
{
  x = e_newx;
}

int Position::changey(int e_newy)
{
  y = e_newy;
}

// methodes
bool Position::poscompare(const Position& PosToCompare)
{
  bool result = false;
  if(x == PosToCompare.x && y == PosToCompare.y)
    result = true;
  return result;
}

/*
 * 
 * ---------------METHODES DE TAILLE---------------
 * 
 */

// constructeurs
Taille::Taille(const unsigned int width, const unsigned int height)
:w(width), h(height)
{}

Taille::Taille(const Taille& TailleToCopy)
:w(TailleToCopy.w), h(TailleToCopy.h) 
{}


// accesseurs
int Taille::getw(Taille const & tail)
{
  return tail.w;
}

int Taille::geth(Taille const & tail)
{
  return tail.h;
}

// mutateurs
int Taille::changew(int neww)
{
  w = neww;
}

int Taille::changeh(int newh)
{
  h = newh;
}


// methodes
bool Taille::taillecompare(const Taille& TailleToCompare)
{
 bool result = false;
 if(w == TailleToCompare.w && h == TailleToCompare.h)
    result = true;
  return result;
}

/*
 * 
 * ---------------METHODES DE ELEMENT---------------
 * 
 */

// constructeurs

Element::Element(int e_x, int e_y, int e_w, int e_h): Position(e_x, e_y), Taille(e_w, e_h)
{}

// accesseurs
int Element::geteltx()
{
  return x;
}

int Element::getelty()
{
  return y;
}

int Element::geteltw()
{
  return w;
}

int Element::getelth()
{
  return h;
}

// méthodes
string Element::toString()
{
  ostringstream outflux;
  outflux << "x: " << geteltx() << " y: " << getelty() << " width: " << geteltw() << " height: " << getelth();
  string s = outflux.str();
  return s;
}

bool Element::contientPosition(const Position& Pos)
{
  bool result = false;
  int xpos2c = getx(Pos);
  int ypos2c = gety(Pos);
  if ((x - (w/2)) <= xpos2c <= (x + (w/2)) && (y - (h/2)) <= ypos2c <= (y + (h/2)))
      result = true;
  return result;
}
