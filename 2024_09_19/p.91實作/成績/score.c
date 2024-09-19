#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    printf("½Ð¿é¤J¦¨ÁZ:");
    scanf("%f",&score);
    if (score >= 90)
    {
        printf("A");
    }
    else if (score >= 80)
    {
        printf("B");
    }
    else if (score >= 70)
    {
        printf("C");
    }
    else if (score >= 60)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}
