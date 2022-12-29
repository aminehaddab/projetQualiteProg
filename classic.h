#ifndef CLASSIC_H
#define CLASSIC_H
#include "player.h"
#include "terrain.h"

class classic : public player
{
public:
    classic(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacerNE();
    void deplacerNW();
    void deplacerSE();
    void deplacerSW();
    void deplacer(terrain &t) override;
    char type() override;
private:

};
#endif // CLASSIC_H
