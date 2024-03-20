hello: hello.o main.o
	gss -o hello hello.o main.o
	
hello.o: hello.c
	gcc -o hello.o -c hello;c -W -Wall -ansi -pedantic
	
main.o: main.c hello.hello	
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic