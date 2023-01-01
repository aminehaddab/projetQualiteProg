#include "trap.h"

trap::trap(int x, int y, int capacite):stillentity{x,y}, d_capacite{capacite}, d_plein{false}{

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

char trap::type(){
    return 'P';
}
