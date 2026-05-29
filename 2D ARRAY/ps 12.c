
#include<stdio.h>
int main ()
{ int i,j,r,c,temp,sum=0;
printf("r,c=");
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
    for(j=0;j<c/2;j++)
    {
        temp=a[i][j];
        a[i][j]=a[i][c-j-1];
        a[i][c-j-1]=temp;

    }
}

printf("\nultimate result=\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{
    printf("%d",a[i][j]);
    printf("\t");
}
  printf("\n");
} }
