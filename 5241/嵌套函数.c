#include <stdio.h>

int square(int p);      //ʵ��ƽ��
int factorial(int q);  //ʵ�ֽ׳�

void main()
{
	int s;
	int i;
	for (i = 2; i <= 3; i++)
	{
		s = s + square(i);
	}
	printf("%d\n",s);

}

int square(int p)  //ע�����������
{
	int k;
	int r;
	int factorial(int);

	k = p*p;
	r = factorial(k);    //�ú�������ֻ��ƽ���Ĺ��ܣ�����ƽ�����ֵ�����˽׳�
	return r;     
}

int factorial(int q)
{
	int i;
	int c;
	for (i = 1; i<= q; i++)  //ע�����������
	{
		c *=i;
	}
	return c;
}
