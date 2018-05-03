/*
* Comp 15
* Project 1
* Jeremy Kanovsky
*/

#include<fstream>
#include<string>
#include<iostream>
using namespace std;

#ifndef SURVIVOR_H_
#define SURVIVOR_H_

class Survivor
{
public:
    //Constructors
    Survivor();
    Survivor(string, string, string, string, int);
    Survivor(string, string);

    //Print function
    void print(ostream &);

    //Generate castaway information
    void generate_next_castaway(ifstream &);

    //Sets the name of a survivor
    void set_name(string, string);

    //Gets the survivors age
    int get_age();

    //Overloaded operators
    friend bool operator == (const Survivor &, const Survivor &);
    friend bool operator < (const Survivor &, const Survivor &);
    friend bool operator > (const Survivor &, const Survivor &);
private:
	string first_name;
	string last_name;
	string city;
	string state;
	int age;
};

#endif