#include <stdio.h>

void main()    //可以实现n!
{
	int i;
	int s;
	int f;
	printf("please input a number:\n");
	scanf("%d", &f );
	for (i=1 ;i<=f;i++)
	{
		if (i<=1)
		{
			s = 1;
		}
		else
		{
			s *= i; 
		}
	}
	printf("s = %d\n",s);

}   //该函数没有实现嵌套函数功能，下一个例子实现嵌套函数的功能