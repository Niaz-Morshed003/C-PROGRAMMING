#include<stdio.h>
int main ()
{ int i,n,j,ld,sum=0,a,res,b;
a=1;
b=1;
printf("\nn=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\nld=");
scanf("%d",&ld);
for (j=1;j<=ld;j++)
{
    printf("%d,",a);
    sum=sum+a;
    res=a+b;
    a=b;
    b=res;


}

printf("sum=%d",sum);
sum=0;
a=1;
b=1;
}


 return 0;
}
