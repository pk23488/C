#include <stdio.h>


int s1,s2,s3;    //ȫ�ֱ���
int cft(int a ,int b,int c);

void main()
{
	int v,l,w,h;
	printf("please input parameters:\n");
	scanf("%d,%d,%d",&l,&w,&h); //����������˼��ϵ�ַ��
	v = cft(l,w,h);  //   ��仰����˼��ʵ�ǽ�cft�����ķ���ֵ����v����������cft��������ķ���ֵֻ����v
	printf("��� = %d,ǰ�� = %d,���� = %d,���� = %d", v,s1,s2,s3);
	printf("\n");
}

int cft(int a,int b,int c)
{
	int v;
	v = a*b*c;
	s1 = a*b;
	s2 = b*c;
	s3 = a*c;
	return v;  //����Ҫע��һ�£�����ֵֻ����һ��v�����ܰ���s1,s2,s3,��Ϊ�ú�������ֵ��Ҫ��������main������������v
}