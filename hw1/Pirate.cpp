/*
 * Pirate.cpp
 * COMP15
 * Spring 2018
 *
 * Implarrrrrrmentation of a Pirate
 */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Pirate.h"
using namespace std;

int Pirate::pirate_count = 0;

Pirate::Pirate()
{
    pirate_id = -1;
    name = "Cap'n Hook";
}

Pirate::Pirate(string n)
{
    assign_pirate_id();
    name = n;
}

void Pirate::print(ostream &stream) const
{
    stream << pirate_id << " "
           << name;
}

void Pirate::generate_pirate_name(ifstream &infile, int range)
{
    string pname;
    int rando = rand() % range;
    int count = 0;

    infile.clear();
    infile.seekg(0, ios::beg);
    while (getline(infile, pname))
    {
        if (count == rando)
        {
            name = pname;
            break;
        }
        count++;
    }
}

void Pirate::assign_pirate_id()
{
    pirate_id = pirate_count++;
}

bool operator == (const Pirate &p1, const Pirate &p2)
{
    return (p1.pirate_id == p2.pirate_id);
}

// Function generate_next_pirate
// Input: ifstream object
// Returns: none
// Does: Finds the next pirate in the pirate names file
void Pirate::generate_next_pirate(ifstream &infile)
{
    string pname;
    int count = 0;

    //Finds the next pirate in the file using the pirate_count
    infile.clear();
    infile.seekg(0, ios::beg);
    while(getline(infile, pname))
    {
        if(count == pirate_count)
        {
            name = pname;
            break;
        }
        count++;
    }
}