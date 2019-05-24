#include <stdio.h>

int average(int b[10]);

void main()
{
	int s;
	int a[10] = {0,1,2,3,4,5,6,7,8,14};
	s = average(a);  //直接调用数组的名称即可，因为已经定义过数组了，a其实就是指a[0],因为数组已经在内存中占有空间，所以可以直接使用a即可
	printf("average value = %d\n",s);
}

int average(int b[10])  //在这里数组可以不定义长度，因为是形参，定义int b也是相同的效果
{

	int i ;
	int s = 0 ;   //一定要赋值给s = 0,否则结果可能会越界
	int result = 0; 
	for (i = 0; i<=9 ; i++)
	{
		s += b[i];
	}
	result = s/10;
	return result;
}
