#include <stdio.h>

void search(int a[],int len)
{
	int sp[1000] = {0};
	int i = 0;
	int max = 0;

	for (i = 0; i<len ;i++)
	{
		int index = a[i]-1;  
		sp[index]++;
	}

	for (i = 0; i<1000 ; i++)
	{
		if (max < sp[i])
		{
			max = sp[i];
		}
	}

	for (i = 0; i<1000; i++)
	{
		if (max == sp[i])
		{
			printf("%d\n",i+1);
		}
	}
}

int main()
{
	int array[] = {1,1,3,4,5,6,6,6,2,3,3,3};

	search(array,sizeof(array)/sizeof(*array));

	return 0;
}