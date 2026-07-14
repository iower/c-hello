#include <stdio.h>

void main(int argc, char *argv[])
{
	printf("argument count = %d\n", argc);
	for (int i=0; i<argc; i++)
	{
		printf("%d | %s\n", i+1, argv[i]);
	}
}
