#include <stdio.h>

struct student
{
	long num;
	float score;
	struct student *next;  //ָ����һ��student�ṹ���ָ�룬�������ǳ���Ҫ
};

void main()
{
	struct student a,b,c,*head;

	a.num = 12;   //����ļ��д����൱���Ǵ�����a,b,c����ʵ���ṹ��
	a.score = 100.1;
	b.num = 10;
	b.score = 100.3;
	c.num = 11;
	c.score = 100.2;

	head = &a;    //�����ʹ��
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	do 
	{
		printf("%ld,%5.1f\n",head -> num,head -> score);
		head = head -> next;
	}while(head);   

}