#ifndef TERRAIN_H
#define TERRAIN_H
#include "memory"
#include "tawny.h"
#include "trap.h"
#include "tree.h"
#include "player.h"

using namespace std;

class terrain
{
public:
    terrain(int lignes, int colonnes, unique_ptr<player> player, vector<unique_ptr<tawny>> tawnys);
    int nbLignes() const;
    int nbColonnes() const;
    void afficherTerrain();
    void chargerTerrain();
    void creerTerrain();
    void editerTerrain();
    void sauverTerrain();
    void changerConfigTerrain();
    void tuerTawny();
    void desactiverPiege();
    unique_ptr<tawny> tawnyAtPosition(position p);
    unique_ptr<trap> trapAtPosition(position p);

private:
    vector<vector<char>> d_terrain;
    unique_ptr<player> d_player;
    vector<unique_ptr<tawny>> d_tawnys;
    vector<unique_ptr<trap>> d_traps;
    vector<unique_ptr<tree>> d_trees;
};
/*
class terrain {
public:
    terrain(int lignes, int colonnes);
    terrain();
    vector <vector <int>> tableau () const;
    int nbLignes() const;
    int nbColonnes(int ligne) const;
    void afficherTerrain() const;
    void creerTerrain();
    void chargerTerrain();

    private:
    vector <vector <int>> d_tableau;
};
*/
#endif
