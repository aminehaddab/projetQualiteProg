#ifndef ENTITY_H
#define ENTITY_H
#include "position.h"

class Entity
{
public:
    Entity(int x, int y);
    Position& pos();
    virtual ~Entity() = default;
    virtual char type() = 0;

protected:
    Position d_position;
};


#endif // ENTITY_H
