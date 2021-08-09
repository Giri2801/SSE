#include <stdio.h>
#include <stdlib.h>

#include "ptmalloc2/malloc.h"

int main()
{
	printf("This file demonstrates a simple double-free attack with fastbins.\n");

	printf("Allocating 3 buffers.\n");
	int *a = malloc(200);
	int *b = malloc(422);
	int *c = malloc(300);
	int *d = malloc(256);
	int *e = malloc(256);
	int *f = malloc(256);
	int *g = malloc(256);

	printf("a malloc: %p\n", a);
	printf("b malloc: %p\n", b);
	printf("c malloc: %p\n", c);
	printf("d malloc: %p\n", d);
	printf("e malloc: %p\n", e);
	printf("f malloc: %p\n", f);
	printf("g malloc: %p\n", g);

	free(e);
	free(f);
	free(c);

	free(a);


	main_arena_info(2);

}
