#include <stdio.h>

int main() {
	int i = 10;
	while (i)
	{
		printf("i = %d\n", i);
		i--;
	}

	i = 10;

	do
	{
		printf("i = %d\n", i);
		i--;
	} while (i);

	for (i = 10; i >0; i--)
	{
		printf("i = %d\n", i);
	}

	return 0;
}
