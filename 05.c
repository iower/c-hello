#include <stdio.h>

void hi();
int sum(int x, int y);
void printSum(int x, int y);

void main()
{
	hi();
	printSum(1, 2);
}


void hi()
{
	printf("Hi\n");
}

int sum(int x, int y)
{
	return x + y;
}

void printSum(int x, int y)
{
	printf("%d + %d = %d\n", x, y, sum(x, y));
}

