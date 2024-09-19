#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    printf("輸入氣溫:");
    scanf("%f",&t);
    if (t >= 30)
    {
        printf("熱");
    }
    else if (t >= 11)
    {
        printf("剛好");
    }
    else
    {
        printf("冷");
    }
    return 0;
}
