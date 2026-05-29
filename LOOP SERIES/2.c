//1*2+2*3+3*4 er sum

#include<stdio.h>
int main ()
{
    int i,j,n,ld,sum=0;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("\nld=");
    scanf("%d",&ld);
    for (j=1;j<=ld;j++)
    {
      sum=sum+j*(j+1);
      printf("%d*%d+",j,(j+1));

    }
printf("......=%d\n",sum);sum=0;

    }



  return 0;

}

