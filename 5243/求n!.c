#include <stdio.h>

void main()    //����ʵ��n!
{
	int i;
	int s;
	int f;
	printf("please input a number:\n");
	scanf("%d", &f );
	for (i=1 ;i<=f;i++)
	{
		if (i<=1)
		{
			s = 1;
		}
		else
		{
			s *= i; 
		}
	}
	printf("s = %d\n",s);

}   //�ú���û��ʵ��Ƕ�׺������ܣ���һ������ʵ��Ƕ�׺����Ĺ���