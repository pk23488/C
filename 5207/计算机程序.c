#include <stdio.h>

void main()
{
	double a,b;
	char c;
	printf("please input expression:a+(-,*,/)b\n");  //a+(-,*,/)b表示a+或者-或者*或者/b
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