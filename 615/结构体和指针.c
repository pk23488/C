#include <stdio.h>

struct student
{
	long num;
	float score;
	struct student *next;  //指向下一个student结构体的指针，这个定义非常重要
};

void main()
{
	struct student a,b,c,*head;

	a.num = 12;   //下面的几行代码相当于是创建了a,b,c三个实例结构体
	a.score = 100.1;
	b.num = 10;
	b.score = 100.3;
	c.num = 11;
	c.score = 100.2;

	head = &a;    //链表的使用
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	do 
	{
		printf("%ld,%5.1f\n",head -> num,head -> score);
		head = head -> next;
	}while(head);   

}