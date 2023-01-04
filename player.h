#ifndef PLAYER_H
#define PLAYER_H
#include "animatedentity.h"
#include <iostream>

class Player: public Animatedentity
{
public:
    virtual ~Player() = default;
    void meurt() override;
    Player(int x, int y);
protected:

};
#endif // PLAYERS_H
