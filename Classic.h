#ifndef CLASSIC_H
#define CLASSIC_H

class Classic : public Players
{
public:
    Classic (const position & pos );
    Classic(int x, int y);
    virtual void deplacement()override; //redefint dans chaque type d'entter annimer.
    virtual bool IsAlive()override;
    position positionClassicPlayers();
private:
    position d_positionClassicPlayers;
    bool d_alive;

};
#endif // CLASSIC_H
