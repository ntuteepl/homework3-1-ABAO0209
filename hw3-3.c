#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,a1,a2,a3,a4,b1,b2,b3,b4,at,bt;
    scanf("%d%d", &a,&b);
    a1=a/1000;
    a2=(a%1000)/100;
    a3=(a%100)/10;
    a4=a%10;
    at=a1+a2+a3+a4;

    b1=b/1000;
    b2=(b%1000)/100;
    b3=(b%100)/10;
    b4=b%10;
    bt=b1+b2+b3+b4;

    if(at>bt)
    {
        printf("%d",b);

    }
    else if(at=bt)
    {
        if(a1<b1)
        {
            printf("%d",a);
        }
        else
        printf("%d",b);
    }
    else if(at<bt)
    {
        printf("%d",a);
    }
}
