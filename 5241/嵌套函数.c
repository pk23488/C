#include <stdio.h>

int square(int p);      //实现平方
int factorial(int q);  //实现阶乘

void main()
{
	int s;
	int i;
	for (i = 2; i <= 3; i++)
	{
		s = s + square(i);
	}
	printf("%d\n",s);

}

int square(int p)  //注意参数的作用
{
	int k;
	int r;
	int factorial(int);

	k = p*p;
	r = factorial(k);    //该函数不是只有平方的功能，还将平方后的值代入了阶乘
	return r;     
}

int factorial(int q)
{
	int i;
	int c;
	for (i = 1; i<= q; i++)  //注意参数的作用
	{
		c *=i;
	}
	return c;
}
