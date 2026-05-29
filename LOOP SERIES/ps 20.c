#include<stdio.h>
int main ()
{ int i,n,j,ld,term=0,sum=0;
printf("\nn=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("\nld=");
scanf("%d",&ld);
for (j=1;j<=ld;j++)
{

    sum=sum*10+j;
    term=term+sum;
    printf("%d+",sum);


}
 printf("=%d",term);
sum=0;
term=0;

}


 return 0;
}

