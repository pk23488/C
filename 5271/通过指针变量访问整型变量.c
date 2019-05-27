#include <stdio.h>

void main()
{
	int a,b;
	int *pointer_1, *pointer_2;
	a = 10;
	b = 20;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("a : %d,b : %d\n",a,b);
	printf("a : %d,b : %d\n",*pointer_1,*pointer_2);
}