#include <stdio.h>

void main()
{
	int *p , *p1, *p2, a, b;
	scanf("%d,%d",&a,&b);
	p1 = &a;  //a的地址给了p1
	p2 = &b;  //b的地址给了p2
	if (a<b)
	{
		p = p1;  //a的地址给了p
		p1 = p2;  //b的地址给了p1，也可以说p1指向了b
		p2 = p;  //a的地址给了p2 
	}
	printf("a: %d,b: %d\n",a,b);
	printf("max = %d,min = %d\n",*p1,*p2);
}

//绿字的叙述方法比较准确