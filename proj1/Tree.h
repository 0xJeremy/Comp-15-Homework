#include "Survivor.h"

typedef Survivor TreeItem;

#ifndef TREE_H_
#define TREE_H_

struct BinaryNode
{
    TreeItem info;
    BinaryNode *left;
    BinaryNode *right;
};


#endif
