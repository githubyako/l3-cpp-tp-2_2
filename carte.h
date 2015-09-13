#ifndef CARTE_H
#define CARTE_H
#include "element.h"
#include "personnage.h"
#include "obstacle.h"
#include "objet.h"

class Carte : public Taille
{
private:
  // attrs
  Personnage ** tabpersonnages;
  Obstacle ** tabobstacles;
  Objet ** tabobjets;
public:
  // constr
  Carte(const unsigned int width, const unsigned int height);
  
  // méthodes
  void ajouterperso(int x, int y, int w, int h, string & perso);
  void ajouterobstacle(int x, int y, int w, int h);
  void ajouterobjet(int x, int y, int w, int h, int pts);

  void affichercarte();
  bool checkintersect(Element const & elt1, Element const & elt2);
  bool checkdeplacement(Personnage & perso, char  * direction);
  ~Carte();
};

#endif