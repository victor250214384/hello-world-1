#include<stdio.h>
int main()
 {
 	int i,n,j,b,a[10000];
 	printf("�������ĸ�����");
 	scanf("%d",&n);
 	printf("������%d����",n);
 	for(i=0;i<=n-1;i++)
 	scanf("%d",&a[i]);
 	for(j=0;j<n;j++ )
	 {   
 	for(i=n-1;i>0;i--)
 	    { 
 	if (a[i]<a[i-1])
 	       {
 		   b=a[i];a[i]=a[i-1];a[i-1]=b;
	       }
 	    }
     } 
	for(i=0;i<=n-1;i++)
	printf("%d ",a[i]);  
 	return 0;
 }
