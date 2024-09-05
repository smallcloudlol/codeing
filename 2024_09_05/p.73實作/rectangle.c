#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght,width;
    printf("請輸入長方形的長寬，並以空白為間格:");
    scanf("%f%f",&lenght,&width);
    printf("長方形長為:%.1f，寬為:%.1f，面積為:%.1f，周長為:%.1f",lenght,width,(lenght*width),(lenght*2+width*2));
    return 0;
}
