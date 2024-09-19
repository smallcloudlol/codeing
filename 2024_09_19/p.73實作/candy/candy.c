#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candy,pen,money;
    printf("糖果5元/顆，10顆糖果送1支筆\n請輸入您要購買的糖果數:");
    scanf("%d",&candy);
    money = candy*5;
    pen = candy/10;
    printf("您購買的糖果數為:%.0d，金額為:%.0d，送出筆數量為:%.d",candy,money,pen);
    return 0;
}
