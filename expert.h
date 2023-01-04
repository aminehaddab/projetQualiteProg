#ifndef EXPERT_H
#define EXPERT_H
#include <iostream>
#include "player.h"
#include "terrain.h"


class Expert : public Player
{
public:
    Expert(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacer(Terrain &t) override;
    char type() override;
private:

};
#endif // EXPERT_H
