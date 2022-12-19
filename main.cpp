#include<iostream>
#include<cmath>
#include<vector>
#include<memory>
#include<string>
#include"terrain.h"
#include"point.h"


using namespace std;
 using geom::point;

int main()
{
    point p {};
    terrain t {};
    // cout << t.d_tableau[0].size();
    // t.afficherTerrain();
    //t.creerTerrain();
    t.chargerTerrain();
    return 0;
}
