#include<stdio.h>
int gcd(int a,int b)
{
    int rem ;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
 int c=a;
    return c;
} int lcm (int a,int b)
{
 int r = gcd(a,b);
 int lcm = (a*b)/r;
    return lcm;

}

int main ()

{ int a,b;
    while (1)

 {
    printf("\na,b=");
    scanf("%d%d",&a,&b);
    int r = gcd(a,b);
    int s = lcm(a,b);
    printf("gcd and lcm=%d and %d\n",r,s);
 }






}
