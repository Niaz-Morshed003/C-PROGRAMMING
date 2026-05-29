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

}


int b[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
} printf("IN A MATRIX VIEW="); printf("\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",b[i][j]);
        printf("\t");

    }
 printf("\n");}
 int d [r][c];
 for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        d[i][j]=a[i][j]+b[i][j];

    } }
    printf("\n");
 printf("sum=\n");
 for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",d[i][j]);
        printf("\t");

    }


printf("\n");
}


}

