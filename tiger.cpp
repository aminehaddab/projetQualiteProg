#include "tiger.h"


Tiger::Tiger(int x, int y):Tawny{x,y}{

}

void Tiger::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void Tiger::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void Tiger::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void Tiger::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void Tiger::deplacerNE(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()+1);
}

void Tiger::deplacerNW(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()-1);
}

void Tiger::deplacerSE(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()+1);
}

void Tiger::deplacerSW(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()-1);
}

void Tiger::deplacer(Terrain &t){
    bool deplacementFait = false;
    Position p = t.getPlayer()->pos();

    if(d_position.x() < p.x()){
        if(d_position.y() < p.y()){


            switch(t.getTerrain()[d_position.x()+1][d_position.y()+1]){
                case '_':
                    deplacerSE();
                    break;
                case 'L':
                    deplacementFait = true;
                    t.tuerTawny(d_position.x()+1, d_position.y()+1);
                    deplacerSE();
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


        }else{
            if(d_position.y() > p.y()){


                switch(t.getTerrain()[d_position.x()+1][d_position.y()-1]){
                    case '_':
                        deplacerSW();
                        break;
                    case 'L':
                        deplacementFait = true;
                        t.tuerTawny(d_position.x()+1, d_position.y()-1);
                        deplacerSW();
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


            }else{

                switch(t.getTerrain()[d_position.x()+1][d_position.y()]){
                    case '_':
                        deplacementFait = true;
                        deplacerS();
                        break;
                    case 'L':
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
        }
    }else{
        if(d_position.x() > p.x()){
            if(d_position.y() < p.y()){

                switch(t.getTerrain()[d_position.x()-1][d_position.y()+1]){
                    case '_':
                        deplacerNE();
                        break;
                    case 'L':
                        deplacementFait = true;
                        t.tuerTawny(d_position.x()-1, d_position.y()+1);
                        deplacerNE();
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

            }else{
                if(d_position.y() > p.y()){

                    switch(t.getTerrain()[d_position.x()-1][d_position.y()-1]){
                        case '_':
                            deplacerNW();
                            break;
                        case 'L':
                            deplacementFait = true;
                            t.tuerTawny(d_position.x()-1, d_position.y()-1);
                            deplacerNW();
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

                }else{

                    switch(t.getTerrain()[d_position.x()-1][d_position.y()]){
                        case '_':
                            deplacementFait = true;
                            deplacerN();
                            break;
                        case 'L':
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
            }
        }else{
            if(d_position.y() < p.y()){

                switch(t.getTerrain()[d_position.x()][d_position.y()+1]){
                    case '_':
                        deplacementFait = true;
                        deplacerE();
                        break;
                    case 'L':
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

            }else{
                if(d_position.y() > p.y()){

                    switch(t.getTerrain()[d_position.x()][d_position.y()-1]){
                        case '_':
                            deplacementFait = true;
                            deplacerW();
                            break;
                        case 'L':
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
        }
    }

}

char Tiger::type(){
    return 'T';
}
