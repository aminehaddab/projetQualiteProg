#ifndef GAME_H
#define GAME_H
#include "terrain.h"
#include <iostream>

using namespace std;

class Game{
public:
    Game(int lignes, int colonnes, unique_ptr<Player> player, vector<unique_ptr<Tawny>> tawnys, vector<unique_ptr<Trap>> traps, vector<unique_ptr<Tree>> trees);
    void menu();
    void play();
    Terrain& terrainDeJeu();
private:
    Terrain d_terrain;
};

#endif // GAME_H
