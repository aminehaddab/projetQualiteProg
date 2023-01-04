#include "expert.h"
#include "position.h"

Expert::Expert(int x, int y):Player{x,y}{

}

void Expert::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void Expert::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void Expert::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void Expert::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void Expert::deplacer(Terrain &t){
    cout << endl << "Deplacez vous avec 'z' 'd' 'x' 'q' : ";
    char c;
    bool possible = true;
    do{
        cin >> c;
        if(c != 'z' && c != 'd' && c != 'x' && c != 'q'){
            possible = false;
        }else{
            switch(c){
                case 'z':
                    if(d_position.x() - 1 < 0){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y())){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() - 1][d_position.y()] == '_'){
                                possible = true;
                                deplacerN();
                            }else{
                                possible = true;
                                meurt();
                            }
                        }
                    }
                    break;

                case 'd':
                    if(d_position.y() + 1 >= t.nbColonnes()){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() + 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x()][d_position.y() + 1] == '_'){
                                possible = true;
                                deplacerE();
                            }else{
                                possible = true;
                                meurt();
                            }
                        }
                    }
                    break;

                case 'x':
                    if(d_position.x() + 1 >= t.nbLignes()){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() + 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() + 1][d_position.y()] == '_'){
                                possible = true;
                                deplacerS();
                            }else{
                                possible = true;
                                meurt();
                            }
                        }
                    }
                    break;

                case 'q':
                    if(d_position.y() - 1 < 0){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() - 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x()][d_position.y() - 1] == '_'){
                                possible = true;
                                deplacerW();
                            }else{
                                possible = true;
                                meurt();
                            }
                        }
                    }
                    break;
            }
        }

    }while(!possible);
    cout << endl;
}

char Expert::type(){
    return 'E';
}
