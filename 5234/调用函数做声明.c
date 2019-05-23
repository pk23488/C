#include <stdio.h>

void main()
{
	float add(float x,float y); //对被调用函数add的声明
	float a , b , c ;
	scanf("%f %f", &a, &b);
	c = add( a, b);
	printf("sum = %f\n",c);
}

float add(float x,float y)
{
	float z;
	z = x + y;
	return z;
}