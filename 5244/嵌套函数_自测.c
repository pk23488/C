#include <stdio.h>


int qths(int a);

void main()
{
	int i,s;
	printf("please input a number:\n");
	scanf("%d",&i);
	s = qths(i);
	printf("s = %d\n",s);
}


int qths(int a)
{
	int temp_result=1;
	int i;
	if (a ==0 || a==1)
	{
		temp_result = 1;
	}
/*	else if (a>1)
	{
		for (i=2; i<=a ; i++)
		{
			temp_result *= i;
		}
	}     �ⲿ�ֵĴ������������ѭ��,������õ�˼���ǵ�����˼��*/
	
	else if(a>1)
	{
		temp_result = qths(a-1)*a;     //�ⲿ�ֵĴ���Ӧ�õ���֪ʶ�ǵݹ��˼�� 
	}
	else 
	{
		printf("error number!\n");
	}
	return temp_result;
}
