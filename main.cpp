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
    tawnys.push_back(make_unique<tiger>(0,3));
    tawnys.push_back(make_unique<lion>(3,0));

    vector<unique_ptr<trap>> traps;
    traps.push_back(make_unique<trap>(3,3,1));

    vector<unique_ptr<tree>> trees;
    trees.push_back(make_unique<tree>(3,5));

    game g(6, 6, make_unique<classic>(0,0), move(tawnys), move(traps), move(trees));

    /*
    g.terrainDeJeu().afficherTerrain();
    cout << endl;
    position p {0,1};
    g.terrainDeJeu().tuerTawny(p);
    g.terrainDeJeu().afficherTerrain();

    cout << endl;
    position p2 {1,1};
    g.terrainDeJeu().desactiverPiege(p2);
    g.terrainDeJeu().afficherTerrain();
    cout << g.terrainDeJeu().getTawnys()[0]->pos().x();
    */

    g.play();

    return 0;
}

