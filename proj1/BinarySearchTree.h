/* 
 * BinarySearchTree.h
 *
 * Interface for derived class BST
 * Inherits from Binary Tree
 *
 * Gloria Gaynor wants you to 
 * SURVIVE this project. 
 *
 * Don't be afraid.
 * 
 * Don't be petrified.
 * 
 * Come back from outer space.
 */

#include "BinaryTree.h"

#ifndef BINARY_SEARCH_TREE_H_
#define BINARY_SEARCH_TREE_H_

// Prototypes for recursive wrapper functions
void insert_bst(BinaryNode *&, TreeItem);
void copy_helper_bst(BinaryNode *&, BinaryNode *&);
void remove_item_helper(BinaryNode *&, TreeItem);
void find_bst(BinaryNode *, TreeItem &, bool &);

class BinarySearchTree : public BinaryTree
{

public:
    BinarySearchTree();
    // BT has a virtual destructor
    // so we write our own for BST
    ~BinarySearchTree();

    // overridden from BinaryTree
    void insert_item(TreeItem);

    // Copy constructor for the BinarySearchTree
    BinarySearchTree(BinarySearchTree &);

    // Removes an item from the BinarySearchTree
    void remove_item(TreeItem);

    // Finds an item in the BinarySearchTree
    void find_item(TreeItem &, bool &) const;
};

#endif