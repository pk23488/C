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
	exchange(p1,p2,p3);  //������ԭ��д����exchange(a,b,c),�ǲ��Եģ���Ϊ�ú����Ĳ���Ӧ����ָ�����
	printf("the array from max to min is :%d %d %d\n",*p1,*p2,*p3);
}

void exchange(int *pointer_1,int *pointer_2,int *pointer_3)   //����ӵĲ����൱��ֱ�Ӷ�����ָ�����
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