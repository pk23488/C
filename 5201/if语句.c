#include <stdio.h>

void main()
{
	int a,b,max;
	printf("input two numbers: ");
	scanf("%d%d",&a,&b);
	max = a;
	if (max<b)
	{
		printf("max = %d\n",b);
	}
	else
	{
		printf("max = %d\n",a);
	}
}