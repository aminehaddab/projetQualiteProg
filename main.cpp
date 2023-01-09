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
    vector<unique_ptr<Tawny>> tawnys;
    tawnys.push_back(make_unique<Tiger>(5,4));
    tawnys.push_back(make_unique<Lion>(5,0));

    vector<unique_ptr<Trap>> traps;
    traps.push_back(make_unique<Trap>(3,3,1));

    vector<unique_ptr<Tree>> trees;
    trees.push_back(make_unique<Tree>(3,5));

    Game g(6, 6, make_unique<Classic>(0,0), move(tawnys), move(traps), move(trees));

    /*
    g.terrainDeJeu().afficherTerrain();
    cout << endl;
    Position p {0,1};
    g.terrainDeJeu().tuerTawny(p);
    g.terrainDeJeu().afficherTerrain();

    cout << endl;
    Position p2 {1,1};
    g.terrainDeJeu().desactiverPiege(p2);
    g.terrainDeJeu().afficherTerrain();
    cout << g.terrainDeJeu().getTawnys()[0]->pos().x();
    */

    g.menu();

    return 0;
}

