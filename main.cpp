#include <iostream>
#include <memory>
#include "terrain.h"
#include "classic.h"
#include "expert.h"
#include "tiger.h"
#include "lion.h"

using namespace std;

int main()
{
    vector<unique_ptr<tawny>> tawnys;
    tawnys.push_back(make_unique<tiger>(0,1));
    tawnys.push_back(make_unique<lion>(1,0));

    terrain t(3, 3, make_unique<classic>(0,0), move(tawnys));
    t.afficherTerrain();

    return 0;
}

