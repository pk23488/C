#include <stdio.h>

void main()     //stdcall ���÷�ʽ
{
	int f(int a,int b);/* ����������������Ҫ�ӷֺŵģ���Ϊ����main�����ڲ�*/
	int i = 2, p ;
	p = f( i, i++ );  //�����ĵ���
	printf("%d\n",p);  //scanf("%d\n",&a)������Ҫ����س����ģ�printf�Ǵ�ӡ�س���
}

int f(int a,int b )   //��������
{
	int c;  //����ע��һ�£���Ҫ���ڶ���a,b�ˣ���Ϊ���������Ѿ��������
	if (a > b)
	{
		c = 1;
	}
	else if (a == b)
	{
		c =0;
	}
	else 
	{
		c = -1;
	}
	return c;   //����ҵ�ʱд�Ľ���Ǵ���printf("c = %d",c)
}
//��������Ľ����0����˵����ʱi��i++����ȵģ���˵��ò����ķ����Ǵ�������