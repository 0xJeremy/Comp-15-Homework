CC = clang++
CFLAGS = -Wall -Wextra -c -std=c++11 -O2
DEPS = DirNode.h FSTree.h NodeType.h LinkedList.h Word.h

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

gerp: gerp.o FSTree.o DirNode.o HashTable.o LinkedList.o Word.o
	$(CC) -o gerp gerp.o FSTree.o DirNode.o HashTable.o LinkedList.o Word.o


clean:
	rm -f *.o core* *~ gerp