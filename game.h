#ifndef GAME_H
#define GAME_H
#include "terrain.h"

class game{
public:
    game(int lignes, int colonnes, unique_ptr<player> player, vector<unique_ptr<tawny>> tawnys, vector<unique_ptr<trap>> traps, vector<unique_ptr<tree>> trees);
    void incrNbrFauvesMorts();
    void incrNbrTours();
    void play();
    terrain& terrainDuJeu();
private:
    int nbFauvesMorts;
    int nbTours;
    terrain d_terrain;
};

#endif // GAME_H
