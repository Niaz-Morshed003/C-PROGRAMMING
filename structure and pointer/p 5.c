#include <stdio.h>
void display (int *arr,int n)
{
    int sum=0, i=0,*ptr;
    ptr= arr;
    for (i=0;i<n;i++)
    {
        printf("\narr %d =",i);
        scanf("%d",ptr+i);
    }
}

void add (int *arr,int n)
{
    int sum=0,i=0,*ptr;
    ptr= arr;
    for (i=0;i<n;i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("sum=%d",sum);
}

int main ()

{

    int n;
    printf("n=%d",n);
    scanf("%d",&n);
    int arr[n];
    display(arr,n);
    add (arr,n);



}
