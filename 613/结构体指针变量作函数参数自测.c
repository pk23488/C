#include <stdio.h>
#include <string.h>

void print(struct student);

struct student
{
	int num;
	char name[20];
	float score[3];
};

void main()
{
	struct student stu;
	stu.num = 8;
	strcpy(stu.name,"yanfeixu");   //如果想使用stu.name = "yanfeixu"的赋值方式，就要将name设置为char *name
	stu.score[0] = 99.5;           //和python中的直接name = "yanfeixu"是不一样的
	stu.score[2] = 99.1;
	stu.score[1] = 99.3;
	printf("\n");

	print(stu);
}

void print(struct student stu)
{
	printf("num = %d\n",stu.num);
	printf("name = %s\n",stu.name);
	printf("score_1 = %5.1f\n",stu.score[0]);
	printf("score_2 = %5.2f\n",stu.score[1]);
	printf("score_3 = %5.2f\n",stu.score[2]);

	printf("\n");
}

