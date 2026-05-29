#include<stdio.h>
int main ()
{
    int num,temp,i=1,n,rem,sum=0;
    printf("\nn=");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        printf("\nnum=");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    int arm;
    arm=sum;
    if (arm==temp)
        printf("\narmstrong");
    else
        printf("\nnot");
    sum=0;
    }

}
