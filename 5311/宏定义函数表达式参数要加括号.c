#include <stdio.h>

#define SQ(y) (y)*(y)    //�������y*y��������̾���a+1*a+1,���ݼ�������ȼ�������ͻ��(y)*(y)��һ��

void main()
{
	int a,sq;
	printf("please input a:\n");

	scanf("%d",&a);
	sq = SQ(a+1);
	printf("sq = %d\n\n",sq);
}