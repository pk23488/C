#include <stdio.h>


int s1,s2,s3;    //全局变量
int cft(int a ,int b,int c);

void main()
{
	int v,l,w,h;
	printf("please input parameters:\n");
	scanf("%d,%d,%d",&l,&w,&h); //这边又忘记了加上地址符
	v = cft(l,w,h);  //   这句话的意思其实是将cft函数的返回值传给v，所以下面cft函数定义的返回值只能是v
	printf("体积 = %d,前面 = %d,侧面 = %d,上面 = %d", v,s1,s2,s3);
	printf("\n");
}

int cft(int a,int b,int c)
{
	int v;
	v = a*b*c;
	s1 = a*b;
	s2 = b*c;
	s3 = a*c;
	return v;  //这里要注意一下，返回值只能是一个v，不能包含s1,s2,s3,因为该函数返回值是要传给上面main函数里面的输出v
}