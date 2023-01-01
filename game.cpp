#include "game.h"

game::game(int lignes, int colonnes, unique_ptr<player> player, vector<unique_ptr<tawny>> tawnys, vector<unique_ptr<trap>> traps, vector<unique_ptr<tree>> trees)
:d_terrain{lignes, colonnes, move(player), move(tawnys), move(traps), move(trees)}{

}

void incrNbrFauvesMorts(){

}
void incrNbrTours(){

}
void play(){

}

terrain& game::terrainDuJeu(){
    return d_terrain;
}
