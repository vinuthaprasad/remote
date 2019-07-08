ABC.exe:main.o big3.o fact.o palin.o
	gcc -o ABC.exe main.o big3.o fact.o palin.o
main.o:main.c
	gcc -c main.c
big3.0:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
palin.o:palin.c
	gcc -c palin.c

