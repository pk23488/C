/****************************
***��a��b�Ĵ�С�����ֵ******
****************************/
#include <stdio.h>

#if(0)  //Ԥ��������룬�൱��һ�����أ���Ļ���ִ�и�����Ĵ��룬�ĳɣ�0�������main�����Ͳ���ʵ��
void main()
{
	int max(int x,int y);
	int a,b,c;
	
	scanf("%d %d",&a,&b);

	c = max(a,b);  //����ֵmaxҪ��ֵ��һ������������ֱ��max(a,b)
	printf("a = %d,b = %d,max = %d\n",a,b,c);
}
#endif

int max(int x,int y)
{
	int max;
	max=(x>y)?x:y;

	return max;
}

#if(1) //��һ�δ���Ƚϳ���ʱ�򣬿��Բ������ַ������ĳɣ�1���Ϳ���ʵ���������main����
void main()
{
	int max(int,int);
	int (*p)();   //������һ������ָ��
	int a,b,c;
	
	p = max;  //�൱�ڰ���������max�����������ָ��!!!

	scanf("%d %d",&a,&b);
	
	c = (*p)(a,b);//�ǳ���Ҫ!!!
	printf("a = %d,b = %d,max = %d\n",a,b,c);
}
#endif