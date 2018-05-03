/*
* Comp 15
* Homework 4
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "MinHeap.h"
#include "Patient.h"
using namespace std;

// Default constructor
template <class E>
MinHeap<E>::MinHeap()
{

}

// Function heapify_up
// Inputs: int x
// Outputs: none
// Does: Rearranges the heap upwards so it remains a minheap
template <class E>
void MinHeap<E>::heapify_up(int x)
{
	if(x == 0)
	{
		return;
	}
	int parent = this->get_parent_index(x);
	if(this->heap[x] < this->heap[parent])
	{
		E temp = this->heap[parent];
		this->heap[parent] = this->heap[x];
		this->heap[x] = temp;
		heapify_up(parent);
	}
}

// Function heapify_down
// Inputs: int x
// Outputs: none
// Does: Rearranges the heap downwards so it remains a minheap
template <class E>
void MinHeap<E>::heapify_down(int x)
{
	int child1;
	int child2;
	this->get_children_indices(x, child1, child2);
	if(child1 > this->length)
	{
		return;
	}
	int min_child = x;
	if(this->heap[x] > this->heap[child1])
	{
		min_child = child1;
	}
	if((child2 < this->length) && (this->heap[min_child] 
		> this->heap[child2]))
	{
		min_child = child2;
	}
	if(min_child != x)
	{
		E temp = this->heap[x];
		this->heap[x] = this->heap[min_child];
		this->heap[min_child] = temp;
		heapify_down(min_child);
	}
}

template class MinHeap<Patient>;
template class MinHeap<double>;
template class MinHeap<int>;