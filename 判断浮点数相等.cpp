//判断两个浮点数是否相等，精准到小数点后五位
#include <stdio.h>
#include <math.h> 
int main(void)
{ float a,b;
  scanf("%f",&a);
  scanf("%f",&b); 
  if( fabs(a-b)<0.00001)
  printf("相等");
  else
  printf("不相等");
  return 0;
 } 
