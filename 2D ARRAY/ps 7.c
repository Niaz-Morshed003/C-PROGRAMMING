#include <stdio.h>
int main()
{ int i,j,k,n;
printf("n=");
scanf("%d",&n);
int a[n][n],b[n][n];int c[n][n];
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
    printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);}
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
    printf("b[%d][%d]=",i,j);
    scanf("%d",&b[i][j]);}
}

printf("\ndisplaying a matrix=\n");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
    printf("%d",a[i][j]);
    printf("\t");

}

printf("\n");
}
printf("\ndisplaying b matrix=\n");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
    printf("%d",b[i][j]);
    printf("\t");

}

printf("\n");
}
for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     { c[i][j]=0;} }

  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
         for(k=0;k<n;k++)
         {
             c[i][j]+=a[i][k]*b[k][j];
         }
     }
  }

printf("\nmultipication=\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",c[i][j]);
        printf("\t");
    } printf("\n");
}
}
