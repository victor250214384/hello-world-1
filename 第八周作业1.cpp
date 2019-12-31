#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf("旅行社有 人\n");
	scanf("%d",&a); 
	printf("会英语有 人\n");
	scanf("%d",&b); 
	printf("会俄语有 人\n");
	scanf("%d",&c); 
	printf("两样都不会有 人\n");
	scanf("%d",&d); 
	if(d>a||b>a||c>a)
        printf("输入数据错误，无法计算");
    if(a<0||b<0||c<0||d<0)
            printf("输入数据错误，无法计算");
		a=d+b+c-a;
			if(a>=0)
	    	printf("两样都会的有%d人",a);
			else
	    	printf("输入数据错误，无法计算");   
	return 0;
}
