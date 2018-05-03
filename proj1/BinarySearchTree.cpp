/*
 * BinarySearchTree.cpp
 *
 * COMP15
 * Spring 2018
 *
 * Implementation for BST class.
 * Inherits from BinaryTree class.
 *
 * Beyonce also wants you to be a SURVIVOR.
 *
 * You thought you'd be stressed but you're chillin'.
 */

#include <cstddef>
#include "BinarySearchTree.h"

// Member function definitions
BinarySearchTree::BinarySearchTree()
{

}

// Destructor requires no action, base class handles it
BinarySearchTree::~BinarySearchTree()
{

}

// Function to insert into a BST
// Throws exception if full
// Calls wrapper function for recursion
void BinarySearchTree::insert_item(TreeItem item)
{
    if (is_full())
        throw FullTree();
    else
        insert_bst(root, item);
}

// Wrapper function for insert
void insert_bst(BinaryNode *&tree, TreeItem item)
{
    if (tree == NULL)
    {
        tree = new BinaryNode; // this part is why pass by ref
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if (item < tree->info)
    {
        insert_bst(tree->left, item);
    }
    else if (item > tree->info)   
    {
        insert_bst(tree->right, item);
    }
}

//Function BinarySearchTree copy constructor
//Inputs: BinarySearchTree &
//Outputs: N/A
//Does: Creates a deep copy of a BinarySearchTree
BinarySearchTree::BinarySearchTree(BinarySearchTree &old_tree)
{
    if(old_tree.root == NULL)
    {
        root = NULL;
    }
    else
    {
        copy_helper_bst(this->root, old_tree.root);
    }
}

//Function copy_helper_bst
//Inputs: BinaryNode *&, BinaryNode *&
//Outputs: none
//Does: Wrapper function for the BinarySearchTree copy constructor
void copy_helper_bst(BinaryNode *&tree, BinaryNode *&old_tree)
{
    if(tree == NULL)
    {
        tree = NULL;
    }
    else
    {
        tree = new BinaryNode;
        tree->info = old_tree->info;
        copy_helper_bst(tree->left, old_tree->left);
        copy_helper_bst(tree->right, old_tree->right);
    }
}

//Function remove_item
//Inputs: TreeItem
//Outputs: none
//Does: Removes an item from the BinarySearchTree
void BinarySearchTree::remove_item(TreeItem item)
{
    if (is_empty())
        throw EmptyTree();
    else
    {    
        remove_item_helper(root, item);
    }
}

//Function remove_item_helper
//Inputs: BinaryNode *&, TreeItem
//Outputs: none
//Does: Wrapper function for the remove_item function
void remove_item_helper(BinaryNode *&tree, TreeItem item)
{
    if(item < tree->info)
    {
        remove_item_helper(tree->left, item);
    }
    else if(item > tree->info)
    {
        remove_item_helper(tree->right, item);
    }
    else
    {
        BinaryNode *temp = tree;
        if(tree->left == NULL && tree->right == NULL)
        {
            tree = NULL;
        }
        else if(tree->left == NULL && tree->right != NULL)
        {
            tree = tree->right;
        }
        else if(tree->left != NULL && tree->right == NULL)
        {
            tree = tree->left;
        }
        else
        {
            BinaryNode *temp_before = tree->right;
            while(temp_before->left != NULL)
            {
                temp_before = temp_before->left;
            }
            tree = temp_before;
            remove_item_helper(tree, temp_before->info);
        }
        delete temp;
    }
}

//Function find_item
//Inputs: TreeItem &, bool &
//Outputs: none
//Does: Finds an item in the BinarySearchTree
void BinarySearchTree::find_item(TreeItem &item, bool &found) const
{
    find_bst(root, item, found);
}

//Function find_bst
//Inputs: BinaryNode *, TreeItem &, bool &
//Outputs: none
//Does: Wrapper function for the find_item function
void find_bst(BinaryNode *tree, TreeItem &item, bool &found)
{
    if(tree == NULL)
    {
        found = false;
    }
    else if(tree->info < item)
    {
        find_bst(tree->right, item, found);
    }
    else if(tree->info > item)
    {
        find_bst(tree->left, item, found);
    }
    else
    {
        found = true;
    }
}