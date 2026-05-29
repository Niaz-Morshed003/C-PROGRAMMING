
#include<stdio.h>
int main ()
{ int i,j,r,c,sum=0;
printf("r and c=");
scanf("%d%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
} printf("IN A MATRIX VIEW="); printf("\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
        printf("\t");

    }
 printf("\n");



}
 for(i=0;i<r;i++)
 {
     sum=sum+a[0][i];
     sum=sum+a[r-1][i];
 }

 for(i=1;i<r-1;i++)
 {
     sum=sum+a[i][i];
     sum=sum+a[i][r-1-i];
 }
sum=sum-a[r/2][r/2];
printf("\nsum=%d",sum);
}
