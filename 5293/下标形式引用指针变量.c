#include <stdio.h>

void main()
{
	char *a ="i am a student!";
	int i;
	printf("such a character of a is %c\n",a[5]);   //ע����ߵ�ƥ���ַ���%c������%s�ַ���

	/*  �۲�һ�����Ϊ������
	for (i=0 ; i<=15 ; i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	*/


	for (i=0 ; a[i] != '\0' ; i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}