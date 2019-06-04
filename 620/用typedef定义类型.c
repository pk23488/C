#include <stdio.h>

typedef struct
{
	int month;
	int day;
	int year;
}DATE;

void main()
{
	DATE date_one;

	date_one.month = 12;
	date_one.day = 1;
	date_one.year = 2019;

	printf("%d-%d-%d\n\n",date_one.month,date_one.day,date_one.year);
}