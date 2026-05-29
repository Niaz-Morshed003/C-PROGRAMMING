#include<stdio.h>
int main ()
{
    int i=2,j=1,n;
    printf("n=");
    scanf("%d",&n);
    for (j;j<=n;j++)
    {
        int number;
        printf("\nnumber=");
    scanf("%d",&number);
    if (number<=1) {
        printf("\nnot prime");
        continue;
    }

    for (i=2;i<number;i++)
    {
       if (number%i==0) {
        printf("\nnot prime");
       break;
    }
    }
    if (i==number)
    printf("\nprime");

    }

}
