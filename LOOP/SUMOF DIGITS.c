#include<stdio.h>
int main ()
{
    int rem,num,sum=0;
    printf("num=");
    scanf("%d",&num);
    do {
        rem = num%10;
        sum=sum+rem;
        num=num/10;
    } while (num!=0);
    printf("sum=%d",sum);
}
