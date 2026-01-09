#include <stdio.h>

void main() {
	printf("Enter:\n");
	int n;
	scanf("%d", &n);
	printf("n = %d, ", n);
	if (n == 0)
	{
		printf("zero\n");
	} else {
		printf("nonzero\n");
	}
}
