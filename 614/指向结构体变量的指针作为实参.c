#include <stdio.h>
#include <string.h>

void print(struct student *p);  //�·��֣�����Ǻ��������������ǿ��Բ��ӵģ�����Ϊ�˴��빤�����������

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

	print(&stu);  //��Ϊ���������ָ����������Դ��ݸ�������ʵ�ξ��ǽṹ������ĵ�ַ
}

void print(struct student *p)  //���������ָ��
{
	printf("num = %d\n",p -> num);
	printf("name = %s\n",p -> name);
	printf("score_1 = %5.1f\n",p -> score[0]);
	printf("score_2 = %5.2f\n",p -> score[1]);
	printf("score_3 = %5.2f\n",p -> score[2]);

	printf("\n");
}

