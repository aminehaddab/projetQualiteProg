#ifndef EXPERT_H
#define EXPERT_H
#include "Players.h"

class Expert : public Players
{
public:
    Expert(const position & pos );
    Expert(int x,int y);
    virtual void deplacement()override; //redefint dans chaque type d'entter annimer.
    virtual bool IsAlive()override;
    position positionExpertPlayers();
private:
    position d_pos;
    bool d_alive;

};
#endif // EXPERT_H
