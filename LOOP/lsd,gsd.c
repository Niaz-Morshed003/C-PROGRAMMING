#include<stdio.h>
int main ()
{
    int n,n1,n2,i,num1,num2,lcd,gcd,rem;
    printf("\nn=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    { printf("\nn1,n2=");
    scanf("%d%d",&n1,&n2);
    num1=n1;
    num2=n2;
    while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
    }
    gcd=n1;
    printf("gcd=%d\n",gcd);
    lcd=(num1*num2)/gcd;
    printf("lcd=%d\n",lcd);

    }
}
