
#include <stdio.h>
void main ()
{
    int x,i,result=1;
    printf("x=");
    scanf("%d",&x);
    printf("%d!\n=1",x,1);

    for(i=1;i<=x;i++)
    {
        result = result*i;
        printf("*%d",i);
    } printf("\n=%d",result);
}
