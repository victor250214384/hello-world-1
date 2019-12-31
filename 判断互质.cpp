#include <stdio.h>
int main()
{int x1=10,x2=5,temp;
 while(x1%x2!=0){
 	temp=x1%x2; 
 	x1=x2;
 	x2=temp;
 }
 if(x2==1)
 printf("两数互质\n");
 else
 printf("两数不互质\n");
 return 0; 
} 
