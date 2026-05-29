
#include<stdio.h>
void pow(int n,int m)
{
int mul=1;
    for(int i=1;i<=m;i++)
    {
        mul=mul*n;
    }
 printf("mul=%d",mul);
}
int main ()
{
    int num1,num2;
    printf("num1,num2=");
    scanf("%d%d",&num1,&num2);

   pow(num1,num2);
}


