#ifndef TIGER_H
#define TIGER_H
#include <iostream>
#include "tawny.h"
#include "position.h"
#include "terrain.h"

class tiger : public tawny
{
public:
    tiger(int x, int y);
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
};

#endif // TIGER_H
