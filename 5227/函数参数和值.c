#include <stdio.h>

void main()
{
	int max(int x,int y);
	int a,b,c;
	printf("please input two numbers: \n");
	scanf("%d %d",&a,&b);
	c = max(a,b);
	printf("max = %d", c );
}

int max(int x, int y)
{
	int z;
	z = x > y ? x : y;  //此句的意思是取大值  
	return z;            //此句才是关键，如果需要调用函数的值，就需要用return返回结果
}
