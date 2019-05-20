#include <stdio.h>

void main()
{
	char c;
	printf("input a character: ");
	c = getchar();
	if (c<32)
	{
		printf("This is a character\n");
	}
	else if (c>='0' && c<='9')  //单引号表示字符所对应的ascll码
	{
		printf("This is a digit\n");
	}
	else if (c>='A' && c<='Z')
	{
		printf("This is a capital letter\n");
	}
	else if (c>='a' && c<='z')
	{
		printf("This is a small letter\n");
	}
	else 
	{
		printf("This is a other character\n");
	}
}