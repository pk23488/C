#include <stdio.h>
#include <string.h>

void print(struct student *);  

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
	strcpy(stu.name,"yanfeixu");   
	stu.score[0] = 99.5;           
	stu.score[2] = 99.1;
	stu.score[1] = 99.3;
	printf("\n");

	print(&stu);  //因为参数变成了指针变量，所以传递给函数的实参就是结构体变量的地址
}

void print(struct student *p)  //参数变成了指针
{
	printf("num = %d\n",p -> num);
	printf("name = %s\n",p -> name);
	printf("score_1 = %5.1f\n",p -> score[0]);
	printf("score_2 = %5.2f\n",p -> score[1]);
	printf("score_3 = %5.2f\n",p -> score[2]);

	printf("\n");
}

