#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	printf("please input a character:\n");
	ch = getchar();
	
	while(!(ch>'A' && ch<'z') || (ch>'Z' && ch<'a'))
	{
		printf("输入有误，请重新输入一个字母:\n");
		ch = getchar();
	}
	if (ch & 32)   //如果第五位是1
	{
		ch = ch & 223;    //使第五位为0，变成大写
	}
	else     
	{
		ch = ch | 255;   //使第五位为1，变成小写
	}

	putchar(ch);

	ch = getchar();
	putchar(ch);
}