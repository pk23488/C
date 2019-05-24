#include <stdio.h>

long square(int p);
long factorial(int q);

void main()
{
	int i;
	long result = 0;
	for (i=2 ; i<=3 ; i++)
	{
		result = result + sqare(i);	
	}
	printf("result = %ld\n",result);
}


long square(int p)
{
	int k;
	long s;
	k = p*p;
	s = factorial(k);
	return s;
}


long factorial(int q)
{
	int i;
	long c;
	for (i=1 ; i<=q ; i++)
	{
		c *= i;
		return c;
	}
}