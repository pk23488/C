/****************************
***求a和b的大小，求大值******
****************************/
#include <stdio.h>

#if(0)  //预处理，宏编译，相当于一个开关，真的话就执行该下面的代码，改成（0），这个main函数就不会实现
void main()
{
	int max(int x,int y);
	int a,b,c;
	
	scanf("%d %d",&a,&b);

	c = max(a,b);  //返回值max要赋值给一个变量，不能直接max(a,b)
	printf("a = %d,b = %d,max = %d\n",a,b,c);
}
#endif

int max(int x,int y)
{
	int max;
	max=(x>y)?x:y;

	return max;
}

#if(1) //当一段代码比较长的时候，可以采用这种方法，改成（1）就可以实现下面这个main函数
void main()
{
	int max(int,int);
	int (*p)();   //定义了一个函数指针
	int a,b,c;
	
	p = max;  //相当于把上面的这个max函数给了这个指针!!!

	scanf("%d %d",&a,&b);
	
	c = (*p)(a,b);//非常重要!!!
	printf("a = %d,b = %d,max = %d\n",a,b,c);
}
#endif