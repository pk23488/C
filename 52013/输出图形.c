#include <stdio.h>

/*void main()
{
int i = 1;
for (i; i <= 6; i++);
printf("%d\n",i*'*');  //�ҵ�ʱ�ǿ�������ôʵ�ּ��о�����ʾ�����Ǻţ�ʧ�ܵĴ�����
}



{
int i, j;
for (i = 1; i<7 ; i++)    //�Ҿ�����for��������Ϸֺţ�Ҫ��ס
{
printf("\n");
for (j = 1; j<= i ; j++) //���д���ǳ���Ҫ���漰��i��j�Ĺ�ϵ
{
putchar('*');
}
}
}
*/



void main()
{
	int i,j;
	for(i = 1; i<7 ; i++ )
	{
		printf("\n");
	
		for(j = 1; j<=i ; j++)
		{
			putchar('*');  //���һ���ź�
		}
	}
	
}