#include <stdio.h>
#include <stdlib.h>

int main()
{
    char size;
    printf("輸入衣服尺寸(S,M,L):");
    scanf("%s",&size);
    if (size == 'S')
    {
        printf("小");
    }
    else if (size == 'M')
    {
        printf("中");
    }
    else if (size == 'L')
    {
        printf("大");
    }
    else
    {
        printf("你是在開玩笑吧");
    }
    return 0;
}
