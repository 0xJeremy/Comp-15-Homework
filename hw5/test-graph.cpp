/*
* Comp 15
* Homework 5
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<fstream>
#include "Graph.h"
#include "SixDegrees.h"
#include "Actor.h"
using namespace std;

void Actor_test();
void Graph_test();
void SixDegrees_test();

int main()
{
	Actor_test();
	Graph_test();
	SixDegrees_test();


	return 0;
}

void Actor_test()
{
	Actor a("Evan");
	a.add_movie("Her");
	bool check = a.check_movie("Her");
	if(check == 1)
		cout << "Check Movie: SUCCESS" << endl;
	else
		cout << "Check Movie: FAIL" << endl;
	Actor b("Evan");
	b.add_movie("Her");
	string connect_check = a.connect(b);
		if(connect_check == "Her")
		cout << "Check Connect: SUCCESS" << endl;
	else
		cout << "Check Connect: FAIL" << endl;
	bool check_equal = (a == b);
	if(check_equal == 1)
		cout << "Check ==: SUCCESS" << endl;
	else
		cout << "Check ==: FAIL" << endl;
	bool check_not_equal = (a != b);
	if(check_not_equal == 0)
		cout << "Check !=: SUCCESS" << endl;
	else
		cout << "Check !=: FAIL" << endl;
}

void Graph_test()
{
	Graph<Actor> g(100);
	Actor a("Evan");
	Actor b("Evan");
	a.add_movie("Test_movie");
	b.add_movie("Test_movie");
	g.add_vertex(a);
	g.add_vertex(b);
	g.add_edge(a, b, a.connect(b));
	string edge = g.get_edge(a, b);
	if(edge == "Test_movie")
		cout << "Check Edge: SUCCESS" << endl;
	else
		cout << "Check Edge: FAIL" << endl;
	int num_vertices = g.get_num_vertices();
	if(num_vertices == 2)
		cout << "Check Num Vertices: SUCCESS" << endl;
	else
		cout << "Check Num Vertices: FAIL" << endl;
	if(g.get_vertex_at(0) == a)
		cout << "Check Get Vertex At: SUCCESS" << endl;
	else
		cout << "Check Get Vertex At: FAIL" << endl;
}

void SixDegrees_test()
{
	SixDegrees sd;
	sd.populate_graph();
}