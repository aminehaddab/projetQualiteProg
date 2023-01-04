#include "lion.h"


Lion::Lion(int x, int y):Tawny{x,y}{

}

void Lion::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void Lion::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void Lion::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void Lion::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void Lion::deplacer(Terrain &t){
    bool deplacementFait = false;
    Position p = t.getPlayer()->pos();

    if(d_position.x() < p.x()){
        switch(t.getTerrain()[d_position.x()+1][d_position.y()]){
            case '_':
                deplacementFait = true;
                deplacerS();
                break;
            case 'T':
                deplacementFait = true;
                t.tuerTawny(d_position.x()+1, d_position.y());
                deplacerS();
                break;
            case 'P':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y());
                break;
            case 'C':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
            case 'E':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
        }
    }


    if(!deplacementFait && d_position.x() > p.x()){
        switch(t.getTerrain()[d_position.x()-1][d_position.y()]){
            case '_':
                deplacementFait = true;
                deplacerN();
                break;
            case 'T':
                deplacementFait = true;
                t.tuerTawny(d_position.x()-1, d_position.y());
                deplacerN();
                break;
            case 'P':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y());
                break;
            case 'C':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
            case 'E':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
        }
    }

    if(!deplacementFait && d_position.y() < p.y()){
        switch(t.getTerrain()[d_position.x()][d_position.y()+1]){
            case '_':
                deplacementFait = true;
                deplacerE();
                break;
            case 'T':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y()+1);
                deplacerE();
                break;
            case 'P':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y());
                break;
            case 'C':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
            case 'E':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
        }
    }


    if(!deplacementFait && d_position.y() > p.y()){
        switch(t.getTerrain()[d_position.x()][d_position.y()-1]){
            case '_':
                deplacementFait = true;
                deplacerW();
                break;
            case 'T':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y()-1);
                deplacerW();
                break;
            case 'P':
                deplacementFait = true;
                t.tuerTawny(d_position.x(), d_position.y());
                break;
            case 'C':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
            case 'E':
                deplacementFait = true;
                t.getPlayer()->meurt();
                break;
        }
    }

}

char Lion::type(){
    return 'L';
}
