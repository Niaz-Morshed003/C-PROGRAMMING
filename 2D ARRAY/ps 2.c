#include<stdio.h>
int main ()
{ int i,j,r,c;
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
} printf("row wise="); printf("\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);

    }

}
printf("\n");
printf("col wise="); printf("\n");
for(j=0;j<c;j++)
{
    for(i=0;i<r;i++)
    {
        printf("%d",a[i][j]);

    }

}



}
