#include <stdio.h>
int main ()
{
    int i,j,k,l,n,s;

    printf("n=");
    scanf("%d",&n);
    s=(n+1)/2;
    for(i=1;i<=s;i++)
    {



    for( j=1;j<=s-i;j++)
        {
            printf(" ");
        }
        for( k=1;k<i+i;k++)
        {
            printf("x");
        }

     printf("\n");}

      l=n/2;

    for(i=1;i<=l;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1+i;k<=n-i;k++)
        {
            printf("x");
        }
   printf("\n"); }



}
