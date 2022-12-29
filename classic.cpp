#include "classic.h"
#include "position.h"

classic::classic(int x, int y):player{x,y}{

}

void classic::deplacerN(){
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerS(){
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacerE(){
    d_position.deplacerX(d_position.x()+1);
}

void classic::deplacerW(){
    d_position.deplacerX(d_position.x()-1);
}

void classic::deplacerNE(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerNW(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerSE(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacerSW(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacer(terrain &t){

}

char classic::type(){
    return 'C';
}
