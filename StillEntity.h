#ifndef STILLENTITY_H
#define STILLENTITY_H

class StillEntity: public Entity
{
public:

    virtual ~StillEntity()=default;
    virtual bool IsOpperational()=0;
};
#endif // STILLENTITY_H
