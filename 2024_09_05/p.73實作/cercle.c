#include <stdio.h>
#include <stdlib.h>
#define p1 3.14

int main()
{
    float radius;
    printf("�п�J��Υb�|:");
    scanf("%f",&radius);
    printf("��Υb�|��:%.1f�A���n��:%.3f�A�P����:%.3f",radius,(radius*radius*p1),(radius*2*p1));
    return 0;
}
