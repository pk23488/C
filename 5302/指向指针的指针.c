#include <stdio.h>

void main()
{
	char *name[] = {"who","are","you"};
	char **p;
	int i;

	for (i=0 ; i<3 ; i++)
	{
		p = name + i;
		printf("%s\n",*p);
	}
}