#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"terrain.h"

using namespace std;

terrain::terrain(int lignes, int colonnes):d_tableau(vector<vector<int>>(lignes, vector<int>(colonnes, 0))) {};

vector <vector <int>> terrain::tableau() const {
    return d_tableau;
};

int terrain::nbLignes() const {
    return d_tableau.size();
};

int terrain::nbColonnes(int ligne) const {
    return d_tableau[ligne].size();
};


void terrain::afficherTerrain() const {

    for (int k = 0; k < nbColonnes(0)+2; ++k){
        cout << "@";
    }
    cout << endl;

    for (int i = 0; i < nbLignes(); ++i){
        cout << "@";
        for (int j = 0; j < nbColonnes(i); ++j){

            switch(tableau()[i][j]) {
              case 0:
                cout << "_";
                break;
            };
        }
        cout << "@" << endl;
    }

    for (int k = 0; k < nbColonnes(0)+2; ++k){
        cout << "@";
    }
    cout << endl;
};

