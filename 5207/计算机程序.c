#include <stdio.h>

void main()
{
	double a,b;
	char c;
	printf("please input expression:a+(-,*,/)b\n");  //a+(-,*,/)b��ʾa+����-����*����/b
	scanf("%lf%c%lf",&a, &c, &b);
	switch(c)
	{
	case '+':
		printf("%lf\n",a+b);
		break;
	case '-':
		printf("%lf\n",a-b);
		break;
	case '*':
		printf("%lf\n",a*b);
		break;
	case '/':
		printf("%lf\n",a/b);
		break;
	default:
		printf("input errror!\n");
	}

}