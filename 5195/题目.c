#include <stdio.h>
void main()
{
	char a,b,c;
	printf("input characters a,b,c\n");
	scanf("%c %c %c",&a,&b,&c);
	printf("%d,%d,%d\n%c,%c,%c\n",a,b,c,a-32,b-32,c-32);

}