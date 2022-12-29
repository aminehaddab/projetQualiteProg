#ifndef TRAP_H
#define TRAP_H
#include "stillentity.h"

class trap : public stillentity
{
public:
    trap(int x, int y);
    int capacite() const;
    bool plein() const;
    void decrCapacite();
    char type() override;
private:
    int d_capacite;
    bool d_plein;
};

#endif // TRAP_H
