#ifndef LION_H
#define LION_H
#include <iostream>
#include "tawny.h"
#include "terrain.h"
#include "position.h"

class Lion : public Tawny
{
public:
    Lion(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacer(Terrain &t) override;
    char type() override;
};

#endif // LION_H

