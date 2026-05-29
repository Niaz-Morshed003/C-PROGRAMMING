#include<stdio.h>
void swap(int a,int b )
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("after swap =%d %d",a,b);
}

int main ()
{
    int x,y;
    printf("x,y=");
    scanf("%d%d",&x,&y);
    swap(x,y);






}


