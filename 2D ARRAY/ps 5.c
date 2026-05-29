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
} printf("IN A MATRIX VIEW="); printf("\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
        printf("\t");

    }
 printf("\n");

} printf("\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {if(a[i]==a[j])
     a[i][j]=1;
  else a[i][j]=0;

} }

printf("\nidentify matrix view=\n");

for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     { printf("%d",a[i][j]);printf("\t");

} printf("\n"); } }












