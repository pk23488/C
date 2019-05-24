#include <stdio.h>

void main()
{
	int i;
	int a[10] = {1,2,3,4,-1,-2,-3,-4,2,3};

	for (i = 0 ; i <=9 ; i++)
	{
		test(a[i]);
	}
	printf("\n");
}

int test(int a)
{
	if (a>0)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",0);
	}
}