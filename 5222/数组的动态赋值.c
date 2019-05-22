#include <stdio.h>

void main()
{
	int i , max , a[10];
	printf("pleasse input 10 numbers:\n");
	for (i = 0; i<10 ; i++)
	{
		scanf("%d",&a[i]);   //这边的地址符号&一定要加上，是和scanf使用的时候，老是忘记;一般来说，输入里面是不加换行的，可以测试一下%d\n之后要输入11个数
 	}
	max = a[0];
	for (i = 1 ; i<10 ; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("max = %d\n",max);
}
