#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght,width;
    printf("�п�J����Ϊ����e�A�åH�ťլ�����:");
    scanf("%f%f",&lenght,&width);
    printf("����Ϊ���:%.1f�A�e��:%.1f�A���n��:%.1f�A�P����:%.1f",lenght,width,(lenght*width),(lenght*2+width*2));
    return 0;
}
