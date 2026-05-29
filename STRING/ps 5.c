#include<stdio.h>
int main()
{

   char s[10000],s1[100000];
   int i=0,j=0,len=0;
   printf("s=");
   gets(s);
   for(i;s[i]!=0;i++)
   {
       len++;
   }
   for (i = len - 1, j = 0; i >= 0; i--, j++) {
    s1[j] = s[i];
}
    s1[j]='\0';
    printf("rev=%s",s1);
}
