#include <stdio.h>

void search(int a[],int len)
{
	int sp[1000] = {0}; //����һ���ڴ棬���������ÿ��Ԫ�س��ֵĴ���
	int i = 0;
	int max = 0;

	for (i=0 ; i<len ; i++)  //�������飬���ÿ�����ֳ��ִ�����Ȼ���¼���¿����ڴ���
	{
		int index = a[i];  //���ԭ���Ĵ�����int index = a[i] - 1,�������ֻ�ǰѳ��ֵĴ�������ĳһ���ڴ��λ�ã���������Ҳ���Ե�
		sp[index]++;
	}

	for (i=0 ; i<1000 ; i++)  //ɨ���¼�������µ����鲢������ֵ
	{
		if (max<sp[i])
		{
			max = sp[i];
		}
	}

	for (i=0 ; i<1000 ;i++)
	{
		if (max == sp[i])
		{
			printf("%d\n",i);  //���ԭ���Ĵ�����printf("%d\n",i+1)���������޸ĵĴ������Ӧ���Ѷ�Ӧ��λ�ö�Ӧ�ϾͿ�����
		}
	}
}

int main()   //��߲�������ʹ��void main����Ϊ����Ҫ����ֵ��
{
	int array[] = {1,2,4,2,4,32,5,23,23,23,23,23};

	search(array,sizeof(array)/sizeof(*array));

	return 0;
}
