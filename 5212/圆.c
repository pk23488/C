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
			break;   //���������100ʱ����������ע��breakֻ����ѭ����ʹ��
		}
		else
		{
			printf("r = %d,area = %f\n",r,area);
		}
	}
}