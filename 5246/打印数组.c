#include <stdio.h>

void main()
{
	int test(int a[10]);
	int s;
	int a[10] = {0,1,3,4,5,6,7,7,8,4};
	s = test(a);   //���ݵ������������
	printf("\n");
}



int test(int b[10])   //��ߵ��������Ҳ������b[10]��c[10]�ȵȣ����ֻ�Ǹ��β�
{
	int i,s;
	for (i = 0; i<= 9; i++)
	{
		s = b[i];
		printf("%d ",s);
	}
}

