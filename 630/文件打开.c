#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	if( !(fp=fopen("E:\\yfx.txt","rb"))) //ע��Ҫ˫��\��    C�����д����ļ�����
	{
		printf("Can't open E:\\yfx.txt!\n");
		system("pause");    //ֻ����ͣ��dos���ڣ�ûʲôʵ������
	}
	else
	{
		printf("Open succeed!\n");
	}
}