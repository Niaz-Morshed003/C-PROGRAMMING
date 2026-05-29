#include<stdio.h>
int main ()
{
    int x,x1,rem,sum=0;
    int i =1,n;
    printf("n=");
    scanf("%d",&n);


    for (i;i<=n;i++)
        { printf("x=");
    scanf("%d",&x);
    x1=x;
    sum=0;
        while (x!=0)
        {rem=x%10;
        sum=sum*10+rem;
        x=x/10;}
        if (sum==x1)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");

    }


}


