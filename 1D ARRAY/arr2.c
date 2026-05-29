#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("n=");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)

        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+arr1[i];
        }
        printf("sum=%d",sum);
        return 0; }
