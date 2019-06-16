#include <stdio.h>

void search(int a[],int len)
{
	int sp[1000] = {0}; //开辟一个内存，存放数组中每个元素出现的次数
	int i = 0;
	int max = 0;

	for (i=0 ; i<len ; i++)  //遍历数组，求出每个数字出现次数，然后记录到新开辟内存中
	{
		int index = a[i];  //这边原本的代码是int index = a[i] - 1,但是这边只是把出现的次数放在某一个内存的位置，所以这样也可以的
		sp[index]++;
	}

	for (i=0 ; i<1000 ; i++)  //扫描记录下来的新的数组并求出最大值
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
			printf("%d\n",i);  //这边原本的代码是printf("%d\n",i+1)，与上面修改的代码相呼应，把对应的位置对应上就可以了
		}
	}
}

int main()   //这边不可以在使用void main，因为是需要返回值的
{
	int array[] = {1,2,4,2,4,32,5,23,23,23,23,23};

	search(array,sizeof(array)/sizeof(*array));

	return 0;
}
