#include "entity.h"

entity::entity(int x, int y): d_position{x,y}{
}

position entity::pos() const{
    return d_position;
}
