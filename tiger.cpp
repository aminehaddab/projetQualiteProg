#include "tiger.h"
#include "position.h"

tiger::tiger(int x, int y):tawny{x,y}{

}

void tiger::deplacerN(){
    d_position.deplacerY(d_position.y()+1);
}

void tiger::deplacerS(){
    d_position.deplacerY(d_position.y()-1);
}

void tiger::deplacerE(){
    d_position.deplacerX(d_position.x()+1);
}

void tiger::deplacerW(){
    d_position.deplacerX(d_position.x()-1);
}

void tiger::deplacer(terrain &t){

}

char tiger::type(){
    return 'T';
}
