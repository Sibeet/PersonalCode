CC=gcc
CFLAGS=-g -Wall
OBJECT=main.o stack.o
TARGET=stack

$(TARGET): $(OBJECT)
	$(CC) -o $@ $(OBJECT)

clean: 
	rm -f *.o

main.o: stack.h main.c
stack.o: stack.h stack.c

