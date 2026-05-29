#include<stdio.h>
int main ()
{
    int i=1,num,n,count=0;
    printf("\nn=");
    scanf("%d",&n);
    for (i;i<=n;i++)
    { printf("\nnum=");
    scanf("%d",&num);
    do {
        num=num/10;
        count++;
    }while(num!=0);
    printf("\nnum of digit=%d",count);
    count=0;

    }
}
