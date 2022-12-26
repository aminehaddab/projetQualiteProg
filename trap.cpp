#include "trap.h"

trap::trap(int x, int y):stillentity{x,y}{

}

int trap::capacite() const{
    return d_capacite;
}

bool trap::plein() const{
    return d_plein;
}

void trap::decrCapacite(){
    d_capacite--;
}
