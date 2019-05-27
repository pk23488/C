#include <stdio.h>

void main()
{
	void exchange(int *pointer_1,int *pointer_2,int *pointer_3);
	int *p1,*p2,*p3;
	int a,b,c;
	printf("please input three numbers:\n");
	scanf("%d %d %d",&a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	/* 我这个判断的想法是不可以的，因为if (a<b || a<c || b<c)之后只会交换两个数，第三个数还没有比较
	{
		exchange(pointer_1,pointer_2,pointer_3);
	}  */
	exchange(p1,p2,p3);
	printf("the array of from max to min is : %d %d %d\n",*p1,*p2,*p3);
}

void exchange(int *pointer_1,int *pointer_2,int *pointer_3)
{
	void swap(int *q1,int *q2);
	int q1,q2,q3;
	if (*pointer_1<*pointer_2)    //加星号之后表示的指针指向的值
	{
		swap(pointer_1,pointer_2);  //这边调用的话参数表示的依然是指针所指向的值，注意区分
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

	temp = *q1;  //加星号之后表示的是指针所指向的值
	*q1 = *q2;
	*q2 = temp;
}