#ifndef EXPERT_H
#define EXPERT_H
#include "player.h"
#include "terrain.h"

class expert : public player
{
public:
    expert(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacer(terrain &t) override;
private:

};
#endif // EXPERT_H
