#include <stdio.h>
int main(){
	int a[5]={0},i,temp,j;
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
