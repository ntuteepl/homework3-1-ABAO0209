#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in,an;
    int ans[4];
    int inp[4];
    scanf("%d",&an);
    int q=an/1000;
    int w=(an%1000)/100;
    int e=(an%100)/10;
    int r=(an%10);
    ans[0]=q;
    ans[1]=w;
    ans[2]=e;
    ans[3]=r;
    while(1)
    {
        scanf("%d",&in);
        int a=in/1000;
        int b=(in%1000)/100;
        int c=(in%100)/10;
        int d=(in%10);
        inp[0]=a;
        inp[1]=b;
        inp[2]=c;
        inp[3]=d;
        int count_a = 0;
        int count_b = 0;
        if(in==0){break;}
        for (int i = 0; i < 4; i++)
        {
            if (ans[i] == inp[i])
            {
                count_a += 1;
            }
            for (int j = 0; j < 4; j++)
            {
                if (inp[i] == ans[j] && i != j )
                {
                    count_b += 1;
                    break;
                }

            }
        }
     printf("%dA%dB\n",count_a,count_b);
    }
}

