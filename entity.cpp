#include "entity.h"

Entity::Entity(int x, int y): d_position{x,y}{
}

Position& Entity::pos(){
    return d_position;
}
