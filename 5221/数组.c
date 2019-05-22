#include <stdio.h>

void main()
{
	int i,a[10];       //在这里还可以初始化数组 int i, a[10] = {0,1,2,3,4,5,6,7,8,9}
	for (i=0 ; i<=9 ; i++)
	{
		a[i] = i;
		printf("%d ",a[i]);  //程序运行到这里可以正序排列数组的内容
	}
	printf("\n");
	for (i = 9; i>=0 ; i--)
	{
		printf("%d ",a[i]);  //程序运行到这里可以倒序排列出数组的内容
	}
	printf("\n");

	
}