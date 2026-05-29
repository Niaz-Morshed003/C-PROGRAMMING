
#include<stdio.h>
void fact(int n)
{
int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
 printf("fact=%d",fact);
}
int main ()
{
    int num,i;
    printf("num=");
    scanf("%d",&num);

   fact(num);
}

