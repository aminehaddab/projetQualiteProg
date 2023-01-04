#ifndef TREE_H
#define TREE_H
#include "stillentity.h"

class Tree : public Stillentity
{
public:
    Tree(int x, int y);
    char type() override;
};

#endif // TREE_H

