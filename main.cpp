#include <iostream>
#include "element.h"
#include "personnage.h"
#include "obstacle.h"
#include "objet.h"

int main(int argc, char **argv) {
    //Element a(0,0,5,10);
    //cout << a.geteltw();
    Personnage a(1,2,3,4, "josé");
    cout << a.toString();
    return 0;
}
