#include <stdio.h>

void main()
{
	void copy_string(char *from,char *to);
	
	char *a = "i am a teacher!";
	char b[] = "you are a student!";   //此处应该定义为char b[] ="you are a student!",因为*b是把内容放在内存的常量存储区的，不能改变
	printf("string a :%s,string b :%s",a,b);  //五大内存分区
	printf("copy string a to string b:\n");

	copy_string(a,b);
	printf("string a :%s\nstring b :%s\n",a,b);
}

void copy_string(char *from,char *to)
{
	for ( ; *from != '\0'; from++ ,to++)
	{
		*to = *from;
	}
	*to = '\0';
}