#include <stdio.h>

void main()

{
	char c;
	for ( ;(c = getchar())!='\n'; )   //除了回车键，其他键入的字符全部打印下来
	{
		printf("%c",c);
	}
}