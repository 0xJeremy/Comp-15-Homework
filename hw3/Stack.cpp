/*
* Comp 15
* Homework 3
* Jeremy Kanovsky
*/

#include"Stack.h"
#include<iostream>
using namespace std;

// Default constructor
Stack::Stack()
{
	length = 0;
	total_size = 100;
	stack = NULL;
	stack = new double[100];
}

// Default destructor
Stack::~Stack()
{
	delete [] stack;
}

// Function is_empty
// Input: none
// Returns: bool
// Does: checks if stack is empty
bool Stack::is_empty() const
{
	if(length == 0)
	{
		return true;
	}
	return false;
}

//Function is_full
// Input: none
// Returns: bool
// Does: checks if the stack is full
bool Stack::is_full() const
{
	if(length == total_size)
	{
		return true;
	}
	return false;
}

// Function make_empty
// Input: none
// Returns: none
// Does: makes the stack empty
void Stack::make_empty()
{
	delete [] stack;
	stack = new double[100];
	length = 0;
}

// Function get_size
// Input: none
// Returns: int
// Does: returns the size of the stack
int Stack::get_size() const
{
	return length;
}

// Function top
// Input: none
// Returns: double
// Does: returns the top of the stack
double Stack::top() const
{
	if(is_empty())
	{
		cout << "Calculator is empty." << endl;
		return 0;
	}
	return stack[length];
}

// Function push
// Input: double
// Returns: none
// Does: puts a new number on the stack
void Stack::push(double x)
{
	expand();
	if(is_full())
	{
		cout << "Cannot add value. Calculator is full." << endl;
		return;
	}
	length++;
	stack[length] = x;
}

// Function pop
// Input: none
// Returns: none
// Does: removes the top of the stack
void Stack::pop()
{
	shrink();
	if(is_empty())
	{
		cout << "Calculator is empty." << endl;
		return;
	}
	if(length > 0)
	{
		length--;
	}
}

// Function expand
// Input: none
// Returns: none
// Does: doubles the size of the stack
void Stack::expand()
{
    if(length == total_size)
    {
        double* temp = NULL;
        temp = new double[total_size*2];
        for(int i = 0; i < length; i++)
        {
            temp[i] = stack[i];
        }
        delete [] stack;
        stack = temp;
        total_size = total_size*2;
    }
}

// Function shrink
// Input: none
// Returns: none
// Does: shrinks the stack
void Stack::shrink()
{
	if(length == 25)
	{
		return;
	}
    else if(length <= (total_size/2))
    {
        double* temp = NULL;
        temp = new double[total_size/2];
        for(int i = 0; i < total_size/2; i++)
        {
            temp[i] = stack[i];
        }
        delete [] stack;
        stack = temp;
        total_size = total_size/2;
    }
}