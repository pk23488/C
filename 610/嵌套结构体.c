#include <stdio.h>

void main()
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct 
	{
		int num;
		char name[20];
		char sex;
		struct date birthday;  //其实相当于在上面的一个结构体中实例化一个birthday对象
		float score;
	} boy1,boy2;

	printf("please input birthday(YY:)");
	scanf("%d",&boy1.birthday.year);

	printf("please input birthday(MM:)");
	scanf("%d",&boy1.birthday.month);

	printf("please input birthday(DD:)");
	scanf("%d",&boy1.birthday.day);
	printf("\n");
	
	boy2 = boy1;

	printf("boy1's birthday is %d-%d-%d\n",boy1.birthday.year,boy1.birthday.month,boy1.birthday.day);
	printf("boy2's birthday is %d-%d-%d\n",boy2.birthday.year,boy2.birthday.month,boy2.birthday.day);
}