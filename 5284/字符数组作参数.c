#include <stdio.h>

void main()
{
	void copy_string(char from[],char to[]);

	char a[] = " i am a teacher!";
	char b[] = "you are a student!";

	printf("string a :%s,string b:%s\n",a,b);
	printf("copy string a to string b:\n");

	copy_string(a,b);
	printf("string a:%s\nstring b:%s\n",a,b);
}

void copy_string(char from[],char to[])
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}