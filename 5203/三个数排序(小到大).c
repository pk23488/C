#include <stdio.h>

void main()

{
	int a,b,c,temp;
	printf("please input three numbers: ");
	scanf("%d%d%d",&a,&b,&c);    //如果是scanf("%d,%d,%d",&a,&b,&c)  在命令行输入的就要加上逗号，比如1,2,3
	if (a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a>c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b>c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d,%d,%d\n",a,b,c);   //每两个数字都要比一遍
}