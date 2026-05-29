#include<stdio.h>
void prime1(int n)
{
    if (n<=1)
    {
        printf("not prime");
        return ;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {printf("not prime");return ;}
    }

    printf("PRIME");
}

int main ()
{
    int num1;
    printf("num1=");
    scanf("%d",&num1);
    prime1(num1);
}
