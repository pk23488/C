#include <stdio.h>

/* ��һ �±귨 
void main()
{
	int i;
	int a[10];
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]); //��������10������
	}
	printf("\n");
	for (i=0 ; i<=9 ;  i++)
	{
		printf("%d  \n",a[i]);
	}
}  */ 

/* ����
void main()
{
	int i;
	int a[10];
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");


	for (i=0 ; i<=9 ; i++)
	{
		printf("%d",*(a+i));  //�˴���ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ  *(a+i) �൱���ǻ������Ķε�ַ+ƫ�Ƶ�ַ
	}

} */

void main()
{
	int i;
	int a[10];
	int *q;
	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");

	for (q=a ; q<=(a+10) ;q++) //�˴���q��������������Ϊ<=(a+10)��������q<=9ԭ����ָ��ָ���Ӧ�����ֽڵ�λ�ã����������ֵĴ�С
	{
		printf("%d",*q);
	}
}





