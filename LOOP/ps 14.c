#include <stdio.h>
int main ()
{ int x,y,i,result=1,result1=1,result2=1;
 printf("x=");
 scanf("%d",&x);
    printf("y=");
 scanf("%d",&y);
 for (i=x;i>=1;i--) // factorial of x
    {
        result=result*i;
    }
    printf("%d!=%d\n",x,result);
    for (i=y;i>=1;i--) // factorial of y
    {
        result1=result1*i;
    }
    printf("%d!=%d\n",y,result1);
    for (i=x-y;i>=1;i--) // factorial of x-y
    {
        result2=result2*i;
    }
    printf("%d!=%d\n",x-y,result2);
    int ult;
    ult=(result)/((result1)*(result2));
    printf("%dC%d=%d",x,y,ult);

}
