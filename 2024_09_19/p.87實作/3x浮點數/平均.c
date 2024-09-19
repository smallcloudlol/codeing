#include <stdio.h>
#include <stdlib.h>

int main()
{
    float S,M,C,L;
    printf("請輸入三格浮點數(以空白為間隔):");
    scanf("%f%f%f",&S,&M,&C);
    L = (S+M+C)/3;
    printf("平均值:%f",L);
    return 0;
}
