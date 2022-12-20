#ifndef TAWNYS_H
#define TAWNYS_H

class Tawnys: public AnimatedEntity
{
public:
    virtual ~Tawnys()=default;
    virtual void deplacement()=0; //redefint dans chaque type d'entter annimer.
    virtual bool IsAlive()=0;

};
#endif // TAWNYS_H
