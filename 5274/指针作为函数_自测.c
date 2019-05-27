#include <stdio.h>

void swap(int *pointer_1,int *pointer_2);

void main()
{
	int a,b;
	int *pointer_1,*pointer_2;
	printf("please input two numbers:\n");
	scanf("%d %d",&a,&b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a<b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("max = %d,min = %d\n",*pointer_1,*pointer_2);
}


void swap(int *pointer_1,int *pointer_2)
{
	int temp;
	printf("hello,i am swapping...\n");
	printf("please waittinf ^_^\n");

	temp = *pointer_1;
	*pointer_1 = *pointer_2;
	*pointer_2 = temp;
}