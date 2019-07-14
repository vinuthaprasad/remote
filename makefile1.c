ABC.exe: fact1.o big3.1.o main1.o
        gcc -o ABC.exe fact1.o big3.1.o main1.o 
main1.o:
        gcc -c main1.c
fact1.o:
        gcc -c fact1.c
big3.1.o:
        gcc -c big3.1.c
