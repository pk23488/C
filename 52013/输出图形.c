#include <stdio.h>

/*void main()
{
int i = 1;
for (i; i <= 6; i++);
printf("%d\n",i*'*');  //我当时是卡在了怎么实现几行就是显示几个星号，失败的代码行
}



{
int i, j;
for (i = 1; i<7 ; i++)    //我经常在for语句后面加上分号，要记住
{
printf("\n");
for (j = 1; j<= i ; j++) //这行代码非常重要，涉及到i和j的关系
{
putchar('*');
}
}
}
*/



void main()
{
	int i,j;
	for(i = 1; i<7 ; i++ )
	{
		printf("\n");
	
		for(j = 1; j<=i ; j++)
		{
			putchar('*');  //输出一个信号
		}
	}
	
}