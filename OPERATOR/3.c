//4
#include<stdio.h>
int main ()
{
    int a,b=0 ;

    printf("taking the value for a=");
    scanf("%d",&a);
    b =a++;
    printf("a++=%d\n",b);
    printf("++a=%d\n",++a);
    printf("a--=%d\n",a--);
    printf("--a=%d",--a);


 return 0;
}
