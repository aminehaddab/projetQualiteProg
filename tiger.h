#ifndef TIGER_H
#define TIGER_H
#include "tawny.h"

class tiger : public tawny
{
public:
    tiger(int x, int y);
    void deplacerN();
    void deplacerS();
    void deplacerE();
    void deplacerW();
    void deplacer(terrain &t) override;
};

#endif // TIGER_H
