#ifndef CLASSIC_H
#define CLASSIC_H
#include "player.h"

class classic : public player
{
public:
    expert(const position &pos);
    expert(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacerNE();
    void deplacerNW();
    void deplacerSE();
    void deplacerSW();
    void deplacer(terrain &t) override;
private:

};
#endif // CLASSIC_H
