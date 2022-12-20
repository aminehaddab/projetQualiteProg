#ifndef TERRAIN_H
#define TERRAIN_H

#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"point.h"

using namespace std;

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

#endif
