//1*2+2*3+3*4 er sum

#include<stdio.h>
int main ()
{
    int i,j,n,ld,k,sum,sum1=0,sum2=0;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("\nld=");
    scanf("%d",&ld);
    for (j=1;j<=ld;j=j+2)
    {
      sum1=sum1+j;


    }
    for (k=0;k<=ld;k=k+2)
    {
      sum2=sum2-k;


    }
    sum=sum1+sum2;
printf("......=%d\n",sum);sum=0;

    }



  return 0;

}


