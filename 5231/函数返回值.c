#include <stdio.h>

void main()
{
	float max(float x,float y);
	float a , b , c ;

	scanf("%f,%f", &a,&b);
	c = max(a,b);
	printf("max = %f\n",c);
}

float max(float x,float y)    //注意这边函数定义的表达方式
{
	float z;
	z = x > y ? x : y;
	return z;
}