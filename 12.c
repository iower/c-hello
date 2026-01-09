#include <stdio.h>

void main() {
	int n;
	while (1)
	{
		scanf("%d", &n);
		printf("%s",
			n == 1 ? "one\n" :
			n == 2 ? "two\n" :
			"more\n"
		);
	}
}
