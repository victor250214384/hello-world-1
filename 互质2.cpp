#include<stdio.h>

int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=2;i<=a;++i)
	{
	if(a%i==0&&b%i==0)
	 {
		printf("ab������");
		break;
	 }		
	} 
	if (i>a)
	printf("ab����"); 
	return 0;
 } 
 
