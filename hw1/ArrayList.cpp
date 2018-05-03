/*
 * Array.cpp
 * COMP15
 * Spring 2018
 *
 * Implementation for Arrrrrrray of Pirates
 */

#include "ArrayList.h"
#include <iostream>

// Default constructor
// Length and current position default to 0
ArrayList::ArrayList()
{
    length = 0;
    curr_pos = 0;
    total_size = MAX_PIRATES;
    pirates = NULL;
    pirates = new Pirate[MAX_PIRATES];
}

ArrayList::~ArrayList()
{
    delete [] pirates;
}

// Function find_pirate
// Inputs: Pirate object, bool by reference
// Returns: Pirate object
// Does: Looks for pirate in the array, modifies bool if found
//       Returns the object from the list and not the passed one
//       (In case they're different.)
Pirate ArrayList::find_pirate(Pirate p, bool &found) const
{
    int location = 0;

    while ((location < length) && !found)
    {
        if (p == pirates[location])
        {
            found = true;
            p = pirates[location];
            break;
        }
        location++;
    }
    return p;
}

// Function insert_pirate
// Inputs: Pirate object
// Returns: Nothing
// Does: Adds Pirate to end of array, increases length
void ArrayList::insert_pirate(Pirate p)
{
    //Checks if the array needs to be expanded
    if(length == total_size)
    {
        expand_capacity();
    }

    //Checks if the array needs to be shrunk
    if(length < (total_size/2) && total_size > 25)
    {
        shrink_capacity();
    }

    //Checks if the pirate already exists, and if not adds it
    bool add_to_list = false;
    find_pirate(p, add_to_list);
    if(add_to_list == false)
    {
        pirates[length] = p;
        length++;
    }
}

// Function delete_pirate
// Inputs: Pirate object
// Returns: Nothing
// Does: Deletes pirate, shifts everything else over
void ArrayList::delete_pirate(Pirate p)
{
    for(int i = 0;  i < length; i++)
    {
        if(pirates[i] == p)
        {
            for(int j = i; j < length; j++)
            {
                pirates[j] = pirates[j+1];
            }
            length--;
        }
    }
}

// Function get_next_pirate
// Input: None
// Returns: Pirate object
// Does: Returns pirate at curr_pos
//       Increments curr_pos, but wraps around
Pirate ArrayList::get_next_pirate()
{
    Pirate p = pirates[curr_pos];
    curr_pos = (curr_pos + 1) % length;
    return p;
}

// Function make_empty
// Input: none
// Returns: none
// Does: sets length to 0 (memory not modified)
void ArrayList::make_empty()
{
    length = 0;
}

// Function reset_array
// Input: none
// Returns: none
// Does: sets curr_pos to 0 
void ArrayList::reset_array()
{
    curr_pos = 0;
}

// Function print
// Input: ostream object
// Returns: none
// Does: Prints array from 0 to length
void ArrayList::print(ostream &stream) const 
{
    for (int i = 0; i < length; i++)
    {
        pirates[i].print(stream);
        if(i != length-1)
        {
            stream << ",";
        }
    }
}

// Function get_length
// Input: none, oncst
// Returns: int
// Does: Returns the value in length attribute
int ArrayList::get_length() const
{
    return length;
}

// Function expand_capacity
// Input: none
// Returns: none
// Does: Doubles the capacity of the ArrayList
void ArrayList::expand_capacity()
{
    if(length == total_size)
    {
        Pirate* temp = NULL;
        temp = new Pirate[total_size*2];
        for(int i = 0; i < length; i++)
        {
            temp[i] = pirates[i];
        }
        delete [] pirates;
        pirates = temp;
        total_size = total_size*2;
        cout << "Expand to " << total_size << endl;
    }
}

// Function shrink_capacity
// Input: none
// Returns: none
// Does: Halves the capacity of the ArrayList
void ArrayList::shrink_capacity()
{
    if(length <= (total_size/2))
    {
        Pirate* temp = NULL;
        temp = new Pirate[total_size/2];
        for(int i = 0; i < total_size/2; i++)
        {
            temp[i] = pirates[i];
        }
        delete [] pirates;
        pirates = temp;
        total_size = total_size/2;
        cout << "Contract to " << total_size << endl;
    }
}
