#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[20];
	float score[3];
};

void print(struct student);

void main()
{
	struct student stu;
	stu.num = 8;
	strcpy(stu.name,"yanfeixu");  //如果想使用stu.name = "yanfeixu"复制方法,就需要将name设置为指针变量char *name[20]。
	stu.score[0] = 99.5;
	stu.score[1] = 99.3;
	stu.score[2] = 99.1;

	print(stu);
}

void print(struct student stu)
{
	printf("num:%d\n",stu.num);
	printf("name:%s\n",stu.name);
	printf("score_1:%f\n",stu.score[0]);
	printf("score_2:%f\n",stu.score[1]);
	printf("score_3:%f\n",stu.score[2]);
	printf("\n");
}