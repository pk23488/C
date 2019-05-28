#include <stdio.h>

void sort(int x[],int n);

void main()
{
	int *p , i;
	int a[10] = {2,31,4,6,5,7,9,8,1,0};
	printf("origin array:\n");
	for (i=0 ; i<=9; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");

	p = a;
	printf("now array:\n");
	for (p=a,i=0 ; i<=9 ;i++)
	{
		printf("%d",*p);
		p++;
	}
	printf("\n");
}


void sort(int x[],int n )
{
	int i,j,k,t;

	for (i=0 ; i<n-1 ;i++)
	{
		k = i;
		for ( j=i+1 ; j<n ;j++)
		{
			if (x[j]>x[k])
			{
				t = x[j];
				x[j] = x[k];
				x[k] = t;
			}
		}
	}
}