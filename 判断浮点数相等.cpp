//�ж������������Ƿ���ȣ���׼��С�������λ
#include <stdio.h>
#include <math.h> 
int main(void)
{ float a,b;
  scanf("%f",&a);
  scanf("%f",&b); 
  if( fabs(a-b)<0.00001)
  printf("���");
  else
  printf("�����");
  return 0;
 } 
