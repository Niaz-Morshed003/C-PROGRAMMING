#include <stdio.h>
int main ()
{ char s[100];
int i=0,len=0;
 printf("s=");
 scanf("%[^\n]",s);
 for(i;s[i]!='\0';i++)
 {
    len++;



 }

 printf("len is %d",len);
 return 0;






}
