#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,temp,temp2;
    scanf("%d", &t);
    temp2=t-1;
    for(int i=2;i<=temp2;i++)
    {
        temp=t%i;
        if(temp==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
