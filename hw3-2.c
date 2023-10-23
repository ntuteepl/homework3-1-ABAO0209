#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int A[3][2]={{a,b},{c,d},{e,f}};

    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(A[i][1]>A[j][1])
            {
                int B[2]={A[i][0],A[i][1]};
                A[i][0]=A[j][0];
                A[i][1]=A[j][1];
                A[j][0]=B[0];
                A[j][1]=B[1];
            }
        }
    }
    int cars=1;
    int temp = A[0][1];
    for(int i=1;i<3;i++)
    {
        if(A[i][0]>=temp)
        {
            temp=A[i][1];
        }
        else
        {
            cars++;
        }
    }
    printf("%d", cars);
}
