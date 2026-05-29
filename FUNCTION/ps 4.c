#include <stdio.h>
int posneg(int a)
{
    if (a>0)
        return 1;
    else if (a<0)
        return 2;
        else
            return 3;

}
int main ()
{
    int x;
    printf("x=");
    scanf("%d",&x);
    int r;
    r=posneg(x);
    if(r==1)
        printf("positive");
    else if (r==2)
        printf("negative");
    else
        printf("equal");
}

