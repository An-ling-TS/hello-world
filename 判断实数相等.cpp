#include<stdio.h>
int main()
{
	double a,b;
	printf("输入两个个实数"); 
	scanf("%f%f",&a,&b);
	if(a-b < 1e-6 && a-b > -1e-6)
	  printf("两实数相等\n");
	else
	  printf("两实数不等\n");
	return 0;
}
