/*******************************************************/
/*设一个process函数，在调用他的时候每次实现不同的功能***/
/*输入a和b两个数，第一次调用process的时候，求出最大值，*/
/*第二次调用的时候，求出最小值，第三次调用求出a、b之和.*/

#include <stdio.h>

void main()
{
	int max(int,int); //函数声明
	int min(int,int); //函数声明
	int add(int,int); //函数声明

	void process(int x,int y,int (*fun)()); //函数声明,里面的函数的指针分别指向不同的函数
	
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);

	printf("max = ");
	process(a,b,max);

	printf("min = ");
	process(a,b,min);

	printf("add = ");
	process(a,b,add);
}

int max(int x,int y)
{
	int z;
	z = (x>y)?x:y;
	return z;
}