#include<stdio.h>
void minarr(int a[],int n)
{ int min= a[0];

    for(int i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("min=%d",min);

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
    minarr(b,s);

}


