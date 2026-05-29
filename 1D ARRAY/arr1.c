#include<stdio.h>
int main ()
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
        }
        printf("reversed array =");
        for (i=n-1;i>=0;i--)
        {
            printf("%d ",arr1[i]);
        }
}
