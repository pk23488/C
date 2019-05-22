#include <stdio.h>
void main()

{
	int a[10];  //这边的数字的内容应该是在界面输入的，不应该是写死的
	int i , j , t;
	printf("please input 10 numbers:\n");
	for (i=0 ; i<10 ;i++)
	{
		scanf("%d",&a[i]);  //在编程的时候又忘记把地址符号加上了
	}
	printf("\n");  //以上的代码是实现用户输入数据到数组

	for(j = 0; j<9 ; j++)
	{
		for (i = 0; i<9-j ; i++)  //注意i的取值
		{
			if (a[i] >a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;   //将a[i]和a[i+1]调换位置
			}
		}	
	}  //上面的这两个循环才是精华之处，j控制的是要每个元素都要依次比较一下，i控制的是每个元素都要和其他元素比较次数
	printf("sorted number : \n");
	for (i = 0; i<10 ; i++)
	{
		printf("%d ->>",a[i]);
	}
	printf("\n");
}

#if(0)
	int ,a,b;
#endif     //这里上面三行是注释的另一种表示方法，就是可以在代码行中嵌套注释