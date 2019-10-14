#include<stdio.h>

int main()
{
	int a,b,i,j,m;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;++i)
	{
	if(a%i==0&&b%i==0)
		j=i;
	}
	m=a*b/j;
	printf("ab的最小公倍数为%d",m);
		return 0;
 } 
 
