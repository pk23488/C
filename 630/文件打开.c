#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	if( !(fp=fopen("E:\\yfx.txt","rb"))) //注意要双“\”    C语言中代开文件函数
	{
		printf("Can't open E:\\yfx.txt!\n");
		system("pause");    //只是暂停在dos窗口，没什么实际作用
	}
	else
	{
		printf("Open succeed!\n");
	}
}