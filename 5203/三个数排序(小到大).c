#include <stdio.h>

void main()

{
	int a,b,c,temp;
	printf("please input three numbers: ");
	scanf("%d%d%d",&a,&b,&c);    //�����scanf("%d,%d,%d",&a,&b,&c)  ������������ľ�Ҫ���϶��ţ�����1,2,3
	if (a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a>c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b>c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d,%d,%d\n",a,b,c);   //ÿ�������ֶ�Ҫ��һ��
}