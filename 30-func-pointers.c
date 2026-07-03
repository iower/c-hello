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

void add_student(student *res_st, unsigned int *student_counter, char *ch, unsigned int cr, unsigned int ag)
{
	strcpy(res_st->nm, ch);
	res_st->course = cr;
	res_st->age = ag;
	(*student_counter)++;
}

void print_student(student *st_p)
{
	printf("%-30s | %d course | %d age\n", st_p->nm, st_p->course, st_p->age);
}

void list(student *st, unsigned int *st_cnt)
{
	for (int i=0; i<(*st_cnt); i++)
	{
		printf("%d | ", i);
		print_student(st+i);
	}
	printf("\n");
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

	student st[20];
	unsigned int st_cnt = 0;

	for(int i=0; i<8; i++)
	{
		add_student(st+st_cnt, &st_cnt, "Aaa Bbb", i, 18+i);
	}

	list(st, &st_cnt);

	student_list st_list =
	{
		st,
		addCourse,
		addAge,
		modifyName,
		deletePos
	};

	st_list.addCourse(st+5);
	st_list.addAge(st+1);
	st_list.modifyName(st+2, "Changed name");

	list(st, &st_cnt);

	st_list.deletePos(st, 4, &st_cnt);

	list(st, &st_cnt);
}
