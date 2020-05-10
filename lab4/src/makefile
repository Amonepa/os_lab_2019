FLAG = --std=c99
zombie : 
	gcc -Wall -o zombie zombie.c $(FLAG)
clear :
	rm zombie
process_memory :
	gcc -Wall -o process_memory process_memory.c $(FLAG)

parallel_sum : utils.o
	gcc -o parallel_sum ../../lab3/src/utils.o parallel_sum.c $(FLAG) -lpthread

utils.o : ../../lab3/src/utils.h
	gcc -o ../../lab3/src/utils.o -c ../../lab3/src/utils.c $(FLAG)