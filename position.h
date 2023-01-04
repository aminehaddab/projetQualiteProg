#ifndef POSITION_H
#define POSITION_H

class Position
{
public:
    Position();
    Position(int x, int y);

    int x() const;
    int y() const;
    void deplacer(int x, int y);
    void deplacerX(int x);
    void deplacerY(int y);

protected:
    int d_x, d_y;

};

#endif // POSITION_H
