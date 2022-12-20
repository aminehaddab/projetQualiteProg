#ifndef PLAYERS_H
#define PLAYERS_H

class Players: public AnimatedEntity
{
public:
    virtual ~Players()=default;
    virtual void deplacement()=0; //redefint dans chaque type d'entter annimer.
    virtual bool IsAlive()=0;
private:

};
#endif // PLAYERS_H
