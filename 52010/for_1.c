#include <stdio.h>

void main()
{
	int i,sum = 0;
	for (i = 1;i <= 100;i++)    //for���ʵ�ּӵ�100��ע��for���������������ݵ���ʽ
	{
		sum = sum + i; 
	}
	printf("sum = %d\n",sum);
}