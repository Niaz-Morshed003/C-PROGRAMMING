#include<stdio.h>
int main ()
{
    int n,i,j,k;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=n;j++)
            {
                printf("*");
            } }
            else
            {
                printf("*");
                for (k=1;k<=n-2;k++)
                {
                    printf("_");
                } printf("*");
            }
      printf("\n");  }
   }
