#include<stdio.h>
int main ()
{ int i,n,j,ld,sum=0;
printf("\nn=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("\nld=");
scanf("%d",&ld);
for (j=1;j<=ld;j++)
{
    sum=sum+ (j*j)*(j+1);

}
printf("result=%d",sum);
sum=0;

}




}
