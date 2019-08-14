hello:helloworld.o
	gcc helloworld.o -o hello
helloworld.o:helloworld.c
	gcc -c helloworld.c -o helloworld.o
clean:
	rm -rf *o