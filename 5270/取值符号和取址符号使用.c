#include <stdio.h>

void main()
{
	int i = 2000;
	int *pointer;
	pointer = &i;
	printf("i的大小为：%d\ni的地址为：%d\n",*pointer,pointer);
}