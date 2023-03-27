# Seabuild
Next gen C build tool, that generates makefile.

## Installing
First clone the repo and run the following commands in the directory:
```
make
sudo cp seabuild /usr/bin/
```

## Usage
To initialise a folder use: `seabuild -i`, then make is used to compile. Define options in `build.mk file`.

### Example `build.mk`
```make
SRC=main.c
CFLAGS += -O3 -pipe
LIBS += -lm
```
