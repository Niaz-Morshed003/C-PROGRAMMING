#include<stdio.h>
int main ()
{
    int i,j,n,m;
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

   } printf("unions:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);

    }

    for(j=0;j<m;j++)
    {
        int found=0;/*dhoro j=3 print korbo,print tokhon e korbo
        jokhon etar shathe 1 no array er kono
        milnai ar found=0 hobe.
        jodi protibar found 0 na hoy then found=1 dhore niye jeta
        print kora dorkar shetaw korbe na.*/
        for(i=0;i<n;i++)
        {
            if(arr2[j]==arr1[i])
            {
                found=1;
                break;
            }
        } if(found==0) {printf("%d ",arr2[j]);}
    }


}
