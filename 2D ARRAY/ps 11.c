#include<stdio.h>
int main ()
{ int i,j,n,sum=0;
printf("n=");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
} printf("IN A MATRIX VIEW="); printf("\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
        printf("\t");

    }
 printf("\n");

}

for(i=0;i<n;i++)
{
    if (i%2!=0)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    } else { for(j=1;j<n;j=j+2)
    {
        sum=sum+a[i][j];
    }
            }
}
printf("\nsum of pattern=%d",sum); }
