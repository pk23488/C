#include <stdio.h>

void main()
{
	float max(float x,float y);
	float a , b , c ;

	scanf("%f,%f", &a,&b);
	c = max(a,b);
	printf("max = %f\n",c);
}

float max(float x,float y)    //ע����ߺ�������ı�﷽ʽ
{
	float z;
	z = x > y ? x : y;
	return z;
}