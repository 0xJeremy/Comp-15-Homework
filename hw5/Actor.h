/*
* Comp 15
* Homework 5
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "LinkedList.h"
using namespace std;

#ifndef ACTOR_H_
#define ACTOR_H_

class Actor
{
public:
	// Constructors
	Actor();
	Actor(string);

	// Overloaded operators
	friend bool operator == (const Actor &, const Actor &);
    friend bool operator != (const Actor &, const Actor &);
    friend ostream& operator << (ostream& stream, const Actor &);

    // Class functions
	void add_movie(string);
	bool check_movie(string) const;
	string connect(Actor) const;

private:
	string actor_name;
	LinkedList<string> movies;
	int movie_counter;
};

#endif