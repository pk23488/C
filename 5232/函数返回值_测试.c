#include <stdio.h>

void main()
{
	float max(float x,float y);   //ע��˴�����Ҫ�ֺŵģ���Ϊ�ǵ��ã�������ǲ���Ҫ�ģ���Ϊ��ֱ�Ӷ��庯��
	float a , b , c ;

	scanf("%f,%f" , &a, &b );
	c = max( a , b );
	printf("max = %f\n",c);

}

float max(float x,float y)
{
	float z ;   //��ʱ�Լ���������float x,y   ���ﲻ��Ҫ����Ϊ���β������Ѿ��������
	z = x > y ? x:y;  //�˾�ĸ�ʽһ��Ҫ�����
	return z;
}
