#include "player.h"

Player::Player(int x, int y):Animatedentity{x,y}{

}

void Player::meurt(){
    d_vivant = false;
    cout << "Pas de chance... Peut etre une autre fois !" << endl << endl;
}
