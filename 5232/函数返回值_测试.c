#include <stdio.h>

void main()
{
	float max(float x,float y);   //注意此处是需要分号的，因为是调用，下面的是不需要的，因为是直接定义函数
	float a , b , c ;

	scanf("%f,%f" , &a, &b );
	c = max( a , b );
	printf("max = %f\n",c);

}

float max(float x,float y)
{
	float z ;   //当时自己还定义了float x,y   这里不需要，因为在形参里面已经定义过了
	z = x > y ? x:y;  //此句的格式一定要记清楚
	return z;
}
