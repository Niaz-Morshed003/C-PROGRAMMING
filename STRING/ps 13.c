#include<stdio.h>
int main()
{ char s[100],r[100];
 int i=0,k=0,j=0,flag;
 printf("s=");
 gets(s);
 for(i=0;s[i]!=0;i++)
 { flag=1;
     for(j=0;j<i;j++)
     {

         if(s[j]==s[i])
         {
             flag=0;
             break;}
         }
         if(flag==1)
         {
             r[k]=s[i];
             k++;
         }
     }


     r[k]='\0';

     printf("result=%s",r);
 }






