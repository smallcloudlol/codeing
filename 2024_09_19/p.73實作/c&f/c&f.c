#include <stdio.h>
#include <stdlib.h>
#define p1 3.14

int main()
{
    float C,F;
    printf("請輸入華氏溫吐(F):");
    scanf("%f",&F);
    C=(F-32)/9*5;
    printf("攝氏溫度為:%.2f",C=(F-32)/9*5);
    return 0;
}
