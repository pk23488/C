#include <stdio.h>


void exchange(int *pointer_1,int *pointer_2,int *pointer_3);
void swap(int *q1,int *q2);

void main()
{

	int a,b,c;
	int *p1,*p2,*p3;
	printf("please input three numbers:\n");
	p1 = &a;
	p2 = &b;
	p3 = &c;
	scanf("%d %d %d",&a,&b,&c);
	exchange(p1,p2,p3);  //这里我原本写的是exchange(a,b,c),是不对的，因为该函数的参数应该是指针变量
	printf("the array from max to min is :%d %d %d\n",*p1,*p2,*p3);
}

void exchange(int *pointer_1,int *pointer_2,int *pointer_3)   //这里加的参数相当于直接定义了指针变量
{

	if (*pointer_1<*pointer_2)
	{
		swap(pointer_1,pointer_2);
	}
	if (*pointer_1<*pointer_3)
	{
		swap(pointer_1,pointer_3);
	}
	if (*pointer_2<*pointer_3)
	{
		swap(pointer_2,pointer_3);
	}
}

void swap(int *q1,int *q2)
{
	int temp;
	temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}