/*
* Comp 15
* Homework 4
* Jeremy Kanovsky
*/

#include "Heap.h"

#ifndef MAXHEAP_H_
#define MAXHEAP_H_

template<class E> class MaxHeap : public Heap<E>
{
public:
    MaxHeap();
    
    // Overriding purely virtual functions
    void heapify_up(int);
    void heapify_down(int);
};

#endif