#ifndef TERRAIN_H
#define TERRAIN_H

#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>

using namespace std;

class terrain {
public:
    terrain(int lignes, int colonnes);
    vector <vector <int>> tableau () const;
    void afficherTerrain() const;
private:
    vector <vector <int>> d_tableau;
};

#endif
