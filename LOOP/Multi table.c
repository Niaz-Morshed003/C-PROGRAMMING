#include <stdio.h>
void main ()
{
    int x,i=1,n,result;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        printf("%d * %d =%d\n",x,i,x*i);
    }
}
