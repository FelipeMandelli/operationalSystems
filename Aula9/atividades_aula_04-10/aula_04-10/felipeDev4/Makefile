all:
	gcc -W -Wall -Wextra -pedantic -std=c17 -fPIC -c util.c -o util.o
	gcc -shared -fPIC -o libutil.so util.o

	gcc -W -Wall -Wextra -pedantic -std=c17 -c main.c -o main.o
	gcc main.o -L. -lutil -Wl,-rpath=. -o felipeDev4

clean:
	rm -f main.o
	rm -f util.o
	rm -f libutil.so
	rm -f felipeDev4