#include <stdio.h>

void main()
{
	char a[] = "fishc.com",b[40];
	int i;

	for ( i=0 ; *(a+i) != '\0' ; i++ )
	{
		*(b+i) = *(a+i);  //½«×Ö·û´®a¸´ÖÆÎª×Ö·û´®b
	}
	*(b+i) = '\0';

	printf("string a: %s\n",a);
	printf("string b: ");
	for (i=0 ; b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	printf("\n\n");
}