#include "expert.h"
#include "position.h"

expert::expert(int x, int y):player{x,y}{

}

void expert::deplacerN(){
    d_position.deplacerY(d_position.y()+1);
}

void expert::deplacerS(){
    d_position.deplacerY(d_position.y()-1);
}

void expert::deplacerE(){
    d_position.deplacerX(d_position.x()+1);
}

void expert::deplacerW(){
    d_position.deplacerX(d_position.x()-1);
}

void expert::deplacer(terrain &t){

}
