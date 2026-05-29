#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("n=");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
        }

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr1[i]==arr1[j])
            {
                arr1[j]=arr1[j+1];
                n--;
                j--;}
            }
        }
        printf("after del eting =");
        for (i=0;i<n;i++)
        {
            printf("%d ",arr1[i]);
        }
    }
