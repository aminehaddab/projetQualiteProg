#include "animatedentity.h"

Animatedentity::Animatedentity(int x, int y):Entity{x,y}, d_vivant{true}{

}

bool Animatedentity::estVivant() const{
    return d_vivant;
}

void Animatedentity::meurt(){
    d_vivant = false;
}
