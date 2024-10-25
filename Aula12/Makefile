all:
	gcc -W -Wall -Wextra -pedantic -std=c17 -c main.c -o main.o

	gcc main.o -o ctrlF

	gcc -W -Wall -Wextra -pedantic -std=c17 -c mainSyscall.c -o mainSyscall.o

	gcc mainSyscall.o -o ctrlFSys


clean:
	rm -f main.o
	rm -f ctrlF
	rm -f ctrlFSys