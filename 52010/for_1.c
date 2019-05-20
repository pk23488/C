#include <stdio.h>

void main()
{
	int i,sum = 0;
	for (i = 1;i <= 100;i++)    //for语句实现加到100，注意for后面括号里面内容的形式
	{
		sum = sum + i; 
	}
	printf("sum = %d\n",sum);
}