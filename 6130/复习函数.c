#include <stdio.h>

void main()
{
	int max(int x,int y);  /* ��������*/
	int a, b, maxnum;
	printf("please input two nums:\n");
	scanf("%d,%d",&a,&b);
	
	maxnum = max(a,b);   //��������
	printf("maxnum = %d\n",maxnum);
}

int max(int x,int y)
{
	int z;
	z = (x > y)?x:y;
	return z;
}
