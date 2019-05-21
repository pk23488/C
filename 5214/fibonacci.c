#include <stdio.h>
void main()
{
	long int f1 = 1,f2 = 1, i;
	for (i=1 ; i<=20 ; i++)
		{
			f1 = f1 + f2;
			f2 = f1 + f2;
			
		}

	printf("sum = %d\n",f2);
}