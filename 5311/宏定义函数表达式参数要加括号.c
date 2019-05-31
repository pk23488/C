#include <stdio.h>

#define SQ(y) (y)*(y)    //如果换成y*y，计算过程就是a+1*a+1,根据计算的优先级，结果就会和(y)*(y)不一样

void main()
{
	int a,sq;
	printf("please input a:\n");

	scanf("%d",&a);
	sq = SQ(a+1);
	printf("sq = %d\n\n",sq);
}