#include<stdio.h>
void main ()
{
    int n,i,j;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { for(j=i;j<i+n;j++)
    {
        printf("%d ",j);
    }
      printf("\n") ;
    }
}

