/*
* Comp 15
* Homework 5
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "Graph.h"
#include "Actor.h"
using namespace std;

#ifndef SIXDEGREES_H_
#define SIXDEGREES_H_

class SixDegrees
{
public:
	// Default constructor
	SixDegrees();

	// Class functions
	void populate_graph();
	void run(istream &, ostream &);
	void BFS(Actor, Actor, ostream &);

private:
	Graph<Actor> imdb;
};

#endif