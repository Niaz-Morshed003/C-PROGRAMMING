//1+2+3+4+5+6 er sum

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
      sum=sum+j;
      printf("%d+",j);

    }
printf("......=%d\n",sum);sum=0;

    }



  return 0;

}
