 /*
 * Graph.cpp
 *
 * Implementation for Graph class
 *
 * COMP15
 * Spring 2018
 *
 * Fun fact: Kevin Bacon lives in New York,
 * but keeps a vacation home in...
 * Connecticut
 */

#include <iostream>
#include "Graph.h"
#include "Stack.h"
#include "Actor.h"
using namespace std;

// Default constructor
template<class Vertex>
Graph<Vertex>::Graph()
{
    curr_vertex = 0;
    edges = NULL;
    path = NULL;
    vertices = NULL;
    marks = NULL;
}

// Parameterized
template<class Vertex>
Graph<Vertex>::Graph(int num_v)
{
    initialize_graph(num_v);
}

// Function initialize_graph
// Input: number of vertices
// Returns: void
// Does: dynamically allocates all of the arrays 
//       needed in the graph vertices, marks, path
//       and edges (the last is a 2d array)
template<class Vertex>
void Graph<Vertex>::initialize_graph(int num_v)
{
    curr_vertex = 0;
    num_vertices = num_v;
    vertices = new Vertex[num_vertices];
    marks = new bool[num_vertices];
    path = new int[num_vertices];

    edges = new string*[num_vertices];
    for (int i = 0; i < num_vertices; i++)
        edges[i] = new string[num_vertices];

    for (int i = 0; i < num_vertices; i++)
    {
        marks[i] = false;
        path[i] = NULL_PRED;
        for (int j = 0; j < num_vertices; j++)
            edges[i][j] = "";
    }
}

// Function add_vertex
// Parameters: Vertex, by value
// Returns: void
// Does: Add a new vertex to the end of the 2d array
//       Initializes every from/to edge to be NULL
template<class Vertex>
void Graph<Vertex>::add_vertex(Vertex v)
{
     vertices[curr_vertex] = v;
     for (int i = 0; i < num_vertices; i++)
     {
         edges[curr_vertex][i] = "";
         edges[i][curr_vertex] = "";
     }
     curr_vertex++;
 }

// Function clear_marks
// Parameters: none
// Returns: none
// Does: For algorithms that need to mark vertices (BFS, DFS)
//       sets all the marks to be false
template<class Vertex>
void Graph<Vertex>::clear_marks()
{
    for (int i = 0; i < num_vertices; i++)
    {
        marks[i] = false;
    }
}

// Function initialize_path
// Parameters: none
// Returns: none
// Does: Sets every value in the predecessor path to be NULL edge
template<class Vertex>
void Graph<Vertex>::initialize_path()
{
    for (int i = 0; i < num_vertices; i++)
        path[i] = NULL_PRED;
}

// Function update_predecessor
// Parameters: Two vertices, the predecessor and the current
// Returns: None
// Does: Finds the location in the vertices array for predecessor
//       and current. Updates the path array to reflect 
//       predecessor relationship.
template<class Vertex>
void Graph<Vertex>::update_predecessor(Vertex pred, Vertex curr)
{
    int pred_index, curr_index;
    for (int i = 0; i < num_vertices; i++)
    {
        if (vertices[i] == pred)
            pred_index = i;
        if (vertices[i] == curr)
            curr_index = i;
    }
    if (path[curr_index] == NULL_PRED)
        path[curr_index] = pred_index;
}

// Function report_path
// Parameters: Ostream to print, start and end vertices
// Returns: none
// Does: Finds path from start to end on the predecessor path and 
//      prints
template<class Vertex>
void Graph<Vertex>::report_path(ostream &out, Vertex start, Vertex end) const
{
  
    Stack<Vertex> s;

    int index = index_is(vertices, end);
    s.push(vertices[index]);
    int counter = 0;
    bool done = false;
    string m = "";
    while (!done)
    {
        index = path[index];
        if (vertices[index] == start)
            done = true;
        s.push(vertices[index]);
        counter++;
    }
    out << start << " and " << end << " have a costar distance of " << counter << endl;
    while (!s.is_empty())
    {
        Vertex v = s.top();
        s.pop();
        Vertex v1 = s.top();
        m = get_edge(v, v1);
        out << v1 << " was in " << m << " with " << v << endl;
    }
}

// Function mark_vertex
// Parameters: Vertex
// Returns: none
// Does: Sets the mark of this vertex to true
template<class Vertex>
void Graph<Vertex>::mark_vertex(Vertex v)
{
    for (int i = 0; i < num_vertices; i++)
    {
        if (vertices[i] == v)
            marks[i] = true;
    }
}

// Function is_marked
// Parameters: Vertex
// Returns: bool
// Does: returns value in marks array for this vertex
template<class Vertex>
bool Graph<Vertex>::is_marked(Vertex v) const
{
    for (int i = 0; i < num_vertices; i++)
    {
        if (vertices[i] == v)
            return marks[i];
    }
    return false;
}

// Function is_vertex
// Parameters: Vertex
// Returns: bool
// Does: returns true if vertex exists in the graph,
//       false otherwise.
template<class Vertex>
bool Graph<Vertex>::is_vertex(Vertex v) const
{
    for (int i = 0; i < num_vertices; i++)
    {
        if (vertices[i] == v)
            return true;
    }
    return false;
}

// Function add_edge
// Parameters: Two vertices (from and to), weight of the edge
// Returns: void
// Does: updates edges array to have the given weight
 template<class Vertex>
 void Graph<Vertex>::add_edge(Vertex f, Vertex t, string weight)
 {
     int row;
     int col;

     row = index_is(vertices, f);
     col = index_is(vertices, t);
     if (edges[row][col] == "")
         edges[row][col] = weight;
 }


// Function get_to_vertices
// Parameters: Vertex, queue of vertices by reference
// Returns: void
// Does: Finds all neighbors of the given vertex and enqueues
 template<class Vertex>
 void Graph<Vertex>::get_to_vertices(Vertex v,
                 Queue<Vertex> &adj) const
 {
    int from;
    int to;
    from = index_is(vertices, v);
    for (to = 0; to < num_vertices; to++)
        if (edges[from][to] != "")
            if (vertices[to] != vertices[from])
                   adj.enqueue(vertices[to]);
}

// Function print_matrix
// Parameters: ostream
// Returns: void
// Does: Prints the 2d adjacency matrix of the graph
template<class Vertex>
void Graph<Vertex>::print_matrix(ostream & out) const
{
    for (int i = 0; i < num_vertices; i++)
    {
        for (int j = 0; j < num_vertices; j++)
            out << edges[i][j] << " ";
        out << endl;
    }
}

// wrapper function definitions
template<class Vertex>
int index_is(Vertex *vertices, Vertex v)
{
    int index = 0;
    while (!(v == vertices[index]))
        index++;
    return index;
}

//Function copy constuctor
//Inputs: Graph &old_graph
//Outputs: none
//Does: Creates a deep copy of a graph
template<class Vertex>
Graph<Vertex>::Graph(Graph &old_graph)
{
    initialize_graph(old_graph.num_vertices);
    curr_vertex = old_graph.curr_vertex;
    num_vertices = old_graph.num_vertices;
    for(int i = 0; i < num_vertices; i++)
    {
        for(int j = 0; j < num_vertices; j++)
        {
            edges[i][j] = old_graph.edges[i][j];
        }
        vertices[i] = old_graph.vertices[i];
        path[i] = old_graph.path[i];
        marks[i] = old_graph.marks[i];
    }
}

//Function assignment operator
//Inputs: Graph &g
//Outputs: none
//Does: Creates a shallow copy of a graph
template<class Vertex>
Graph<Vertex> & Graph<Vertex>::operator = (Graph &g)
{
    curr_vertex = g.curr_vertex;
    num_vertices = g.num_vertices;
    edges = g.edges;
    vertices = g.vertices;
    path = g.path;
    marks = g.marks; 
}

//Function destructor
//Inputs: none
//Outputs: none
//Does: Deletes all allocated memory from a graph
template<class Vertex>
Graph<Vertex>::~Graph()
{
    delete [] vertices;
    for(int i = 0; i < num_vertices; i++)
    {
        delete [] edges[i];
    }
    delete [] edges;
    delete [] path;
    delete [] marks;
}

//Function get_edge
//Inputs: int a, int b
//Outputs: string
//Does: Returns the edge from int a to int b
template<class Vertex>
string Graph<Vertex>::get_edge(Vertex a, Vertex b) const
{
    int row = 0;
    int col = 0;
    row = index_is(vertices, a);
    col = index_is(vertices, b);
    return edges[row][col];
}

template<class Vertex>
int Graph<Vertex>::get_num_vertices() const
{
    return curr_vertex;
}

template<class Vertex>
Vertex Graph<Vertex>::get_vertex_at(int a) const
{
    return vertices[a];
}

template class Graph<int>;
template class Graph<char>;
template class Graph<string>;
template class Graph<Actor>;