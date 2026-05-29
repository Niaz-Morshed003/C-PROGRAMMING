#include<stdio.h>
int main ()
{ int i,j,n;
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

int max=a[0][0],maxr,maxc;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(max<a[i][j])
        {
            max=a[i][j];
            maxr=i;
            maxc=j;
        }

    }
 printf("\n");

}
 printf("\nmax=%d",max);
 printf("\nlocation=[%d][%d]",maxr,maxc);
}

