#include "position.h"

Position::Position(): d_x{0}, d_y{0}
{}

Position::Position (int x, int y ): d_x{x}, d_y{y}
{}

int Position::x() const
{
    return d_x;
}

int Position::y() const
{
    return d_y;
}

void Position::deplacer(int x, int y){
    d_x = x;
    d_y = y;
}

void Position::deplacerX(int x){
    d_x = x;
}

void Position::deplacerY(int y){
    d_y = y;
}

