#include<stdio.h>
int main ()
{ int i,j,k,sp,lp,rem,sum=0,n,temp;
printf("n=");
scanf("%d",&n) ;
for(i=1;i<=n;i++)
{ printf("sp=");
scanf("%d",&sp) ;
printf("lp=");
scanf("%d",&lp);
for (j=sp;j<=lp;j++)
{
    temp=j;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==j)
        printf("palindromes are = %d\n",j);
    sum=0;
}

}

   return 0;

}
