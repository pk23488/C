#include <stdio.h>

int average(int b[10]);

void main()
{
	int s;
	int a[10] = {0,1,2,3,4,5,6,7,8,14};
	s = average(a);  //ֱ�ӵ�����������Ƽ��ɣ���Ϊ�Ѿ�����������ˣ�a��ʵ����ָa[0],��Ϊ�����Ѿ����ڴ���ռ�пռ䣬���Կ���ֱ��ʹ��a����
	printf("average value = %d\n",s);
}

int average(int b[10])  //������������Բ����峤�ȣ���Ϊ���βΣ�����int bҲ����ͬ��Ч��
{

	int i ;
	int s = 0 ;   //һ��Ҫ��ֵ��s = 0,���������ܻ�Խ��
	int result = 0; 
	for (i = 0; i<=9 ; i++)
	{
		s += b[i];
	}
	result = s/10;
	return result;
}
