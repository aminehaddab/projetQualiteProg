#include "trap.h"

Trap::Trap(int x, int y, int capacite):Stillentity{x,y}, d_capacite{capacite}, d_plein{false}{

}

int Trap::capacite() const{
    return d_capacite;
}

bool Trap::plein() const{
    return d_plein;
}

void Trap::decrCapacite(){
    d_capacite--;
}

char Trap::type(){
    return 'P';
}
