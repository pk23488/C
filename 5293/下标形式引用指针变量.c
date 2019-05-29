#include <stdio.h>

void main()
{
	char *a ="i am a student!";
	int i;
	printf("such a character of a is %c\n",a[5]);   //注意这边的匹配字符是%c，不是%s字符串

	/*  观察一下这个为甚不行
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