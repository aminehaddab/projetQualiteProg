#ifndef POSITION_H
#define POSITION_H

class position
{
public:
    position();
    position(int x, int y );

    int x()const;
    int y()const;
    void setx(int x);
    void sety(int y);

    private:
    int d_x,d_y;

};

#endif // POSITION_H
