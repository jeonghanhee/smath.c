all: test

test: test.c smath.h distance.h vector.h
	gcc -o test test.c