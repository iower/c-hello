#include <stdio.h>
#include <string.h>

void print_str(const char *c_str)
{
	printf("%s\n", c_str);
}

void print_chars(const char *c_str)
{
	int i = 0;
	while (c_str[i])
	{
		printf("%c\n", c_str[i]);
		i++;
	}
}

void print_uint32_arr(const unsigned int *p_uint, unsigned int len)
{
	int i=0;
	while(len)
	{
		printf("0x%08X\n", p_uint[i]);
		len--;
		i++;
	}
}

void my_sum_p(float a_f, float b_f, float *sum_f)
{
	*sum_f = a_f + b_f;
}

void my_div_p(float a_f, float b_f,float *div_f)
{
	*div_f = a_f / b_f;
}

typedef struct
{
	char nm[60];
	unsigned char age;
	unsigned char course;
} student;

void print_student(student *st_p)
{
	printf("%-30s | %d course | %d age\n", st_p->nm, st_p->course, st_p->age);
}

void print_student_void(void *st_p)
{
	typedef struct
	{
		char nm[60];
		unsigned char age;
		unsigned char course;
	} stdn;
	printf("%-30s | %d course | %d age\n", ((stdn*)st_p)->nm, ((stdn*)st_p)->course, ((stdn*)st_p)->age);
}

void add_student(student *res_st, unsigned int *student_counter, char *ch, unsigned int cr, unsigned int ag)
{
	strcpy(res_st->nm, ch);
	res_st->course = cr;
	res_st->age = ag;
	(*student_counter)++;
}

void main()
{
	char c_str[] = "a";
	print_str(c_str);

	char ch2[2];
	ch2[0] = 'b';
	ch2[1] = '\0';
	print_str(ch2);

	char str1[30] = {};
	strcpy(str1, "Hello!");
	print_str(str1);

	print_str("Second string");
	print_chars(str1);

	printf("-\n");

	unsigned int a[10] = {
		0x33333333,
		0x44444444,
		0x55555555,
		0x66666666,
		0x77777777,
		0x88888888,
		0x99999999,
		0xAAAAAAAA,
		0xBBBBBBBB,
		0xCCCCCCCC
	};

	print_uint32_arr(a, 5);
	printf("-\n");

	print_uint32_arr(a, 10);
	printf("-\n");

	float res = .0;
	my_sum_p(1.11, 2.22, &res);
	printf("sum %f\n", res);

	my_div_p(10., 3., &res);
	printf("sum %f\n", res);

	student st;
	strcpy(st.nm, "Name Surname");
	st.age = 18;
	st.course = 2;

	print_student(&st);
	print_student_void(&st);

	printf("-\n");
	student students[20];
	unsigned int st_cnt = 0;
	for(int i=0; i<10; i++) add_student(&students[st_cnt], &st_cnt, "Student", i, 10+i);

	for(int i=0; i<st_cnt; i++) print_student(&students[i]);
	printf("-\n");

	for(int i=0; i<st_cnt; i++) print_student(students+i);
}
