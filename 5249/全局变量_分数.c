#include <stdio.h>


int temp_max,temp_min,temp_average;
int max(int a[10]);    //����Ϊ����Ϊ����
int min(int a[10]);
int average(int a[10]);


void main()
{

	int a[10] = {0,1,2,3,4,5,6,7,8,14};
	temp_max = max(a);  //��ߴ���ȥ�Ĳ������������ƣ���ԭ��д����a[10]�ǲ����Ե�
	temp_min = min(a);  
	temp_average = average(a);
	printf("���ֵ = %d, ��Сֵ = %d,ƽ��ֵ = %d\n",temp_max,temp_min,temp_average);
}


/*�������������������Ǹ��������飬����main��������ʹ���������������Ĵ���
	int i;
	int a[10];
	for (i = 0; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
*/

int max(int a[10])   //ѡ�����ֵ
{
	int i;
	int max;
	max = a[0];
	for (i =1 ; i<= 9; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		} 		
	}
	return max;
}


int min(int a[10])
{
	int i,min;
	min = a[0];
	for (i = 1; i<=9 ; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
		}
	}
	return min;
}


int average(int a[10])
{
	int i,average;
	int sum = 0;
	for (i = 0; i <= 9 ;i++)
	{
		sum += a[i];
	}
	average = sum/10;
	return average;
}
