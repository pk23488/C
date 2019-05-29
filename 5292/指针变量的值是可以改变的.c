#include <stdio.h>

void main()  //指针变量的值是可以改变的
{
	char *a = "i am a student!";  //注意指针的赋值语句
	printf("%s\n",a);

	a += 7;
	printf("%s\n",a);
}