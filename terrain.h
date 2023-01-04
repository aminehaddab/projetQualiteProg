#ifndef TERRAIN_H
#define TERRAIN_H
#include "memory"
#include "tawny.h"
#include "trap.h"
#include "tree.h"
#include "player.h"

using namespace std;

class Terrain
{
public:
    Terrain();
    Terrain(int lignes, int colonnes, unique_ptr<Player> player, vector<unique_ptr<Tawny>> tawnys, vector<unique_ptr<Trap>> traps, vector<unique_ptr<Tree>> trees);
    int nbLignes() const;
    int nbColonnes() const;
    void incrNbrFauvesMorts();
    void incrNbrTours();
    int nbrFauvesMortsPartie();
    int nbrToursPartie();
    void afficherTerrain();
    void chargerTerrain();
    void creerTerrain();
    void editerTerrain();
    void sauverTerrain();
    void changerConfigTerrain();
    void tuerTawny(int x, int y);
    void desactiverPiege(int x, int y);
    bool arbreAPosition(int x, int y);
    unique_ptr<Player>& getPlayer();
    vector<unique_ptr<Tawny>>& getTawnys();
    vector<vector<char>>& getTerrain();
private:
    vector<vector<char>> d_terrain;
    unique_ptr<Player> d_player;
    vector<unique_ptr<Tawny>> d_tawnys;
    vector<unique_ptr<Trap>> d_traps;
    vector<unique_ptr<Tree>> d_trees;
    int nbFauvesMorts;
    int nbTours;
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
