/*
* Comp 15
* Homework 4
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "MaxHeap.h"
#include "Patient.h"
using namespace std;

// Default constuctor
template <class E>
MaxHeap<E>::MaxHeap()
{

}

// Function heapify_up
// Inputs: int x
// Outputs: none
// Does:  Goes up the heap and orders it so it remains a maxheap
template <class E>
void MaxHeap<E>::heapify_up(int x)
{
	if(x == 0)
	{
		return;
	}
	int parent = this->get_parent_index(x);
	if(this->heap[x] > this->heap[parent])
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
// Does: Goes down the heap and orders it so it remains a maxheap
template <class E>
void MaxHeap<E>::heapify_down(int x)
{
	int child1;
	int child2;
	this->get_children_indices(x, child1, child2);
	if(child1 >= this->length)
	{
		return;
	}
	int max_child = x;
	if(this->heap[x] < this->heap[child1])
	{
		max_child = child1;
	}
	if((child2 < this->length) && (this->heap[max_child] < this->heap[child2]))
	{
		max_child = child2;
	}
	if(max_child != x)
	{
		E temp = this->heap[x];
		this->heap[x] = this->heap[max_child];
		this->heap[max_child] = temp;
		heapify_down(max_child);
	}
}

template class MaxHeap<Patient>;
template class MaxHeap<double>;
template class MaxHeap<int>;