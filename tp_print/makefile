
ifeq ($(DEBUG),"true")  
CC = gcc -g
else
CC = gcc
endif
all:tp_print
tp_print:tp.o main.o
	$(CC) -o tp_print tp.o main.o
main.o:main.c
	$(CC) -o main.o -c main.c
tp.o:tp.c
	$(CC) -o tp.o -c tp.c
clean:
	rm tp.o tp_print main.o
