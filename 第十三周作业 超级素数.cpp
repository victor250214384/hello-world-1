#include <stdio.h>
#include <math.h>
int main(){
	int x1=0,x2=0,i,x3,x4;
	for(i=100;i<=10000;i++){
		x3=i;
		x4=x3;
		int count=0;
		for(int k=1;k<x3;k++){
			if(x3%k==0){
				count++;
			}//判断本身 
		}
		int len=0;
		while(x4!=0){
			x4=x4/10;
			len++;
		}
		int a[5]={0};
		for(int j=len-1;j>=0;j--){
			a[len-1-j]=floor(x3/pow(10,j));
			x3=x3-a[len-1-j]*pow(10,j);
		}
		int sum=0;
		int sum0=0;
		for(int j=0;j<len;j++){
			sum=sum+a[j];
			sum0=sum0+a[j]*a[j];
		}
		int count0=0;
		for(int j=1;j<sum;j++){
			if(sum%j==0){
				count0++;
			}
		}
		int count1=0;
		for(int j=1;j<sum0;j++){
			if(sum0%j==0){
				count1++;
			}
		}
		if(count==1&&count0==1&&count1==1){
			x1=x1+i;
			x2++;
			printf("%d\n",i);
		}
	
	}
	printf("共有%d个\n",x2);
	printf("平均数为%d\n",x1/x2);
	return 0;
} 
