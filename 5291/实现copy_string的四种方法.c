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


/* ��һ

void copy_string(char *from,char *to)
{
	for ( ; *from != '\0' ; from++,to++)
	{
		*to = *from;
	}
	*to = '\0';  //������֮�����ַ�����ĩβ���Ͻ�����
}

*/

/* ����  �﷨ֱ�ӷ���while���棬ע�����ֺͷ�һ������

void copy_string(char *from,char *to)
{
	while((*to = *from) != '\0')
	{
		*to++;
		*from++;
	}
}

*/ 

/* ����

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


