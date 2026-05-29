#include<stdio.h>
void prime1(int n)
{ int i=2;
    if (n<=1)
    { int i=2;
        printf("not prime");
        return;
    }

    for( i=2;i<n;i++)
    {
        if (n%i==0)
        {

            return;
        }
    }
    printf("%d ",i);


} void prime2(int N)
{
    for (int i=2;i<N;i++)
    {
          (prime1(i));


    }
}

int main ()

{


    int num;
    printf("num=");
    scanf("%d",&num);
    prime2(num);



}
