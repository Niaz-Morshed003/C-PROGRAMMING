#include<stdio.h>
int main ()
{ int i,j,k,n;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        printf("_");
    }
    for (k=1;k<=i;k++)
    {
        printf("%d",i);
    }
 printf("\n");}
}
