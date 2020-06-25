OBJ=$(wildcard *.c)
test:$(OBJ)
	gcc -o $@ $^