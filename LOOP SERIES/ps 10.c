#include <stdio.h>
int main()
{ int i,n,sum,sum1=0,sum2=0;
  printf("n=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(i%2!=0)
        sum1=sum1+i;
      else if(i%2==0)

  sum2=sum2-i;
  }
  sum=sum1+sum2;
  printf("sum=%d",sum);







}
