#include <stdio.h>

void main()
{
	int i;
	for (i = 100; i<=200 ; i++)
	{
		if (i%3 ==0)  //此处可写成 if (0 == i%3),好处就是可以避免识别符号的时候出现错误
			continue;    //跳出本次循环，break就是终止循环
			printf("%d\t",i);   //  \n是回车换行，\t是空格
	}
}