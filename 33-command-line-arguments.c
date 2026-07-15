#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	printf("argument count = %d\n", argc);
	for (int i=0; i<argc; i++)
	{
		printf("%d | %s\n", i+1, argv[i]);
	}
	printf("end: 0x%p\n", (void *)(argv[argc]));

	if (argv[1][0] == '-' && argv[1][1] == 'c') {
		int c = atoi(argv[2]);
		printf("count: %i\n", c);
	}
}
