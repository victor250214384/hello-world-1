#include <stdio.h>
int main()
{int x1=10,x2=5,temp;
 while(x1%x2!=0){
 	temp=x1%x2; 
 	x1=x2;
 	x2=temp;
 }
 if(x2==1)
 printf("��������\n");
 else
 printf("����������\n");
 return 0; 
} 
