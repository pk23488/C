#include <stdio.h>

void main()
{
	char ch;
	scanf("%c",&ch);
	ch = (ch>='A' && ch<='Z')? (ch+32):ch;
	printf("%c\n",ch);
}
