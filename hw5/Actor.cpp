/*
* Comp 15
* Homework 5
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "Actor.h"
using namespace std;

// Default constructor
Actor::Actor()
{
	actor_name = "";
	movie_counter = 0;
}

// Parameterized Constructor
Actor::Actor(string name)
{
	actor_name = name;
	movie_counter = 0;
}

// Overloaded operator for ==
bool operator == (const Actor &a1, const Actor &a2)
{
	if(a1.actor_name == a2.actor_name)
	{
		return true;
	}
	return false;
}

// Overloaded operator for !=
bool operator != (const Actor &a1, const Actor &a2)
{
	if(a1.actor_name == a2.actor_name)
	{
		return false;
	}
	return true;
}

// Overloaded operator for <<
ostream& operator << (ostream &stream, const Actor &a1)
{
	stream << a1.actor_name;
	return stream;
}

//Function add_movie
//Inputs: string movie_name
//Outputs: none
//Does: Adds the input movie to the actors' movie list
void Actor::add_movie(string movie_name)
{
	movies.insert(movie_name);
	movie_counter++;
}

//Function check_movie
//Inputs: string movie_name
//Outputs: bool
//Does: checks if an actor has been in a movie
bool Actor::check_movie(string movie_name) const
{
	bool temp;
	movies.find(movie_name, temp);
	return temp;
}

//Function connect
//Inputs: Actor a1
//Outputs: string
//Does: Finds the movie connection between two actors
string Actor::connect(Actor a1) const
{
	bool temp = false;
	string movie = "";
	for(int i = 0; i < movie_counter; i++)
	{
		movie = a1.movies.find(movies.get_value_at(i), temp);
		if(temp)
		{
			return movie;
		}
	}
	return "";
}