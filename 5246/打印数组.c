#include <stdio.h>

void main()
{
	int test(int a[10]);
	int s;
	int a[10] = {0,1,3,4,5,6,7,7,8,4};
	s = test(a);   //传递的是数组的名称
	printf("\n");
}



int test(int b[10])   //这边的数组参数也可以是b[10]、c[10]等等，这个只是个形参
{
	int i,s;
	for (i = 0; i<= 9; i++)
	{
		s = b[i];
		printf("%d ",s);
	}
}

