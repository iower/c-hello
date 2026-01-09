#include <stdio.h>
#include <string.h>

void main() {
	int a[10];
	a[0] = 0;
	a[1] = 1;
	a[1]++;
	for (int i = 0; i < 10; i++)
	{
		printf("%d|%d\n", i, a[i]);
	}

	printf("===\n");

	int b[10] = {0,1,2,3,4,5,6,7,8,9};

	for (int i = 0; i < 10; i++)
	{
		printf("%d|%d\n", i, b[i]);
	}

	char str1[5] = {'H', 'i', '!', '\0', '\0'};
	printf("%s\n", str1);

	char str2[5] = {"Hi!"};
	printf("%s\n", str2);

	strcpy(str2, "Oi!");
	printf("%s\n", str2);

	strcpy(str2, "Oi2!");
	printf("%s\n", str2);

	char str3[] = "test";
	printf("%s\n", str3);

	int n[3][2] = {{11, 12}, {21, 22}, {31, 32}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
	
}
