#include<stdio.h>
int main()
{
	double a,b;
	printf("����������ʵ��"); 
	scanf("%f%f",&a,&b);
	if(a-b < 1e-6 && a-b > -1e-6)
	  printf("��ʵ�����\n");
	else
	  printf("��ʵ������\n");
	return 0;
}
