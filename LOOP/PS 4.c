
//average by while loop
#include<stdio.h>
int main ()
{
    int i=1,number,n,sum=0;
    float avg;
    printf("n=");
    scanf("%d",&n);
    while(i<=n)
    { printf("\nnumber=");
    scanf("%d",&number);
    sum=sum+number;
    i++ ;
    }
avg=(float)sum/3;
 printf("\navg=%f",avg);}
