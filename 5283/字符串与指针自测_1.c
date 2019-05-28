#include <stdio.h>

void main()
{
	char a[] = "fishc.com",b[40], *p1 , *p2 ;
	int i;

	p1 = a;
	p2 = b;
	for (i=0 ; *p1!='\0' ; p1++ , p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("string a: %s\n",a);
	printf("string b: ");
	for (i=0 ; b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	printf("\n\n");

	
}