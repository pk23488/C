#include <stdio.h>

void main()
{
	void copy_string(char *from,char *to);
	
	char *a = "i am a teacher!";
	char b[] = "you are a student!";   //�˴�Ӧ�ö���Ϊchar b[] ="you are a student!",��Ϊ*b�ǰ����ݷ����ڴ�ĳ����洢���ģ����ܸı�
	printf("string a :%s,string b :%s",a,b);  //����ڴ����
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