CC = clang++
CFLAGS = -Wall -Wextra -c -std=c++11
DEPS = BinaryTree.h BinarySearchTree.h Survivor.h Tree.h Queue.h

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

survivor: survivor-driver.o BinaryTree.o BinarySearchTree.o Survivor.o Queue.o
	$(CC) -o survivor survivor-driver.o BinaryTree.o BinarySearchTree.o Survivor.o Queue.o

BSTDriver: test-bst-driver.o BinaryTree.o BinarySearchTree.o Survivor.o Queue.o
	$(CC) -o BSTDriver test-bst-driver.o BinaryTree.o BinarySearchTree.o Survivor.o Queue.o

BTDriver: test-bt-driver.o BinaryTree.o Survivor.o Queue.o
	$(CC) -o BTDriver test-bt-driver.o BinaryTree.o Survivor.o Queue.o

clean:
	rm -f *.o core* *~ survivor