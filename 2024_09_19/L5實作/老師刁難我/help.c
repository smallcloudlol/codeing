<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c,smcl;
    printf("��JA B C �T��:");
    scanf("%d%d%d",&a,&b,&c);

    if (a<c)
    {
        smcl=a;a=c;c=smcl;
    }
    if (b<c)
    {
        smcl=b;b=c;c=smcl;
    }
    if (a<b)
    {
        smcl=a;a=b;b=smcl;
    }
    printf("%d\t%d\t%d",a,b,c);

    return 0;
}
=======
被升哥封印了
>>>>>>> f4594ce8bc8423b15bfd1e58174234d718bd7652
