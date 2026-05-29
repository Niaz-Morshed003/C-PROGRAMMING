#include<stdio.h>
int main()
{
    int i,j,k,rem,sum=0,n,sp,lp,temp;
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
            sum=(rem*rem*rem)+sum;
            temp=temp/10;
        }
        if (sum==j)
            printf("armstrongs numbers are = %d\n",j); sum=0;
    }

    }





}
