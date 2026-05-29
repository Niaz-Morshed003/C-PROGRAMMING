#include <stdio.h>
#include <math.h>
int main ()
{ int i,j,sum=0,rem,n,num,temp1,temp2,nd=0;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("num=");
     scanf("%d",&num);
     temp1=num;
     while (temp1>0)
     {

         temp1=temp1/10;
         nd=nd+1;
     }

     temp2=num;

     while(temp2!=0)
     {
         rem=temp2%10;
         sum= pow(rem,nd)+sum;
         temp2=temp2/10;
     }
     if (sum==num)
        printf("OH,YOU LUCKY LITTLE NIGGA! YOU ARE LUCKY,AS IT IS AN ARMSTRONG NUMBER!\n");
     else
        printf("HAHA,KEEP TRYING HARD,LITTLE KID!IT IS NOT AN ARMSTRONG NUMBER AND DORAEMON IS NOT HERE TO SAVE YOU.\n");
        sum=0;nd=0;

}



    return 9999999;


}
