#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,k,l,x,fact;
    float sum,sum1=0.00,sum2=0.00,xp,xs;
    printf("x=");
    scanf("%d",&x);
    for (i=1;i<=5;i=i+4)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        xp=pow(x,i)/fact;
        sum1=sum1+xp;
    }
    for (k=3;k<=7;k=k+4)
    {
        fact=1;
        for(l=1;l<=k;l++)
        {
            fact=fact*l;
        }
        xs=pow(x,k)/fact;
        sum2=sum2-xs;
    }



    sum=sum1+sum2;
    printf("result=%f",sum);
    return 0;
}
