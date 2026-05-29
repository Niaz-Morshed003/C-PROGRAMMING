#include <stdio.h>
int main ()
{
   int i,j,k,l,m,n;
   printf("n=");
   scanf("%d",&n) ;
   for(i=1;i<=n;i++)
   {
       if(i==n)
       {
           for(j=1;j<=n;j++)
           {
               printf("%d",j);
           }
           for(j=n-1;j>=1;j--)
           {
               printf("%d",j);

           } break;
       }
       for(j=1;j<=i;j++)
        printf("%d",j);
       for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=i;j>=1;j--)
        printf("%d",j);

printf("\n") ;




   }



}
