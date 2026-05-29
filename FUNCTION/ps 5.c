#include <stdio.h>
int gl(int a,int b)
{
    if (a>b)
        return 1;
    else if (a<b)
        return 2;
        else
            return 3;

}
int main ()
{
    int x,y;
    printf("x,y=");
    scanf("%d%d",&x,&y);
    int r;
    r=gl(x,y);
    if(r==1)
        printf("X IS BIGGER");
    else if (r==2)
        printf("Y IS BIGGER");
    else
        printf("equal");
}

