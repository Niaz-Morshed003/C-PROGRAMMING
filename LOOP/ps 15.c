#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,i=1,result;
    printf("x and y=");
    scanf("%d%d",&x,&y);
    if (y==0)
        printf("x^y=1\n");
    else {
        for (i;i<=y;i++)
        {
            result=pow(x,i);
        }
    }
 printf("x^y=%d",result);}
