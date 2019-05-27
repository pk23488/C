#include <stdio.h>

/* 法一 下标法 
void main()
{
	int i;
	int a[10];
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]); //依次输入10个数字
	}
	printf("\n");
	for (i=0 ; i<=9 ;  i++)
	{
		printf("%d  \n",a[i]);
	}
}  */ 

/* 法二
void main()
{
	int i;
	int a[10];
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");


	for (i=0 ; i<=9 ; i++)
	{
		printf("%d",*(a+i));  //此处是通过数组名计算数组元素地址，找出元素的值  *(a+i) 相当于是汇编里面的段地址+偏移地址
	}

} */

void main()
{
	int i;
	int a[10];
	int *q;
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");

	for (q=a ; q<=(a+10) ;q++) //此处的q的条件限制条件为<=(a+10)，而不是q<=9原因是指针指向的应该是字节的位置，而不是数字的大小
	{
		printf("%d",*q);
	}
}





