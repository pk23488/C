#include <stdio.h>

#define SQ(y) ((y)*(y)) //也是涉及到计算的优先级问题，如果是(y)*(y)，那么计算的结果就是不一样的

void main()
{
	int a,sq;
	printf("please input a number:\n");

	scanf("%d",&a);
	sq = 160/SQ(a+1);  // 此时的计算公式160/((3+1)*(3+1))
	printf("sq = %d\n\n",sq);
}