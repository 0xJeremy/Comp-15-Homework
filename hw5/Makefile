CC = clang++
CFLAGS = -Wall -Wextra -c -std=c++11
DEPS = LinkedList.h Queue.h Stack.h NodeType.h

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

sixdegrees: main.o SixDegrees.o LinkedList.o Queue.o Stack.o Actor.o Graph.o
	$(CC) -o sixdegrees main.o SixDegrees.o LinkedList.o Queue.o Stack.o Actor.o Graph.o

test-graph: test-graph.o SixDegrees.o LinkedList.o Queue.o Stack.o Actor.o Graph.o
	$(CC) -o test-graph test_driver.o SixDegrees.o LinkedList.o Queue.o Stack.o Actor.o Graph.o

clean:
	rm -f *.o core* *~ sixdegrees