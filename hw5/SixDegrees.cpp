/*
* Comp 15
* Homework 5
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<fstream>
#include "SixDegrees.h"
#include "Queue.h"
using namespace std;

// Default constructor
SixDegrees::SixDegrees()
{
	imdb.initialize_graph(1000);
}

//Function populate_graph
//Inputs: none
//Outputs: none
//Does: populates the graph with actors and their respective movies
void SixDegrees::populate_graph()
{
	ifstream infile;
	infile.open("actors.txt");
	if (!infile.is_open()) 
	{
		cout << "Error opening actors.txt" << endl;
		return;
	}

	string temp;
	while(getline(infile, temp)) 
	{
        Actor a(temp);
        imdb.add_vertex(a);
        while(temp != "*")
        {
        	getline(infile, temp);
        	a.add_movie(temp);
        }
        for(int i = 0; i < imdb.get_num_vertices(); i++)
        {
        	Actor temp_actor = imdb.get_vertex_at(i);
        	string temp_edge = a.connect(temp_actor);
        	if(temp_edge != "")
        	{
        		imdb.add_edge(a, temp_actor, temp_edge);
        		imdb.add_edge(temp_actor, a, temp_edge);
        	}
        }
	}
	infile.close();
}

//Function run
//Inputs: istream &in, ostream &out
//Outputs: none
//Does: Allows the user to enter two actors to find their connection
void SixDegrees::run(istream &in, ostream &out)
{
	populate_graph();
	out << "Enter two actor names separated by a new line." << endl;
	out << "Press ctrl-D to quit" << endl;
	while(!in.eof())
	{
		string a_string;
		string b_string;
		getline(in, a_string);
		getline(in, b_string);
		Actor a(a_string);
		Actor b(b_string);
		BFS(a, b, out);
	}
}

//Function BFS
//Inputs: Actor a, Actor b, ostream &out
//Outputs: none
//Does: Performs breath first search to find the connections
//		between two actors.
void SixDegrees::BFS(Actor a, Actor b, ostream &out)
{
	imdb.clear_marks();
	imdb.initialize_path();
	bool flag = false;
	Queue<Actor> current;
	Queue<Actor> neighbors;
	current.enqueue(a);
	while(!current.is_empty() && !flag)
	{
		Actor x;
		current.dequeue(x);
		imdb.get_to_vertices(x, neighbors);
		imdb.mark_vertex(x);
		while(!neighbors.is_empty())
		{
			Actor y;
			neighbors.dequeue(y);
			if(!imdb.is_marked(y))
			{
				imdb.update_predecessor(x, y);
				if(y == b)
				{ 
					flag = true;
					break;
				}
				current.enqueue(y);
			}
		}
	}
	if(flag)
	{
		imdb.report_path(out, a, b);
	}
	else
	{
		out << a << " to " << b << ": No connection" << endl;
	}
}