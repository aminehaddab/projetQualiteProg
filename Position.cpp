#include "Position.h"

position::position(): d_x{0}, d_y{0}
{}

position::position (int x, int y ): d_x{x}, d_y{y}
{}

int position::x() const
{
    return d_x;
}

int position::y() const
{
    return d_y;
}

void position::setx(int x)
{
    d_x=x;
}

void position::sety(int y)
{
    d_y=y;
}

