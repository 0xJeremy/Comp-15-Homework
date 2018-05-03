/*
* Comp 15
* Homework 3
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
using namespace std;

#ifndef STACK_H_
#define STACK_H_

class Stack
{
public:
	// Default constructor
	Stack();

	// Destructor
	~Stack();

	// Checks if the stack has no elements
	bool is_empty() const;

	// Checks if the stack is full
	bool is_full() const;

	// Empties the stack
	void make_empty();

	// Returns the number of elemnts
	int get_size() const;

	// Returns the value of hte topmost element
	double top() const;

	// Puts an element on the top of the stack
	void push(double);

	// Removes an element from the stack
	void pop();

	// Expands the underlying array
	void expand();

	// Shrinks the underlying array
	void shrink();

private:
	int length;
	double *stack;
	int total_size;
};

#endif