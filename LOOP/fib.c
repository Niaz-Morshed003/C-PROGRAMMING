#include <stdio.h>
int main()
{
    int a =1 ;
    int b =1 ;
    int c = a+b;
    for (int i=1;i<=5;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d %d %d ",a,b,c);
    }
}
