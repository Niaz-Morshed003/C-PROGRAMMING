#include<stdio.h>
int main ()

{
   int n,i,count=0;
   printf("n=");
   scanf("%d",&n);
   char arr[n];


       printf("arr[%d]=",n);
       scanf(" %c",&arr[n]);


   for(i=0;i<n;i++)
   {
       if(arr[i]=='a'||arr[i]=='b'||arr[i]=='c'||arr[i]=='d'||arr[i]=='e'||arr[i]=='A'||arr[i]=='B'||arr[i]=='C'||arr[i]=='D'||arr[i]=='E')
       {
           count++;
       }
   }
   printf("count=%d",count);


}


