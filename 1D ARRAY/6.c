#include<stdio.h>
int main ()
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int arr1[n];
    for (i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
    }
    int max = arr1[0],maxin;
    for(i=0;i<n;i++)
    {
        if (max<arr1[i])
           {max= arr1[i];
           maxin=i;}
    }
    printf("\nmax=%d",max);
    printf("\nindex=%d",maxin);

    int min = arr1[0],minin;
    for(i=0;i<n;i++)
    {
        if (min>arr1[i]) {
            min= arr1[i];
            minin=i;}
    }
    printf("\nmin=%d",min);
    printf("\nindex=%d",minin);

}





