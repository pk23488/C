#include <stdio.h>


double power(double x, double y);    //����������Ҳ���Է���main��������

void main()
{
	double x = 3.0, y = 3.0, z;	
	
	z = power(x,y);  //��������
	printf("%.1f to the power of %.1f is %.1f\n",x , y , z);
}

double power(double x, double y)   //��������
{
	double z = 1;
	while(y)
	{
		z *= x;
		--y;  //��ѭ��ָ���Ǽ���ָ������
	}
	return z;
}