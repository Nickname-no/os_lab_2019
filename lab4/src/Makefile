CC=gcc
CFLAGS=-I.



parallel_min_max : utils.o find_min_max.o /projects/Nickname-no/lab3/src/utils.h /projects/Nickname-no/lab3/src/find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o /projects/Nickname-no/lab3/src/parallel_min_max.c.c $(CFLAGS)

utils.o : /projects/Nickname-no/lab3/src/utils.h
	$(CC) -o utils.o -c /projects/Nickname-no/lab3/src/utils.c $(CFLAGS)

find_min_max.o : /projects/Nickname-no/lab3/src/utils.h /projects/Nickname-no/lab3/src/find_min_max.h
	$(CC) -o find_min_max.o -c /projects/Nickname-no/lab3/src/find_min_max.c $(CFLAGS)

process_memory: 
	$(CC) -o process_memory.o -c process_memory.c $(CFLAGS)

all:  parallel_min_max process_memory

clean :
	rm utils.o find_min_max.o  parallel_min_max  process_memory