#include <stdio.h>


//指针变量相减的结果就是地址索引号的相减
void main()
{
	int *p1,*p2,c;
	int a[] = {11,22,3,4};

	p1 = &a[0];
	p2 = &a[1];

	c = p2-p1;

	printf("%d\n",c);
}