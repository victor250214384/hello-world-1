//ʵ�ִ����ж�2��float�������

//��ȷ��ʱС�����5λ

#include <stdio.h>
#include  <math.h>

int main()

{

    float m = 1.78;

    float x = 1.779999, y = 2,differ;

    float z = m / y, z1 = x / y;
    differ= fabs(z-z1); 

    if (differ<0.00001) {

        z = (m + x) / y;

    } 

    printf("Z is %f\n", z);

    printf("Z1 is %f\n", z1);

    return 0;

}
