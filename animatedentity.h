#ifndef ANIMATEDENTITY_H
#define ANIMATEDENTITY_H
#include <vector>
#include "entity.h"
class Terrain;

using namespace std;

class Animatedentity : public Entity
{
public:
    Animatedentity(int x, int y);
    virtual ~Animatedentity() = default;
    bool estVivant() const;
    void meurt();
    virtual void deplacer(Terrain &t) = 0;

protected:
    bool d_vivant;
};

#endif // ANIMATEDENTITY_H
