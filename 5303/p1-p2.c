#include <stdio.h>


//ָ���������Ľ�����ǵ�ַ�����ŵ����
void main()
{
	int *p1,*p2,c;
	int a[] = {11,22,3,4};

	p1 = &a[0];
	p2 = &a[1];

	c = p2-p1;

	printf("%d\n",c);
}