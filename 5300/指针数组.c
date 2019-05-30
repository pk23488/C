#include <stdio.h>

//指针数组的使用
void main()
{
	int i;
	int a[5] = {1,3,5,7,9};
	int *name[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};

	for (i=0 ; i<5 ; i++)
	{
		printf("%d  ",*name[i]);
	}
	printf("\n\n");
}