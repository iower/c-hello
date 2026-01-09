#include <stdio.h>

void main() {
	int n;
	while (1)
	{
		scanf("%d", &n);
		switch(n)
		{
			case 1:
				printf("one\n");
				break;
			case 2:
				printf("two\n");
				break;
			default:
				printf("more\n");
		}
	}
}
