#include<stdio.h>
int main ()
{
    int i,n,num,sum=0,fact,rem,temp,j;
    printf("\nn=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { printf("\nnum=");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
fact = 1;
        for(j=1;j<=rem;j++)
        {
        fact=fact*j;

        }
        sum=sum+fact;
        num=num/10;
    }
       if (sum==temp)
        printf("\nstrong");
       else
        printf("\nnot strong");
       sum=0;
       fact=1;

    }
}
