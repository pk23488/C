#include <stdio.h>

#define MAX(a,b) (a>b)?a:b   //注意这边宏定义的格式

void main()
{
	int x , y, max;
	printf("please input two numbers:\n");
	scanf("%d %d",&x,&y);
	max = MAX(x,y);

	printf("max = %d \n\n",max);
}