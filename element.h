#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Position
{
protected:
  int x;
  
  int y;
public:
  // constructeurs
  Position(const int coord1, const int coord2);
  Position(Position const & posToCopy);
  // accesseurs
  int getx(Position const & pos);
  int gety(Position const & pos);
  // mutateurs
  int changex(int newx);
  int changey(int newy);
  // méthodes
  bool poscompare(Position const & PosToCompare);
};

class Taille
{
protected:
  unsigned int w;
  unsigned int h;
public:
  // constructeurs
  Taille(const unsigned int width, const unsigned int height);
  Taille(Taille const & TailleToCopy);
  // accesseurs
  int getw(Taille const & tail);
  int geth(Taille const & tail);
  // mutateurs
  int changew(int neww);
  int changeh(int newh);
  // méthodes
  bool taillecompare(Taille const & TailleToCompare);  
};

class Element:
  public Position, public Taille
{
public:
  // constructeurs
  Element(Position pos, Taille tail);
  
  // accesseurs
  
  int geteltx() const;
  int getelty() const;
  int geteltw() const;
  int getelth() const;

  // méthodes
  
  string toString();
  bool contientPosition(Position const & Pos);
  
};
#endif