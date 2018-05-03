/*
 * LinkedList.cpp
 * COMP15
 * Spring 2018
 * 
 * Implementation for Linked List of Planets
 *
 * What is an astronaut's favorite candy bar?
 *
 * A mars bar!
 */

#include "LinkedList.h"
#include <iostream>
using namespace std;

// Default constructor
LinkedList::LinkedList()
{
    length = 0;
    head = NULL;
    curr_pos = NULL;
}

// Copy constructor
LinkedList::LinkedList(const LinkedList &l)
{
    length = l.length;
    curr_pos = NULL;
    if (l.head == NULL)
        head = NULL;
    else
    {
        head = new NodeType;
        head->info = l.head->info;
        head->next = NULL;
        NodeType *curr = head;
        NodeType *orig = l.head;
        while (orig->next != NULL)
        {
            curr->next = new NodeType;
            curr->next->info = orig->next->info;
            curr->next->next = NULL;
            orig = orig->next;
            curr = curr->next;
        }
    }
}

// Destructor
LinkedList::~LinkedList()
{
    if(head == NULL)
    {
        return;
    }
    NodeType *curr_node = head;
    NodeType *next_node = head->next;
    while(next_node != NULL) 
    {
        delete curr_node;
        curr_node = next_node;
        next_node = curr_node->next;
    }
    delete curr_node;
    delete next_node;
}

// Assignment operator
LinkedList & LinkedList::operator = (const LinkedList &l)
{
    NodeType *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = l.length;
    curr_pos = NULL;
    if (l.head == NULL)
        head = NULL;
    else
    {
        head = new NodeType;
        head->info = l.head->info;
        head->next = NULL;
        NodeType *curr = head;
        NodeType *orig = l.head;
        while (orig->next != NULL)
        {
            curr->next = new NodeType;
            curr->next->info = orig->next->info;
            curr->next->next = NULL;
            orig = orig->next;
            curr = curr->next;
        }
    }
    return *this;
}

// Function insert_planet
// Input: Planet object
// Returns: None
// Does: Adds PLanet to beginning of array, increases length
void LinkedList::insert_planet(Planet p)
{
    NodeType *location = new NodeType;
    location->info = p;
    location->next = head;

    head = location;
    length++;
}

// Function get_next_planet
// Inputs: none
// Returns: none
// Does: Returns the Planet object at the current pos
//       Wraps around to beginning if we're at the end
//       Returns a default planet if empty
Planet LinkedList::get_next_planet()
{
    if (length == 0)
    {
        Planet p;
        return p;
    }
    if (curr_pos == NULL)
        curr_pos = head;
    else
        curr_pos = curr_pos->next;
    return curr_pos->info;
}

// Function get_length, const
// Inputs: none
// Returns: int, length of list
int LinkedList::get_length() const
{
    return length;
}

// Function print, const
// Inputs: ostream object
// Returns: none
// Does: prints every element in the list
void LinkedList::print(ostream &out) const
{
    NodeType *location = head;
    while (location != NULL)
    {
        (location->info).print(out);
        out << endl;
        location = location->next;
    }
}

// Function find_planet
// Inputs: planet object, bool
// Returns: planet
// Does: finds if a planet is in the linked list
Planet LinkedList::find_planet(Planet p, bool &found)
{
    NodeType *curr_node = head;
    while(curr_node != NULL)
    {
        if(curr_node->info == p)
        {
            found = true;
            return p;
        }
        curr_node = curr_node->next;
    }
    found = false;
    return p;
}

// Function delete_planet
// Inputs: planet object
// Returns: none
// Does: Delete's a specified planet
void LinkedList::delete_planet(Planet p)
{
    NodeType *curr_node = head;
    NodeType *next_node = curr_node->next;
    if(curr_node->info == p)
    {
        head = curr_node->next;
        length--;
        return;
    }
    while(next_node != NULL)
    {
        if(next_node->info == p)
        {
            curr_node->next = next_node->next;
            length--;
            return;
        }
    }
}

// Function make_empty
// Inputs: none
// Returns: none
// Does: empties the linked list
void LinkedList::make_empty()
{
    if(head == NULL)
    {
        length = 0;
        return;
    }
    NodeType *curr_node = head;
    NodeType *next_node = head->next;
    while(next_node != NULL) 
    {
        delete curr_node;
        curr_node = curr_node->next;
        next_node = curr_node->next;
    }
    delete curr_node;
    delete next_node;
    length = 0;
}

// Function reset_list
// Inputs: none
// Returns: none
// Does: resets the curr_pos variable
void LinkedList::reset_list()
{
    curr_pos = head;
}

// Function is_full const
// Inputs: none
// Returns: bool
// Does: checks if heap is full
bool LinkedList::is_full() const
{
    try
    {
        NodeType *node = new NodeType;
        delete node;
    }
    catch(std::bad_alloc exception)
    {
        cerr << "Failed to allocate." << endl;
        return true;
    }
    return false;
}