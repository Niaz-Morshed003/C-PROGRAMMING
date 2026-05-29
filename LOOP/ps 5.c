
#include<stdio.h>
void main ()
{
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    if (x>y)
    {
        for(x;x>y;x--)
        {
           printf("%d\n",x*x) ;
        }
    }
    else if (x<y)
    {
        for(x;x<y;x++)
        {
           printf("%d\n",x*x) ;
        }
    }

    else if (x==0)
        printf("reached");
        printf("reached");
}
