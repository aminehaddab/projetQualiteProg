#ifndef ENTITY_H
#define ENTITY_H
#include "position.h"

class entity
{
public:
    entity(int x, int y);
    position& pos();
    virtual ~entity() = default;
    virtual char type() = 0;

protected:
    position d_position;
};


#endif // ENTITY_H
