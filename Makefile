CC=gcc
CFLAGS=-O3 -pipe
LINKOPTS=
OUT=seabuild

all: main.o
	$(CC) *.o -o $(OUT) $(LINKOPTS)

main.o: src/main.c src/strings.h
	$(CC) -c src/main.c $(CFLAGS)

clean:
	rm *.o
	rm seabuild
