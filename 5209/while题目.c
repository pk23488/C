#include <stdio.h>

void main()

{
	int n ;
	n = 0 ;
	printf("input a string: ");
	while (getchar()!='\n')  //�൱�������س����ַ���
	{
		n++;
	}
	printf("n = %d\n",n);
}
