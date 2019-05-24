#include <stdio.h>


int temp_max,temp_min,temp_average;
int max(int a[10]);    //以以为数组为参数
int min(int a[10]);
int average(int a[10]);


void main()
{

	int a[10] = {0,1,2,3,4,5,6,7,8,14};
	temp_max = max(a);  //这边传进去的参数是数组名称，我原本写的是a[10]是不可以的
	temp_min = min(a);  
	temp_average = average(a);
	printf("最大值 = %d, 最小值 = %d,平均值 = %d\n",temp_max,temp_min,temp_average);
}


/*如果是想输入数组而不是给定的数组，就在main函数里面使用下面的输入数组的代码
	int i;
	int a[10];
	for (i = 0; i<=9 ; i++)
	{
		scanf("%d",&a[i]);
	}
*/

int max(int a[10])   //选出最大值
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
