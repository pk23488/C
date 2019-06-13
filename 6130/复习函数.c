#include <stdio.h>

void main()
{
	int max(int x,int y);  /* 函数声明*/
	int a, b, maxnum;
	printf("please input two nums:\n");
	scanf("%d,%d",&a,&b);
	
	maxnum = max(a,b);   //函数调用
	printf("maxnum = %d\n",maxnum);
}

int max(int x,int y)
{
	int z;
	z = (x > y)?x:y;
	return z;
}
