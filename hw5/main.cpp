/*
 * main.cpp
 *
 * Driver for Six Degrees of Kevin Bacon
 *
 * COMP15
 * Spring 2018
 *
 * Fun fact: Kevin Bacon's dad is locally famous,
 * but not for acting. He's a city planner for 
 * Philadelphia, and was on the cover of TIME
 * in 1964.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "SixDegrees.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    SixDegrees sd;
    if(argc == 2)
    {
    	ifstream infile;
    	infile.open(argv[1]);
        if (!infile.is_open()) 
        {
        cout << "Error opening the file." << endl;
        return -1;
        }
    	sd.run(infile, cout);
    }
    else
    {
    	sd.run(cin, cout);
    }
    return 0;
}
