#include <stdio.h>

void main()

{
	int n ;
	n = 0 ;
	printf("input a string: ");
	while (getchar()!='\n')  //相当于跳过回车的字符串
	{
		n++;
	}
	printf("n = %d\n",n);
}
