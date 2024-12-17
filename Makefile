#variables
CFLAGS = -std=c2x
CC = gcc
CPP = gcc
objects = main.o factorial.o linkedlist.o 

main: $(objects)
	$(CC) $(FLAGS) -g -o main $(objects)
main.o: main.c linkedlist.h factorial.o
	$(CC) $(FLAGS) -g -o main.o -c main.c

factorial.o: factorial.cpp
	$(CPP) $(FLAGS) -g -o factorial.o -c factorial.cpp

linkedlist.o: linkedlist.c linkedlist.h
	$(CC) $(FLAGS) -g -o linkedlist.o -c linkedlist.c

.PHONY: clean

clean: 
	echo $(OS)
	rm main $(objects)