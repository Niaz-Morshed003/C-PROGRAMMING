#include<stdio.h>
void evenarr(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("evens=%d ",a[i]);
    }

}
int main ()
{
    int s,i=0;
    printf("s=");
    scanf("%d",&s);
    int b[s];
    for(i=0;i<s;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    evenarr(b,s);

}

