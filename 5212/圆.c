#include <stdio.h>

void main()

{
	double area,pi = 3.14;
	int r;
	for (r = 1; r<=10 ; r++)
	{
		area = pi*r*r;
		if (area>100)
		{
			break;   //当面积大于100时，跳出程序，注意break只能在循环中使用
		}
		else
		{
			printf("r = %d,area = %f\n",r,area);
		}
	}
}