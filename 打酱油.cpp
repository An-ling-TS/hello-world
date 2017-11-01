#include<stdio.h>
int main()
{
	int N,s,t,m,y;
	scanf("%d",&N);
	if(N<=300 && N%10==0)
	{
		s=N/10;
	    t=s/5;
	    m=s%5/3;
	    y=s + 2*t + m; 
	    printf("%d",y);
	}
	return 0;
 } 	
