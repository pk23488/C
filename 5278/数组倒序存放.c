#include <stdio.h>

void reverse(int a[],int n);
void main()
{
	int i,a[10] = {1,2,3,4,5,6,7,8,9,0};
	printf("origin array:\n");
	for (i=0 ; i<=9 ;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");

	reverse(a,10);

	printf("now array:\n");

	for (i=0 ; i<=9 ;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

void reverse(int a[],int n)  //ע�ⲻ��Ҫ����a[i]����i�Ĵ�С���ڵ��õ�ʱ����������٣���ô����ͻ��Զ����ɶ�Ӧ�ĳ���
{
	int temp,i,j,m;
	m = (n-1)/2;
	for (i=0 ; i<=m ; i++)
	{
		j = n-1-i;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}