#include <stdio.h>
#include <stdlib.h>

#include "ptmalloc2/malloc.h"

int main()
{
	printf("This file demonstrates a simple double-free attack with fastbins.\n");

	printf("Allocating 3 buffers.\n");
	int *a = malloc(30);
	int *b = malloc(30);
	int *c = malloc(30);

	printf("1st malloc: %p\n", a);
	printf("2nd malloc: %p\n", b);
	printf("3rd malloc: %p\n", c);

	free(a);


	free(b);

	free(a);

	int *d = malloc(30);
	printf("4th malloc: %p\n", d);

	
	printf("%p", *d);
	printf("%p", *(d+8));
	main_arena_info(1);

}
