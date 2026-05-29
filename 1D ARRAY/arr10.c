#include<stdio.h>
int main ()
{
    int n,i,m,temp;
    printf("n=");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
        }
        printf("m=");
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++)
    {
        printf("arr2[%d]=",i);
        scanf("%d",&arr2[i]);
        }

        for(i=0;i<n&&i<m;i++)
        {
            temp=arr1[i];
            arr1[i]=arr2[i];
            arr2[i]=temp;
        }
        printf("arr1 after swap=");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr1[i]);
        }

         printf("arr2 after swap=");
        for(i=0;i<m;i++)
        {
            printf("%d ",arr2[i]);
        }
        }
