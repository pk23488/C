#include <stdio.h>

#define SQ(y) ((y)*(y)) //Ҳ���漰����������ȼ����⣬�����(y)*(y)����ô����Ľ�����ǲ�һ����

void main()
{
	int a,sq;
	printf("please input a number:\n");

	scanf("%d",&a);
	sq = 160/SQ(a+1);  // ��ʱ�ļ��㹫ʽ160/((3+1)*(3+1))
	printf("sq = %d\n\n",sq);
}