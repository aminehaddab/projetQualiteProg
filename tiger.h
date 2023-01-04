#ifndef TIGER_H
#define TIGER_H
#include <iostream>
#include "tawny.h"
#include "position.h"
#include "terrain.h"

class Tiger : public Tawny
{
public:
    Tiger(int x, int y);
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
};

#endif // TIGER_H
