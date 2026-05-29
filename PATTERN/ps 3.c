#include<stdio.h>
int main ()
{
    int n,i,j,sum=0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<i+i;j++)
        {
            printf("%d ",j);
        } printf("\n");
    }
}


