#include<stdio.h>

int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=2;i<=a;++i)
	{
	if(a%i==0&&b%i==0)
	 {
		printf("ab≤ªª•÷ ");
		break;
	 }		
	} 
	if (i>a)
	printf("abª•÷ "); 
	return 0;
 } 
 
