#ifndef TERRAIN_H
#define TERRAIN_H

#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include "point.h"
class player;
class tawny;
class trap;
class tree;
class position;


using namespace std;

class terrain
{
public:
    terrain(vector<vector<char>> &t, unique_ptr<player> &p, vector<unique_ptr<tawny>> &tawnys, vector<unique_ptr<trap>> &traps, vector<unique_ptr<tree>> &trees);
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
