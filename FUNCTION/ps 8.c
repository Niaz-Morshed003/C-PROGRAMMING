#include<stdio.h>
void revarr(int a[],int n)
{

    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

}
int main ()
{
    int s ,i;
    printf("s=");
    scanf("%d",&s);
    int b[s];
    for(i=0;i<s;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    revarr(b,s);

}

