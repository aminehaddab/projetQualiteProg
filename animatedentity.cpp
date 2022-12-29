#include "animatedentity.h"

animatedentity::animatedentity(int x, int y):entity{x,y}, d_vivant{true}{

}

bool animatedentity::estVivant() const{
    return d_vivant;
}

void animatedentity::meurt(){
    d_vivant = false;
}
