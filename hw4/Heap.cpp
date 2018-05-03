/*
* Comp 15
* Homework 4
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "Heap.h"
#include "Patient.h"
using namespace std;

// Default constructor
template <class E>
Heap<E>::Heap()
{
	length = 0;
}

// Function is_full
// Inputs: none
// Outputs: bool
// Does: Checks if the heap is full
template <class E>
bool Heap<E>::is_full() const
{
	if(length == 3000)
	{
		return true;
	}
	return false;
}

// Function is_empty
// Inputs: none
// Outputs: bool
// Does: Checks if the heap is empty
template <class E>
bool Heap<E>::is_empty() const
{
	if(length == 0)
	{
		return true;
	}
	return false;
}

// Function insert_item
// Inputs: E item
// Outputs: none
// Does: Inserts an item into the heap
template <class E>
void Heap<E>::insert_item(E item)
{
	heap[length] = item;
	heapify_up(length);
	length++;
}

// Function extract
// Inputs: none
// Outputs: E item
// Does: Removes an item from the heap
template <class E>
E Heap<E>::extract()
{
	if(length == 0)
	{
		throw EmptyHeap();
	}
	if(length == 1)
	{
		length--;
		return heap[0];
	}
	E temp = heap[0];
	heap[0] = heap[length-1];
	length--;
	heapify_down(0);
	return temp;
}

// Function get_parent_index
// Inputs: int x
// Outputs: int
// Does: Returns the index of the parent
template <class E>
int Heap<E>::get_parent_index(int x) const
{
	return (x-1)/2;
}

// Function get_children_indices
// Inputs: int x, int &y, int &z
// Outputs: none
// Does: Assigns the two passed by reference ints to the children
//		indicies.
template <class E>
void Heap<E>::get_children_indices(int x, int &y, int &z) const
{
	y = (x*2)+1;
	z = (x*2)+2;
}

// Function get_value_at
// Inputs: int x
// Outputs: E item
// Does: returns the value at the value in the array of the heap
template <class E>
E Heap<E>::get_value_at(int x)
{
	return heap[x];
}

template class Heap<Patient>;
template class Heap<double>;
template class Heap<int>;