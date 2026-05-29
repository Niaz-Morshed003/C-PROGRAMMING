#include<stdio.h>
int main ()
{
   int n,m,i,j,found=0;
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
   int arr2[m],used[m];
   for(i=0;i<m;i++)
   {
       printf("arr2[%d]=",i);
       scanf("%d",&arr2[i]);
       used[i]=0;
   } printf("intersections:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j]&&used[j]==0)
            {
                printf("%d ",arr1[i]);
                found=1;//empty set ki na check korar jonno
                used[j]=1;//ei element jeno ar bebohar na hoy tai!
                break;//a set er ekta element er jonno b set er arekta element pele jeno ar print na kore tai btreak deya.

            }
        }

    }
    if(found==0)
    printf("\nempty set");




}
