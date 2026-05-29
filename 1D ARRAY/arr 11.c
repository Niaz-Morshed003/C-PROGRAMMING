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
         printf("arr1=");
         for (i=0;i<n;i++)
         {
             if(arr1[i]%3==0)
             {
                 arr1[i]=-1;
             }
             printf("%d ",arr1[i]);
         } }

