#include "carte.h"
using namespace std;


// constructeurs
Carte::Carte(const unsigned int width, const unsigned int height)
:Taille(width, height), tabpersonnages(new Personnage *[50]), tabobstacles(new Obstacle * [50]), tabobjets(new Objet * [50])
{

}


// Methodes

void Carte::ajouterobjet(int x, int y, int w, int h, int pts)
{
  for(int i=0; i<50; i++)
  {
    if (tabobjets[i] != NULL)
    {
      tabobjets[i] = new Objet(x,y,w,h,pts);
      break;
    }
  }
}

void Carte::ajouterobstacle(int x, int y, int w, int h)
{
  for (int i=0;i<50;i++)
  {
    if (tabobstacles[i] != NULL)
    {
      tabobstacles[i] = new Obstacle(x, y, w, h);
      break;
    }
  }
}
void Carte::ajouterperso(int x, int y, int w, int h, string & perso)
{
  for (int i=0;i<50;i++)
  {
    if (tabpersonnages[i] != NULL)
    {
      tabpersonnages[i] = new Personnage(x, y, w, h, perso);
      break;
    }
  }
}
void Carte::affichercarte()
{
  cout << "La carte a une taille de " << w << " * " << h << "\n";
  for (int i=0; i<50; i++){
    if (tabpersonnages[i] != NULL)
      cout << "Le personnage " << tabpersonnages[i]->getnom() << " situé en position " << tabpersonnages[i]->geteltx() << ", " << tabpersonnages[i]->getelty();
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
  if((elt1x - elt1w/2) <= (elt2x - elt2w/2) <= (elt1x + elt1w/2)) // si la gauche de elt2 est compris dans l'intervalle de elt1 sur axe x
  {
   if((elt1y - elt1h/2) <= (elt2y - elt2h/2) <= (elt1y + elt1h/2)) // et si le bas de elt2 est compris dans l'intervalle de elt1 sur axe y
   { 
     result = true;
   }else if((elt1y - elt1h/2) <= (elt2y + elt2h/2) <= (elt1y + elt1h/2)) // ou si le haut est compris dans l'intervalle de elt1 sur axe y
   {
     result = true; 
   }
  }else if((elt1x - elt1w/2) <= (elt2x + elt2w/2) <= (elt1x + elt1w/2)) // si la droite de elt2 est compris dans l'intervalle de elt1 sur x
  {
    if((elt1y - elt1h/2) <= (elt2y - elt2h/2) <= (elt1y + elt1h/2)) // et si le bas de elt2 est compris dans l'intervalle de elt1 sur axe y
    {
      result = true;
    }else if((elt1y - elt1h/2) <= (elt2y + elt2h/2) <= (elt1y + elt1h/2)) // ou si le haut est compris dans l'intervalle de elt1 sur axe y
    {
      result = true; 
    }
  }
  return result;
}

