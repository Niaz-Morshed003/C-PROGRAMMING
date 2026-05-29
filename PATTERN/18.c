#include<stdio.h>
int main ()
{ int i,j,k,l,s,n;
printf("n=");
scanf("%d",&n);
s=(n+1)/2;
for(i=1;i<=n;i++)
{
   if(i==s)
   {
       for(j=1;j<=n;j++)
        printf("H");
        printf("\n");
   }
    printf("H");
    for(k=1;k<=n-1;k++)
        printf(" ");
    printf("H");
    printf("\n");




}






}
