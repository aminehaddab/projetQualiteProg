#ifndef TRAP_H
#define TRAP_H
#include "stillentity.h"

class Trap : public Stillentity
{
public:
    Trap(int x, int y, int capacite);
    int capacite() const;
    bool plein() const;
    void decrCapacite();
    char type() override;
private:
    int d_capacite;
    bool d_plein;
};

#endif // TRAP_H
