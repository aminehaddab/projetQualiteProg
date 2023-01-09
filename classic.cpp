#include "classic.h"

Classic::Classic(int x, int y):Player{x,y}{

}

void Classic::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void Classic::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void Classic::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void Classic::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void Classic::deplacerNE(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()+1);
}

void Classic::deplacerNW(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()-1);
}

void Classic::deplacerSE(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()+1);
}

void Classic::deplacerSW(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()-1);
}

void Classic::deplacer(Terrain &t){
    cout << endl << "Deplacez vous avec 'a' 'z' 'e' 'd' 'c' 'x' 'w' 'q' : ";
    char c;
    bool possible = true;
    do{
        cin >> c;
        if(c != 'a' && c != 'z' && c != 'e' && c != 'd' && c != 'c' && c != 'x' && c != 'w' && c != 'q'){
            possible = false;
        }else{
            switch(c){
                case 'a':
                    if(d_position.x() - 1 < 0 || d_position.y() - 1 < 0){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y() - 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() - 1][d_position.y() - 1] == '_'){
                                possible = true;
                                deplacerNW();
                            }else{
                                possible = true;
                                meurt();
                            }
                        }
                    }
                    break;

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

                case 'e':
                    if(d_position.x() - 1 < 0 || d_position.y() + 1 >= t.nbColonnes()){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y() + 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() - 1][d_position.y() + 1] == '_'){
                                possible = true;
                                deplacerNE();
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

                case 'c':
                    if(d_position.x() + 1 >= t.nbLignes() || d_position.y() + 1 >= t.nbColonnes()){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() + 1, d_position.y() + 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() + 1][d_position.y() + 1] == '_'){
                                possible = true;
                                deplacerSE();
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

                case 'w':
                    if(d_position.x() + 1 >= t.nbLignes() || d_position.y() - 1 < 0){
                        cout << "Ne sortez pas du terrain : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() + 1, d_position.y() - 1)){
                            cout << "Mince, un arbre vous bloque le passage : ";
                            possible = false;
                        }else{
                            if(t.getTerrain()[d_position.x() + 1][d_position.y() - 1] == '_'){
                                possible = true;
                                deplacerSW();
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

char Classic::type(){
    return 'C';
}
