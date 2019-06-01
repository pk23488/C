#include <stdio.h>

#define NUM 3

struct person
{
	char name[20];
	char phone[10];
};  //这边是要加分号的

void main()
{
	struct person man[NUM];  //定义结构体数组
	int i;

	for (i=0 ; i<=NUM ; i++)
	{
		printf("please input name:\n");
		gets(man[i].name);  //结构体数组元素获取方法
		printf("please input phone:\n");
		gets(man[i].phone);
	}
	printf("\tname\t\t\t\tphone\n\n");
	for (i=0 ; i<NUM ; i++)
	{
		printf("%20s\t\t\t\t%20s\n",man[i].name,man[i].phone);
	}

}