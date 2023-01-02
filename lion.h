#ifndef LION_H
#define LION_H
#include <iostream>
#include "tawny.h"
#include "terrain.h"
#include "position.h"

class lion : public tawny
{
public:
    lion(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacer(terrain &t) override;
    char type() override;
};

#endif // LION_H

