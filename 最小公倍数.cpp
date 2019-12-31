#include <stdio.h>
int main()
{int a=35,b=15,c=a*b,x1;
 while(a%b!=0){
 	x1=a%b; 
 	a=b;
 	b=x1;
 }
 printf("最小公倍数为%d\n",c/b);
 return 0;
}
