#include<stdio.h>
int main ()
{
    int i,j,k,sp,lp,temp,rem,sum=0,fact,n;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("sp=");
    scanf("%d",&sp);
    printf("lp=");
    scanf("%d",&lp); //j loop variable tai  odify kora jabe na.

    for (j=sp;j<=lp;j++)
    { temp=j;
        while(temp!=0)
        {
            rem=temp%10;
            fact=1;
            for(k=1;k<=rem;k++)
            {
                fact = fact*k;
            }
            sum=fact+sum;
            temp=temp/10;
        } if (sum==j)
        printf("armstrongs are = %d\n",j);
        sum=0;
    } } }
