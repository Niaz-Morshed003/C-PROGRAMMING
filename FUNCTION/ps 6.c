#include<stdio.h>
void sum(int n)
{
    int sum=0,num;
    for(int i=0;i<n;i++)
    {
        printf("num=");
        scanf("%d",&num);
        sum+=num;
    }
    printf("sum=%d",sum);
} int main ()
{
  int n;
  printf("n=");
  scanf("%d",&n) ;
  sum(n) ;
}
