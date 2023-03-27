#pragma once
#define STRINGS_H

#define HELP "\
\
Seabuild\n\n\
\
Opts:\n\
    -h: Shows this text\n \
    -i: Init in the current folder\n \
"\

static const char* MAKEFILE = "\
CC=gcc\n\
CFLAGS=-O3 -pipe\n\
LINKOPTS=\n\
LIBS=\n\
OUT=out\n\
include build.mk\n\
\n\
all: *.o\n\
	$(CC) *.o -o $(OUT) $(LINKOPTS)\n\
\n\
*.o: $(SRC)\n\
	$(CC) -c $^ $(CFLAGS)\n\
";

