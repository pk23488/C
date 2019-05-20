#include <stdio.h>

void main()
{
	int a;
	printf("input integer number: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("Monday\n");break;     //每种情况之后加上break之后就会跳出去，是我们想要的
		case 2:
			{
				printf("Tuesday\n");
				break;
			}                               //可以使用大括号，看起来比较清晰
		case 3:printf("Wednesday\n");break;
		case 4:printf("Thursday\n");break;
		case 5:printf("Friday\n");break;
		case 6:printf("Saturday\n");break;
		case 7:printf("Sunday\n");break;
		default:printf("num error!\n");
	}
}