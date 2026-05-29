#include <stdio.h>
void evenodd(int a)
{
    if (a%2==0)
        printf("even");
    else if (a%2!=0)
        printf("odd");

}
int main ()
{
    int x;
    printf("x=");
    scanf("%d",&x);
    evenodd(x);
}
