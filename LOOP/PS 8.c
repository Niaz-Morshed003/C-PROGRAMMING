#include<stdio.h>
int main ()
{
    int x,rem,sum=0;
    printf("x=");
    scanf("%d",&x);
    do{
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    } while(x!=0);
    printf("reversed=%d",sum);
}
