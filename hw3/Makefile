CC = clang++
CFLAGS = -Wall -Wextra -c -std=c++11
DEPS = RPNCalc.h Stack.h

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

calculator: RPNCalc.o Stack.o run-calc.o
	$(CC) -o calculator RPNCalc.o Stack.o run-calc.o

stacktest: test-stack.o Stack.o RPNCalc.o
	$(CC) -o stacktest test-stack.o Stack.o RPNCalc.o

clean:
	rm -f *.o core* *~ calculator
