#include "classic.h"


classic::classic(int x, int y):player{x,y}{

}

void classic::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void classic::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void classic::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacerNE(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerNW(){
    d_position.deplacerX(d_position.x()-1);
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacerSE(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()+1);
}

void classic::deplacerSW(){
    d_position.deplacerX(d_position.x()+1);
    d_position.deplacerY(d_position.y()-1);
}

void classic::deplacer(terrain &t){
    cout << endl << "deplacez vous avec 'a' 'z' 'e' 'd' 'c' 'x' 'w' 'q' : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y() - 1)){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y())){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() - 1, d_position.y() + 1)){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() + 1)){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() + 1, d_position.y() + 1)){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() + 1)){
                            cout << "Arbre bloque le passage : ";
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
                        cout << "out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x() + 1, d_position.y() - 1)){
                            cout << "arbre bloque le passage : ";
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
                        cout << "Out of range : ";
                        possible = false;
                    }else{
                        if(t.arbreAPosition(d_position.x(), d_position.y() - 1)){
                            cout << "Arbre bloque le passage : ";
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

char classic::type(){
    return 'C';
}
