#include <stdio.h>

void swap(int *pointer_1,int *pointer_2);

void main()
{
	int a ,b;
	int *pointer_1,*pointer_2;
	printf("please input two numbers: \n");
	pointer_1 = &a;
	pointer_2 = &b;
	scanf("%d %d", &a ,&b);
	if (a<b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("max = %d,min = %d\n",*pointer_1,*pointer_2);
}


void swap(int *pointer_1,int *pointer_2)   //����Ҫ����ֵ�Ļ�ʹ��void
{
	int temp;
	printf("hello,i am swapping...\n");
	printf("please waitting ^_^\n");

	temp = *pointer_1;  //�൱��temp = a
	*pointer_1 = *pointer_2;   //�൱�� a = b
	*pointer_2 = temp;   //�൱��b = temp

}