#include <stdio.h>


double power(double x, double y);    //函数声明，也可以放在main函数里面

void main()
{
	double x = 3.0, y = 3.0, z;	
	
	z = power(x,y);  //函数调用
	printf("%.1f to the power of %.1f is %.1f\n",x , y , z);
}

double power(double x, double y)   //函数定义
{
	double z = 1;
	while(y)
	{
		z *= x;
		--y;  //该循环指的是计算指数函数
	}
	return z;
}