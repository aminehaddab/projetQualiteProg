#ifndef ENTITY_H
#define ENTITY_H
#include "Position.h"
class Entity
{
public:
    virtual ~Entity()= default;
    virtual void deplacement() =0;
    //pour le deplacement il faut juste avoir une direction.
    //car la distance de deplacement est a 1
    //les conditions seront spécifique a chaque animated entity
    //les still entity on autre chose.
    private:
        position d_position;
};


#endif // ENTITY_H
