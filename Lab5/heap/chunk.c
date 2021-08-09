#include <stdio.h>
#include "ptmalloc2/malloc.h"


int main(int argc, char **argv)
{
	int *a;
	int *b;
	int *c;
	int *d;
	int *e;

	a = (int *) malloc(10);
	b = (int *) malloc(10);
	c = (int *) malloc(10);
	d = (int *) malloc(10);
	
	printf("a : %x\n", a);
	printf("b : %x\n", b);
	printf("c : %x\n", c);
	printf("d : %x\n", d);

	free(b);
	free(d);
	free(c);

	printf("xxxx\n");

	main_arena_info(1);


	e = (int *) malloc(10);
	printf("e : %x\n", e);

	main_arena_info(1);

	
}
