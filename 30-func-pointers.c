#include <stdio.h>
#include <string.h>

void print_str(const char *c_str)
{
	puts(c_str);
}

void my_mul_p(float a_f, float b_f, float *mul_f)
{
  *mul_f = a_f * b_f;
}

void my_sub_p(float a_f, float b_f, float *sub_f)
{
  *sub_f = a_f - b_f;
}

typedef struct
{
	char nm[60];
	unsigned char age;
	unsigned char course;
} student;

typedef struct
{
	student *st;
	void (*addCourse)(student *st);
	void (*addAge)(student *st);
	void (*modifyName)(student *st, char *ch);
	void (*deletePos)(student *st_list, unsigned int pos, unsigned int *student_counter);
} student_list;

void addCourse(student *st)
{
	st->course++;
}

void addAge(student *st)
{
	st->age++;
}

void modifyName(student *st, char *ch)
{
	strcpy(st->nm, ch);
}

void deletePos(student *st_list, unsigned int pos, unsigned int *student_counter)
{
	for(unsigned int i=pos; i<*student_counter-1; i++)
	{
		strcpy(st_list[i].nm, st_list[i+1].nm);
		st_list[i].age = st_list[i+1].age;
		st_list[i].course = st_list[i+1].course;
	}
	(*student_counter)--;
}

void main()
{
	unsigned int *print_str_addr;
	print_str_addr = (unsigned int *)print_str;
	printf("%p\n", (void *)print_str_addr);

	void (*print_str_new)(const char *c_str);
	print_str_new = (void *)print_str_addr;
	print_str_new("Hi!");

	print_str_new = print_str;
	print_str_new("Hi2!");

	void (*arith_operations[2])(float, float, float *) = {my_mul_p, my_sub_p};
	float a = 3., b = 5., res = .0;

	for(unsigned char i=0; i<2; i++)
	{
		arith_operations[i](a, b, &res);
		printf("Op %d: res = %f\n", i, res);
	}
}
