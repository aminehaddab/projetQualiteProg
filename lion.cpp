#include "lion.h"
#include "position.h"

lion::lion(int x, int y):tawny{x,y}{

}

void lion::deplacerN(){
    d_position.deplacerY(d_position.y()+1);
}

void lion::deplacerS(){
    d_position.deplacerY(d_position.y()-1);
}

void lion::deplacerE(){
    d_position.deplacerX(d_position.x()+1);
}

void lion::deplacerW(){
    d_position.deplacerX(d_position.x()-1);
}

void lion::deplacer(terrain &t){

}

char lion::type(){
    return 'L';
}
