CC=arm-linux-gnueabi-gcc
all: projbin

projbin: main.o add.o sub.o
    $(CC) -o projbin main.o add.o sub.o

main.o: main.cc
    $(CC) -c -o main.o main.c

add.o: add.c
    $(CC) -c -o add.o add.c

sub.o: sub.c
    $(CC) -c -o sub.o sub.c

clean:
    -

