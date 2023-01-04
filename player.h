#ifndef PLAYER_H
#define PLAYER_H
#include "animatedentity.h"

class Player: public Animatedentity
{
public:
    virtual ~Player() = default;
    Player(int x, int y);
protected:

};
#endif // PLAYERS_H
