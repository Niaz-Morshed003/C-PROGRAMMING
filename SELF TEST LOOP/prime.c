#include<stdio.h>
int main ()
{
    int i,j,k,sp,lp,n;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("sp=");
    scanf("%d",&sp);
    printf("lp=");
    scanf("%d",&lp);
    for (j=sp;j<=lp;j++)
    {
       for(k=2;k<j;k++)
        {
            {if (j%k==0)
                break;}
        }
        if (k==j)
            printf("primes are = %d\n",j);

    }

    }


    return 0;


}
