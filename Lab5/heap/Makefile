all:
	gcc -w bins.c -o bins ptmalloc2/libmalloc.a -lpthread
	gcc -w fastbin.c -o fastbin ptmalloc2/libmalloc.a -lpthread
	gcc -w chunk.c -o chunk ptmalloc2/libmalloc.a -lpthread

