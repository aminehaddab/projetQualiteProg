#include <iostream>
#include <memory>
#include "terrain.h"
#include "classic.h"
#include "expert.h"
#include "tiger.h"
#include "lion.h"
#include "game.h"

using namespace std;

int main()
{
    vector<unique_ptr<tawny>> tawnys;
    tawnys.push_back(make_unique<tiger>(0,1));
    tawnys.push_back(make_unique<lion>(1,0));

    vector<unique_ptr<trap>> traps;
    traps.push_back(make_unique<trap>(1,1,3));

    vector<unique_ptr<tree>> trees;
    trees.push_back(make_unique<tree>(2,1));

    game g(3, 3, make_unique<classic>(0,0), move(tawnys), move(traps), move(trees));

    g.terrainDuJeu().afficherTerrain();

    cout << endl;
    position p {0,1};
    g.terrainDuJeu().tuerTawny(p);
    g.terrainDuJeu().afficherTerrain();

    cout << endl;
    position p2 {1,1};
    g.terrainDuJeu().desactiverPiege(p2);
    g.terrainDuJeu().afficherTerrain();

    return 0;
}

