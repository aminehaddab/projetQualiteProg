#ifndef ANIMATEDENTITY_H
#define ANIMATEDENTITY_H
#include "Entity.h"
class AnimatedEntity: public Entity
{
public:
    virtual ~AnimatedEntity()=default;
    virtual void deplacement()=0; //redefint dans chaque type d'entter annimer.
    virtual bool IsAlive()=0;
    //virtual void FindTheOpponent(/*Liste de fauve*/)=0;
    //trouver
private:

};
#endif // ANIMATEDENTITY_H
