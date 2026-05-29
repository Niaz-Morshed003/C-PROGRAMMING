#include<stdio.h>
int main ()
{
    int x,x1,rem,sum=0;

    printf("x=");
    scanf("%d",&x);
    x1=x;
    do{
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    } while(x!=0);

    if (sum==x1)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
}

