.PHONY:clean

CC = gcc
BIN = hello
OBJS = helloworld.o

$(BIN): $(OBJO)
	$(CC) $(OBJO) -o $(BIN)
helloworld.o:helloworld.c
	$(CC) -c helloworld.c -o helloworld.o
clean:
	rm -rf *o
