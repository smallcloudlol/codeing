#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candy,pen,money;
    printf("�}�G5��/���A10���}�G�e1�䵧\n�п�J�z�n�ʶR���}�G��:");
    scanf("%d",&candy);
    money = candy*5;
    pen = candy/10;
    printf("�z�ʶR���}�G�Ƭ�:%.0d�A���B��:%.0d�A�e�X���ƶq��:%.d",candy,money,pen);
    return 0;
}
