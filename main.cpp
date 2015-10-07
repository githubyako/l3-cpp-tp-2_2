#include <iostream>
#include "element.h"
#include "personnage.h"
#include "obstacle.h"
#include "objet.h"
#include "carte.h"

int main(int argc, char **argv) {
    //Element a(0,0,5,10);
    //cout << a.geteltw();
    Carte c(50,50);
    Personnage a(Position(5,5),Taille(1,1), "José");
    Personnage b(Position(10,10),Taille(1,1), "Michel");
    Obstacle obst1(Position(5,3),Taille(1,1));
    Obstacle obst2(Position(30,30),Taille(1,1));
    c.ajouterperso(a);
    c.ajouterperso(b);
    c.ajouterobstacle(obst1);
    c.affichercarte();
    cout << c.checkintersect(a,obst1) << "\n";
    cout << c.checkintersect(a,obst2) << "\n";
    cout << c.checkdeplacement(a,"S") << "\n";
    
    //cout << a.toString();
    
  return 0;
}
