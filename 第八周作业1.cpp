#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf("�������� ��\n");
	scanf("%d",&a); 
	printf("��Ӣ���� ��\n");
	scanf("%d",&b); 
	printf("������� ��\n");
	scanf("%d",&c); 
	printf("������������ ��\n");
	scanf("%d",&d); 
	if(d>a||b>a||c>a)
        printf("�������ݴ����޷�����");
    if(a<0||b<0||c<0||d<0)
            printf("�������ݴ����޷�����");
		a=d+b+c-a;
			if(a>=0)
	    	printf("�����������%d��",a);
			else
	    	printf("�������ݴ����޷�����");   
	return 0;
}
