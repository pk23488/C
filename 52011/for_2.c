#include <stdio.h>

void main()

{
	char c;
	for ( ;(c = getchar())!='\n'; )   //���˻س���������������ַ�ȫ����ӡ����
	{
		printf("%c",c);
	}
}