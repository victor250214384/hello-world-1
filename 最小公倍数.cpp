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
	printf("ab����С������Ϊ%d",m);
		return 0;
 } 
 
