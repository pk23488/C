#include <stdio.h>

void main()
{
	int i;
	for (i = 100; i<=200 ; i++)
	{
		if (i%3 ==0)  //�˴���д�� if (0 == i%3),�ô����ǿ��Ա���ʶ����ŵ�ʱ����ִ���
			continue;    //��������ѭ����break������ֹѭ��
			printf("%d\t",i);   //  \n�ǻس����У�\t�ǿո�
	}
}