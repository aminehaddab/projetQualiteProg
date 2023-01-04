#ifndef CLASSIC_H
#define CLASSIC_H
#include <iostream>
#include "player.h"
#include "terrain.h"
#include "position.h"

class Classic : public Player
{
public:
    Classic(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacerNE();
    void deplacerNW();
    void deplacerSE();
    void deplacerSW();
    void deplacer(Terrain &t) override;
    char type() override;
private:

};
#endif // CLASSIC_H
