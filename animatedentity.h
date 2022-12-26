#ifndef ANIMATEDENTITY_H
#define ANIMATEDENTITY_H
#include <vector>
#include "entity.h"
#include "terrain.h"


using namespace std;

class animatedentity : public entity
{
public:
    animatedentity(int x, int y);
    virtual ~animatedentity() = default;
    bool estVivant() const;
    void meurt();
    virtual void deplacer(terrain &t) = 0;

protected:
    bool d_vivant;
};

#endif // ANIMATEDENTITY_H
