/*
 * LinkedList.h
 * COMP15
 * Spring 2018
 *
 * Interface for Linked List of Planets
 *
 * What is an astronaut's favorite candy bar?
 *
 * A milky way!
 */

#include "Planet.h"
#include <fstream>

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

class LinkedList
{
public:
    // Default constructor
    LinkedList();

    // Copy Constructor
    LinkedList(const LinkedList &list1);

    // Destructor
    ~LinkedList();

    // Assignment Operator
    LinkedList & operator = (const LinkedList &);

    // The basic operations:
    // Insert, delete, and find
    void insert_planet(Planet);
    Planet get_next_planet();

    // Return some basic info
    int get_length() const;

    // Print the list
    void print(ostream &) const;

    // Finds a specific planet
    Planet find_planet(Planet, bool &);

    // Deletes a specified planet
    void delete_planet(Planet);

    // Empties the array
    void make_empty();

    // Resets curr_pos
    void reset_list();

    // Checks if the heap is full
    bool is_full() const;

private:
    int length;
    NodeType *head;
    NodeType *curr_pos;
};

#endif
