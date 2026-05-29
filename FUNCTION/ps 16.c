#include<stdio.h>
void multwo(int a[],int n)
{

    for(int i=0;i<n;i++)
    { int fact =1;
        fact= fact*a[i]*2;
        printf("%d ",fact);

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
    multwo(b,s);

}


