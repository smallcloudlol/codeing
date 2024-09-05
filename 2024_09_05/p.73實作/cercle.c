#include <stdio.h>
#include <stdlib.h>
#define p1 3.14

int main()
{
    float radius;
    printf("請輸入圓形半徑:");
    scanf("%f",&radius);
    printf("圓形半徑為:%.1f，面積為:%.3f，周長為:%.3f",radius,(radius*radius*p1),(radius*2*p1));
    return 0;
}
