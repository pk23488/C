#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	printf("please input a character:\n");
	ch = getchar();
	
	while(!(ch>'A' && ch<'z') || (ch>'Z' && ch<'a'))
	{
		printf("������������������һ����ĸ:\n");
		ch = getchar();
	}
	if (ch & 32)   //�������λ��1
	{
		ch = ch & 223;    //ʹ����λΪ0����ɴ�д
	}
	else     
	{
		ch = ch | 255;   //ʹ����λΪ1�����Сд
	}

	putchar(ch);

	ch = getchar();
	putchar(ch);
}