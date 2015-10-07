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
  void ajouterperso(Personnage const & perso);
  void ajouterobstacle(Obstacle const & obst);
  void ajouterobjet(Objet const & obj);

  void affichercarte();
  bool checkintersect(Element const & elt1, Element const & elt2);
  bool checkdeplacement(Personnage & perso, const char * direction);
  ~Carte();
};

#endif