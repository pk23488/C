#include <stdio.h>

void main()
{
	void copy_string(char *from,char *to);
	
	char *a = "i am a teacher!";
	char *b = "you are a student!";
	printf("string a :%s,string b :%s",a,b);
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
	*to = '\o';
}