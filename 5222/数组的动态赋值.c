#include <stdio.h>

void main()
{
	int i , max , a[10];
	printf("pleasse input 10 numbers:\n");
	for (i = 0; i<10 ; i++)
	{
		scanf("%d",&a[i]);   //��ߵĵ�ַ����&һ��Ҫ���ϣ��Ǻ�scanfʹ�õ�ʱ����������;һ����˵�����������ǲ��ӻ��еģ����Բ���һ��%d\n֮��Ҫ����11����
 	}
	max = a[0];
	for (i = 1 ; i<10 ; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("max = %d\n",max);
}
