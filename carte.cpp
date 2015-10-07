#include "carte.h"
using namespace std;


// constructeurs
Carte::Carte(const unsigned int width, const unsigned int height)
:Taille(width, height), tabpersonnages(new Personnage *[50]), tabobstacles(new Obstacle * [50]), tabobjets(new Objet * [50])
{

}


// Methodes

void Carte::ajouterobjet(Objet const & obj)
{
  for(int i=0; i<50; i++)
  {
    if (tabobjets[i] == NULL)
    {
      tabobjets[i] = new Objet(obj);
      break;
    }
  }
}

void Carte::ajouterobstacle(Obstacle const & obst)
{
  for (int i=0;i<50;i++)
  {
    if (tabobstacles[i] == NULL)
    {
      tabobstacles[i] = new Obstacle(obst);
      break;
    }
  }
}
void Carte::ajouterperso(Personnage const & perso)
{
  for (int i=0;i<50;i++)
  {
    if (tabpersonnages[i] == NULL)
    {
      tabpersonnages[i] = new Personnage(perso);
      break;
    }
  }
}
void Carte::affichercarte()
{
  cout << "La carte a une taille de " << w << " * " << h << "\n";
  for (int i=0; i<50; i++){
    if (tabpersonnages[i] != NULL)
      cout << "Le personnage " << tabpersonnages[i]->getnom() << " est situé en position " << tabpersonnages[i]->geteltx() << ", " << tabpersonnages[i]->getelty() << ".\n" << "Il a une taille de " << tabpersonnages[i]->geteltw() << ", " << tabpersonnages[i]->getelth() << ".\n" ;
  }
  
}

Carte::~Carte()
{
  delete[] tabpersonnages;
  delete[] tabobstacles;
  delete[] tabobjets;
}

bool Carte::checkintersect(const Element& elt1, const Element& elt2)
{
  
  bool result = false;
  int elt1x = elt1.geteltx(), elt1y = elt1.getelty(), elt2x = elt2.geteltx(), elt2y = elt2.getelty();
  int elt1w = elt1.geteltw(), elt1h = elt1.getelth(), elt2w = elt2.geteltw(), elt2h = elt2.getelth();
    // projection sur x de elt1: intervalle  [(elt1x - elt1w/2), (elt1x + elt1w/2)]
  // projection sur x de elt2: intervalle [(elt2x - elt2w/2), (elt2x + elt2w/2)]
  bool xintersect = true;
  bool yintersect = true;
  if((elt1x - elt1w/2) > (elt2x + elt2w/2) || (elt1x + elt1w/2) < (elt2x - elt2w/2))
    xintersect = false; // PAS D'INTERSECTION SUR X
  if((elt1y - elt1h/2) > (elt2y + elt2h/2) || (elt1y + elt1w/2) < (elt2y - elt2h/2))
    yintersect = false;
  if(xintersect && yintersect)
    result = true;
  
  return result; // retourne true si un overlap est trouvé
}

bool Carte::checkdeplacement(Personnage& perso, const char * direction)
{
  bool result = true;
  Personnage * temppers = new Personnage(perso, "cobaye");
  /*switch (*direction){
    case 'N':
      // deplacement nord
      temppers->changey(temppers->getelty() + 1);
      break;
    case 'S':
      // depl sud
      temppers->changey(temppers->getelty() - 1);
      break;
    case 'E':
      // deplacement est
      temppers->changex(temppers->geteltx() + 1);
      break;
    case 'W':
      // deplacement ouest
      temppers->changex(temppers->geteltx() - 1);
      break;  
  }*/
/*  for(unsigned int i=0;i<50;i++){
	if(checkintersect((Element&)(*temppers), (Element&)(*tabobjets[i])) == true){
	  result = false;
	  break;
	}else if(checkintersect((Element&)(*temppers), (Element&)(*tabobstacles[i])) == true){
	  result = false;
	  break; 
	}else if(checkintersect((Element&)(*temppers), (Element&)(*tabpersonnages[i])) == true){
	  result = false;
	  break;
	}
  }*/
  delete[] temppers;
  return result; // retourne true si le deplacement est POSSIBLE
}