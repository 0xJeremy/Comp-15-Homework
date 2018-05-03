CC = clang++
CFLAGS = -Wall -Wextra -c -std=c++11
DEPS = Patient.h Heap.h

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

heaps: intake.o Heap.o Patient.o MinHeap.o MaxHeap.o
	$(CC) -o heapify intake.o Heap.o Patient.o MinHeap.o MaxHeap.o

min-heap: test-min-heap.o Heap.o MinHeap.o
	$(CC) -o min-heap test-min-heap.o Heap.o MinHeap.o

clean:
	rm -f *.o core* *~ heapify