#include <stdio.h>

void main()
{
	void copy_string(char *from,char *to);
	
	char *a = "i am a teacher!";
	char b[] = "you are a student!";
	printf("string a :%s\nstring b :%s\n\n",a,b);
	printf("copy string a to string b:\n");

	copy_string(a,b);
	printf("string a :%s\nstring b :%s\n",a,b);
}


/* 法一

void copy_string(char *from,char *to)
{
	for ( ; *from != '\0' ; from++,to++)
	{
		*to = *from;
	}
	*to = '\0';  //复制完之后，在字符串的末尾加上结束符
}

*/

/* 法二  语法直接放在while后面，注意区分和法一的区别

void copy_string(char *from,char *to)
{
	while((*to = *from) != '\0')
	{
		*to++;
		*from++;
	}
}

*/ 

/* 法三

void copy_string(char *from,char *to)
{
	while((*to++ = *from++) != '\0')
	{
		;
	}
}

*/


void copy_string(char *from,char *to)
{
	while(*from != '\0')
	{	
		*to++ = *from++;	
	}
	*to = '\0';
}


