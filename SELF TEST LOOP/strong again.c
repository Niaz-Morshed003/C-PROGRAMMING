#include<stdio.h>
int main()
{ int i,j,k,n,sp,lp,fact=1,sum=0,temp,rem;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ printf("sp=");
scanf("%d",&sp);
printf("lp=");
scanf("%d",&lp);
for(j=sp;j<=lp;j++)
{
    temp=j;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(k=1;k<=rem;k++)
        {
            fact=fact*k;
        }
        sum=sum+fact;
        temp=temp/10;

    } if (sum==j)
    printf("strong numbers are=%d\n",j);
    sum=0;
}

}






}
