/*******************************************************/
/*��һ��process�������ڵ�������ʱ��ÿ��ʵ�ֲ�ͬ�Ĺ���***/
/*����a��b����������һ�ε���process��ʱ��������ֵ��*/
/*�ڶ��ε��õ�ʱ�������Сֵ�������ε������a��b֮��.*/

#include <stdio.h>

void main()
{
	int max(int,int); //��������
	int min(int,int); //��������
	int add(int,int); //��������

	void process(int x,int y,int (*fun)()); //��������,����ĺ�����ָ��ֱ�ָ��ͬ�ĺ���
	
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);

	printf("max = ");
	process(a,b,max);

	printf("min = ");
	process(a,b,min);

	printf("add = ");
	process(a,b,add);
}

int max(int x,int y)
{
	int z;
	z = (x>y)?x:y;
	return z;
}