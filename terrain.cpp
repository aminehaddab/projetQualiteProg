#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"terrain.h"

using namespace std;

terrain::terrain(int lignes, int colonnes):d_tableau(vector<vector<int>>(lignes, vector<int>(colonnes, 0))) {};

vector <vector <int>> terrain::tableau () const {
    return d_tableau;
};

