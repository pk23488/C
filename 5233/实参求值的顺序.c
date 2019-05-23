#include <stdio.h>

void main()     //stdcall 调用方式
{
	int f(int a,int b);/* 函数声明，这里是要加分号的，因为是在main函数内部*/
	int i = 2, p ;
	p = f( i, i++ );  //函数的调用
	printf("%d\n",p);  //scanf("%d\n",&a)，这是要输入回车键的，printf是打印回车键
}

int f(int a,int b )   //函数定义
{
	int c;  //这里注意一下，不要用在定义a,b了，因为参数里面已经定义过了
	if (a > b)
	{
		c = 1;
	}
	else if (a == b)
	{
		c =0;
	}
	else 
	{
		c = -1;
	}
	return c;   //这边我当时写的结果是代码printf("c = %d",c)
}
//程序输出的结果是0，就说明此时i和i++是相等的，因此调用参数的方向是从右向左