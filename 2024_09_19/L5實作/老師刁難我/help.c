#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c,smcl;
    printf("¿é¤JA B C ¤T¼Æ:");
    scanf("%d%d%d",&a,&b,&c);

    if (a<c)
    {
        smcl=a;
        a=c;
        c=smcl;
    }
    if (b<c)
    {
        smcl=b;
        b=c;
        c=smcl;
    }
    if (a<b)
    {
        smcl=a;
        a=b;
        b=smcl;
    }
    printf("%d\t%d\t%d",a,b,c);
/*    if (a>b)
    {
        if (a>c)
        {
            if (b>c)
            {
                printf("%d\t%d\t%d",a,b,c);
            }
            else printf("%d\t%d\t%d",a,c,b);
        }
        else printf("%d\t%d\t%d",c,a,b);
    }
    else if (b>c)
    {
        if (a>c) printf("%d\t%d\t%d",b,a,c);
        else printf("%d\t%d\t%d",b,c,a);
    }
    else printf("%d\t%d\t%d",c,b,a);
*/
    return 0;
}
