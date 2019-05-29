#include <stdio.h>

void main()
{
	void copy_string(char *from,char *to);
	char *a = "i am a student!";
	char b[] = "you are a teacher!";

	printf("string a:%s\nstring b:%s\n",a,b);
	printf("copy a to b:\n");

	copy_string(a,b);
	printf("string a:%s\nstring b:%s\n",a,b);
}


void copy_string(char *from,char *to)
{
	for ( ; *from != '\0' ; *from++,*to++)
	{
		*to = *from;
	}
	*to = '\0';
}