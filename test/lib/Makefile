.PHONY: all

all:
	gcc -c lib.c -o lib.o -I$(DDPPATH)/lib/runtime/include
	ar cr libtestlib.a lib.o

clean:
	rm -f lib.o libtestlib.a