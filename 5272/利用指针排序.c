#include <stdio.h>

void main()
{
	int *p , *p1, *p2, a, b;
	scanf("%d,%d",&a,&b);
	p1 = &a;  //a�ĵ�ַ����p1
	p2 = &b;  //b�ĵ�ַ����p2
	if (a<b)
	{
		p = p1;  //a�ĵ�ַ����p
		p1 = p2;  //b�ĵ�ַ����p1��Ҳ����˵p1ָ����b
		p2 = p;  //a�ĵ�ַ����p2 
	}
	printf("a: %d,b: %d\n",a,b);
	printf("max = %d,min = %d\n",*p1,*p2);
}

//���ֵ����������Ƚ�׼ȷ