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
	/* ������жϵ��뷨�ǲ����Եģ���Ϊif (a<b || a<c || b<c)֮��ֻ�ύ��������������������û�бȽ�
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
	if (*pointer_1<*pointer_2)    //���Ǻ�֮���ʾ��ָ��ָ���ֵ
	{
		swap(pointer_1,pointer_2);  //��ߵ��õĻ�������ʾ����Ȼ��ָ����ָ���ֵ��ע������
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

	temp = *q1;  //���Ǻ�֮���ʾ����ָ����ָ���ֵ
	*q1 = *q2;
	*q2 = temp;
}