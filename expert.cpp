#include "expert.h"
#include "position.h"

expert::expert(int x, int y):player{x,y}{

}

void expert::deplacerN(){
    d_position.deplacerX(d_position.x()-1);
}

void expert::deplacerS(){
    d_position.deplacerX(d_position.x()+1);
}

void expert::deplacerE(){
    d_position.deplacerY(d_position.y()+1);
}

void expert::deplacerW(){
    d_position.deplacerY(d_position.y()-1);
}

void expert::deplacer(terrain &t){
    cout << endl << "deplacez vous avec 'z' 'd' 'x' 'q' : ";
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

char expert::type(){
    return 'E';
}
