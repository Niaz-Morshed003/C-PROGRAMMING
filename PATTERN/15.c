#include<stdio.h>
int main ()
{
    int n,i,j,k;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
            {
                printf("z");
            } }
            else
            {

                for (k=i;k<=n-1;k++)
                {
                    printf(" ");
                } printf("z");
            }
      printf("\n");  }
   }

