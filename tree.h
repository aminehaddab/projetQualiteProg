#ifndef TREE_H
#define TREE_H
#include "stillentity.h"

class tree : public stillentity
{
public:
    tree(int x, int y);
    char type() override;
};

#endif // TREE_H

