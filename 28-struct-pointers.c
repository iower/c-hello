#include <string.h>
#include <stdio.h>

void main()
{
	struct student
	{
		char nm[60];
		unsigned char age;
		unsigned char course;
	};

	struct student st1;

	strcpy(st1.nm, "Name Surname");
	st1.age = 18;
	st1.course = 2;

	struct student *st1_p;
	st1_p = &st1;

	printf("%s | %u | %u \n", (*st1_p).nm, (*st1_p).age, (*st1_p).course);

	printf("%s | %u | %u \n", st1->nm, st1_p->age, st1_p->course);
}


